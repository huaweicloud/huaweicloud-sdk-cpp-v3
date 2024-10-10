

#include "huaweicloud/drs/v5/model/ShowReplicationJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowReplicationJobResponse::ShowReplicationJobResponse()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    finishTime_ = "";
    finishTimeIsSet_ = false;
    backupInfoIsSet_ = false;
    baseInfoIsSet_ = false;
    targetDbInfoIsSet_ = false;
    optionsIsSet_ = false;
    newDbNames_ = "";
    newDbNamesIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    errorLog_ = "";
    errorLogIsSet_ = false;
}

ShowReplicationJobResponse::~ShowReplicationJobResponse() = default;

void ShowReplicationJobResponse::validate()
{
}

web::json::value ShowReplicationJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(finishTimeIsSet_) {
        val[utility::conversions::to_string_t("finish_time")] = ModelBase::toJson(finishTime_);
    }
    if(backupInfoIsSet_) {
        val[utility::conversions::to_string_t("backup_info")] = ModelBase::toJson(backupInfo_);
    }
    if(baseInfoIsSet_) {
        val[utility::conversions::to_string_t("base_info")] = ModelBase::toJson(baseInfo_);
    }
    if(targetDbInfoIsSet_) {
        val[utility::conversions::to_string_t("target_db_info")] = ModelBase::toJson(targetDbInfo_);
    }
    if(optionsIsSet_) {
        val[utility::conversions::to_string_t("options")] = ModelBase::toJson(options_);
    }
    if(newDbNamesIsSet_) {
        val[utility::conversions::to_string_t("new_db_names")] = ModelBase::toJson(newDbNames_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(errorLogIsSet_) {
        val[utility::conversions::to_string_t("error_log")] = ModelBase::toJson(errorLog_);
    }

    return val;
}
bool ShowReplicationJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_info"));
        if(!fieldValue.is_null())
        {
            BackupInfoResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("base_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base_info"));
        if(!fieldValue.is_null())
        {
            BackupJobBaseInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_db_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_db_info"));
        if(!fieldValue.is_null())
        {
            BackupJobEndpointInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDbInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("options"));
        if(!fieldValue.is_null())
        {
            BackupRestoreOptionInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_db_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_db_names"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewDbNames(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_log"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorLog(refVal);
        }
    }
    return ok;
}


std::string ShowReplicationJobResponse::getId() const
{
    return id_;
}

void ShowReplicationJobResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowReplicationJobResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowReplicationJobResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowReplicationJobResponse::getStatus() const
{
    return status_;
}

void ShowReplicationJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowReplicationJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowReplicationJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowReplicationJobResponse::getCreateTime() const
{
    return createTime_;
}

void ShowReplicationJobResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowReplicationJobResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowReplicationJobResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowReplicationJobResponse::getFinishTime() const
{
    return finishTime_;
}

void ShowReplicationJobResponse::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool ShowReplicationJobResponse::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void ShowReplicationJobResponse::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

BackupInfoResp ShowReplicationJobResponse::getBackupInfo() const
{
    return backupInfo_;
}

void ShowReplicationJobResponse::setBackupInfo(const BackupInfoResp& value)
{
    backupInfo_ = value;
    backupInfoIsSet_ = true;
}

bool ShowReplicationJobResponse::backupInfoIsSet() const
{
    return backupInfoIsSet_;
}

void ShowReplicationJobResponse::unsetbackupInfo()
{
    backupInfoIsSet_ = false;
}

BackupJobBaseInfo ShowReplicationJobResponse::getBaseInfo() const
{
    return baseInfo_;
}

void ShowReplicationJobResponse::setBaseInfo(const BackupJobBaseInfo& value)
{
    baseInfo_ = value;
    baseInfoIsSet_ = true;
}

bool ShowReplicationJobResponse::baseInfoIsSet() const
{
    return baseInfoIsSet_;
}

void ShowReplicationJobResponse::unsetbaseInfo()
{
    baseInfoIsSet_ = false;
}

BackupJobEndpointInfo ShowReplicationJobResponse::getTargetDbInfo() const
{
    return targetDbInfo_;
}

void ShowReplicationJobResponse::setTargetDbInfo(const BackupJobEndpointInfo& value)
{
    targetDbInfo_ = value;
    targetDbInfoIsSet_ = true;
}

bool ShowReplicationJobResponse::targetDbInfoIsSet() const
{
    return targetDbInfoIsSet_;
}

void ShowReplicationJobResponse::unsettargetDbInfo()
{
    targetDbInfoIsSet_ = false;
}

BackupRestoreOptionInfo ShowReplicationJobResponse::getOptions() const
{
    return options_;
}

void ShowReplicationJobResponse::setOptions(const BackupRestoreOptionInfo& value)
{
    options_ = value;
    optionsIsSet_ = true;
}

bool ShowReplicationJobResponse::optionsIsSet() const
{
    return optionsIsSet_;
}

void ShowReplicationJobResponse::unsetoptions()
{
    optionsIsSet_ = false;
}

std::string ShowReplicationJobResponse::getNewDbNames() const
{
    return newDbNames_;
}

void ShowReplicationJobResponse::setNewDbNames(const std::string& value)
{
    newDbNames_ = value;
    newDbNamesIsSet_ = true;
}

bool ShowReplicationJobResponse::newDbNamesIsSet() const
{
    return newDbNamesIsSet_;
}

void ShowReplicationJobResponse::unsetnewDbNames()
{
    newDbNamesIsSet_ = false;
}

std::string ShowReplicationJobResponse::getInstanceName() const
{
    return instanceName_;
}

void ShowReplicationJobResponse::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ShowReplicationJobResponse::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ShowReplicationJobResponse::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ShowReplicationJobResponse::getErrorLog() const
{
    return errorLog_;
}

void ShowReplicationJobResponse::setErrorLog(const std::string& value)
{
    errorLog_ = value;
    errorLogIsSet_ = true;
}

bool ShowReplicationJobResponse::errorLogIsSet() const
{
    return errorLogIsSet_;
}

void ShowReplicationJobResponse::unseterrorLog()
{
    errorLogIsSet_ = false;
}

}
}
}
}
}


