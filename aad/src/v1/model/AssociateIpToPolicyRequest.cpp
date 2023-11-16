

#include "huaweicloud/aad/v1/model/AssociateIpToPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




AssociateIpToPolicyRequest::AssociateIpToPolicyRequest()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

AssociateIpToPolicyRequest::~AssociateIpToPolicyRequest() = default;

void AssociateIpToPolicyRequest::validate()
{
}

web::json::value AssociateIpToPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AssociateIpToPolicyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IpBindingBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AssociateIpToPolicyRequest::getPolicyId() const
{
    return policyId_;
}

void AssociateIpToPolicyRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool AssociateIpToPolicyRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void AssociateIpToPolicyRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

IpBindingBody AssociateIpToPolicyRequest::getBody() const
{
    return body_;
}

void AssociateIpToPolicyRequest::setBody(const IpBindingBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateIpToPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateIpToPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


