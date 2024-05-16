

#include "huaweicloud/gaussdbforopengauss/v3/model/RecoveryBackupSource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RecoveryBackupSource::RecoveryBackupSource()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    restoreTime_ = "";
    restoreTimeIsSet_ = false;
    tableListIsSet_ = false;
    schemaType_ = "";
    schemaTypeIsSet_ = false;
}

RecoveryBackupSource::~RecoveryBackupSource() = default;

void RecoveryBackupSource::validate()
{
}

web::json::value RecoveryBackupSource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }
    if(tableListIsSet_) {
        val[utility::conversions::to_string_t("table_list")] = ModelBase::toJson(tableList_);
    }
    if(schemaTypeIsSet_) {
        val[utility::conversions::to_string_t("schema_type")] = ModelBase::toJson(schemaType_);
    }

    return val;
}
bool RecoveryBackupSource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_list"));
        if(!fieldValue.is_null())
        {
            std::vector<RestoreTableListDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaType(refVal);
        }
    }
    return ok;
}


std::string RecoveryBackupSource::getInstanceId() const
{
    return instanceId_;
}

void RecoveryBackupSource::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RecoveryBackupSource::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RecoveryBackupSource::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RecoveryBackupSource::getType() const
{
    return type_;
}

void RecoveryBackupSource::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RecoveryBackupSource::typeIsSet() const
{
    return typeIsSet_;
}

void RecoveryBackupSource::unsettype()
{
    typeIsSet_ = false;
}

std::string RecoveryBackupSource::getBackupId() const
{
    return backupId_;
}

void RecoveryBackupSource::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool RecoveryBackupSource::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void RecoveryBackupSource::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string RecoveryBackupSource::getRestoreTime() const
{
    return restoreTime_;
}

void RecoveryBackupSource::setRestoreTime(const std::string& value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool RecoveryBackupSource::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void RecoveryBackupSource::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

std::vector<RestoreTableListDetail>& RecoveryBackupSource::getTableList()
{
    return tableList_;
}

void RecoveryBackupSource::setTableList(const std::vector<RestoreTableListDetail>& value)
{
    tableList_ = value;
    tableListIsSet_ = true;
}

bool RecoveryBackupSource::tableListIsSet() const
{
    return tableListIsSet_;
}

void RecoveryBackupSource::unsettableList()
{
    tableListIsSet_ = false;
}

std::string RecoveryBackupSource::getSchemaType() const
{
    return schemaType_;
}

void RecoveryBackupSource::setSchemaType(const std::string& value)
{
    schemaType_ = value;
    schemaTypeIsSet_ = true;
}

bool RecoveryBackupSource::schemaTypeIsSet() const
{
    return schemaTypeIsSet_;
}

void RecoveryBackupSource::unsetschemaType()
{
    schemaTypeIsSet_ = false;
}

}
}
}
}
}


