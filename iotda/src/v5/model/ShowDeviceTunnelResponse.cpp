

#include "huaweicloud/iotda/v5/model/ShowDeviceTunnelResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDeviceTunnelResponse::ShowDeviceTunnelResponse()
{
    tunnelId_ = "";
    tunnelIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    closedTime_ = "";
    closedTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    sourceConnectStateIsSet_ = false;
    deviceConnectStateIsSet_ = false;
}

ShowDeviceTunnelResponse::~ShowDeviceTunnelResponse() = default;

void ShowDeviceTunnelResponse::validate()
{
}

web::json::value ShowDeviceTunnelResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tunnelIdIsSet_) {
        val[utility::conversions::to_string_t("tunnel_id")] = ModelBase::toJson(tunnelId_);
    }
    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(closedTimeIsSet_) {
        val[utility::conversions::to_string_t("closed_time")] = ModelBase::toJson(closedTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(sourceConnectStateIsSet_) {
        val[utility::conversions::to_string_t("source_connect_state")] = ModelBase::toJson(sourceConnectState_);
    }
    if(deviceConnectStateIsSet_) {
        val[utility::conversions::to_string_t("device_connect_state")] = ModelBase::toJson(deviceConnectState_);
    }

    return val;
}
bool ShowDeviceTunnelResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tunnel_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tunnel_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTunnelId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("closed_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("source_connect_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_connect_state"));
        if(!fieldValue.is_null())
        {
            ConnectState refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceConnectState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_connect_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_connect_state"));
        if(!fieldValue.is_null())
        {
            ConnectState refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceConnectState(refVal);
        }
    }
    return ok;
}


std::string ShowDeviceTunnelResponse::getTunnelId() const
{
    return tunnelId_;
}

void ShowDeviceTunnelResponse::setTunnelId(const std::string& value)
{
    tunnelId_ = value;
    tunnelIdIsSet_ = true;
}

bool ShowDeviceTunnelResponse::tunnelIdIsSet() const
{
    return tunnelIdIsSet_;
}

void ShowDeviceTunnelResponse::unsettunnelId()
{
    tunnelIdIsSet_ = false;
}

std::string ShowDeviceTunnelResponse::getDeviceId() const
{
    return deviceId_;
}

void ShowDeviceTunnelResponse::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ShowDeviceTunnelResponse::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ShowDeviceTunnelResponse::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string ShowDeviceTunnelResponse::getCreateTime() const
{
    return createTime_;
}

void ShowDeviceTunnelResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowDeviceTunnelResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowDeviceTunnelResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowDeviceTunnelResponse::getClosedTime() const
{
    return closedTime_;
}

void ShowDeviceTunnelResponse::setClosedTime(const std::string& value)
{
    closedTime_ = value;
    closedTimeIsSet_ = true;
}

bool ShowDeviceTunnelResponse::closedTimeIsSet() const
{
    return closedTimeIsSet_;
}

void ShowDeviceTunnelResponse::unsetclosedTime()
{
    closedTimeIsSet_ = false;
}

std::string ShowDeviceTunnelResponse::getStatus() const
{
    return status_;
}

void ShowDeviceTunnelResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDeviceTunnelResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDeviceTunnelResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ConnectState ShowDeviceTunnelResponse::getSourceConnectState() const
{
    return sourceConnectState_;
}

void ShowDeviceTunnelResponse::setSourceConnectState(const ConnectState& value)
{
    sourceConnectState_ = value;
    sourceConnectStateIsSet_ = true;
}

bool ShowDeviceTunnelResponse::sourceConnectStateIsSet() const
{
    return sourceConnectStateIsSet_;
}

void ShowDeviceTunnelResponse::unsetsourceConnectState()
{
    sourceConnectStateIsSet_ = false;
}

ConnectState ShowDeviceTunnelResponse::getDeviceConnectState() const
{
    return deviceConnectState_;
}

void ShowDeviceTunnelResponse::setDeviceConnectState(const ConnectState& value)
{
    deviceConnectState_ = value;
    deviceConnectStateIsSet_ = true;
}

bool ShowDeviceTunnelResponse::deviceConnectStateIsSet() const
{
    return deviceConnectStateIsSet_;
}

void ShowDeviceTunnelResponse::unsetdeviceConnectState()
{
    deviceConnectStateIsSet_ = false;
}

}
}
}
}
}


