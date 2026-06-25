

#include "huaweicloud/rds/v3/model/UpdateSparseBackupPolicyReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateSparseBackupPolicyReq::UpdateSparseBackupPolicyReq()
{
    policiesIsSet_ = false;
}

UpdateSparseBackupPolicyReq::~UpdateSparseBackupPolicyReq() = default;

void UpdateSparseBackupPolicyReq::validate()
{
}

web::json::value UpdateSparseBackupPolicyReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policiesIsSet_) {
        val[utility::conversions::to_string_t("policies")] = ModelBase::toJson(policies_);
    }

    return val;
}
bool UpdateSparseBackupPolicyReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            std::vector<SparseBackupPolicyForUpdate> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    return ok;
}


std::vector<SparseBackupPolicyForUpdate>& UpdateSparseBackupPolicyReq::getPolicies()
{
    return policies_;
}

void UpdateSparseBackupPolicyReq::setPolicies(const std::vector<SparseBackupPolicyForUpdate>& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool UpdateSparseBackupPolicyReq::policiesIsSet() const
{
    return policiesIsSet_;
}

void UpdateSparseBackupPolicyReq::unsetpolicies()
{
    policiesIsSet_ = false;
}

}
}
}
}
}


