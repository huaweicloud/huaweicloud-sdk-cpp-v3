

#include "huaweicloud/cbr/v1/model/ResourceResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ResourceResp::ResourceResp()
{
    extraInfoIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    protectStatus_ = "";
    protectStatusIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    backupSize_ = 0;
    backupSizeIsSet_ = false;
    backupCount_ = 0;
    backupCountIsSet_ = false;
    autoProtect_ = false;
    autoProtectIsSet_ = false;
}

ResourceResp::~ResourceResp() = default;

void ResourceResp::validate()
{
}

web::json::value ResourceResp::toJson() const
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
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
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
    if(autoProtectIsSet_) {
        val[utility::conversions::to_string_t("auto_protect")] = ModelBase::toJson(autoProtect_);
    }

    return val;
}

bool ResourceResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("extra_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_info"));
        if(!fieldValue.is_null())
        {
            ResourceExtraInfo refVal;
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_protect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_protect"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoProtect(refVal);
        }
    }
    return ok;
}


ResourceExtraInfo ResourceResp::getExtraInfo() const
{
    return extraInfo_;
}

void ResourceResp::setExtraInfo(const ResourceExtraInfo& value)
{
    extraInfo_ = value;
    extraInfoIsSet_ = true;
}

bool ResourceResp::extraInfoIsSet() const
{
    return extraInfoIsSet_;
}

void ResourceResp::unsetextraInfo()
{
    extraInfoIsSet_ = false;
}

std::string ResourceResp::getId() const
{
    return id_;
}

void ResourceResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ResourceResp::idIsSet() const
{
    return idIsSet_;
}

void ResourceResp::unsetid()
{
    idIsSet_ = false;
}

std::string ResourceResp::getName() const
{
    return name_;
}

void ResourceResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ResourceResp::nameIsSet() const
{
    return nameIsSet_;
}

void ResourceResp::unsetname()
{
    nameIsSet_ = false;
}

std::string ResourceResp::getProtectStatus() const
{
    return protectStatus_;
}

void ResourceResp::setProtectStatus(const std::string& value)
{
    protectStatus_ = value;
    protectStatusIsSet_ = true;
}

bool ResourceResp::protectStatusIsSet() const
{
    return protectStatusIsSet_;
}

void ResourceResp::unsetprotectStatus()
{
    protectStatusIsSet_ = false;
}

int32_t ResourceResp::getSize() const
{
    return size_;
}

void ResourceResp::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ResourceResp::sizeIsSet() const
{
    return sizeIsSet_;
}

void ResourceResp::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ResourceResp::getType() const
{
    return type_;
}

void ResourceResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ResourceResp::typeIsSet() const
{
    return typeIsSet_;
}

void ResourceResp::unsettype()
{
    typeIsSet_ = false;
}

int32_t ResourceResp::getBackupSize() const
{
    return backupSize_;
}

void ResourceResp::setBackupSize(int32_t value)
{
    backupSize_ = value;
    backupSizeIsSet_ = true;
}

bool ResourceResp::backupSizeIsSet() const
{
    return backupSizeIsSet_;
}

void ResourceResp::unsetbackupSize()
{
    backupSizeIsSet_ = false;
}

int32_t ResourceResp::getBackupCount() const
{
    return backupCount_;
}

void ResourceResp::setBackupCount(int32_t value)
{
    backupCount_ = value;
    backupCountIsSet_ = true;
}

bool ResourceResp::backupCountIsSet() const
{
    return backupCountIsSet_;
}

void ResourceResp::unsetbackupCount()
{
    backupCountIsSet_ = false;
}

bool ResourceResp::isAutoProtect() const
{
    return autoProtect_;
}

void ResourceResp::setAutoProtect(bool value)
{
    autoProtect_ = value;
    autoProtectIsSet_ = true;
}

bool ResourceResp::autoProtectIsSet() const
{
    return autoProtectIsSet_;
}

void ResourceResp::unsetautoProtect()
{
    autoProtectIsSet_ = false;
}

}
}
}
}
}


