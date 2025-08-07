

#include "huaweicloud/rds/v3/model/Task.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Task::Task()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    instanceStatus_ = "";
    instanceStatusIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    process_ = "";
    processIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

Task::~Task() = default;

void Task::validate()
{
}

web::json::value Task::toJson() const
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
    if(instanceStatusIsSet_) {
        val[utility::conversions::to_string_t("instance_status")] = ModelBase::toJson(instanceStatus_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(processIsSet_) {
        val[utility::conversions::to_string_t("process")] = ModelBase::toJson(process_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool Task::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
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
    return ok;
}


std::string Task::getId() const
{
    return id_;
}

void Task::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Task::idIsSet() const
{
    return idIsSet_;
}

void Task::unsetid()
{
    idIsSet_ = false;
}

std::string Task::getName() const
{
    return name_;
}

void Task::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Task::nameIsSet() const
{
    return nameIsSet_;
}

void Task::unsetname()
{
    nameIsSet_ = false;
}

std::string Task::getInstanceId() const
{
    return instanceId_;
}

void Task::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool Task::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void Task::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string Task::getInstanceName() const
{
    return instanceName_;
}

void Task::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool Task::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void Task::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string Task::getInstanceStatus() const
{
    return instanceStatus_;
}

void Task::setInstanceStatus(const std::string& value)
{
    instanceStatus_ = value;
    instanceStatusIsSet_ = true;
}

bool Task::instanceStatusIsSet() const
{
    return instanceStatusIsSet_;
}

void Task::unsetinstanceStatus()
{
    instanceStatusIsSet_ = false;
}

std::string Task::getOrderId() const
{
    return orderId_;
}

void Task::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool Task::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void Task::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string Task::getProcess() const
{
    return process_;
}

void Task::setProcess(const std::string& value)
{
    process_ = value;
    processIsSet_ = true;
}

bool Task::processIsSet() const
{
    return processIsSet_;
}

void Task::unsetprocess()
{
    processIsSet_ = false;
}

std::string Task::getFailReason() const
{
    return failReason_;
}

void Task::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool Task::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void Task::unsetfailReason()
{
    failReasonIsSet_ = false;
}

std::string Task::getCreateTime() const
{
    return createTime_;
}

void Task::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool Task::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void Task::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string Task::getEndTime() const
{
    return endTime_;
}

void Task::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool Task::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void Task::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string Task::getStatus() const
{
    return status_;
}

void Task::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Task::statusIsSet() const
{
    return statusIsSet_;
}

void Task::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


