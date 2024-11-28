

#include "huaweicloud/image/v2/model/ImageTaggingItemBody_i18n_tag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




ImageTaggingItemBody_i18n_tag::ImageTaggingItemBody_i18n_tag()
{
    zh_ = "";
    zhIsSet_ = false;
    en_ = "";
    enIsSet_ = false;
}

ImageTaggingItemBody_i18n_tag::~ImageTaggingItemBody_i18n_tag() = default;

void ImageTaggingItemBody_i18n_tag::validate()
{
}

web::json::value ImageTaggingItemBody_i18n_tag::toJson() const
{
    web::json::value val = web::json::value::object();

    if(zhIsSet_) {
        val[utility::conversions::to_string_t("zh")] = ModelBase::toJson(zh_);
    }
    if(enIsSet_) {
        val[utility::conversions::to_string_t("en")] = ModelBase::toJson(en_);
    }

    return val;
}
bool ImageTaggingItemBody_i18n_tag::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("zh"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("zh"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setZh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEn(refVal);
        }
    }
    return ok;
}


std::string ImageTaggingItemBody_i18n_tag::getZh() const
{
    return zh_;
}

void ImageTaggingItemBody_i18n_tag::setZh(const std::string& value)
{
    zh_ = value;
    zhIsSet_ = true;
}

bool ImageTaggingItemBody_i18n_tag::zhIsSet() const
{
    return zhIsSet_;
}

void ImageTaggingItemBody_i18n_tag::unsetzh()
{
    zhIsSet_ = false;
}

std::string ImageTaggingItemBody_i18n_tag::getEn() const
{
    return en_;
}

void ImageTaggingItemBody_i18n_tag::setEn(const std::string& value)
{
    en_ = value;
    enIsSet_ = true;
}

bool ImageTaggingItemBody_i18n_tag::enIsSet() const
{
    return enIsSet_;
}

void ImageTaggingItemBody_i18n_tag::unseten()
{
    enIsSet_ = false;
}

}
}
}
}
}


