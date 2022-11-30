

#include "huaweicloud/ocr/v1/model/FlightItineraryRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




FlightItineraryRequestBody::FlightItineraryRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

FlightItineraryRequestBody::~FlightItineraryRequestBody() = default;

void FlightItineraryRequestBody::validate()
{
}

web::json::value FlightItineraryRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}

bool FlightItineraryRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string FlightItineraryRequestBody::getImage() const
{
    return image_;
}

void FlightItineraryRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool FlightItineraryRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void FlightItineraryRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string FlightItineraryRequestBody::getUrl() const
{
    return url_;
}

void FlightItineraryRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool FlightItineraryRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void FlightItineraryRequestBody::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


