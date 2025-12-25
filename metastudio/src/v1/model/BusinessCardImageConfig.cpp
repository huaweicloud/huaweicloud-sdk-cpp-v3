

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
    idCardImage1_ = "";
    idCardImage1IsSet_ = false;
    idCardImage2_ = "";
    idCardImage2IsSet_ = false;
    authorizeUseHumanImage_ = false;
    authorizeUseHumanImageIsSet_ = false;
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
    if(idCardImage1IsSet_) {
        val[utility::conversions::to_string_t("id_card_image1")] = ModelBase::toJson(idCardImage1_);
    }
    if(idCardImage2IsSet_) {
        val[utility::conversions::to_string_t("id_card_image2")] = ModelBase::toJson(idCardImage2_);
    }
    if(authorizeUseHumanImageIsSet_) {
        val[utility::conversions::to_string_t("authorize_use_human_image")] = ModelBase::toJson(authorizeUseHumanImage_);
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
    if(val.has_field(utility::conversions::to_string_t("id_card_image1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_card_image1"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdCardImage1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id_card_image2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_card_image2"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdCardImage2(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authorize_use_human_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorize_use_human_image"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorizeUseHumanImage(refVal);
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

std::string BusinessCardImageConfig::getIdCardImage1() const
{
    return idCardImage1_;
}

void BusinessCardImageConfig::setIdCardImage1(const std::string& value)
{
    idCardImage1_ = value;
    idCardImage1IsSet_ = true;
}

bool BusinessCardImageConfig::idCardImage1IsSet() const
{
    return idCardImage1IsSet_;
}

void BusinessCardImageConfig::unsetidCardImage1()
{
    idCardImage1IsSet_ = false;
}

std::string BusinessCardImageConfig::getIdCardImage2() const
{
    return idCardImage2_;
}

void BusinessCardImageConfig::setIdCardImage2(const std::string& value)
{
    idCardImage2_ = value;
    idCardImage2IsSet_ = true;
}

bool BusinessCardImageConfig::idCardImage2IsSet() const
{
    return idCardImage2IsSet_;
}

void BusinessCardImageConfig::unsetidCardImage2()
{
    idCardImage2IsSet_ = false;
}

bool BusinessCardImageConfig::isAuthorizeUseHumanImage() const
{
    return authorizeUseHumanImage_;
}

void BusinessCardImageConfig::setAuthorizeUseHumanImage(bool value)
{
    authorizeUseHumanImage_ = value;
    authorizeUseHumanImageIsSet_ = true;
}

bool BusinessCardImageConfig::authorizeUseHumanImageIsSet() const
{
    return authorizeUseHumanImageIsSet_;
}

void BusinessCardImageConfig::unsetauthorizeUseHumanImage()
{
    authorizeUseHumanImageIsSet_ = false;
}

}
}
}
}
}


