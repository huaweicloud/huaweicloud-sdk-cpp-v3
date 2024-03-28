

#include "huaweicloud/cbr/v1/model/OrganizationPolicyStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OrganizationPolicyStatus::OrganizationPolicyStatus()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

OrganizationPolicyStatus::~OrganizationPolicyStatus() = default;

void OrganizationPolicyStatus::validate()
{
}

web::json::value OrganizationPolicyStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool OrganizationPolicyStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string OrganizationPolicyStatus::getPolicyId() const
{
    return policyId_;
}

void OrganizationPolicyStatus::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool OrganizationPolicyStatus::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void OrganizationPolicyStatus::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string OrganizationPolicyStatus::getDomainId() const
{
    return domainId_;
}

void OrganizationPolicyStatus::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool OrganizationPolicyStatus::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void OrganizationPolicyStatus::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string OrganizationPolicyStatus::getProjectId() const
{
    return projectId_;
}

void OrganizationPolicyStatus::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool OrganizationPolicyStatus::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void OrganizationPolicyStatus::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string OrganizationPolicyStatus::getStatus() const
{
    return status_;
}

void OrganizationPolicyStatus::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool OrganizationPolicyStatus::statusIsSet() const
{
    return statusIsSet_;
}

void OrganizationPolicyStatus::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


