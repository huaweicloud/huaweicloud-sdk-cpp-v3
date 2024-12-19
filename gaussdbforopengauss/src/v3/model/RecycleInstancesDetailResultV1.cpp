

#include "huaweicloud/gaussdbforopengauss/v3/model/RecycleInstancesDetailResultV1.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RecycleInstancesDetailResultV1::RecycleInstancesDetailResultV1()
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

RecycleInstancesDetailResultV1::~RecycleInstancesDetailResultV1() = default;

void RecycleInstancesDetailResultV1::validate()
{
}

web::json::value RecycleInstancesDetailResultV1::toJson() const
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
bool RecycleInstancesDetailResultV1::fromJson(const web::json::value& val)
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


std::string RecycleInstancesDetailResultV1::getId() const
{
    return id_;
}

void RecycleInstancesDetailResultV1::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RecycleInstancesDetailResultV1::idIsSet() const
{
    return idIsSet_;
}

void RecycleInstancesDetailResultV1::unsetid()
{
    idIsSet_ = false;
}

std::string RecycleInstancesDetailResultV1::getName() const
{
    return name_;
}

void RecycleInstancesDetailResultV1::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RecycleInstancesDetailResultV1::nameIsSet() const
{
    return nameIsSet_;
}

void RecycleInstancesDetailResultV1::unsetname()
{
    nameIsSet_ = false;
}

std::string RecycleInstancesDetailResultV1::getHaMode() const
{
    return haMode_;
}

void RecycleInstancesDetailResultV1::setHaMode(const std::string& value)
{
    haMode_ = value;
    haModeIsSet_ = true;
}

bool RecycleInstancesDetailResultV1::haModeIsSet() const
{
    return haModeIsSet_;
}

void RecycleInstancesDetailResultV1::unsethaMode()
{
    haModeIsSet_ = false;
}

std::string RecycleInstancesDetailResultV1::getEngineName() const
{
    return engineName_;
}

void RecycleInstancesDetailResultV1::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool RecycleInstancesDetailResultV1::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void RecycleInstancesDetailResultV1::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string RecycleInstancesDetailResultV1::getEngineVersion() const
{
    return engineVersion_;
}

void RecycleInstancesDetailResultV1::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool RecycleInstancesDetailResultV1::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void RecycleInstancesDetailResultV1::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string RecycleInstancesDetailResultV1::getPayModel() const
{
    return payModel_;
}

void RecycleInstancesDetailResultV1::setPayModel(const std::string& value)
{
    payModel_ = value;
    payModelIsSet_ = true;
}

bool RecycleInstancesDetailResultV1::payModelIsSet() const
{
    return payModelIsSet_;
}

void RecycleInstancesDetailResultV1::unsetpayModel()
{
    payModelIsSet_ = false;
}

std::string RecycleInstancesDetailResultV1::getCreatedAt() const
{
    return createdAt_;
}

void RecycleInstancesDetailResultV1::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RecycleInstancesDetailResultV1::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RecycleInstancesDetailResultV1::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string RecycleInstancesDetailResultV1::getDeletedAt() const
{
    return deletedAt_;
}

void RecycleInstancesDetailResultV1::setDeletedAt(const std::string& value)
{
    deletedAt_ = value;
    deletedAtIsSet_ = true;
}

bool RecycleInstancesDetailResultV1::deletedAtIsSet() const
{
    return deletedAtIsSet_;
}

void RecycleInstancesDetailResultV1::unsetdeletedAt()
{
    deletedAtIsSet_ = false;
}

std::string RecycleInstancesDetailResultV1::getVolumeType() const
{
    return volumeType_;
}

void RecycleInstancesDetailResultV1::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool RecycleInstancesDetailResultV1::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void RecycleInstancesDetailResultV1::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

std::string RecycleInstancesDetailResultV1::getVolumeSize() const
{
    return volumeSize_;
}

void RecycleInstancesDetailResultV1::setVolumeSize(const std::string& value)
{
    volumeSize_ = value;
    volumeSizeIsSet_ = true;
}

bool RecycleInstancesDetailResultV1::volumeSizeIsSet() const
{
    return volumeSizeIsSet_;
}

void RecycleInstancesDetailResultV1::unsetvolumeSize()
{
    volumeSizeIsSet_ = false;
}

std::string RecycleInstancesDetailResultV1::getDataVip() const
{
    return dataVip_;
}

void RecycleInstancesDetailResultV1::setDataVip(const std::string& value)
{
    dataVip_ = value;
    dataVipIsSet_ = true;
}

bool RecycleInstancesDetailResultV1::dataVipIsSet() const
{
    return dataVipIsSet_;
}

void RecycleInstancesDetailResultV1::unsetdataVip()
{
    dataVipIsSet_ = false;
}

std::string RecycleInstancesDetailResultV1::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecycleInstancesDetailResultV1::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecycleInstancesDetailResultV1::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecycleInstancesDetailResultV1::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string RecycleInstancesDetailResultV1::getEnterpriseProjectName() const
{
    return enterpriseProjectName_;
}

void RecycleInstancesDetailResultV1::setEnterpriseProjectName(const std::string& value)
{
    enterpriseProjectName_ = value;
    enterpriseProjectNameIsSet_ = true;
}

bool RecycleInstancesDetailResultV1::enterpriseProjectNameIsSet() const
{
    return enterpriseProjectNameIsSet_;
}

void RecycleInstancesDetailResultV1::unsetenterpriseProjectName()
{
    enterpriseProjectNameIsSet_ = false;
}

std::string RecycleInstancesDetailResultV1::getBackupLevel() const
{
    return backupLevel_;
}

void RecycleInstancesDetailResultV1::setBackupLevel(const std::string& value)
{
    backupLevel_ = value;
    backupLevelIsSet_ = true;
}

bool RecycleInstancesDetailResultV1::backupLevelIsSet() const
{
    return backupLevelIsSet_;
}

void RecycleInstancesDetailResultV1::unsetbackupLevel()
{
    backupLevelIsSet_ = false;
}

std::string RecycleInstancesDetailResultV1::getRecycleBackupId() const
{
    return recycleBackupId_;
}

void RecycleInstancesDetailResultV1::setRecycleBackupId(const std::string& value)
{
    recycleBackupId_ = value;
    recycleBackupIdIsSet_ = true;
}

bool RecycleInstancesDetailResultV1::recycleBackupIdIsSet() const
{
    return recycleBackupIdIsSet_;
}

void RecycleInstancesDetailResultV1::unsetrecycleBackupId()
{
    recycleBackupIdIsSet_ = false;
}

std::string RecycleInstancesDetailResultV1::getRecycleStatus() const
{
    return recycleStatus_;
}

void RecycleInstancesDetailResultV1::setRecycleStatus(const std::string& value)
{
    recycleStatus_ = value;
    recycleStatusIsSet_ = true;
}

bool RecycleInstancesDetailResultV1::recycleStatusIsSet() const
{
    return recycleStatusIsSet_;
}

void RecycleInstancesDetailResultV1::unsetrecycleStatus()
{
    recycleStatusIsSet_ = false;
}

std::string RecycleInstancesDetailResultV1::getMode() const
{
    return mode_;
}

void RecycleInstancesDetailResultV1::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool RecycleInstancesDetailResultV1::modeIsSet() const
{
    return modeIsSet_;
}

void RecycleInstancesDetailResultV1::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


