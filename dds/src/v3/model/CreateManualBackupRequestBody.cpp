

#include "huaweicloud/dds/v3/model/CreateManualBackupRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CreateManualBackupRequestBody::CreateManualBackupRequestBody()
{
    backupIsSet_ = false;
}

CreateManualBackupRequestBody::~CreateManualBackupRequestBody() = default;

void CreateManualBackupRequestBody::validate()
{
}

web::json::value CreateManualBackupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIsSet_) {
        val[utility::conversions::to_string_t("backup")] = ModelBase::toJson(backup_);
    }

    return val;
}

bool CreateManualBackupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup"));
        if(!fieldValue.is_null())
        {
            CreateManualBackupOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackup(refVal);
        }
    }
    return ok;
}

CreateManualBackupOption CreateManualBackupRequestBody::getBackup() const
{
    return backup_;
}

void CreateManualBackupRequestBody::setBackup(const CreateManualBackupOption& value)
{
    backup_ = value;
    backupIsSet_ = true;
}

bool CreateManualBackupRequestBody::backupIsSet() const
{
    return backupIsSet_;
}

void CreateManualBackupRequestBody::unsetbackup()
{
    backupIsSet_ = false;
}

}
}
}
}
}


