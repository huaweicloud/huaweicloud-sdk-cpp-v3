

#include "huaweicloud/rds/v3/model/RecycleInstsanceV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RecycleInstsanceV3::RecycleInstsanceV3()
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
    volumeSize_ = 0;
    volumeSizeIsSet_ = false;
    dataVip_ = "";
    dataVipIsSet_ = false;
    dataVipV6_ = "";
    dataVipV6IsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    retainedUntil_ = "";
    retainedUntilIsSet_ = false;
    recycleBackupId_ = "";
    recycleBackupIdIsSet_ = false;
    recycleStatus_ = "";
    recycleStatusIsSet_ = false;
    isServerless_ = false;
    isServerlessIsSet_ = false;
}

RecycleInstsanceV3::~RecycleInstsanceV3() = default;

void RecycleInstsanceV3::validate()
{
}

web::json::value RecycleInstsanceV3::toJson() const
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
    if(dataVipV6IsSet_) {
        val[utility::conversions::to_string_t("data_vip_v6")] = ModelBase::toJson(dataVipV6_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(retainedUntilIsSet_) {
        val[utility::conversions::to_string_t("retained_until")] = ModelBase::toJson(retainedUntil_);
    }
    if(recycleBackupIdIsSet_) {
        val[utility::conversions::to_string_t("recycle_backup_id")] = ModelBase::toJson(recycleBackupId_);
    }
    if(recycleStatusIsSet_) {
        val[utility::conversions::to_string_t("recycle_status")] = ModelBase::toJson(recycleStatus_);
    }
    if(isServerlessIsSet_) {
        val[utility::conversions::to_string_t("is_serverless")] = ModelBase::toJson(isServerless_);
    }

    return val;
}
bool RecycleInstsanceV3::fromJson(const web::json::value& val)
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
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("data_vip_v6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_vip_v6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVipV6(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("retained_until"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retained_until"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetainedUntil(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_serverless"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_serverless"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsServerless(refVal);
        }
    }
    return ok;
}


std::string RecycleInstsanceV3::getId() const
{
    return id_;
}

void RecycleInstsanceV3::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RecycleInstsanceV3::idIsSet() const
{
    return idIsSet_;
}

void RecycleInstsanceV3::unsetid()
{
    idIsSet_ = false;
}

std::string RecycleInstsanceV3::getName() const
{
    return name_;
}

void RecycleInstsanceV3::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RecycleInstsanceV3::nameIsSet() const
{
    return nameIsSet_;
}

void RecycleInstsanceV3::unsetname()
{
    nameIsSet_ = false;
}

std::string RecycleInstsanceV3::getHaMode() const
{
    return haMode_;
}

void RecycleInstsanceV3::setHaMode(const std::string& value)
{
    haMode_ = value;
    haModeIsSet_ = true;
}

bool RecycleInstsanceV3::haModeIsSet() const
{
    return haModeIsSet_;
}

void RecycleInstsanceV3::unsethaMode()
{
    haModeIsSet_ = false;
}

std::string RecycleInstsanceV3::getEngineName() const
{
    return engineName_;
}

void RecycleInstsanceV3::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool RecycleInstsanceV3::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void RecycleInstsanceV3::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string RecycleInstsanceV3::getEngineVersion() const
{
    return engineVersion_;
}

void RecycleInstsanceV3::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool RecycleInstsanceV3::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void RecycleInstsanceV3::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string RecycleInstsanceV3::getPayModel() const
{
    return payModel_;
}

void RecycleInstsanceV3::setPayModel(const std::string& value)
{
    payModel_ = value;
    payModelIsSet_ = true;
}

bool RecycleInstsanceV3::payModelIsSet() const
{
    return payModelIsSet_;
}

void RecycleInstsanceV3::unsetpayModel()
{
    payModelIsSet_ = false;
}

std::string RecycleInstsanceV3::getCreatedAt() const
{
    return createdAt_;
}

void RecycleInstsanceV3::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RecycleInstsanceV3::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RecycleInstsanceV3::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string RecycleInstsanceV3::getDeletedAt() const
{
    return deletedAt_;
}

void RecycleInstsanceV3::setDeletedAt(const std::string& value)
{
    deletedAt_ = value;
    deletedAtIsSet_ = true;
}

bool RecycleInstsanceV3::deletedAtIsSet() const
{
    return deletedAtIsSet_;
}

void RecycleInstsanceV3::unsetdeletedAt()
{
    deletedAtIsSet_ = false;
}

std::string RecycleInstsanceV3::getVolumeType() const
{
    return volumeType_;
}

void RecycleInstsanceV3::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool RecycleInstsanceV3::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void RecycleInstsanceV3::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

int32_t RecycleInstsanceV3::getVolumeSize() const
{
    return volumeSize_;
}

void RecycleInstsanceV3::setVolumeSize(int32_t value)
{
    volumeSize_ = value;
    volumeSizeIsSet_ = true;
}

bool RecycleInstsanceV3::volumeSizeIsSet() const
{
    return volumeSizeIsSet_;
}

void RecycleInstsanceV3::unsetvolumeSize()
{
    volumeSizeIsSet_ = false;
}

std::string RecycleInstsanceV3::getDataVip() const
{
    return dataVip_;
}

void RecycleInstsanceV3::setDataVip(const std::string& value)
{
    dataVip_ = value;
    dataVipIsSet_ = true;
}

bool RecycleInstsanceV3::dataVipIsSet() const
{
    return dataVipIsSet_;
}

void RecycleInstsanceV3::unsetdataVip()
{
    dataVipIsSet_ = false;
}

std::string RecycleInstsanceV3::getDataVipV6() const
{
    return dataVipV6_;
}

void RecycleInstsanceV3::setDataVipV6(const std::string& value)
{
    dataVipV6_ = value;
    dataVipV6IsSet_ = true;
}

bool RecycleInstsanceV3::dataVipV6IsSet() const
{
    return dataVipV6IsSet_;
}

void RecycleInstsanceV3::unsetdataVipV6()
{
    dataVipV6IsSet_ = false;
}

std::string RecycleInstsanceV3::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void RecycleInstsanceV3::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool RecycleInstsanceV3::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void RecycleInstsanceV3::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string RecycleInstsanceV3::getRetainedUntil() const
{
    return retainedUntil_;
}

void RecycleInstsanceV3::setRetainedUntil(const std::string& value)
{
    retainedUntil_ = value;
    retainedUntilIsSet_ = true;
}

bool RecycleInstsanceV3::retainedUntilIsSet() const
{
    return retainedUntilIsSet_;
}

void RecycleInstsanceV3::unsetretainedUntil()
{
    retainedUntilIsSet_ = false;
}

std::string RecycleInstsanceV3::getRecycleBackupId() const
{
    return recycleBackupId_;
}

void RecycleInstsanceV3::setRecycleBackupId(const std::string& value)
{
    recycleBackupId_ = value;
    recycleBackupIdIsSet_ = true;
}

bool RecycleInstsanceV3::recycleBackupIdIsSet() const
{
    return recycleBackupIdIsSet_;
}

void RecycleInstsanceV3::unsetrecycleBackupId()
{
    recycleBackupIdIsSet_ = false;
}

std::string RecycleInstsanceV3::getRecycleStatus() const
{
    return recycleStatus_;
}

void RecycleInstsanceV3::setRecycleStatus(const std::string& value)
{
    recycleStatus_ = value;
    recycleStatusIsSet_ = true;
}

bool RecycleInstsanceV3::recycleStatusIsSet() const
{
    return recycleStatusIsSet_;
}

void RecycleInstsanceV3::unsetrecycleStatus()
{
    recycleStatusIsSet_ = false;
}

bool RecycleInstsanceV3::isIsServerless() const
{
    return isServerless_;
}

void RecycleInstsanceV3::setIsServerless(bool value)
{
    isServerless_ = value;
    isServerlessIsSet_ = true;
}

bool RecycleInstsanceV3::isServerlessIsSet() const
{
    return isServerlessIsSet_;
}

void RecycleInstsanceV3::unsetisServerless()
{
    isServerlessIsSet_ = false;
}

}
}
}
}
}


