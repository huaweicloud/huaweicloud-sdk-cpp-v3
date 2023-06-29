

#include "huaweicloud/mpc/v1/model/BasicTaskInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




BasicTaskInfo::BasicTaskInfo()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    outputIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

BasicTaskInfo::~BasicTaskInfo() = default;

void BasicTaskInfo::validate()
{
}

web::json::value BasicTaskInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool BasicTaskInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
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


std::string BasicTaskInfo::getTaskId() const
{
    return taskId_;
}

void BasicTaskInfo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool BasicTaskInfo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void BasicTaskInfo::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string BasicTaskInfo::getStatus() const
{
    return status_;
}

void BasicTaskInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BasicTaskInfo::statusIsSet() const
{
    return statusIsSet_;
}

void BasicTaskInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BasicTaskInfo::getCreateTime() const
{
    return createTime_;
}

void BasicTaskInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool BasicTaskInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void BasicTaskInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string BasicTaskInfo::getEndTime() const
{
    return endTime_;
}

void BasicTaskInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool BasicTaskInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void BasicTaskInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

ObsObjInfo BasicTaskInfo::getOutput() const
{
    return output_;
}

void BasicTaskInfo::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool BasicTaskInfo::outputIsSet() const
{
    return outputIsSet_;
}

void BasicTaskInfo::unsetoutput()
{
    outputIsSet_ = false;
}

std::string BasicTaskInfo::getDescription() const
{
    return description_;
}

void BasicTaskInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BasicTaskInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BasicTaskInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


