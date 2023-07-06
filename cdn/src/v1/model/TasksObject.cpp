

#include "huaweicloud/cdn/v1/model/TasksObject.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




TasksObject::TasksObject()
{
    id_ = "";
    idIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    processing_ = 0;
    processingIsSet_ = false;
    succeed_ = 0;
    succeedIsSet_ = false;
    failed_ = 0;
    failedIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
}

TasksObject::~TasksObject() = default;

void TasksObject::validate()
{
}

web::json::value TasksObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(processingIsSet_) {
        val[utility::conversions::to_string_t("processing")] = ModelBase::toJson(processing_);
    }
    if(succeedIsSet_) {
        val[utility::conversions::to_string_t("succeed")] = ModelBase::toJson(succeed_);
    }
    if(failedIsSet_) {
        val[utility::conversions::to_string_t("failed")] = ModelBase::toJson(failed_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }

    return val;
}

bool TasksObject::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("processing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processing"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessing(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("succeed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("succeed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSucceed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    return ok;
}

std::string TasksObject::getId() const
{
    return id_;
}

void TasksObject::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TasksObject::idIsSet() const
{
    return idIsSet_;
}

void TasksObject::unsetid()
{
    idIsSet_ = false;
}

std::string TasksObject::getTaskType() const
{
    return taskType_;
}

void TasksObject::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool TasksObject::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void TasksObject::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string TasksObject::getStatus() const
{
    return status_;
}

void TasksObject::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TasksObject::statusIsSet() const
{
    return statusIsSet_;
}

void TasksObject::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t TasksObject::getProcessing() const
{
    return processing_;
}

void TasksObject::setProcessing(int32_t value)
{
    processing_ = value;
    processingIsSet_ = true;
}

bool TasksObject::processingIsSet() const
{
    return processingIsSet_;
}

void TasksObject::unsetprocessing()
{
    processingIsSet_ = false;
}

int32_t TasksObject::getSucceed() const
{
    return succeed_;
}

void TasksObject::setSucceed(int32_t value)
{
    succeed_ = value;
    succeedIsSet_ = true;
}

bool TasksObject::succeedIsSet() const
{
    return succeedIsSet_;
}

void TasksObject::unsetsucceed()
{
    succeedIsSet_ = false;
}

int32_t TasksObject::getFailed() const
{
    return failed_;
}

void TasksObject::setFailed(int32_t value)
{
    failed_ = value;
    failedIsSet_ = true;
}

bool TasksObject::failedIsSet() const
{
    return failedIsSet_;
}

void TasksObject::unsetfailed()
{
    failedIsSet_ = false;
}

int32_t TasksObject::getTotal() const
{
    return total_;
}

void TasksObject::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool TasksObject::totalIsSet() const
{
    return totalIsSet_;
}

void TasksObject::unsettotal()
{
    totalIsSet_ = false;
}

int64_t TasksObject::getCreateTime() const
{
    return createTime_;
}

void TasksObject::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TasksObject::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TasksObject::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TasksObject::getFileType() const
{
    return fileType_;
}

void TasksObject::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool TasksObject::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void TasksObject::unsetfileType()
{
    fileTypeIsSet_ = false;
}

}
}
}
}
}


