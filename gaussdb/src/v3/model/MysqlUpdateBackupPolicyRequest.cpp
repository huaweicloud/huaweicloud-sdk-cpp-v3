

#include "huaweicloud/gaussdb/v3/model/MysqlUpdateBackupPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlUpdateBackupPolicyRequest::MysqlUpdateBackupPolicyRequest()
{
    backupPolicyIsSet_ = false;
}

MysqlUpdateBackupPolicyRequest::~MysqlUpdateBackupPolicyRequest() = default;

void MysqlUpdateBackupPolicyRequest::validate()
{
}

web::json::value MysqlUpdateBackupPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupPolicyIsSet_) {
        val[utility::conversions::to_string_t("backup_policy")] = ModelBase::toJson(backupPolicy_);
    }

    return val;
}
bool MysqlUpdateBackupPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_policy"));
        if(!fieldValue.is_null())
        {
            MysqlBackupPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupPolicy(refVal);
        }
    }
    return ok;
}


MysqlBackupPolicy MysqlUpdateBackupPolicyRequest::getBackupPolicy() const
{
    return backupPolicy_;
}

void MysqlUpdateBackupPolicyRequest::setBackupPolicy(const MysqlBackupPolicy& value)
{
    backupPolicy_ = value;
    backupPolicyIsSet_ = true;
}

bool MysqlUpdateBackupPolicyRequest::backupPolicyIsSet() const
{
    return backupPolicyIsSet_;
}

void MysqlUpdateBackupPolicyRequest::unsetbackupPolicy()
{
    backupPolicyIsSet_ = false;
}

}
}
}
}
}


