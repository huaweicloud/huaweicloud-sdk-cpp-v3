

#include "huaweicloud/gaussdbforopengauss/v3/model/ListRestorableInstancesDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListRestorableInstancesDetailsRequest::ListRestorableInstancesDetailsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    sourceInstanceId_ = "";
    sourceInstanceIdIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    restoreTime_ = "";
    restoreTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    backupRestoreType_ = "";
    backupRestoreTypeIsSet_ = false;
    sourceBackupSchema_ = "";
    sourceBackupSchemaIsSet_ = false;
    targetInstanceId_ = "";
    targetInstanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
}

ListRestorableInstancesDetailsRequest::~ListRestorableInstancesDetailsRequest() = default;

void ListRestorableInstancesDetailsRequest::validate()
{
}

web::json::value ListRestorableInstancesDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(sourceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("source_instance_id")] = ModelBase::toJson(sourceInstanceId_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(backupRestoreTypeIsSet_) {
        val[utility::conversions::to_string_t("backup_restore_type")] = ModelBase::toJson(backupRestoreType_);
    }
    if(sourceBackupSchemaIsSet_) {
        val[utility::conversions::to_string_t("source_backup_schema")] = ModelBase::toJson(sourceBackupSchema_);
    }
    if(targetInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("target_instance_id")] = ModelBase::toJson(targetInstanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }

    return val;
}
bool ListRestorableInstancesDetailsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_restore_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_restore_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupRestoreType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_backup_schema"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_backup_schema"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceBackupSchema(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    return ok;
}


std::string ListRestorableInstancesDetailsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListRestorableInstancesDetailsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListRestorableInstancesDetailsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListRestorableInstancesDetailsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListRestorableInstancesDetailsRequest::getSourceInstanceId() const
{
    return sourceInstanceId_;
}

void ListRestorableInstancesDetailsRequest::setSourceInstanceId(const std::string& value)
{
    sourceInstanceId_ = value;
    sourceInstanceIdIsSet_ = true;
}

bool ListRestorableInstancesDetailsRequest::sourceInstanceIdIsSet() const
{
    return sourceInstanceIdIsSet_;
}

void ListRestorableInstancesDetailsRequest::unsetsourceInstanceId()
{
    sourceInstanceIdIsSet_ = false;
}

std::string ListRestorableInstancesDetailsRequest::getBackupId() const
{
    return backupId_;
}

void ListRestorableInstancesDetailsRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ListRestorableInstancesDetailsRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ListRestorableInstancesDetailsRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string ListRestorableInstancesDetailsRequest::getRestoreTime() const
{
    return restoreTime_;
}

void ListRestorableInstancesDetailsRequest::setRestoreTime(const std::string& value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool ListRestorableInstancesDetailsRequest::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void ListRestorableInstancesDetailsRequest::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

int32_t ListRestorableInstancesDetailsRequest::getOffset() const
{
    return offset_;
}

void ListRestorableInstancesDetailsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRestorableInstancesDetailsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRestorableInstancesDetailsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRestorableInstancesDetailsRequest::getLimit() const
{
    return limit_;
}

void ListRestorableInstancesDetailsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRestorableInstancesDetailsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRestorableInstancesDetailsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRestorableInstancesDetailsRequest::getBackupRestoreType() const
{
    return backupRestoreType_;
}

void ListRestorableInstancesDetailsRequest::setBackupRestoreType(const std::string& value)
{
    backupRestoreType_ = value;
    backupRestoreTypeIsSet_ = true;
}

bool ListRestorableInstancesDetailsRequest::backupRestoreTypeIsSet() const
{
    return backupRestoreTypeIsSet_;
}

void ListRestorableInstancesDetailsRequest::unsetbackupRestoreType()
{
    backupRestoreTypeIsSet_ = false;
}

std::string ListRestorableInstancesDetailsRequest::getSourceBackupSchema() const
{
    return sourceBackupSchema_;
}

void ListRestorableInstancesDetailsRequest::setSourceBackupSchema(const std::string& value)
{
    sourceBackupSchema_ = value;
    sourceBackupSchemaIsSet_ = true;
}

bool ListRestorableInstancesDetailsRequest::sourceBackupSchemaIsSet() const
{
    return sourceBackupSchemaIsSet_;
}

void ListRestorableInstancesDetailsRequest::unsetsourceBackupSchema()
{
    sourceBackupSchemaIsSet_ = false;
}

std::string ListRestorableInstancesDetailsRequest::getTargetInstanceId() const
{
    return targetInstanceId_;
}

void ListRestorableInstancesDetailsRequest::setTargetInstanceId(const std::string& value)
{
    targetInstanceId_ = value;
    targetInstanceIdIsSet_ = true;
}

bool ListRestorableInstancesDetailsRequest::targetInstanceIdIsSet() const
{
    return targetInstanceIdIsSet_;
}

void ListRestorableInstancesDetailsRequest::unsettargetInstanceId()
{
    targetInstanceIdIsSet_ = false;
}

std::string ListRestorableInstancesDetailsRequest::getInstanceName() const
{
    return instanceName_;
}

void ListRestorableInstancesDetailsRequest::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ListRestorableInstancesDetailsRequest::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ListRestorableInstancesDetailsRequest::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

}
}
}
}
}


