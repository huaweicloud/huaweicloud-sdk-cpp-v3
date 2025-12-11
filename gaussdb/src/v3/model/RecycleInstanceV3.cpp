

#include "huaweicloud/gaussdb/v3/model/RecycleInstanceV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RecycleInstanceV3::RecycleInstanceV3()
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
    createAt_ = 0L;
    createAtIsSet_ = false;
    deletedAt_ = 0L;
    deletedAtIsSet_ = false;
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    volumeSize_ = "";
    volumeSizeIsSet_ = false;
    dataVip_ = "";
    dataVipIsSet_ = false;
    dataVipIpv6_ = "";
    dataVipIpv6IsSet_ = false;
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
    recycleBakcupsIsSet_ = false;
}

RecycleInstanceV3::~RecycleInstanceV3() = default;

void RecycleInstanceV3::validate()
{
}

web::json::value RecycleInstanceV3::toJson() const
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
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
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
    if(dataVipIpv6IsSet_) {
        val[utility::conversions::to_string_t("data_vip_ipv6")] = ModelBase::toJson(dataVipIpv6_);
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
    if(recycleBakcupsIsSet_) {
        val[utility::conversions::to_string_t("recycle_bakcups")] = ModelBase::toJson(recycleBakcups_);
    }

    return val;
}
bool RecycleInstanceV3::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("data_vip_ipv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_vip_ipv6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVipIpv6(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("recycle_bakcups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recycle_bakcups"));
        if(!fieldValue.is_null())
        {
            std::vector<RecycleBackupV3> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecycleBakcups(refVal);
        }
    }
    return ok;
}


std::string RecycleInstanceV3::getId() const
{
    return id_;
}

void RecycleInstanceV3::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RecycleInstanceV3::idIsSet() const
{
    return idIsSet_;
}

void RecycleInstanceV3::unsetid()
{
    idIsSet_ = false;
}

std::string RecycleInstanceV3::getName() const
{
    return name_;
}

void RecycleInstanceV3::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RecycleInstanceV3::nameIsSet() const
{
    return nameIsSet_;
}

void RecycleInstanceV3::unsetname()
{
    nameIsSet_ = false;
}

std::string RecycleInstanceV3::getHaMode() const
{
    return haMode_;
}

void RecycleInstanceV3::setHaMode(const std::string& value)
{
    haMode_ = value;
    haModeIsSet_ = true;
}

bool RecycleInstanceV3::haModeIsSet() const
{
    return haModeIsSet_;
}

void RecycleInstanceV3::unsethaMode()
{
    haModeIsSet_ = false;
}

std::string RecycleInstanceV3::getEngineName() const
{
    return engineName_;
}

void RecycleInstanceV3::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool RecycleInstanceV3::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void RecycleInstanceV3::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string RecycleInstanceV3::getEngineVersion() const
{
    return engineVersion_;
}

void RecycleInstanceV3::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool RecycleInstanceV3::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void RecycleInstanceV3::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string RecycleInstanceV3::getPayModel() const
{
    return payModel_;
}

void RecycleInstanceV3::setPayModel(const std::string& value)
{
    payModel_ = value;
    payModelIsSet_ = true;
}

bool RecycleInstanceV3::payModelIsSet() const
{
    return payModelIsSet_;
}

void RecycleInstanceV3::unsetpayModel()
{
    payModelIsSet_ = false;
}

int64_t RecycleInstanceV3::getCreateAt() const
{
    return createAt_;
}

void RecycleInstanceV3::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool RecycleInstanceV3::createAtIsSet() const
{
    return createAtIsSet_;
}

void RecycleInstanceV3::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t RecycleInstanceV3::getDeletedAt() const
{
    return deletedAt_;
}

void RecycleInstanceV3::setDeletedAt(int64_t value)
{
    deletedAt_ = value;
    deletedAtIsSet_ = true;
}

bool RecycleInstanceV3::deletedAtIsSet() const
{
    return deletedAtIsSet_;
}

void RecycleInstanceV3::unsetdeletedAt()
{
    deletedAtIsSet_ = false;
}

std::string RecycleInstanceV3::getVolumeType() const
{
    return volumeType_;
}

void RecycleInstanceV3::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool RecycleInstanceV3::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void RecycleInstanceV3::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

std::string RecycleInstanceV3::getVolumeSize() const
{
    return volumeSize_;
}

void RecycleInstanceV3::setVolumeSize(const std::string& value)
{
    volumeSize_ = value;
    volumeSizeIsSet_ = true;
}

bool RecycleInstanceV3::volumeSizeIsSet() const
{
    return volumeSizeIsSet_;
}

void RecycleInstanceV3::unsetvolumeSize()
{
    volumeSizeIsSet_ = false;
}

std::string RecycleInstanceV3::getDataVip() const
{
    return dataVip_;
}

void RecycleInstanceV3::setDataVip(const std::string& value)
{
    dataVip_ = value;
    dataVipIsSet_ = true;
}

bool RecycleInstanceV3::dataVipIsSet() const
{
    return dataVipIsSet_;
}

void RecycleInstanceV3::unsetdataVip()
{
    dataVipIsSet_ = false;
}

std::string RecycleInstanceV3::getDataVipIpv6() const
{
    return dataVipIpv6_;
}

void RecycleInstanceV3::setDataVipIpv6(const std::string& value)
{
    dataVipIpv6_ = value;
    dataVipIpv6IsSet_ = true;
}

bool RecycleInstanceV3::dataVipIpv6IsSet() const
{
    return dataVipIpv6IsSet_;
}

void RecycleInstanceV3::unsetdataVipIpv6()
{
    dataVipIpv6IsSet_ = false;
}

std::string RecycleInstanceV3::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecycleInstanceV3::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecycleInstanceV3::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecycleInstanceV3::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string RecycleInstanceV3::getEnterpriseProjectName() const
{
    return enterpriseProjectName_;
}

void RecycleInstanceV3::setEnterpriseProjectName(const std::string& value)
{
    enterpriseProjectName_ = value;
    enterpriseProjectNameIsSet_ = true;
}

bool RecycleInstanceV3::enterpriseProjectNameIsSet() const
{
    return enterpriseProjectNameIsSet_;
}

void RecycleInstanceV3::unsetenterpriseProjectName()
{
    enterpriseProjectNameIsSet_ = false;
}

std::string RecycleInstanceV3::getBackupLevel() const
{
    return backupLevel_;
}

void RecycleInstanceV3::setBackupLevel(const std::string& value)
{
    backupLevel_ = value;
    backupLevelIsSet_ = true;
}

bool RecycleInstanceV3::backupLevelIsSet() const
{
    return backupLevelIsSet_;
}

void RecycleInstanceV3::unsetbackupLevel()
{
    backupLevelIsSet_ = false;
}

std::string RecycleInstanceV3::getRecycleBackupId() const
{
    return recycleBackupId_;
}

void RecycleInstanceV3::setRecycleBackupId(const std::string& value)
{
    recycleBackupId_ = value;
    recycleBackupIdIsSet_ = true;
}

bool RecycleInstanceV3::recycleBackupIdIsSet() const
{
    return recycleBackupIdIsSet_;
}

void RecycleInstanceV3::unsetrecycleBackupId()
{
    recycleBackupIdIsSet_ = false;
}

std::string RecycleInstanceV3::getRecycleStatus() const
{
    return recycleStatus_;
}

void RecycleInstanceV3::setRecycleStatus(const std::string& value)
{
    recycleStatus_ = value;
    recycleStatusIsSet_ = true;
}

bool RecycleInstanceV3::recycleStatusIsSet() const
{
    return recycleStatusIsSet_;
}

void RecycleInstanceV3::unsetrecycleStatus()
{
    recycleStatusIsSet_ = false;
}

std::vector<RecycleBackupV3>& RecycleInstanceV3::getRecycleBakcups()
{
    return recycleBakcups_;
}

void RecycleInstanceV3::setRecycleBakcups(const std::vector<RecycleBackupV3>& value)
{
    recycleBakcups_ = value;
    recycleBakcupsIsSet_ = true;
}

bool RecycleInstanceV3::recycleBakcupsIsSet() const
{
    return recycleBakcupsIsSet_;
}

void RecycleInstanceV3::unsetrecycleBakcups()
{
    recycleBakcupsIsSet_ = false;
}

}
}
}
}
}


