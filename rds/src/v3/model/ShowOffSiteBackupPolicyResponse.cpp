

#include "huaweicloud/rds/v3/model/ShowOffSiteBackupPolicyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowOffSiteBackupPolicyResponse::ShowOffSiteBackupPolicyResponse()
{
    policyParaIsSet_ = false;
}

ShowOffSiteBackupPolicyResponse::~ShowOffSiteBackupPolicyResponse() = default;

void ShowOffSiteBackupPolicyResponse::validate()
{
}

web::json::value ShowOffSiteBackupPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyParaIsSet_) {
        val[utility::conversions::to_string_t("policy_para")] = ModelBase::toJson(policyPara_);
    }

    return val;
}

bool ShowOffSiteBackupPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy_para"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_para"));
        if(!fieldValue.is_null())
        {
            std::vector<GetOffSiteBackupPolicy> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyPara(refVal);
        }
    }
    return ok;
}

std::vector<GetOffSiteBackupPolicy>& ShowOffSiteBackupPolicyResponse::getPolicyPara()
{
    return policyPara_;
}

void ShowOffSiteBackupPolicyResponse::setPolicyPara(const std::vector<GetOffSiteBackupPolicy>& value)
{
    policyPara_ = value;
    policyParaIsSet_ = true;
}

bool ShowOffSiteBackupPolicyResponse::policyParaIsSet() const
{
    return policyParaIsSet_;
}

void ShowOffSiteBackupPolicyResponse::unsetpolicyPara()
{
    policyParaIsSet_ = false;
}

}
}
}
}
}


