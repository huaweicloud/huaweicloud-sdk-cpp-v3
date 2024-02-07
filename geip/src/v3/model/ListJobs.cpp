

#include "huaweicloud/geip/v3/model/ListJobs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListJobs::ListJobs()
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

ListJobs::~ListJobs() = default;

void ListJobs::validate()
{
}

web::json::value ListJobs::toJson() const
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
bool ListJobs::fromJson(const web::json::value& val)
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


std::string ListJobs::getId() const
{
    return id_;
}

void ListJobs::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListJobs::idIsSet() const
{
    return idIsSet_;
}

void ListJobs::unsetid()
{
    idIsSet_ = false;
}

std::string ListJobs::getAction() const
{
    return action_;
}

void ListJobs::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListJobs::actionIsSet() const
{
    return actionIsSet_;
}

void ListJobs::unsetaction()
{
    actionIsSet_ = false;
}

std::string ListJobs::getStatus() const
{
    return status_;
}

void ListJobs::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListJobs::statusIsSet() const
{
    return statusIsSet_;
}

void ListJobs::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListJobs::getErrorTask() const
{
    return errorTask_;
}

void ListJobs::setErrorTask(const std::string& value)
{
    errorTask_ = value;
    errorTaskIsSet_ = true;
}

bool ListJobs::errorTaskIsSet() const
{
    return errorTaskIsSet_;
}

void ListJobs::unseterrorTask()
{
    errorTaskIsSet_ = false;
}

std::string ListJobs::getErrorCode() const
{
    return errorCode_;
}

void ListJobs::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ListJobs::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ListJobs::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ListJobs::getErrorMessage() const
{
    return errorMessage_;
}

void ListJobs::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool ListJobs::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void ListJobs::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

utility::datetime ListJobs::getStartTime() const
{
    return startTime_;
}

void ListJobs::setStartTime(const utility::datetime& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListJobs::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListJobs::unsetstartTime()
{
    startTimeIsSet_ = false;
}

utility::datetime ListJobs::getEndTime() const
{
    return endTime_;
}

void ListJobs::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListJobs::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListJobs::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


