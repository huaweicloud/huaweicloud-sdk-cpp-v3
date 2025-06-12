

#include "huaweicloud/metastudio/v1/model/BusinessCardImageUrl.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BusinessCardImageUrl::BusinessCardImageUrl()
{
    humanImageUrl_ = "";
    humanImageUrlIsSet_ = false;
    logoImage_ = "";
    logoImageIsSet_ = false;
}

BusinessCardImageUrl::~BusinessCardImageUrl() = default;

void BusinessCardImageUrl::validate()
{
}

web::json::value BusinessCardImageUrl::toJson() const
{
    web::json::value val = web::json::value::object();

    if(humanImageUrlIsSet_) {
        val[utility::conversions::to_string_t("human_image_url")] = ModelBase::toJson(humanImageUrl_);
    }
    if(logoImageIsSet_) {
        val[utility::conversions::to_string_t("logo_image")] = ModelBase::toJson(logoImage_);
    }

    return val;
}
bool BusinessCardImageUrl::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("human_image_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("human_image_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHumanImageUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logo_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logo_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogoImage(refVal);
        }
    }
    return ok;
}


std::string BusinessCardImageUrl::getHumanImageUrl() const
{
    return humanImageUrl_;
}

void BusinessCardImageUrl::setHumanImageUrl(const std::string& value)
{
    humanImageUrl_ = value;
    humanImageUrlIsSet_ = true;
}

bool BusinessCardImageUrl::humanImageUrlIsSet() const
{
    return humanImageUrlIsSet_;
}

void BusinessCardImageUrl::unsethumanImageUrl()
{
    humanImageUrlIsSet_ = false;
}

std::string BusinessCardImageUrl::getLogoImage() const
{
    return logoImage_;
}

void BusinessCardImageUrl::setLogoImage(const std::string& value)
{
    logoImage_ = value;
    logoImageIsSet_ = true;
}

bool BusinessCardImageUrl::logoImageIsSet() const
{
    return logoImageIsSet_;
}

void BusinessCardImageUrl::unsetlogoImage()
{
    logoImageIsSet_ = false;
}

}
}
}
}
}


