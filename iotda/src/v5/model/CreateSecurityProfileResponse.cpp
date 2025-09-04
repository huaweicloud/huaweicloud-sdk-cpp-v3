

#include "huaweicloud/iotda/v5/model/CreateSecurityProfileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateSecurityProfileResponse::CreateSecurityProfileResponse()
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

CreateSecurityProfileResponse::~CreateSecurityProfileResponse() = default;

void CreateSecurityProfileResponse::validate()
{
}

web::json::value CreateSecurityProfileResponse::toJson() const
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
bool CreateSecurityProfileResponse::fromJson(const web::json::value& val)
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


std::string CreateSecurityProfileResponse::getProfileId() const
{
    return profileId_;
}

void CreateSecurityProfileResponse::setProfileId(const std::string& value)
{
    profileId_ = value;
    profileIdIsSet_ = true;
}

bool CreateSecurityProfileResponse::profileIdIsSet() const
{
    return profileIdIsSet_;
}

void CreateSecurityProfileResponse::unsetprofileId()
{
    profileIdIsSet_ = false;
}

std::string CreateSecurityProfileResponse::getSecurityType() const
{
    return securityType_;
}

void CreateSecurityProfileResponse::setSecurityType(const std::string& value)
{
    securityType_ = value;
    securityTypeIsSet_ = true;
}

bool CreateSecurityProfileResponse::securityTypeIsSet() const
{
    return securityTypeIsSet_;
}

void CreateSecurityProfileResponse::unsetsecurityType()
{
    securityTypeIsSet_ = false;
}

std::string CreateSecurityProfileResponse::getAlarmLevel() const
{
    return alarmLevel_;
}

void CreateSecurityProfileResponse::setAlarmLevel(const std::string& value)
{
    alarmLevel_ = value;
    alarmLevelIsSet_ = true;
}

bool CreateSecurityProfileResponse::alarmLevelIsSet() const
{
    return alarmLevelIsSet_;
}

void CreateSecurityProfileResponse::unsetalarmLevel()
{
    alarmLevelIsSet_ = false;
}

std::string CreateSecurityProfileResponse::getSecurityLevel() const
{
    return securityLevel_;
}

void CreateSecurityProfileResponse::setSecurityLevel(const std::string& value)
{
    securityLevel_ = value;
    securityLevelIsSet_ = true;
}

bool CreateSecurityProfileResponse::securityLevelIsSet() const
{
    return securityLevelIsSet_;
}

void CreateSecurityProfileResponse::unsetsecurityLevel()
{
    securityLevelIsSet_ = false;
}

bool CreateSecurityProfileResponse::isEnable() const
{
    return enable_;
}

void CreateSecurityProfileResponse::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool CreateSecurityProfileResponse::enableIsSet() const
{
    return enableIsSet_;
}

void CreateSecurityProfileResponse::unsetenable()
{
    enableIsSet_ = false;
}

std::vector<SecurityProfile>& CreateSecurityProfileResponse::getProfile()
{
    return profile_;
}

void CreateSecurityProfileResponse::setProfile(const std::vector<SecurityProfile>& value)
{
    profile_ = value;
    profileIsSet_ = true;
}

bool CreateSecurityProfileResponse::profileIsSet() const
{
    return profileIsSet_;
}

void CreateSecurityProfileResponse::unsetprofile()
{
    profileIsSet_ = false;
}

SecurityTarget CreateSecurityProfileResponse::getProfileTargets() const
{
    return profileTargets_;
}

void CreateSecurityProfileResponse::setProfileTargets(const SecurityTarget& value)
{
    profileTargets_ = value;
    profileTargetsIsSet_ = true;
}

bool CreateSecurityProfileResponse::profileTargetsIsSet() const
{
    return profileTargetsIsSet_;
}

void CreateSecurityProfileResponse::unsetprofileTargets()
{
    profileTargetsIsSet_ = false;
}

}
}
}
}
}


