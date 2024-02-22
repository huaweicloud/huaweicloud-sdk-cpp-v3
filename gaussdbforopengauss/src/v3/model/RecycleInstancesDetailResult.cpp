

#include "huaweicloud/gaussdbforopengauss/v3/model/RecycleInstancesDetailResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RecycleInstancesDetailResult::RecycleInstancesDetailResult()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    haMode_ = "";
    haModeIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    payModel_ = "";
    payModelIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    deletedAt_ = "";
    deletedAtIsSet_ = false;
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    volumeSize_ = "";
    volumeSizeIsSet_ = false;
    dataVip_ = "";
    dataVipIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    enterpriseProjectName_ = "";
    enterpriseProjectNameIsSet_ = false;
    backupLevel_ = "";
    backupLevelIsSet_ = false;
    recycleBackupId_ = "";
    recycleBackupIdIsSet_ = false;
    recycleStatus_ = "";
    recycleStatusIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

RecycleInstancesDetailResult::~RecycleInstancesDetailResult() = default;

void RecycleInstancesDetailResult::validate()
{
}

web::json::value RecycleInstancesDetailResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(haModeIsSet_) {
        val[utility::conversions::to_string_t("ha_mode")] = ModelBase::toJson(haMode_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(payModelIsSet_) {
        val[utility::conversions::to_string_t("pay_model")] = ModelBase::toJson(payModel_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(deletedAtIsSet_) {
        val[utility::conversions::to_string_t("deleted_at")] = ModelBase::toJson(deletedAt_);
    }
    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volume_type")] = ModelBase::toJson(volumeType_);
    }
    if(volumeSizeIsSet_) {
        val[utility::conversions::to_string_t("volume_size")] = ModelBase::toJson(volumeSize_);
    }
    if(dataVipIsSet_) {
        val[utility::conversions::to_string_t("data_vip")] = ModelBase::toJson(dataVip_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(enterpriseProjectNameIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_name")] = ModelBase::toJson(enterpriseProjectName_);
    }
    if(backupLevelIsSet_) {
        val[utility::conversions::to_string_t("backup_level")] = ModelBase::toJson(backupLevel_);
    }
    if(recycleBackupIdIsSet_) {
        val[utility::conversions::to_string_t("recycle_backup_id")] = ModelBase::toJson(recycleBackupId_);
    }
    if(recycleStatusIsSet_) {
        val[utility::conversions::to_string_t("recycle_status")] = ModelBase::toJson(recycleStatus_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool RecycleInstancesDetailResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ha_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHaMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pay_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pay_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPayModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_vip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_vip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recycle_backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recycle_backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecycleBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recycle_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recycle_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecycleStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string RecycleInstancesDetailResult::getId() const
{
    return id_;
}

void RecycleInstancesDetailResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RecycleInstancesDetailResult::idIsSet() const
{
    return idIsSet_;
}

void RecycleInstancesDetailResult::unsetid()
{
    idIsSet_ = false;
}

std::string RecycleInstancesDetailResult::getName() const
{
    return name_;
}

void RecycleInstancesDetailResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RecycleInstancesDetailResult::nameIsSet() const
{
    return nameIsSet_;
}

void RecycleInstancesDetailResult::unsetname()
{
    nameIsSet_ = false;
}

std::string RecycleInstancesDetailResult::getHaMode() const
{
    return haMode_;
}

void RecycleInstancesDetailResult::setHaMode(const std::string& value)
{
    haMode_ = value;
    haModeIsSet_ = true;
}

bool RecycleInstancesDetailResult::haModeIsSet() const
{
    return haModeIsSet_;
}

void RecycleInstancesDetailResult::unsethaMode()
{
    haModeIsSet_ = false;
}

std::string RecycleInstancesDetailResult::getEngineName() const
{
    return engineName_;
}

void RecycleInstancesDetailResult::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool RecycleInstancesDetailResult::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void RecycleInstancesDetailResult::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string RecycleInstancesDetailResult::getEngineVersion() const
{
    return engineVersion_;
}

void RecycleInstancesDetailResult::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool RecycleInstancesDetailResult::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void RecycleInstancesDetailResult::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string RecycleInstancesDetailResult::getPayModel() const
{
    return payModel_;
}

void RecycleInstancesDetailResult::setPayModel(const std::string& value)
{
    payModel_ = value;
    payModelIsSet_ = true;
}

bool RecycleInstancesDetailResult::payModelIsSet() const
{
    return payModelIsSet_;
}

void RecycleInstancesDetailResult::unsetpayModel()
{
    payModelIsSet_ = false;
}

std::string RecycleInstancesDetailResult::getCreatedAt() const
{
    return createdAt_;
}

void RecycleInstancesDetailResult::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RecycleInstancesDetailResult::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RecycleInstancesDetailResult::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string RecycleInstancesDetailResult::getDeletedAt() const
{
    return deletedAt_;
}

void RecycleInstancesDetailResult::setDeletedAt(const std::string& value)
{
    deletedAt_ = value;
    deletedAtIsSet_ = true;
}

bool RecycleInstancesDetailResult::deletedAtIsSet() const
{
    return deletedAtIsSet_;
}

void RecycleInstancesDetailResult::unsetdeletedAt()
{
    deletedAtIsSet_ = false;
}

std::string RecycleInstancesDetailResult::getVolumeType() const
{
    return volumeType_;
}

void RecycleInstancesDetailResult::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool RecycleInstancesDetailResult::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void RecycleInstancesDetailResult::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

std::string RecycleInstancesDetailResult::getVolumeSize() const
{
    return volumeSize_;
}

void RecycleInstancesDetailResult::setVolumeSize(const std::string& value)
{
    volumeSize_ = value;
    volumeSizeIsSet_ = true;
}

bool RecycleInstancesDetailResult::volumeSizeIsSet() const
{
    return volumeSizeIsSet_;
}

void RecycleInstancesDetailResult::unsetvolumeSize()
{
    volumeSizeIsSet_ = false;
}

std::string RecycleInstancesDetailResult::getDataVip() const
{
    return dataVip_;
}

void RecycleInstancesDetailResult::setDataVip(const std::string& value)
{
    dataVip_ = value;
    dataVipIsSet_ = true;
}

bool RecycleInstancesDetailResult::dataVipIsSet() const
{
    return dataVipIsSet_;
}

void RecycleInstancesDetailResult::unsetdataVip()
{
    dataVipIsSet_ = false;
}

std::string RecycleInstancesDetailResult::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecycleInstancesDetailResult::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecycleInstancesDetailResult::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecycleInstancesDetailResult::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string RecycleInstancesDetailResult::getEnterpriseProjectName() const
{
    return enterpriseProjectName_;
}

void RecycleInstancesDetailResult::setEnterpriseProjectName(const std::string& value)
{
    enterpriseProjectName_ = value;
    enterpriseProjectNameIsSet_ = true;
}

bool RecycleInstancesDetailResult::enterpriseProjectNameIsSet() const
{
    return enterpriseProjectNameIsSet_;
}

void RecycleInstancesDetailResult::unsetenterpriseProjectName()
{
    enterpriseProjectNameIsSet_ = false;
}

std::string RecycleInstancesDetailResult::getBackupLevel() const
{
    return backupLevel_;
}

void RecycleInstancesDetailResult::setBackupLevel(const std::string& value)
{
    backupLevel_ = value;
    backupLevelIsSet_ = true;
}

bool RecycleInstancesDetailResult::backupLevelIsSet() const
{
    return backupLevelIsSet_;
}

void RecycleInstancesDetailResult::unsetbackupLevel()
{
    backupLevelIsSet_ = false;
}

std::string RecycleInstancesDetailResult::getRecycleBackupId() const
{
    return recycleBackupId_;
}

void RecycleInstancesDetailResult::setRecycleBackupId(const std::string& value)
{
    recycleBackupId_ = value;
    recycleBackupIdIsSet_ = true;
}

bool RecycleInstancesDetailResult::recycleBackupIdIsSet() const
{
    return recycleBackupIdIsSet_;
}

void RecycleInstancesDetailResult::unsetrecycleBackupId()
{
    recycleBackupIdIsSet_ = false;
}

std::string RecycleInstancesDetailResult::getRecycleStatus() const
{
    return recycleStatus_;
}

void RecycleInstancesDetailResult::setRecycleStatus(const std::string& value)
{
    recycleStatus_ = value;
    recycleStatusIsSet_ = true;
}

bool RecycleInstancesDetailResult::recycleStatusIsSet() const
{
    return recycleStatusIsSet_;
}

void RecycleInstancesDetailResult::unsetrecycleStatus()
{
    recycleStatusIsSet_ = false;
}

std::string RecycleInstancesDetailResult::getMode() const
{
    return mode_;
}

void RecycleInstancesDetailResult::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool RecycleInstancesDetailResult::modeIsSet() const
{
    return modeIsSet_;
}

void RecycleInstancesDetailResult::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


