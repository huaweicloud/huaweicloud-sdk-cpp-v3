

#include "huaweicloud/dds/v3/model/BackupForList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




BackupForList::BackupForList()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    datastoreIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

BackupForList::~BackupForList() = default;

void BackupForList::validate()
{
}

web::json::value BackupForList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool BackupForList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            BackupDatabase refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
    return ok;
}

std::string BackupForList::getId() const
{
    return id_;
}

void BackupForList::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BackupForList::idIsSet() const
{
    return idIsSet_;
}

void BackupForList::unsetid()
{
    idIsSet_ = false;
}

std::string BackupForList::getName() const
{
    return name_;
}

void BackupForList::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BackupForList::nameIsSet() const
{
    return nameIsSet_;
}

void BackupForList::unsetname()
{
    nameIsSet_ = false;
}

std::string BackupForList::getInstanceId() const
{
    return instanceId_;
}

void BackupForList::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BackupForList::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BackupForList::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string BackupForList::getInstanceName() const
{
    return instanceName_;
}

void BackupForList::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool BackupForList::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void BackupForList::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

BackupDatabase BackupForList::getDatastore() const
{
    return datastore_;
}

void BackupForList::setDatastore(const BackupDatabase& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool BackupForList::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void BackupForList::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string BackupForList::getType() const
{
    return type_;
}

void BackupForList::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BackupForList::typeIsSet() const
{
    return typeIsSet_;
}

void BackupForList::unsettype()
{
    typeIsSet_ = false;
}

std::string BackupForList::getBeginTime() const
{
    return beginTime_;
}

void BackupForList::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool BackupForList::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void BackupForList::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string BackupForList::getEndTime() const
{
    return endTime_;
}

void BackupForList::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool BackupForList::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void BackupForList::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string BackupForList::getStatus() const
{
    return status_;
}

void BackupForList::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BackupForList::statusIsSet() const
{
    return statusIsSet_;
}

void BackupForList::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t BackupForList::getSize() const
{
    return size_;
}

void BackupForList::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BackupForList::sizeIsSet() const
{
    return sizeIsSet_;
}

void BackupForList::unsetsize()
{
    sizeIsSet_ = false;
}

std::string BackupForList::getDescription() const
{
    return description_;
}

void BackupForList::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BackupForList::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BackupForList::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


