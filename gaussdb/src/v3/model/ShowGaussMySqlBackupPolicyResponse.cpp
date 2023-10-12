

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlBackupPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlBackupPolicyResponse::ShowGaussMySqlBackupPolicyResponse()
{
    backupPolicyIsSet_ = false;
}

ShowGaussMySqlBackupPolicyResponse::~ShowGaussMySqlBackupPolicyResponse() = default;

void ShowGaussMySqlBackupPolicyResponse::validate()
{
}

web::json::value ShowGaussMySqlBackupPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupPolicyIsSet_) {
        val[utility::conversions::to_string_t("backup_policy")] = ModelBase::toJson(backupPolicy_);
    }

    return val;
}
bool ShowGaussMySqlBackupPolicyResponse::fromJson(const web::json::value& val)
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


BackupPolicy ShowGaussMySqlBackupPolicyResponse::getBackupPolicy() const
{
    return backupPolicy_;
}

void ShowGaussMySqlBackupPolicyResponse::setBackupPolicy(const BackupPolicy& value)
{
    backupPolicy_ = value;
    backupPolicyIsSet_ = true;
}

bool ShowGaussMySqlBackupPolicyResponse::backupPolicyIsSet() const
{
    return backupPolicyIsSet_;
}

void ShowGaussMySqlBackupPolicyResponse::unsetbackupPolicy()
{
    backupPolicyIsSet_ = false;
}

}
}
}
}
}


