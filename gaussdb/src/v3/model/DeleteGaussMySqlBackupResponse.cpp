

#include "huaweicloud/gaussdb/v3/model/DeleteGaussMySqlBackupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteGaussMySqlBackupResponse::DeleteGaussMySqlBackupResponse()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    backupName_ = "";
    backupNameIsSet_ = false;
}

DeleteGaussMySqlBackupResponse::~DeleteGaussMySqlBackupResponse() = default;

void DeleteGaussMySqlBackupResponse::validate()
{
}

web::json::value DeleteGaussMySqlBackupResponse::toJson() const
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
bool DeleteGaussMySqlBackupResponse::fromJson(const web::json::value& val)
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


std::string DeleteGaussMySqlBackupResponse::getBackupId() const
{
    return backupId_;
}

void DeleteGaussMySqlBackupResponse::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool DeleteGaussMySqlBackupResponse::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void DeleteGaussMySqlBackupResponse::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string DeleteGaussMySqlBackupResponse::getBackupName() const
{
    return backupName_;
}

void DeleteGaussMySqlBackupResponse::setBackupName(const std::string& value)
{
    backupName_ = value;
    backupNameIsSet_ = true;
}

bool DeleteGaussMySqlBackupResponse::backupNameIsSet() const
{
    return backupNameIsSet_;
}

void DeleteGaussMySqlBackupResponse::unsetbackupName()
{
    backupNameIsSet_ = false;
}

}
}
}
}
}


