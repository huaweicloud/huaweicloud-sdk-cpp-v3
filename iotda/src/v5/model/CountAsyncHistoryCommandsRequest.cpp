

#include "huaweicloud/iotda/v5/model/CountAsyncHistoryCommandsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CountAsyncHistoryCommandsRequest::CountAsyncHistoryCommandsRequest()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    commandName_ = "";
    commandNameIsSet_ = false;
}

CountAsyncHistoryCommandsRequest::~CountAsyncHistoryCommandsRequest() = default;

void CountAsyncHistoryCommandsRequest::validate()
{
}

web::json::value CountAsyncHistoryCommandsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(commandNameIsSet_) {
        val[utility::conversions::to_string_t("command_name")] = ModelBase::toJson(commandName_);
    }

    return val;
}
bool CountAsyncHistoryCommandsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("command_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommandName(refVal);
        }
    }
    return ok;
}


std::string CountAsyncHistoryCommandsRequest::getDeviceId() const
{
    return deviceId_;
}

void CountAsyncHistoryCommandsRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool CountAsyncHistoryCommandsRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void CountAsyncHistoryCommandsRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string CountAsyncHistoryCommandsRequest::getInstanceId() const
{
    return instanceId_;
}

void CountAsyncHistoryCommandsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CountAsyncHistoryCommandsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CountAsyncHistoryCommandsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CountAsyncHistoryCommandsRequest::getStartTime() const
{
    return startTime_;
}

void CountAsyncHistoryCommandsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CountAsyncHistoryCommandsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CountAsyncHistoryCommandsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CountAsyncHistoryCommandsRequest::getEndTime() const
{
    return endTime_;
}

void CountAsyncHistoryCommandsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool CountAsyncHistoryCommandsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void CountAsyncHistoryCommandsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string CountAsyncHistoryCommandsRequest::getStatus() const
{
    return status_;
}

void CountAsyncHistoryCommandsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CountAsyncHistoryCommandsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void CountAsyncHistoryCommandsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CountAsyncHistoryCommandsRequest::getCommandName() const
{
    return commandName_;
}

void CountAsyncHistoryCommandsRequest::setCommandName(const std::string& value)
{
    commandName_ = value;
    commandNameIsSet_ = true;
}

bool CountAsyncHistoryCommandsRequest::commandNameIsSet() const
{
    return commandNameIsSet_;
}

void CountAsyncHistoryCommandsRequest::unsetcommandName()
{
    commandNameIsSet_ = false;
}

}
}
}
}
}


