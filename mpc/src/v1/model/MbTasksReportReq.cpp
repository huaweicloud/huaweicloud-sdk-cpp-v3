

#include "huaweicloud/mpc/v1/model/MbTasksReportReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




MbTasksReportReq::MbTasksReportReq()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    retry_ = false;
    retryIsSet_ = false;
    parameterIsSet_ = false;
}

MbTasksReportReq::~MbTasksReportReq() = default;

void MbTasksReportReq::validate()
{
}

web::json::value MbTasksReportReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(retryIsSet_) {
        val[utility::conversions::to_string_t("retry")] = ModelBase::toJson(retry_);
    }
    if(parameterIsSet_) {
        val[utility::conversions::to_string_t("parameter")] = ModelBase::toJson(parameter_);
    }

    return val;
}

bool MbTasksReportReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retry"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retry"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetry(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter"));
        if(!fieldValue.is_null())
        {
            MbTaskParameter refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameter(refVal);
        }
    }
    return ok;
}

std::string MbTasksReportReq::getTaskId() const
{
    return taskId_;
}

void MbTasksReportReq::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool MbTasksReportReq::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void MbTasksReportReq::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string MbTasksReportReq::getStatus() const
{
    return status_;
}

void MbTasksReportReq::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MbTasksReportReq::statusIsSet() const
{
    return statusIsSet_;
}

void MbTasksReportReq::unsetstatus()
{
    statusIsSet_ = false;
}

std::string MbTasksReportReq::getTaskName() const
{
    return taskName_;
}

void MbTasksReportReq::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool MbTasksReportReq::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void MbTasksReportReq::unsettaskName()
{
    taskNameIsSet_ = false;
}

bool MbTasksReportReq::isRetry() const
{
    return retry_;
}

void MbTasksReportReq::setRetry(bool value)
{
    retry_ = value;
    retryIsSet_ = true;
}

bool MbTasksReportReq::retryIsSet() const
{
    return retryIsSet_;
}

void MbTasksReportReq::unsetretry()
{
    retryIsSet_ = false;
}

MbTaskParameter MbTasksReportReq::getParameter() const
{
    return parameter_;
}

void MbTasksReportReq::setParameter(const MbTaskParameter& value)
{
    parameter_ = value;
    parameterIsSet_ = true;
}

bool MbTasksReportReq::parameterIsSet() const
{
    return parameterIsSet_;
}

void MbTasksReportReq::unsetparameter()
{
    parameterIsSet_ = false;
}

}
}
}
}
}


