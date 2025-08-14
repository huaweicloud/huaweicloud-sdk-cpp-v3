

#include "huaweicloud/iotda/v5/model/ListAsyncCommandsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListAsyncCommandsRequest::ListAsyncCommandsRequest()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    commandName_ = "";
    commandNameIsSet_ = false;
}

ListAsyncCommandsRequest::~ListAsyncCommandsRequest() = default;

void ListAsyncCommandsRequest::validate()
{
}

web::json::value ListAsyncCommandsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
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
bool ListAsyncCommandsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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


std::string ListAsyncCommandsRequest::getDeviceId() const
{
    return deviceId_;
}

void ListAsyncCommandsRequest::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ListAsyncCommandsRequest::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ListAsyncCommandsRequest::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string ListAsyncCommandsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAsyncCommandsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAsyncCommandsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAsyncCommandsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListAsyncCommandsRequest::getLimit() const
{
    return limit_;
}

void ListAsyncCommandsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAsyncCommandsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAsyncCommandsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAsyncCommandsRequest::getMarker() const
{
    return marker_;
}

void ListAsyncCommandsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListAsyncCommandsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListAsyncCommandsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListAsyncCommandsRequest::getOffset() const
{
    return offset_;
}

void ListAsyncCommandsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAsyncCommandsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAsyncCommandsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAsyncCommandsRequest::getStartTime() const
{
    return startTime_;
}

void ListAsyncCommandsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListAsyncCommandsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListAsyncCommandsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListAsyncCommandsRequest::getEndTime() const
{
    return endTime_;
}

void ListAsyncCommandsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListAsyncCommandsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListAsyncCommandsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListAsyncCommandsRequest::getStatus() const
{
    return status_;
}

void ListAsyncCommandsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAsyncCommandsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAsyncCommandsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListAsyncCommandsRequest::getCommandName() const
{
    return commandName_;
}

void ListAsyncCommandsRequest::setCommandName(const std::string& value)
{
    commandName_ = value;
    commandNameIsSet_ = true;
}

bool ListAsyncCommandsRequest::commandNameIsSet() const
{
    return commandNameIsSet_;
}

void ListAsyncCommandsRequest::unsetcommandName()
{
    commandNameIsSet_ = false;
}

}
}
}
}
}


