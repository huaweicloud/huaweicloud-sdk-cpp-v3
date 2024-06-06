

#include "huaweicloud/rds/v3/model/ShareBackups.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShareBackups::ShareBackups()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    size_ = 0.0;
    sizeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    backupMethod_ = "";
    backupMethodIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    instanceStatus_ = "";
    instanceStatusIsSet_ = false;
    datastoreIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

ShareBackups::~ShareBackups() = default;

void ShareBackups::validate()
{
}

web::json::value ShareBackups::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(backupMethodIsSet_) {
        val[utility::conversions::to_string_t("backup_method")] = ModelBase::toJson(backupMethod_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(instanceStatusIsSet_) {
        val[utility::conversions::to_string_t("instance_status")] = ModelBase::toJson(instanceStatus_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool ShareBackups::fromJson(const web::json::value& val)
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
            double refVal;
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
    if(val.has_field(utility::conversions::to_string_t("backup_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupMethod(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    return ok;
}


std::string ShareBackups::getId() const
{
    return id_;
}

void ShareBackups::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShareBackups::idIsSet() const
{
    return idIsSet_;
}

void ShareBackups::unsetid()
{
    idIsSet_ = false;
}

std::string ShareBackups::getName() const
{
    return name_;
}

void ShareBackups::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShareBackups::nameIsSet() const
{
    return nameIsSet_;
}

void ShareBackups::unsetname()
{
    nameIsSet_ = false;
}

std::string ShareBackups::getBeginTime() const
{
    return beginTime_;
}

void ShareBackups::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ShareBackups::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ShareBackups::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ShareBackups::getEndTime() const
{
    return endTime_;
}

void ShareBackups::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShareBackups::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShareBackups::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShareBackups::getStatus() const
{
    return status_;
}

void ShareBackups::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShareBackups::statusIsSet() const
{
    return statusIsSet_;
}

void ShareBackups::unsetstatus()
{
    statusIsSet_ = false;
}

double ShareBackups::getSize() const
{
    return size_;
}

void ShareBackups::setSize(double value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ShareBackups::sizeIsSet() const
{
    return sizeIsSet_;
}

void ShareBackups::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ShareBackups::getType() const
{
    return type_;
}

void ShareBackups::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShareBackups::typeIsSet() const
{
    return typeIsSet_;
}

void ShareBackups::unsettype()
{
    typeIsSet_ = false;
}

std::string ShareBackups::getBackupMethod() const
{
    return backupMethod_;
}

void ShareBackups::setBackupMethod(const std::string& value)
{
    backupMethod_ = value;
    backupMethodIsSet_ = true;
}

bool ShareBackups::backupMethodIsSet() const
{
    return backupMethodIsSet_;
}

void ShareBackups::unsetbackupMethod()
{
    backupMethodIsSet_ = false;
}

std::string ShareBackups::getInstanceId() const
{
    return instanceId_;
}

void ShareBackups::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShareBackups::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShareBackups::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShareBackups::getInstanceName() const
{
    return instanceName_;
}

void ShareBackups::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ShareBackups::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ShareBackups::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ShareBackups::getInstanceStatus() const
{
    return instanceStatus_;
}

void ShareBackups::setInstanceStatus(const std::string& value)
{
    instanceStatus_ = value;
    instanceStatusIsSet_ = true;
}

bool ShareBackups::instanceStatusIsSet() const
{
    return instanceStatusIsSet_;
}

void ShareBackups::unsetinstanceStatus()
{
    instanceStatusIsSet_ = false;
}

Object ShareBackups::getDatastore() const
{
    return datastore_;
}

void ShareBackups::setDatastore(const Object& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool ShareBackups::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void ShareBackups::unsetdatastore()
{
    datastoreIsSet_ = false;
}

std::string ShareBackups::getUserName() const
{
    return userName_;
}

void ShareBackups::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ShareBackups::userNameIsSet() const
{
    return userNameIsSet_;
}

void ShareBackups::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


