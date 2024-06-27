

#include "huaweicloud/gaussdbforopengauss/v3/model/SetNewBackupPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SetNewBackupPolicyRequestBody::SetNewBackupPolicyRequestBody()
{
    backupPolicyIsSet_ = false;
}

SetNewBackupPolicyRequestBody::~SetNewBackupPolicyRequestBody() = default;

void SetNewBackupPolicyRequestBody::validate()
{
}

web::json::value SetNewBackupPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupPolicyIsSet_) {
        val[utility::conversions::to_string_t("backup_policy")] = ModelBase::toJson(backupPolicy_);
    }

    return val;
}
bool SetNewBackupPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_policy"));
        if(!fieldValue.is_null())
        {
            BackupPolicyInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupPolicy(refVal);
        }
    }
    return ok;
}


BackupPolicyInfo SetNewBackupPolicyRequestBody::getBackupPolicy() const
{
    return backupPolicy_;
}

void SetNewBackupPolicyRequestBody::setBackupPolicy(const BackupPolicyInfo& value)
{
    backupPolicy_ = value;
    backupPolicyIsSet_ = true;
}

bool SetNewBackupPolicyRequestBody::backupPolicyIsSet() const
{
    return backupPolicyIsSet_;
}

void SetNewBackupPolicyRequestBody::unsetbackupPolicy()
{
    backupPolicyIsSet_ = false;
}

}
}
}
}
}


