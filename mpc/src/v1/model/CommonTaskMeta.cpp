

#include "huaweicloud/mpc/v1/model/CommonTaskMeta.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CommonTaskMeta::CommonTaskMeta()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
}

CommonTaskMeta::~CommonTaskMeta() = default;

void CommonTaskMeta::validate()
{
}

web::json::value CommonTaskMeta::toJson() const
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
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }

    return val;
}

bool CommonTaskMeta::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    return ok;
}


std::string CommonTaskMeta::getTaskId() const
{
    return taskId_;
}

void CommonTaskMeta::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CommonTaskMeta::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CommonTaskMeta::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string CommonTaskMeta::getStatus() const
{
    return status_;
}

void CommonTaskMeta::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CommonTaskMeta::statusIsSet() const
{
    return statusIsSet_;
}

void CommonTaskMeta::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CommonTaskMeta::getCreateTime() const
{
    return createTime_;
}

void CommonTaskMeta::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CommonTaskMeta::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CommonTaskMeta::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CommonTaskMeta::getStartTime() const
{
    return startTime_;
}

void CommonTaskMeta::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CommonTaskMeta::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CommonTaskMeta::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CommonTaskMeta::getEndTime() const
{
    return endTime_;
}

void CommonTaskMeta::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CommonTaskMeta::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CommonTaskMeta::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string CommonTaskMeta::getErrorCode() const
{
    return errorCode_;
}

void CommonTaskMeta::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool CommonTaskMeta::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void CommonTaskMeta::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string CommonTaskMeta::getDescription() const
{
    return description_;
}

void CommonTaskMeta::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CommonTaskMeta::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CommonTaskMeta::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CommonTaskMeta::getUserData() const
{
    return userData_;
}

void CommonTaskMeta::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool CommonTaskMeta::userDataIsSet() const
{
    return userDataIsSet_;
}

void CommonTaskMeta::unsetuserData()
{
    userDataIsSet_ = false;
}

}
}
}
}
}


