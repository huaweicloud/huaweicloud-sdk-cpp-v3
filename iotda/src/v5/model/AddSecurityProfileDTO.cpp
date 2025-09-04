

#include "huaweicloud/iotda/v5/model/AddSecurityProfileDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddSecurityProfileDTO::AddSecurityProfileDTO()
{
    securityType_ = "";
    securityTypeIsSet_ = false;
    alarmLevel_ = "";
    alarmLevelIsSet_ = false;
    securityLevel_ = "";
    securityLevelIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
    profileIsSet_ = false;
    profileTargetsIsSet_ = false;
}

AddSecurityProfileDTO::~AddSecurityProfileDTO() = default;

void AddSecurityProfileDTO::validate()
{
}

web::json::value AddSecurityProfileDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityTypeIsSet_) {
        val[utility::conversions::to_string_t("security_type")] = ModelBase::toJson(securityType_);
    }
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
bool AddSecurityProfileDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("security_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityType(refVal);
        }
    }
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


std::string AddSecurityProfileDTO::getSecurityType() const
{
    return securityType_;
}

void AddSecurityProfileDTO::setSecurityType(const std::string& value)
{
    securityType_ = value;
    securityTypeIsSet_ = true;
}

bool AddSecurityProfileDTO::securityTypeIsSet() const
{
    return securityTypeIsSet_;
}

void AddSecurityProfileDTO::unsetsecurityType()
{
    securityTypeIsSet_ = false;
}

std::string AddSecurityProfileDTO::getAlarmLevel() const
{
    return alarmLevel_;
}

void AddSecurityProfileDTO::setAlarmLevel(const std::string& value)
{
    alarmLevel_ = value;
    alarmLevelIsSet_ = true;
}

bool AddSecurityProfileDTO::alarmLevelIsSet() const
{
    return alarmLevelIsSet_;
}

void AddSecurityProfileDTO::unsetalarmLevel()
{
    alarmLevelIsSet_ = false;
}

std::string AddSecurityProfileDTO::getSecurityLevel() const
{
    return securityLevel_;
}

void AddSecurityProfileDTO::setSecurityLevel(const std::string& value)
{
    securityLevel_ = value;
    securityLevelIsSet_ = true;
}

bool AddSecurityProfileDTO::securityLevelIsSet() const
{
    return securityLevelIsSet_;
}

void AddSecurityProfileDTO::unsetsecurityLevel()
{
    securityLevelIsSet_ = false;
}

bool AddSecurityProfileDTO::isEnable() const
{
    return enable_;
}

void AddSecurityProfileDTO::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool AddSecurityProfileDTO::enableIsSet() const
{
    return enableIsSet_;
}

void AddSecurityProfileDTO::unsetenable()
{
    enableIsSet_ = false;
}

std::vector<SecurityProfile>& AddSecurityProfileDTO::getProfile()
{
    return profile_;
}

void AddSecurityProfileDTO::setProfile(const std::vector<SecurityProfile>& value)
{
    profile_ = value;
    profileIsSet_ = true;
}

bool AddSecurityProfileDTO::profileIsSet() const
{
    return profileIsSet_;
}

void AddSecurityProfileDTO::unsetprofile()
{
    profileIsSet_ = false;
}

SecurityTarget AddSecurityProfileDTO::getProfileTargets() const
{
    return profileTargets_;
}

void AddSecurityProfileDTO::setProfileTargets(const SecurityTarget& value)
{
    profileTargets_ = value;
    profileTargetsIsSet_ = true;
}

bool AddSecurityProfileDTO::profileTargetsIsSet() const
{
    return profileTargetsIsSet_;
}

void AddSecurityProfileDTO::unsetprofileTargets()
{
    profileTargetsIsSet_ = false;
}

}
}
}
}
}


