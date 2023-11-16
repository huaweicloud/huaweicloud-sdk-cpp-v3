

#include "huaweicloud/aad/v1/model/DeletePolicyBlackAndWhiteIpListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




DeletePolicyBlackAndWhiteIpListRequest::DeletePolicyBlackAndWhiteIpListRequest()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeletePolicyBlackAndWhiteIpListRequest::~DeletePolicyBlackAndWhiteIpListRequest() = default;

void DeletePolicyBlackAndWhiteIpListRequest::validate()
{
}

web::json::value DeletePolicyBlackAndWhiteIpListRequest::toJson() const
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
bool DeletePolicyBlackAndWhiteIpListRequest::fromJson(const web::json::value& val)
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
            BlackWhiteIpRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeletePolicyBlackAndWhiteIpListRequest::getPolicyId() const
{
    return policyId_;
}

void DeletePolicyBlackAndWhiteIpListRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool DeletePolicyBlackAndWhiteIpListRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void DeletePolicyBlackAndWhiteIpListRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

BlackWhiteIpRequestBody DeletePolicyBlackAndWhiteIpListRequest::getBody() const
{
    return body_;
}

void DeletePolicyBlackAndWhiteIpListRequest::setBody(const BlackWhiteIpRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeletePolicyBlackAndWhiteIpListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeletePolicyBlackAndWhiteIpListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


