

#include "huaweicloud/gaussdbfornosql/v3/model/ShowBackupPoliciesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowBackupPoliciesResponse::ShowBackupPoliciesResponse()
{
    backupPolicyIsSet_ = false;
}

ShowBackupPoliciesResponse::~ShowBackupPoliciesResponse() = default;

void ShowBackupPoliciesResponse::validate()
{
}

web::json::value ShowBackupPoliciesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupPolicyIsSet_) {
        val[utility::conversions::to_string_t("backup_policy")] = ModelBase::toJson(backupPolicy_);
    }

    return val;
}
bool ShowBackupPoliciesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_policy"));
        if(!fieldValue.is_null())
        {
            ShowBackupPolicyResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupPolicy(refVal);
        }
    }
    return ok;
}


ShowBackupPolicyResult ShowBackupPoliciesResponse::getBackupPolicy() const
{
    return backupPolicy_;
}

void ShowBackupPoliciesResponse::setBackupPolicy(const ShowBackupPolicyResult& value)
{
    backupPolicy_ = value;
    backupPolicyIsSet_ = true;
}

bool ShowBackupPoliciesResponse::backupPolicyIsSet() const
{
    return backupPolicyIsSet_;
}

void ShowBackupPoliciesResponse::unsetbackupPolicy()
{
    backupPolicyIsSet_ = false;
}

}
}
}
}
}


