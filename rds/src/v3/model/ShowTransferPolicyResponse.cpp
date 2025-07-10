

#include "huaweicloud/rds/v3/model/ShowTransferPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowTransferPolicyResponse::ShowTransferPolicyResponse()
{
    policiesIsSet_ = false;
}

ShowTransferPolicyResponse::~ShowTransferPolicyResponse() = default;

void ShowTransferPolicyResponse::validate()
{
}

web::json::value ShowTransferPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policiesIsSet_) {
        val[utility::conversions::to_string_t("policies")] = ModelBase::toJson(policies_);
    }

    return val;
}
bool ShowTransferPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            std::vector<TransferPolicy> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    return ok;
}


std::vector<TransferPolicy>& ShowTransferPolicyResponse::getPolicies()
{
    return policies_;
}

void ShowTransferPolicyResponse::setPolicies(const std::vector<TransferPolicy>& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool ShowTransferPolicyResponse::policiesIsSet() const
{
    return policiesIsSet_;
}

void ShowTransferPolicyResponse::unsetpolicies()
{
    policiesIsSet_ = false;
}

}
}
}
}
}


