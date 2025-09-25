

#include "huaweicloud/gaussdbforopengauss/v3/model/BatchSetBackupPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BatchSetBackupPolicyRequestBody::BatchSetBackupPolicyRequestBody()
{
    instanceIdsIsSet_ = false;
    backupPolicyIsSet_ = false;
}

BatchSetBackupPolicyRequestBody::~BatchSetBackupPolicyRequestBody() = default;

void BatchSetBackupPolicyRequestBody::validate()
{
}

web::json::value BatchSetBackupPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }
    if(backupPolicyIsSet_) {
        val[utility::conversions::to_string_t("backup_policy")] = ModelBase::toJson(backupPolicy_);
    }

    return val;
}
bool BatchSetBackupPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIds(refVal);
        }
    }
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


std::vector<std::string>& BatchSetBackupPolicyRequestBody::getInstanceIds()
{
    return instanceIds_;
}

void BatchSetBackupPolicyRequestBody::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool BatchSetBackupPolicyRequestBody::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void BatchSetBackupPolicyRequestBody::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

BackupPolicyInfo BatchSetBackupPolicyRequestBody::getBackupPolicy() const
{
    return backupPolicy_;
}

void BatchSetBackupPolicyRequestBody::setBackupPolicy(const BackupPolicyInfo& value)
{
    backupPolicy_ = value;
    backupPolicyIsSet_ = true;
}

bool BatchSetBackupPolicyRequestBody::backupPolicyIsSet() const
{
    return backupPolicyIsSet_;
}

void BatchSetBackupPolicyRequestBody::unsetbackupPolicy()
{
    backupPolicyIsSet_ = false;
}

}
}
}
}
}


