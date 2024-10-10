

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteManualBackupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteManualBackupResponse::DeleteManualBackupResponse()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    backupName_ = "";
    backupNameIsSet_ = false;
}

DeleteManualBackupResponse::~DeleteManualBackupResponse() = default;

void DeleteManualBackupResponse::validate()
{
}

web::json::value DeleteManualBackupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(backupNameIsSet_) {
        val[utility::conversions::to_string_t("backup_name")] = ModelBase::toJson(backupName_);
    }

    return val;
}
bool DeleteManualBackupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupName(refVal);
        }
    }
    return ok;
}


std::string DeleteManualBackupResponse::getBackupId() const
{
    return backupId_;
}

void DeleteManualBackupResponse::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool DeleteManualBackupResponse::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void DeleteManualBackupResponse::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string DeleteManualBackupResponse::getBackupName() const
{
    return backupName_;
}

void DeleteManualBackupResponse::setBackupName(const std::string& value)
{
    backupName_ = value;
    backupNameIsSet_ = true;
}

bool DeleteManualBackupResponse::backupNameIsSet() const
{
    return backupNameIsSet_;
}

void DeleteManualBackupResponse::unsetbackupName()
{
    backupNameIsSet_ = false;
}

}
}
}
}
}


