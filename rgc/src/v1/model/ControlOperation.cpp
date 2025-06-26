

#include "huaweicloud/rgc/v1/model/ControlOperation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ControlOperation::ControlOperation()
{
    operationControlStatusId_ = "";
    operationControlStatusIdIsSet_ = false;
    operationType_ = "";
    operationTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ControlOperation::~ControlOperation() = default;

void ControlOperation::validate()
{
}

web::json::value ControlOperation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operationControlStatusIdIsSet_) {
        val[utility::conversions::to_string_t("operation_control_status_id")] = ModelBase::toJson(operationControlStatusId_);
    }
    if(operationTypeIsSet_) {
        val[utility::conversions::to_string_t("operation_type")] = ModelBase::toJson(operationType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ControlOperation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operation_control_status_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_control_status_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationControlStatusId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
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
    return ok;
}


std::string ControlOperation::getOperationControlStatusId() const
{
    return operationControlStatusId_;
}

void ControlOperation::setOperationControlStatusId(const std::string& value)
{
    operationControlStatusId_ = value;
    operationControlStatusIdIsSet_ = true;
}

bool ControlOperation::operationControlStatusIdIsSet() const
{
    return operationControlStatusIdIsSet_;
}

void ControlOperation::unsetoperationControlStatusId()
{
    operationControlStatusIdIsSet_ = false;
}

std::string ControlOperation::getOperationType() const
{
    return operationType_;
}

void ControlOperation::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool ControlOperation::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void ControlOperation::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

std::string ControlOperation::getStatus() const
{
    return status_;
}

void ControlOperation::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ControlOperation::statusIsSet() const
{
    return statusIsSet_;
}

void ControlOperation::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ControlOperation::getMessage() const
{
    return message_;
}

void ControlOperation::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ControlOperation::messageIsSet() const
{
    return messageIsSet_;
}

void ControlOperation::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ControlOperation::getStartTime() const
{
    return startTime_;
}

void ControlOperation::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ControlOperation::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ControlOperation::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ControlOperation::getEndTime() const
{
    return endTime_;
}

void ControlOperation::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ControlOperation::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ControlOperation::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


