

#include "huaweicloud/dds/v3/model/UpdateSecurityGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateSecurityGroupResponse::UpdateSecurityGroupResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

UpdateSecurityGroupResponse::~UpdateSecurityGroupResponse() = default;

void UpdateSecurityGroupResponse::validate()
{
}

web::json::value UpdateSecurityGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }

    return val;
}
bool UpdateSecurityGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    return ok;
}


std::string UpdateSecurityGroupResponse::getJobId() const
{
    return jobId_;
}

void UpdateSecurityGroupResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateSecurityGroupResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateSecurityGroupResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpdateSecurityGroupResponse::getSecurityGroupId() const
{
    return securityGroupId_;
}

void UpdateSecurityGroupResponse::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool UpdateSecurityGroupResponse::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void UpdateSecurityGroupResponse::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}


