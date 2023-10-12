

#include "huaweicloud/rds/v3/model/SetOffSiteBackupPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetOffSiteBackupPolicyRequestBody::SetOffSiteBackupPolicyRequestBody()
{
    policyParaIsSet_ = false;
}

SetOffSiteBackupPolicyRequestBody::~SetOffSiteBackupPolicyRequestBody() = default;

void SetOffSiteBackupPolicyRequestBody::validate()
{
}

web::json::value SetOffSiteBackupPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyParaIsSet_) {
        val[utility::conversions::to_string_t("policy_para")] = ModelBase::toJson(policyPara_);
    }

    return val;
}
bool SetOffSiteBackupPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy_para"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_para"));
        if(!fieldValue.is_null())
        {
            std::vector<OffSiteBackupPolicy> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyPara(refVal);
        }
    }
    return ok;
}


std::vector<OffSiteBackupPolicy>& SetOffSiteBackupPolicyRequestBody::getPolicyPara()
{
    return policyPara_;
}

void SetOffSiteBackupPolicyRequestBody::setPolicyPara(const std::vector<OffSiteBackupPolicy>& value)
{
    policyPara_ = value;
    policyParaIsSet_ = true;
}

bool SetOffSiteBackupPolicyRequestBody::policyParaIsSet() const
{
    return policyParaIsSet_;
}

void SetOffSiteBackupPolicyRequestBody::unsetpolicyPara()
{
    policyParaIsSet_ = false;
}

}
}
}
}
}


