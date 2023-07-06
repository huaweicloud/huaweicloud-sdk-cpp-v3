

#include "huaweicloud/ocr/v1/model/TrainTicketRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




TrainTicketRequestBody::TrainTicketRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    returnTextLocation_ = false;
    returnTextLocationIsSet_ = false;
}

TrainTicketRequestBody::~TrainTicketRequestBody() = default;

void TrainTicketRequestBody::validate()
{
}

web::json::value TrainTicketRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(returnTextLocationIsSet_) {
        val[utility::conversions::to_string_t("return_text_location")] = ModelBase::toJson(returnTextLocation_);
    }

    return val;
}

bool TrainTicketRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_text_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_text_location"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnTextLocation(refVal);
        }
    }
    return ok;
}

std::string TrainTicketRequestBody::getImage() const
{
    return image_;
}

void TrainTicketRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool TrainTicketRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void TrainTicketRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string TrainTicketRequestBody::getUrl() const
{
    return url_;
}

void TrainTicketRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool TrainTicketRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void TrainTicketRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool TrainTicketRequestBody::isReturnTextLocation() const
{
    return returnTextLocation_;
}

void TrainTicketRequestBody::setReturnTextLocation(bool value)
{
    returnTextLocation_ = value;
    returnTextLocationIsSet_ = true;
}

bool TrainTicketRequestBody::returnTextLocationIsSet() const
{
    return returnTextLocationIsSet_;
}

void TrainTicketRequestBody::unsetreturnTextLocation()
{
    returnTextLocationIsSet_ = false;
}

}
}
}
}
}


