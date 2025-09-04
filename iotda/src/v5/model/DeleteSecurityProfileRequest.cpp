

#include "huaweicloud/iotda/v5/model/DeleteSecurityProfileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteSecurityProfileRequest::DeleteSecurityProfileRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    profileId_ = "";
    profileIdIsSet_ = false;
}

DeleteSecurityProfileRequest::~DeleteSecurityProfileRequest() = default;

void DeleteSecurityProfileRequest::validate()
{
}

web::json::value DeleteSecurityProfileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(profileIdIsSet_) {
        val[utility::conversions::to_string_t("profile_id")] = ModelBase::toJson(profileId_);
    }

    return val;
}
bool DeleteSecurityProfileRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteSecurityProfileRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteSecurityProfileRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteSecurityProfileRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteSecurityProfileRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteSecurityProfileRequest::getProfileId() const
{
    return profileId_;
}

void DeleteSecurityProfileRequest::setProfileId(const std::string& value)
{
    profileId_ = value;
    profileIdIsSet_ = true;
}

bool DeleteSecurityProfileRequest::profileIdIsSet() const
{
    return profileIdIsSet_;
}

void DeleteSecurityProfileRequest::unsetprofileId()
{
    profileIdIsSet_ = false;
}

}
}
}
}
}


