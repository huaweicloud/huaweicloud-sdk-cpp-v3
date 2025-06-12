

#include "huaweicloud/metastudio/v1/model/BusinessCardImageConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BusinessCardImageConfig::BusinessCardImageConfig()
{
    humanImage_ = "";
    humanImageIsSet_ = false;
    logoImage_ = "";
    logoImageIsSet_ = false;
}

BusinessCardImageConfig::~BusinessCardImageConfig() = default;

void BusinessCardImageConfig::validate()
{
}

web::json::value BusinessCardImageConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(humanImageIsSet_) {
        val[utility::conversions::to_string_t("human_image")] = ModelBase::toJson(humanImage_);
    }
    if(logoImageIsSet_) {
        val[utility::conversions::to_string_t("logo_image")] = ModelBase::toJson(logoImage_);
    }

    return val;
}
bool BusinessCardImageConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("human_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("human_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHumanImage(refVal);
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


std::string BusinessCardImageConfig::getHumanImage() const
{
    return humanImage_;
}

void BusinessCardImageConfig::setHumanImage(const std::string& value)
{
    humanImage_ = value;
    humanImageIsSet_ = true;
}

bool BusinessCardImageConfig::humanImageIsSet() const
{
    return humanImageIsSet_;
}

void BusinessCardImageConfig::unsethumanImage()
{
    humanImageIsSet_ = false;
}

std::string BusinessCardImageConfig::getLogoImage() const
{
    return logoImage_;
}

void BusinessCardImageConfig::setLogoImage(const std::string& value)
{
    logoImage_ = value;
    logoImageIsSet_ = true;
}

bool BusinessCardImageConfig::logoImageIsSet() const
{
    return logoImageIsSet_;
}

void BusinessCardImageConfig::unsetlogoImage()
{
    logoImageIsSet_ = false;
}

}
}
}
}
}


