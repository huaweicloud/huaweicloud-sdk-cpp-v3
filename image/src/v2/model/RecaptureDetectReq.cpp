

#include "huaweicloud/image/v2/model/RecaptureDetectReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




RecaptureDetectReq::RecaptureDetectReq()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    threshold_ = 0.0f;
    thresholdIsSet_ = false;
}

RecaptureDetectReq::~RecaptureDetectReq() = default;

void RecaptureDetectReq::validate()
{
}

web::json::value RecaptureDetectReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(thresholdIsSet_) {
        val[utility::conversions::to_string_t("threshold")] = ModelBase::toJson(threshold_);
    }

    return val;
}
bool RecaptureDetectReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("threshold"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThreshold(refVal);
        }
    }
    return ok;
}


std::string RecaptureDetectReq::getImage() const
{
    return image_;
}

void RecaptureDetectReq::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool RecaptureDetectReq::imageIsSet() const
{
    return imageIsSet_;
}

void RecaptureDetectReq::unsetimage()
{
    imageIsSet_ = false;
}

std::string RecaptureDetectReq::getUrl() const
{
    return url_;
}

void RecaptureDetectReq::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool RecaptureDetectReq::urlIsSet() const
{
    return urlIsSet_;
}

void RecaptureDetectReq::unseturl()
{
    urlIsSet_ = false;
}

float RecaptureDetectReq::getThreshold() const
{
    return threshold_;
}

void RecaptureDetectReq::setThreshold(float value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool RecaptureDetectReq::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void RecaptureDetectReq::unsetthreshold()
{
    thresholdIsSet_ = false;
}

}
}
}
}
}


