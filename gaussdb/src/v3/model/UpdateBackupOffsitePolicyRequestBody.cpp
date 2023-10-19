

#include "huaweicloud/gaussdb/v3/model/UpdateBackupOffsitePolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateBackupOffsitePolicyRequestBody::UpdateBackupOffsitePolicyRequestBody()
{
    backupPolicyIsSet_ = false;
}

UpdateBackupOffsitePolicyRequestBody::~UpdateBackupOffsitePolicyRequestBody() = default;

void UpdateBackupOffsitePolicyRequestBody::validate()
{
}

web::json::value UpdateBackupOffsitePolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupPolicyIsSet_) {
        val[utility::conversions::to_string_t("backup_policy")] = ModelBase::toJson(backupPolicy_);
    }

    return val;
}
bool UpdateBackupOffsitePolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_policy"));
        if(!fieldValue.is_null())
        {
            UpdateBackupOffsitePolicyInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupPolicy(refVal);
        }
    }
    return ok;
}


UpdateBackupOffsitePolicyInfo UpdateBackupOffsitePolicyRequestBody::getBackupPolicy() const
{
    return backupPolicy_;
}

void UpdateBackupOffsitePolicyRequestBody::setBackupPolicy(const UpdateBackupOffsitePolicyInfo& value)
{
    backupPolicy_ = value;
    backupPolicyIsSet_ = true;
}

bool UpdateBackupOffsitePolicyRequestBody::backupPolicyIsSet() const
{
    return backupPolicyIsSet_;
}

void UpdateBackupOffsitePolicyRequestBody::unsetbackupPolicy()
{
    backupPolicyIsSet_ = false;
}

}
}
}
}
}


