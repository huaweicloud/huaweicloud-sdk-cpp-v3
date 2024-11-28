

#include "huaweicloud/image/v2/model/ImageMediaTaggingReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




ImageMediaTaggingReq::ImageMediaTaggingReq()
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

ImageMediaTaggingReq::~ImageMediaTaggingReq() = default;

void ImageMediaTaggingReq::validate()
{
}

web::json::value ImageMediaTaggingReq::toJson() const
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
bool ImageMediaTaggingReq::fromJson(const web::json::value& val)
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


std::string ImageMediaTaggingReq::getImage() const
{
    return image_;
}

void ImageMediaTaggingReq::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool ImageMediaTaggingReq::imageIsSet() const
{
    return imageIsSet_;
}

void ImageMediaTaggingReq::unsetimage()
{
    imageIsSet_ = false;
}

std::string ImageMediaTaggingReq::getUrl() const
{
    return url_;
}

void ImageMediaTaggingReq::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ImageMediaTaggingReq::urlIsSet() const
{
    return urlIsSet_;
}

void ImageMediaTaggingReq::unseturl()
{
    urlIsSet_ = false;
}

std::string ImageMediaTaggingReq::getLanguage() const
{
    return language_;
}

void ImageMediaTaggingReq::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ImageMediaTaggingReq::languageIsSet() const
{
    return languageIsSet_;
}

void ImageMediaTaggingReq::unsetlanguage()
{
    languageIsSet_ = false;
}

float ImageMediaTaggingReq::getThreshold() const
{
    return threshold_;
}

void ImageMediaTaggingReq::setThreshold(float value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool ImageMediaTaggingReq::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void ImageMediaTaggingReq::unsetthreshold()
{
    thresholdIsSet_ = false;
}

int32_t ImageMediaTaggingReq::getLimit() const
{
    return limit_;
}

void ImageMediaTaggingReq::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ImageMediaTaggingReq::limitIsSet() const
{
    return limitIsSet_;
}

void ImageMediaTaggingReq::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


