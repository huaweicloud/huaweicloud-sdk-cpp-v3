

#include "huaweicloud/cloudtest/v1/model/DashboardDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DashboardDto::DashboardDto()
{
    createTime_ = 0L;
    createTimeIsSet_ = false;
    createUser_ = "";
    createUserIsSet_ = false;
    dataType_ = "";
    dataTypeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
    taskIdsIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    updateUser_ = "";
    updateUserIsSet_ = false;
    viewType_ = "";
    viewTypeIsSet_ = false;
}

DashboardDto::~DashboardDto() = default;

void DashboardDto::validate()
{
}

web::json::value DashboardDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(createUserIsSet_) {
        val[utility::conversions::to_string_t("create_user")] = ModelBase::toJson(createUser_);
    }
    if(dataTypeIsSet_) {
        val[utility::conversions::to_string_t("data_type")] = ModelBase::toJson(dataType_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(taskIdsIsSet_) {
        val[utility::conversions::to_string_t("task_ids")] = ModelBase::toJson(taskIds_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updateUserIsSet_) {
        val[utility::conversions::to_string_t("update_user")] = ModelBase::toJson(updateUser_);
    }
    if(viewTypeIsSet_) {
        val[utility::conversions::to_string_t("view_type")] = ModelBase::toJson(viewType_);
    }

    return val;
}
bool DashboardDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("view_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setViewType(refVal);
        }
    }
    return ok;
}


int64_t DashboardDto::getCreateTime() const
{
    return createTime_;
}

void DashboardDto::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool DashboardDto::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void DashboardDto::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string DashboardDto::getCreateUser() const
{
    return createUser_;
}

void DashboardDto::setCreateUser(const std::string& value)
{
    createUser_ = value;
    createUserIsSet_ = true;
}

bool DashboardDto::createUserIsSet() const
{
    return createUserIsSet_;
}

void DashboardDto::unsetcreateUser()
{
    createUserIsSet_ = false;
}

std::string DashboardDto::getDataType() const
{
    return dataType_;
}

void DashboardDto::setDataType(const std::string& value)
{
    dataType_ = value;
    dataTypeIsSet_ = true;
}

bool DashboardDto::dataTypeIsSet() const
{
    return dataTypeIsSet_;
}

void DashboardDto::unsetdataType()
{
    dataTypeIsSet_ = false;
}

std::string DashboardDto::getId() const
{
    return id_;
}

void DashboardDto::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DashboardDto::idIsSet() const
{
    return idIsSet_;
}

void DashboardDto::unsetid()
{
    idIsSet_ = false;
}

std::string DashboardDto::getName() const
{
    return name_;
}

void DashboardDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DashboardDto::nameIsSet() const
{
    return nameIsSet_;
}

void DashboardDto::unsetname()
{
    nameIsSet_ = false;
}

std::string DashboardDto::getServiceId() const
{
    return serviceId_;
}

void DashboardDto::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool DashboardDto::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void DashboardDto::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::vector<std::string>& DashboardDto::getTaskIds()
{
    return taskIds_;
}

void DashboardDto::setTaskIds(const std::vector<std::string>& value)
{
    taskIds_ = value;
    taskIdsIsSet_ = true;
}

bool DashboardDto::taskIdsIsSet() const
{
    return taskIdsIsSet_;
}

void DashboardDto::unsettaskIds()
{
    taskIdsIsSet_ = false;
}

std::string DashboardDto::getTaskType() const
{
    return taskType_;
}

void DashboardDto::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool DashboardDto::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void DashboardDto::unsettaskType()
{
    taskTypeIsSet_ = false;
}

int64_t DashboardDto::getUpdateTime() const
{
    return updateTime_;
}

void DashboardDto::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool DashboardDto::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void DashboardDto::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string DashboardDto::getUpdateUser() const
{
    return updateUser_;
}

void DashboardDto::setUpdateUser(const std::string& value)
{
    updateUser_ = value;
    updateUserIsSet_ = true;
}

bool DashboardDto::updateUserIsSet() const
{
    return updateUserIsSet_;
}

void DashboardDto::unsetupdateUser()
{
    updateUserIsSet_ = false;
}

std::string DashboardDto::getViewType() const
{
    return viewType_;
}

void DashboardDto::setViewType(const std::string& value)
{
    viewType_ = value;
    viewTypeIsSet_ = true;
}

bool DashboardDto::viewTypeIsSet() const
{
    return viewTypeIsSet_;
}

void DashboardDto::unsetviewType()
{
    viewTypeIsSet_ = false;
}

}
}
}
}
}


