

#include "huaweicloud/iotda/v5/model/ShowSecurityProfileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowSecurityProfileRequest::ShowSecurityProfileRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    profileId_ = "";
    profileIdIsSet_ = false;
}

ShowSecurityProfileRequest::~ShowSecurityProfileRequest() = default;

void ShowSecurityProfileRequest::validate()
{
}

web::json::value ShowSecurityProfileRequest::toJson() const
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
bool ShowSecurityProfileRequest::fromJson(const web::json::value& val)
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


std::string ShowSecurityProfileRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSecurityProfileRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSecurityProfileRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSecurityProfileRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowSecurityProfileRequest::getProfileId() const
{
    return profileId_;
}

void ShowSecurityProfileRequest::setProfileId(const std::string& value)
{
    profileId_ = value;
    profileIdIsSet_ = true;
}

bool ShowSecurityProfileRequest::profileIdIsSet() const
{
    return profileIdIsSet_;
}

void ShowSecurityProfileRequest::unsetprofileId()
{
    profileIdIsSet_ = false;
}

}
}
}
}
}


