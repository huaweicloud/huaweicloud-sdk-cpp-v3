

#include "huaweicloud/iotda/v5/model/UpdateSecurityProfileDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateSecurityProfileDTO::UpdateSecurityProfileDTO()
{
    alarmLevel_ = "";
    alarmLevelIsSet_ = false;
    securityLevel_ = "";
    securityLevelIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
    profileIsSet_ = false;
    profileTargetsIsSet_ = false;
}

UpdateSecurityProfileDTO::~UpdateSecurityProfileDTO() = default;

void UpdateSecurityProfileDTO::validate()
{
}

web::json::value UpdateSecurityProfileDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alarmLevelIsSet_) {
        val[utility::conversions::to_string_t("alarm_level")] = ModelBase::toJson(alarmLevel_);
    }
    if(securityLevelIsSet_) {
        val[utility::conversions::to_string_t("security_level")] = ModelBase::toJson(securityLevel_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(profileIsSet_) {
        val[utility::conversions::to_string_t("profile")] = ModelBase::toJson(profile_);
    }
    if(profileTargetsIsSet_) {
        val[utility::conversions::to_string_t("profile_targets")] = ModelBase::toJson(profileTargets_);
    }

    return val;
}
bool UpdateSecurityProfileDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alarm_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("profile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile"));
        if(!fieldValue.is_null())
        {
            std::vector<SecurityProfile> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("profile_targets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile_targets"));
        if(!fieldValue.is_null())
        {
            SecurityTarget refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfileTargets(refVal);
        }
    }
    return ok;
}


std::string UpdateSecurityProfileDTO::getAlarmLevel() const
{
    return alarmLevel_;
}

void UpdateSecurityProfileDTO::setAlarmLevel(const std::string& value)
{
    alarmLevel_ = value;
    alarmLevelIsSet_ = true;
}

bool UpdateSecurityProfileDTO::alarmLevelIsSet() const
{
    return alarmLevelIsSet_;
}

void UpdateSecurityProfileDTO::unsetalarmLevel()
{
    alarmLevelIsSet_ = false;
}

std::string UpdateSecurityProfileDTO::getSecurityLevel() const
{
    return securityLevel_;
}

void UpdateSecurityProfileDTO::setSecurityLevel(const std::string& value)
{
    securityLevel_ = value;
    securityLevelIsSet_ = true;
}

bool UpdateSecurityProfileDTO::securityLevelIsSet() const
{
    return securityLevelIsSet_;
}

void UpdateSecurityProfileDTO::unsetsecurityLevel()
{
    securityLevelIsSet_ = false;
}

bool UpdateSecurityProfileDTO::isEnable() const
{
    return enable_;
}

void UpdateSecurityProfileDTO::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool UpdateSecurityProfileDTO::enableIsSet() const
{
    return enableIsSet_;
}

void UpdateSecurityProfileDTO::unsetenable()
{
    enableIsSet_ = false;
}

std::vector<SecurityProfile>& UpdateSecurityProfileDTO::getProfile()
{
    return profile_;
}

void UpdateSecurityProfileDTO::setProfile(const std::vector<SecurityProfile>& value)
{
    profile_ = value;
    profileIsSet_ = true;
}

bool UpdateSecurityProfileDTO::profileIsSet() const
{
    return profileIsSet_;
}

void UpdateSecurityProfileDTO::unsetprofile()
{
    profileIsSet_ = false;
}

SecurityTarget UpdateSecurityProfileDTO::getProfileTargets() const
{
    return profileTargets_;
}

void UpdateSecurityProfileDTO::setProfileTargets(const SecurityTarget& value)
{
    profileTargets_ = value;
    profileTargetsIsSet_ = true;
}

bool UpdateSecurityProfileDTO::profileTargetsIsSet() const
{
    return profileTargetsIsSet_;
}

void UpdateSecurityProfileDTO::unsetprofileTargets()
{
    profileTargetsIsSet_ = false;
}

}
}
}
}
}


