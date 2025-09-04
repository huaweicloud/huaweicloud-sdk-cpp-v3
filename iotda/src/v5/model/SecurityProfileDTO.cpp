

#include "huaweicloud/iotda/v5/model/SecurityProfileDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




SecurityProfileDTO::SecurityProfileDTO()
{
    profileId_ = "";
    profileIdIsSet_ = false;
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

SecurityProfileDTO::~SecurityProfileDTO() = default;

void SecurityProfileDTO::validate()
{
}

web::json::value SecurityProfileDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(profileIdIsSet_) {
        val[utility::conversions::to_string_t("profile_id")] = ModelBase::toJson(profileId_);
    }
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
bool SecurityProfileDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("profile_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfileId(refVal);
        }
    }
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


std::string SecurityProfileDTO::getProfileId() const
{
    return profileId_;
}

void SecurityProfileDTO::setProfileId(const std::string& value)
{
    profileId_ = value;
    profileIdIsSet_ = true;
}

bool SecurityProfileDTO::profileIdIsSet() const
{
    return profileIdIsSet_;
}

void SecurityProfileDTO::unsetprofileId()
{
    profileIdIsSet_ = false;
}

std::string SecurityProfileDTO::getSecurityType() const
{
    return securityType_;
}

void SecurityProfileDTO::setSecurityType(const std::string& value)
{
    securityType_ = value;
    securityTypeIsSet_ = true;
}

bool SecurityProfileDTO::securityTypeIsSet() const
{
    return securityTypeIsSet_;
}

void SecurityProfileDTO::unsetsecurityType()
{
    securityTypeIsSet_ = false;
}

std::string SecurityProfileDTO::getAlarmLevel() const
{
    return alarmLevel_;
}

void SecurityProfileDTO::setAlarmLevel(const std::string& value)
{
    alarmLevel_ = value;
    alarmLevelIsSet_ = true;
}

bool SecurityProfileDTO::alarmLevelIsSet() const
{
    return alarmLevelIsSet_;
}

void SecurityProfileDTO::unsetalarmLevel()
{
    alarmLevelIsSet_ = false;
}

std::string SecurityProfileDTO::getSecurityLevel() const
{
    return securityLevel_;
}

void SecurityProfileDTO::setSecurityLevel(const std::string& value)
{
    securityLevel_ = value;
    securityLevelIsSet_ = true;
}

bool SecurityProfileDTO::securityLevelIsSet() const
{
    return securityLevelIsSet_;
}

void SecurityProfileDTO::unsetsecurityLevel()
{
    securityLevelIsSet_ = false;
}

bool SecurityProfileDTO::isEnable() const
{
    return enable_;
}

void SecurityProfileDTO::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool SecurityProfileDTO::enableIsSet() const
{
    return enableIsSet_;
}

void SecurityProfileDTO::unsetenable()
{
    enableIsSet_ = false;
}

std::vector<SecurityProfile>& SecurityProfileDTO::getProfile()
{
    return profile_;
}

void SecurityProfileDTO::setProfile(const std::vector<SecurityProfile>& value)
{
    profile_ = value;
    profileIsSet_ = true;
}

bool SecurityProfileDTO::profileIsSet() const
{
    return profileIsSet_;
}

void SecurityProfileDTO::unsetprofile()
{
    profileIsSet_ = false;
}

SecurityTarget SecurityProfileDTO::getProfileTargets() const
{
    return profileTargets_;
}

void SecurityProfileDTO::setProfileTargets(const SecurityTarget& value)
{
    profileTargets_ = value;
    profileTargetsIsSet_ = true;
}

bool SecurityProfileDTO::profileTargetsIsSet() const
{
    return profileTargetsIsSet_;
}

void SecurityProfileDTO::unsetprofileTargets()
{
    profileTargetsIsSet_ = false;
}

}
}
}
}
}


