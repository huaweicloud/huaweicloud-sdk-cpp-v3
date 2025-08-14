

#include "huaweicloud/identitycenter/v1/model/DeleteProfileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DeleteProfileRequest::DeleteProfileRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    applicationInstanceId_ = "";
    applicationInstanceIdIsSet_ = false;
    profileId_ = "";
    profileIdIsSet_ = false;
}

DeleteProfileRequest::~DeleteProfileRequest() = default;

void DeleteProfileRequest::validate()
{
}

web::json::value DeleteProfileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(applicationInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("application_instance_id")] = ModelBase::toJson(applicationInstanceId_);
    }
    if(profileIdIsSet_) {
        val[utility::conversions::to_string_t("profile_id")] = ModelBase::toJson(profileId_);
    }

    return val;
}
bool DeleteProfileRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("profile_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfileId(refVal);
        }
    }
    return ok;
}


std::string DeleteProfileRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DeleteProfileRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DeleteProfileRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DeleteProfileRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DeleteProfileRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteProfileRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteProfileRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteProfileRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteProfileRequest::getApplicationInstanceId() const
{
    return applicationInstanceId_;
}

void DeleteProfileRequest::setApplicationInstanceId(const std::string& value)
{
    applicationInstanceId_ = value;
    applicationInstanceIdIsSet_ = true;
}

bool DeleteProfileRequest::applicationInstanceIdIsSet() const
{
    return applicationInstanceIdIsSet_;
}

void DeleteProfileRequest::unsetapplicationInstanceId()
{
    applicationInstanceIdIsSet_ = false;
}

std::string DeleteProfileRequest::getProfileId() const
{
    return profileId_;
}

void DeleteProfileRequest::setProfileId(const std::string& value)
{
    profileId_ = value;
    profileIdIsSet_ = true;
}

bool DeleteProfileRequest::profileIdIsSet() const
{
    return profileIdIsSet_;
}

void DeleteProfileRequest::unsetprofileId()
{
    profileIdIsSet_ = false;
}

}
}
}
}
}


