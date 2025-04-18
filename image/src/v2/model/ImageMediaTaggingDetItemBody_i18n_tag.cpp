

#include "huaweicloud/image/v2/model/ImageMediaTaggingDetItemBody_i18n_tag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




ImageMediaTaggingDetItemBody_i18n_tag::ImageMediaTaggingDetItemBody_i18n_tag()
{
    zh_ = "";
    zhIsSet_ = false;
    en_ = "";
    enIsSet_ = false;
}

ImageMediaTaggingDetItemBody_i18n_tag::~ImageMediaTaggingDetItemBody_i18n_tag() = default;

void ImageMediaTaggingDetItemBody_i18n_tag::validate()
{
}

web::json::value ImageMediaTaggingDetItemBody_i18n_tag::toJson() const
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
bool ImageMediaTaggingDetItemBody_i18n_tag::fromJson(const web::json::value& val)
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


std::string ImageMediaTaggingDetItemBody_i18n_tag::getZh() const
{
    return zh_;
}

void ImageMediaTaggingDetItemBody_i18n_tag::setZh(const std::string& value)
{
    zh_ = value;
    zhIsSet_ = true;
}

bool ImageMediaTaggingDetItemBody_i18n_tag::zhIsSet() const
{
    return zhIsSet_;
}

void ImageMediaTaggingDetItemBody_i18n_tag::unsetzh()
{
    zhIsSet_ = false;
}

std::string ImageMediaTaggingDetItemBody_i18n_tag::getEn() const
{
    return en_;
}

void ImageMediaTaggingDetItemBody_i18n_tag::setEn(const std::string& value)
{
    en_ = value;
    enIsSet_ = true;
}

bool ImageMediaTaggingDetItemBody_i18n_tag::enIsSet() const
{
    return enIsSet_;
}

void ImageMediaTaggingDetItemBody_i18n_tag::unseten()
{
    enIsSet_ = false;
}

}
}
}
}
}


