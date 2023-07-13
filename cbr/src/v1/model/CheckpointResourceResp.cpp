

#include "huaweicloud/cbr/v1/model/CheckpointResourceResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CheckpointResourceResp::CheckpointResourceResp()
{
    extraInfo_ = "";
    extraInfoIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    protectStatus_ = "";
    protectStatusIsSet_ = false;
    resourceSize_ = "";
    resourceSizeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    backupSize_ = "";
    backupSizeIsSet_ = false;
    backupCount_ = "";
    backupCountIsSet_ = false;
}

CheckpointResourceResp::~CheckpointResourceResp() = default;

void CheckpointResourceResp::validate()
{
}

web::json::value CheckpointResourceResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(extraInfoIsSet_) {
        val[utility::conversions::to_string_t("extra_info")] = ModelBase::toJson(extraInfo_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(protectStatusIsSet_) {
        val[utility::conversions::to_string_t("protect_status")] = ModelBase::toJson(protectStatus_);
    }
    if(resourceSizeIsSet_) {
        val[utility::conversions::to_string_t("resource_size")] = ModelBase::toJson(resourceSize_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(backupSizeIsSet_) {
        val[utility::conversions::to_string_t("backup_size")] = ModelBase::toJson(backupSize_);
    }
    if(backupCountIsSet_) {
        val[utility::conversions::to_string_t("backup_count")] = ModelBase::toJson(backupCount_);
    }

    return val;
}

bool CheckpointResourceResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("extra_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraInfo(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("protect_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protect_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("backup_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupCount(refVal);
        }
    }
    return ok;
}

std::string CheckpointResourceResp::getExtraInfo() const
{
    return extraInfo_;
}

void CheckpointResourceResp::setExtraInfo(const std::string& value)
{
    extraInfo_ = value;
    extraInfoIsSet_ = true;
}

bool CheckpointResourceResp::extraInfoIsSet() const
{
    return extraInfoIsSet_;
}

void CheckpointResourceResp::unsetextraInfo()
{
    extraInfoIsSet_ = false;
}

std::string CheckpointResourceResp::getId() const
{
    return id_;
}

void CheckpointResourceResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CheckpointResourceResp::idIsSet() const
{
    return idIsSet_;
}

void CheckpointResourceResp::unsetid()
{
    idIsSet_ = false;
}

std::string CheckpointResourceResp::getName() const
{
    return name_;
}

void CheckpointResourceResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CheckpointResourceResp::nameIsSet() const
{
    return nameIsSet_;
}

void CheckpointResourceResp::unsetname()
{
    nameIsSet_ = false;
}

std::string CheckpointResourceResp::getProtectStatus() const
{
    return protectStatus_;
}

void CheckpointResourceResp::setProtectStatus(const std::string& value)
{
    protectStatus_ = value;
    protectStatusIsSet_ = true;
}

bool CheckpointResourceResp::protectStatusIsSet() const
{
    return protectStatusIsSet_;
}

void CheckpointResourceResp::unsetprotectStatus()
{
    protectStatusIsSet_ = false;
}

std::string CheckpointResourceResp::getResourceSize() const
{
    return resourceSize_;
}

void CheckpointResourceResp::setResourceSize(const std::string& value)
{
    resourceSize_ = value;
    resourceSizeIsSet_ = true;
}

bool CheckpointResourceResp::resourceSizeIsSet() const
{
    return resourceSizeIsSet_;
}

void CheckpointResourceResp::unsetresourceSize()
{
    resourceSizeIsSet_ = false;
}

std::string CheckpointResourceResp::getType() const
{
    return type_;
}

void CheckpointResourceResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CheckpointResourceResp::typeIsSet() const
{
    return typeIsSet_;
}

void CheckpointResourceResp::unsettype()
{
    typeIsSet_ = false;
}

std::string CheckpointResourceResp::getBackupSize() const
{
    return backupSize_;
}

void CheckpointResourceResp::setBackupSize(const std::string& value)
{
    backupSize_ = value;
    backupSizeIsSet_ = true;
}

bool CheckpointResourceResp::backupSizeIsSet() const
{
    return backupSizeIsSet_;
}

void CheckpointResourceResp::unsetbackupSize()
{
    backupSizeIsSet_ = false;
}

std::string CheckpointResourceResp::getBackupCount() const
{
    return backupCount_;
}

void CheckpointResourceResp::setBackupCount(const std::string& value)
{
    backupCount_ = value;
    backupCountIsSet_ = true;
}

bool CheckpointResourceResp::backupCountIsSet() const
{
    return backupCountIsSet_;
}

void CheckpointResourceResp::unsetbackupCount()
{
    backupCountIsSet_ = false;
}

}
}
}
}
}


