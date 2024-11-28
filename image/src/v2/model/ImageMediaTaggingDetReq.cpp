

#include "huaweicloud/image/v2/model/ImageMediaTaggingDetReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




ImageMediaTaggingDetReq::ImageMediaTaggingDetReq()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    threshold_ = 0.0f;
    thresholdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ImageMediaTaggingDetReq::~ImageMediaTaggingDetReq() = default;

void ImageMediaTaggingDetReq::validate()
{
}

web::json::value ImageMediaTaggingDetReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(thresholdIsSet_) {
        val[utility::conversions::to_string_t("threshold")] = ModelBase::toJson(threshold_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ImageMediaTaggingDetReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ImageMediaTaggingDetReq::getImage() const
{
    return image_;
}

void ImageMediaTaggingDetReq::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool ImageMediaTaggingDetReq::imageIsSet() const
{
    return imageIsSet_;
}

void ImageMediaTaggingDetReq::unsetimage()
{
    imageIsSet_ = false;
}

std::string ImageMediaTaggingDetReq::getUrl() const
{
    return url_;
}

void ImageMediaTaggingDetReq::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ImageMediaTaggingDetReq::urlIsSet() const
{
    return urlIsSet_;
}

void ImageMediaTaggingDetReq::unseturl()
{
    urlIsSet_ = false;
}

std::string ImageMediaTaggingDetReq::getLanguage() const
{
    return language_;
}

void ImageMediaTaggingDetReq::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ImageMediaTaggingDetReq::languageIsSet() const
{
    return languageIsSet_;
}

void ImageMediaTaggingDetReq::unsetlanguage()
{
    languageIsSet_ = false;
}

float ImageMediaTaggingDetReq::getThreshold() const
{
    return threshold_;
}

void ImageMediaTaggingDetReq::setThreshold(float value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool ImageMediaTaggingDetReq::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void ImageMediaTaggingDetReq::unsetthreshold()
{
    thresholdIsSet_ = false;
}

int32_t ImageMediaTaggingDetReq::getLimit() const
{
    return limit_;
}

void ImageMediaTaggingDetReq::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ImageMediaTaggingDetReq::limitIsSet() const
{
    return limitIsSet_;
}

void ImageMediaTaggingDetReq::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


