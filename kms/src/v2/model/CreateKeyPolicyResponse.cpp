

#include "huaweicloud/kms/v2/model/CreateKeyPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateKeyPolicyResponse::CreateKeyPolicyResponse()
{
    policyId_ = "";
    policyIdIsSet_ = false;
}

CreateKeyPolicyResponse::~CreateKeyPolicyResponse() = default;

void CreateKeyPolicyResponse::validate()
{
}

web::json::value CreateKeyPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }

    return val;
}
bool CreateKeyPolicyResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateKeyPolicyResponse::getPolicyId() const
{
    return policyId_;
}

void CreateKeyPolicyResponse::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool CreateKeyPolicyResponse::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void CreateKeyPolicyResponse::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

}
}
}
}
}


