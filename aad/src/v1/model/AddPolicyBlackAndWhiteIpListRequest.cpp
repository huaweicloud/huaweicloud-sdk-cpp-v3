

#include "huaweicloud/aad/v1/model/AddPolicyBlackAndWhiteIpListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




AddPolicyBlackAndWhiteIpListRequest::AddPolicyBlackAndWhiteIpListRequest()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddPolicyBlackAndWhiteIpListRequest::~AddPolicyBlackAndWhiteIpListRequest() = default;

void AddPolicyBlackAndWhiteIpListRequest::validate()
{
}

web::json::value AddPolicyBlackAndWhiteIpListRequest::toJson() const
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
bool AddPolicyBlackAndWhiteIpListRequest::fromJson(const web::json::value& val)
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


std::string AddPolicyBlackAndWhiteIpListRequest::getPolicyId() const
{
    return policyId_;
}

void AddPolicyBlackAndWhiteIpListRequest::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool AddPolicyBlackAndWhiteIpListRequest::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void AddPolicyBlackAndWhiteIpListRequest::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

BlackWhiteIpRequestBody AddPolicyBlackAndWhiteIpListRequest::getBody() const
{
    return body_;
}

void AddPolicyBlackAndWhiteIpListRequest::setBody(const BlackWhiteIpRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddPolicyBlackAndWhiteIpListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddPolicyBlackAndWhiteIpListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


