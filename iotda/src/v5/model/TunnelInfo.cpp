

#include "huaweicloud/iotda/v5/model/TunnelInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




TunnelInfo::TunnelInfo()
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

TunnelInfo::~TunnelInfo() = default;

void TunnelInfo::validate()
{
}

web::json::value TunnelInfo::toJson() const
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
bool TunnelInfo::fromJson(const web::json::value& val)
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


std::string TunnelInfo::getTunnelId() const
{
    return tunnelId_;
}

void TunnelInfo::setTunnelId(const std::string& value)
{
    tunnelId_ = value;
    tunnelIdIsSet_ = true;
}

bool TunnelInfo::tunnelIdIsSet() const
{
    return tunnelIdIsSet_;
}

void TunnelInfo::unsettunnelId()
{
    tunnelIdIsSet_ = false;
}

std::string TunnelInfo::getDeviceId() const
{
    return deviceId_;
}

void TunnelInfo::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool TunnelInfo::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void TunnelInfo::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string TunnelInfo::getCreateTime() const
{
    return createTime_;
}

void TunnelInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TunnelInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TunnelInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TunnelInfo::getClosedTime() const
{
    return closedTime_;
}

void TunnelInfo::setClosedTime(const std::string& value)
{
    closedTime_ = value;
    closedTimeIsSet_ = true;
}

bool TunnelInfo::closedTimeIsSet() const
{
    return closedTimeIsSet_;
}

void TunnelInfo::unsetclosedTime()
{
    closedTimeIsSet_ = false;
}

std::string TunnelInfo::getStatus() const
{
    return status_;
}

void TunnelInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TunnelInfo::statusIsSet() const
{
    return statusIsSet_;
}

void TunnelInfo::unsetstatus()
{
    statusIsSet_ = false;
}

ConnectState TunnelInfo::getSourceConnectState() const
{
    return sourceConnectState_;
}

void TunnelInfo::setSourceConnectState(const ConnectState& value)
{
    sourceConnectState_ = value;
    sourceConnectStateIsSet_ = true;
}

bool TunnelInfo::sourceConnectStateIsSet() const
{
    return sourceConnectStateIsSet_;
}

void TunnelInfo::unsetsourceConnectState()
{
    sourceConnectStateIsSet_ = false;
}

ConnectState TunnelInfo::getDeviceConnectState() const
{
    return deviceConnectState_;
}

void TunnelInfo::setDeviceConnectState(const ConnectState& value)
{
    deviceConnectState_ = value;
    deviceConnectStateIsSet_ = true;
}

bool TunnelInfo::deviceConnectStateIsSet() const
{
    return deviceConnectStateIsSet_;
}

void TunnelInfo::unsetdeviceConnectState()
{
    deviceConnectStateIsSet_ = false;
}

}
}
}
}
}


