

#include "huaweicloud/rds/v3/model/SetTransferPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetTransferPolicyRequestBody::SetTransferPolicyRequestBody()
{
    policyIsSet_ = false;
}

SetTransferPolicyRequestBody::~SetTransferPolicyRequestBody() = default;

void SetTransferPolicyRequestBody::validate()
{
}

web::json::value SetTransferPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool SetTransferPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            std::vector<TransferPolicyParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    return ok;
}


std::vector<TransferPolicyParam>& SetTransferPolicyRequestBody::getPolicy()
{
    return policy_;
}

void SetTransferPolicyRequestBody::setPolicy(const std::vector<TransferPolicyParam>& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool SetTransferPolicyRequestBody::policyIsSet() const
{
    return policyIsSet_;
}

void SetTransferPolicyRequestBody::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


