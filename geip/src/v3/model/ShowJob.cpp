

#include "huaweicloud/geip/v3/model/ShowJob.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowJob::ShowJob()
{
    id_ = "";
    idIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    errorTask_ = "";
    errorTaskIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
    startTime_ = utility::datetime();
    startTimeIsSet_ = false;
    endTime_ = utility::datetime();
    endTimeIsSet_ = false;
}

ShowJob::~ShowJob() = default;

void ShowJob::validate()
{
}

web::json::value ShowJob::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorTaskIsSet_) {
        val[utility::conversions::to_string_t("error_task")] = ModelBase::toJson(errorTask_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ShowJob::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_task"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorTask(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ShowJob::getId() const
{
    return id_;
}

void ShowJob::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowJob::idIsSet() const
{
    return idIsSet_;
}

void ShowJob::unsetid()
{
    idIsSet_ = false;
}

std::string ShowJob::getAction() const
{
    return action_;
}

void ShowJob::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ShowJob::actionIsSet() const
{
    return actionIsSet_;
}

void ShowJob::unsetaction()
{
    actionIsSet_ = false;
}

std::string ShowJob::getStatus() const
{
    return status_;
}

void ShowJob::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowJob::statusIsSet() const
{
    return statusIsSet_;
}

void ShowJob::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowJob::getErrorTask() const
{
    return errorTask_;
}

void ShowJob::setErrorTask(const std::string& value)
{
    errorTask_ = value;
    errorTaskIsSet_ = true;
}

bool ShowJob::errorTaskIsSet() const
{
    return errorTaskIsSet_;
}

void ShowJob::unseterrorTask()
{
    errorTaskIsSet_ = false;
}

std::string ShowJob::getErrorCode() const
{
    return errorCode_;
}

void ShowJob::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ShowJob::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ShowJob::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ShowJob::getErrorMessage() const
{
    return errorMessage_;
}

void ShowJob::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool ShowJob::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void ShowJob::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

utility::datetime ShowJob::getStartTime() const
{
    return startTime_;
}

void ShowJob::setStartTime(const utility::datetime& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowJob::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowJob::unsetstartTime()
{
    startTimeIsSet_ = false;
}

utility::datetime ShowJob::getEndTime() const
{
    return endTime_;
}

void ShowJob::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowJob::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowJob::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


