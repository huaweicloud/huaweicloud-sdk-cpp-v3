

#include "huaweicloud/aad/v1/model/AssociateIpToPolicyAndPackageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




AssociateIpToPolicyAndPackageRequest::AssociateIpToPolicyAndPackageRequest()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

AssociateIpToPolicyAndPackageRequest::~AssociateIpToPolicyAndPackageRequest() = default;

void AssociateIpToPolicyAndPackageRequest::validate()
{
}

web::json::value AssociateIpToPolicyAndPackageRequest::toJson() const
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
bool AssociateIpToPolicyAndPackageRequest::fromJson(const web::json::value& val)
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
            IpBindingV3Body refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AssociateIpToPolicyAndPackageRequest::getPolicyId() const
{
    return policyId_;
}

void AssociateIpToPolicyAndPackageRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool AssociateIpToPolicyAndPackageRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void AssociateIpToPolicyAndPackageRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

IpBindingV3Body AssociateIpToPolicyAndPackageRequest::getBody() const
{
    return body_;
}

void AssociateIpToPolicyAndPackageRequest::setBody(const IpBindingV3Body& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssociateIpToPolicyAndPackageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssociateIpToPolicyAndPackageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


