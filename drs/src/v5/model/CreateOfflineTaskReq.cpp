

#include "huaweicloud/drs/v5/model/CreateOfflineTaskReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CreateOfflineTaskReq::CreateOfflineTaskReq()
{
    baseInfoIsSet_ = false;
    targetDbInfoIsSet_ = false;
    backupInfoIsSet_ = false;
    optionsIsSet_ = false;
}

CreateOfflineTaskReq::~CreateOfflineTaskReq() = default;

void CreateOfflineTaskReq::validate()
{
}

web::json::value CreateOfflineTaskReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(baseInfoIsSet_) {
        val[utility::conversions::to_string_t("base_info")] = ModelBase::toJson(baseInfo_);
    }
    if(targetDbInfoIsSet_) {
        val[utility::conversions::to_string_t("target_db_info")] = ModelBase::toJson(targetDbInfo_);
    }
    if(backupInfoIsSet_) {
        val[utility::conversions::to_string_t("backup_info")] = ModelBase::toJson(backupInfo_);
    }
    if(optionsIsSet_) {
        val[utility::conversions::to_string_t("options")] = ModelBase::toJson(options_);
    }

    return val;
}
bool CreateOfflineTaskReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("backup_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_info"));
        if(!fieldValue.is_null())
        {
            BackupInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupInfo(refVal);
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
    return ok;
}


BackupJobBaseInfo CreateOfflineTaskReq::getBaseInfo() const
{
    return baseInfo_;
}

void CreateOfflineTaskReq::setBaseInfo(const BackupJobBaseInfo& value)
{
    baseInfo_ = value;
    baseInfoIsSet_ = true;
}

bool CreateOfflineTaskReq::baseInfoIsSet() const
{
    return baseInfoIsSet_;
}

void CreateOfflineTaskReq::unsetbaseInfo()
{
    baseInfoIsSet_ = false;
}

BackupJobEndpointInfo CreateOfflineTaskReq::getTargetDbInfo() const
{
    return targetDbInfo_;
}

void CreateOfflineTaskReq::setTargetDbInfo(const BackupJobEndpointInfo& value)
{
    targetDbInfo_ = value;
    targetDbInfoIsSet_ = true;
}

bool CreateOfflineTaskReq::targetDbInfoIsSet() const
{
    return targetDbInfoIsSet_;
}

void CreateOfflineTaskReq::unsettargetDbInfo()
{
    targetDbInfoIsSet_ = false;
}

BackupInfo CreateOfflineTaskReq::getBackupInfo() const
{
    return backupInfo_;
}

void CreateOfflineTaskReq::setBackupInfo(const BackupInfo& value)
{
    backupInfo_ = value;
    backupInfoIsSet_ = true;
}

bool CreateOfflineTaskReq::backupInfoIsSet() const
{
    return backupInfoIsSet_;
}

void CreateOfflineTaskReq::unsetbackupInfo()
{
    backupInfoIsSet_ = false;
}

BackupRestoreOptionInfo CreateOfflineTaskReq::getOptions() const
{
    return options_;
}

void CreateOfflineTaskReq::setOptions(const BackupRestoreOptionInfo& value)
{
    options_ = value;
    optionsIsSet_ = true;
}

bool CreateOfflineTaskReq::optionsIsSet() const
{
    return optionsIsSet_;
}

void CreateOfflineTaskReq::unsetoptions()
{
    optionsIsSet_ = false;
}

}
}
}
}
}


