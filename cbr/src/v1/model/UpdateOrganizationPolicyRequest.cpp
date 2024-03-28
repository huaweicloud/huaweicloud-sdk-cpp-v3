

#include "huaweicloud/cbr/v1/model/UpdateOrganizationPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




UpdateOrganizationPolicyRequest::UpdateOrganizationPolicyRequest()
{
    organizationPolicyId_ = "";
    organizationPolicyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateOrganizationPolicyRequest::~UpdateOrganizationPolicyRequest() = default;

void UpdateOrganizationPolicyRequest::validate()
{
}

web::json::value UpdateOrganizationPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(organizationPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("organization_policy_id")] = ModelBase::toJson(organizationPolicyId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateOrganizationPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("organization_policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organization_policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationPolicyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OrganizationPolicyUpdateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateOrganizationPolicyRequest::getOrganizationPolicyId() const
{
    return organizationPolicyId_;
}

void UpdateOrganizationPolicyRequest::setOrganizationPolicyId(const std::string& value)
{
    organizationPolicyId_ = value;
    organizationPolicyIdIsSet_ = true;
}

bool UpdateOrganizationPolicyRequest::organizationPolicyIdIsSet() const
{
    return organizationPolicyIdIsSet_;
}

void UpdateOrganizationPolicyRequest::unsetorganizationPolicyId()
{
    organizationPolicyIdIsSet_ = false;
}

OrganizationPolicyUpdateReq UpdateOrganizationPolicyRequest::getBody() const
{
    return body_;
}

void UpdateOrganizationPolicyRequest::setBody(const OrganizationPolicyUpdateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateOrganizationPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateOrganizationPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


