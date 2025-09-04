

#include "huaweicloud/iotda/v5/model/UpdateSecurityProfileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateSecurityProfileRequest::UpdateSecurityProfileRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    profileId_ = "";
    profileIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSecurityProfileRequest::~UpdateSecurityProfileRequest() = default;

void UpdateSecurityProfileRequest::validate()
{
}

web::json::value UpdateSecurityProfileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(profileIdIsSet_) {
        val[utility::conversions::to_string_t("profile_id")] = ModelBase::toJson(profileId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateSecurityProfileRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateSecurityProfileDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSecurityProfileRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateSecurityProfileRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateSecurityProfileRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateSecurityProfileRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateSecurityProfileRequest::getProfileId() const
{
    return profileId_;
}

void UpdateSecurityProfileRequest::setProfileId(const std::string& value)
{
    profileId_ = value;
    profileIdIsSet_ = true;
}

bool UpdateSecurityProfileRequest::profileIdIsSet() const
{
    return profileIdIsSet_;
}

void UpdateSecurityProfileRequest::unsetprofileId()
{
    profileIdIsSet_ = false;
}

UpdateSecurityProfileDTO UpdateSecurityProfileRequest::getBody() const
{
    return body_;
}

void UpdateSecurityProfileRequest::setBody(const UpdateSecurityProfileDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSecurityProfileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSecurityProfileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


