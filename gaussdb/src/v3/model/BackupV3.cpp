

#include "huaweicloud/gaussdb/v3/model/BackupV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BackupV3::BackupV3()
{
    id_ = "";
    idIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
    sizeUnit_ = "";
    sizeUnitIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    backupType_ = "";
    backupTypeIsSet_ = false;
    backupLevel_ = "";
    backupLevelIsSet_ = false;
    backupMethod_ = "";
    backupMethodIsSet_ = false;
    useDetail_ = "";
    useDetailIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
}

BackupV3::~BackupV3() = default;

void BackupV3::validate()
{
}

web::json::value BackupV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(sizeUnitIsSet_) {
        val[utility::conversions::to_string_t("size_unit")] = ModelBase::toJson(sizeUnit_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(backupTypeIsSet_) {
        val[utility::conversions::to_string_t("backup_type")] = ModelBase::toJson(backupType_);
    }
    if(backupLevelIsSet_) {
        val[utility::conversions::to_string_t("backup_level")] = ModelBase::toJson(backupLevel_);
    }
    if(backupMethodIsSet_) {
        val[utility::conversions::to_string_t("backup_method")] = ModelBase::toJson(backupMethod_);
    }
    if(useDetailIsSet_) {
        val[utility::conversions::to_string_t("use_detail")] = ModelBase::toJson(useDetail_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }

    return val;
}
bool BackupV3::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSizeUnit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("backup_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("use_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("use_detail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUseDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZone(refVal);
        }
    }
    return ok;
}


std::string BackupV3::getId() const
{
    return id_;
}

void BackupV3::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BackupV3::idIsSet() const
{
    return idIsSet_;
}

void BackupV3::unsetid()
{
    idIsSet_ = false;
}

std::string BackupV3::getDescription() const
{
    return description_;
}

void BackupV3::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BackupV3::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BackupV3::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string BackupV3::getInstanceId() const
{
    return instanceId_;
}

void BackupV3::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BackupV3::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BackupV3::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string BackupV3::getInstanceName() const
{
    return instanceName_;
}

void BackupV3::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool BackupV3::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void BackupV3::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string BackupV3::getName() const
{
    return name_;
}

void BackupV3::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BackupV3::nameIsSet() const
{
    return nameIsSet_;
}

void BackupV3::unsetname()
{
    nameIsSet_ = false;
}

std::string BackupV3::getSize() const
{
    return size_;
}

void BackupV3::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BackupV3::sizeIsSet() const
{
    return sizeIsSet_;
}

void BackupV3::unsetsize()
{
    sizeIsSet_ = false;
}

std::string BackupV3::getSizeUnit() const
{
    return sizeUnit_;
}

void BackupV3::setSizeUnit(const std::string& value)
{
    sizeUnit_ = value;
    sizeUnitIsSet_ = true;
}

bool BackupV3::sizeUnitIsSet() const
{
    return sizeUnitIsSet_;
}

void BackupV3::unsetsizeUnit()
{
    sizeUnitIsSet_ = false;
}

std::string BackupV3::getStatus() const
{
    return status_;
}

void BackupV3::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BackupV3::statusIsSet() const
{
    return statusIsSet_;
}

void BackupV3::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BackupV3::getCreated() const
{
    return created_;
}

void BackupV3::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool BackupV3::createdIsSet() const
{
    return createdIsSet_;
}

void BackupV3::unsetcreated()
{
    createdIsSet_ = false;
}

std::string BackupV3::getUpdated() const
{
    return updated_;
}

void BackupV3::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool BackupV3::updatedIsSet() const
{
    return updatedIsSet_;
}

void BackupV3::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string BackupV3::getBackupType() const
{
    return backupType_;
}

void BackupV3::setBackupType(const std::string& value)
{
    backupType_ = value;
    backupTypeIsSet_ = true;
}

bool BackupV3::backupTypeIsSet() const
{
    return backupTypeIsSet_;
}

void BackupV3::unsetbackupType()
{
    backupTypeIsSet_ = false;
}

std::string BackupV3::getBackupLevel() const
{
    return backupLevel_;
}

void BackupV3::setBackupLevel(const std::string& value)
{
    backupLevel_ = value;
    backupLevelIsSet_ = true;
}

bool BackupV3::backupLevelIsSet() const
{
    return backupLevelIsSet_;
}

void BackupV3::unsetbackupLevel()
{
    backupLevelIsSet_ = false;
}

std::string BackupV3::getBackupMethod() const
{
    return backupMethod_;
}

void BackupV3::setBackupMethod(const std::string& value)
{
    backupMethod_ = value;
    backupMethodIsSet_ = true;
}

bool BackupV3::backupMethodIsSet() const
{
    return backupMethodIsSet_;
}

void BackupV3::unsetbackupMethod()
{
    backupMethodIsSet_ = false;
}

std::string BackupV3::getUseDetail() const
{
    return useDetail_;
}

void BackupV3::setUseDetail(const std::string& value)
{
    useDetail_ = value;
    useDetailIsSet_ = true;
}

bool BackupV3::useDetailIsSet() const
{
    return useDetailIsSet_;
}

void BackupV3::unsetuseDetail()
{
    useDetailIsSet_ = false;
}

std::string BackupV3::getTimeZone() const
{
    return timeZone_;
}

void BackupV3::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool BackupV3::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void BackupV3::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

}
}
}
}
}


