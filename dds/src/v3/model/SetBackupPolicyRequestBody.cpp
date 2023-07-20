

#include "huaweicloud/dds/v3/model/SetBackupPolicyRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SetBackupPolicyRequestBody::SetBackupPolicyRequestBody()
{
    backupPolicyIsSet_ = false;
}

SetBackupPolicyRequestBody::~SetBackupPolicyRequestBody() = default;

void SetBackupPolicyRequestBody::validate()
{
}

web::json::value SetBackupPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupPolicyIsSet_) {
        val[utility::conversions::to_string_t("backup_policy")] = ModelBase::toJson(backupPolicy_);
    }

    return val;
}

bool SetBackupPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_policy"));
        if(!fieldValue.is_null())
        {
            BackupPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupPolicy(refVal);
        }
    }
    return ok;
}

BackupPolicy SetBackupPolicyRequestBody::getBackupPolicy() const
{
    return backupPolicy_;
}

void SetBackupPolicyRequestBody::setBackupPolicy(const BackupPolicy& value)
{
    backupPolicy_ = value;
    backupPolicyIsSet_ = true;
}

bool SetBackupPolicyRequestBody::backupPolicyIsSet() const
{
    return backupPolicyIsSet_;
}

void SetBackupPolicyRequestBody::unsetbackupPolicy()
{
    backupPolicyIsSet_ = false;
}

}
}
}
}
}


