

#include "huaweicloud/ocr/v1/model/PcrTestRecordRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




PcrTestRecordRequestBody::PcrTestRecordRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    detectDirection_ = false;
    detectDirectionIsSet_ = false;
}

PcrTestRecordRequestBody::~PcrTestRecordRequestBody() = default;

void PcrTestRecordRequestBody::validate()
{
}

web::json::value PcrTestRecordRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(detectDirectionIsSet_) {
        val[utility::conversions::to_string_t("detect_direction")] = ModelBase::toJson(detectDirection_);
    }

    return val;
}

bool PcrTestRecordRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("detect_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_direction"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectDirection(refVal);
        }
    }
    return ok;
}


std::string PcrTestRecordRequestBody::getImage() const
{
    return image_;
}

void PcrTestRecordRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool PcrTestRecordRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void PcrTestRecordRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string PcrTestRecordRequestBody::getUrl() const
{
    return url_;
}

void PcrTestRecordRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool PcrTestRecordRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void PcrTestRecordRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool PcrTestRecordRequestBody::isDetectDirection() const
{
    return detectDirection_;
}

void PcrTestRecordRequestBody::setDetectDirection(bool value)
{
    detectDirection_ = value;
    detectDirectionIsSet_ = true;
}

bool PcrTestRecordRequestBody::detectDirectionIsSet() const
{
    return detectDirectionIsSet_;
}

void PcrTestRecordRequestBody::unsetdetectDirection()
{
    detectDirectionIsSet_ = false;
}

}
}
}
}
}


