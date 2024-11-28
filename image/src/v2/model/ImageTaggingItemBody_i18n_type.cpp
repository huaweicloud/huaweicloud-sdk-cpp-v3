

#include "huaweicloud/image/v2/model/ImageTaggingItemBody_i18n_type.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




ImageTaggingItemBody_i18n_type::ImageTaggingItemBody_i18n_type()
{
    zh_ = "";
    zhIsSet_ = false;
    en_ = "";
    enIsSet_ = false;
}

ImageTaggingItemBody_i18n_type::~ImageTaggingItemBody_i18n_type() = default;

void ImageTaggingItemBody_i18n_type::validate()
{
}

web::json::value ImageTaggingItemBody_i18n_type::toJson() const
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
bool ImageTaggingItemBody_i18n_type::fromJson(const web::json::value& val)
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


std::string ImageTaggingItemBody_i18n_type::getZh() const
{
    return zh_;
}

void ImageTaggingItemBody_i18n_type::setZh(const std::string& value)
{
    zh_ = value;
    zhIsSet_ = true;
}

bool ImageTaggingItemBody_i18n_type::zhIsSet() const
{
    return zhIsSet_;
}

void ImageTaggingItemBody_i18n_type::unsetzh()
{
    zhIsSet_ = false;
}

std::string ImageTaggingItemBody_i18n_type::getEn() const
{
    return en_;
}

void ImageTaggingItemBody_i18n_type::setEn(const std::string& value)
{
    en_ = value;
    enIsSet_ = true;
}

bool ImageTaggingItemBody_i18n_type::enIsSet() const
{
    return enIsSet_;
}

void ImageTaggingItemBody_i18n_type::unseten()
{
    enIsSet_ = false;
}

}
}
}
}
}


