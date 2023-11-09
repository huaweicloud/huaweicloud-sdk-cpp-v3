

#include "huaweicloud/tics/v1/model/LeagueUpdateVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




LeagueUpdateVo::LeagueUpdateVo()
{
    description_ = "";
    descriptionIsSet_ = false;
    dpEnabled_ = false;
    dpEnabledIsSet_ = false;
    privacyProtectionType_ = "";
    privacyProtectionTypeIsSet_ = false;
}

LeagueUpdateVo::~LeagueUpdateVo() = default;

void LeagueUpdateVo::validate()
{
}

web::json::value LeagueUpdateVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(dpEnabledIsSet_) {
        val[utility::conversions::to_string_t("dp_enabled")] = ModelBase::toJson(dpEnabled_);
    }
    if(privacyProtectionTypeIsSet_) {
        val[utility::conversions::to_string_t("privacy_protection_type")] = ModelBase::toJson(privacyProtectionType_);
    }

    return val;
}
bool LeagueUpdateVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dp_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dp_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDpEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("privacy_protection_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privacy_protection_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivacyProtectionType(refVal);
        }
    }
    return ok;
}


std::string LeagueUpdateVo::getDescription() const
{
    return description_;
}

void LeagueUpdateVo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool LeagueUpdateVo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void LeagueUpdateVo::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool LeagueUpdateVo::isDpEnabled() const
{
    return dpEnabled_;
}

void LeagueUpdateVo::setDpEnabled(bool value)
{
    dpEnabled_ = value;
    dpEnabledIsSet_ = true;
}

bool LeagueUpdateVo::dpEnabledIsSet() const
{
    return dpEnabledIsSet_;
}

void LeagueUpdateVo::unsetdpEnabled()
{
    dpEnabledIsSet_ = false;
}

std::string LeagueUpdateVo::getPrivacyProtectionType() const
{
    return privacyProtectionType_;
}

void LeagueUpdateVo::setPrivacyProtectionType(const std::string& value)
{
    privacyProtectionType_ = value;
    privacyProtectionTypeIsSet_ = true;
}

bool LeagueUpdateVo::privacyProtectionTypeIsSet() const
{
    return privacyProtectionTypeIsSet_;
}

void LeagueUpdateVo::unsetprivacyProtectionType()
{
    privacyProtectionTypeIsSet_ = false;
}

}
}
}
}
}


