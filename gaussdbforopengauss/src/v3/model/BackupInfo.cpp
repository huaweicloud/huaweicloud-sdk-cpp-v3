

#include "huaweicloud/gaussdbforopengauss/v3/model/BackupInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BackupInfo::BackupInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

BackupInfo::~BackupInfo() = default;

void BackupInfo::validate()
{
}

web::json::value BackupInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}

bool BackupInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    return ok;
}

std::string BackupInfo::getId() const
{
    return id_;
}

void BackupInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BackupInfo::idIsSet() const
{
    return idIsSet_;
}

void BackupInfo::unsetid()
{
    idIsSet_ = false;
}

std::string BackupInfo::getName() const
{
    return name_;
}

void BackupInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BackupInfo::nameIsSet() const
{
    return nameIsSet_;
}

void BackupInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string BackupInfo::getDescription() const
{
    return description_;
}

void BackupInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BackupInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BackupInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string BackupInfo::getBeginTime() const
{
    return beginTime_;
}

void BackupInfo::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool BackupInfo::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void BackupInfo::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string BackupInfo::getStatus() const
{
    return status_;
}

void BackupInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BackupInfo::statusIsSet() const
{
    return statusIsSet_;
}

void BackupInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BackupInfo::getType() const
{
    return type_;
}

void BackupInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BackupInfo::typeIsSet() const
{
    return typeIsSet_;
}

void BackupInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string BackupInfo::getInstanceId() const
{
    return instanceId_;
}

void BackupInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BackupInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BackupInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


