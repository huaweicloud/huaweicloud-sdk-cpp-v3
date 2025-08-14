

#include "huaweicloud/iotda/v5/model/ShowDeviceTunnelRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDeviceTunnelRequest::ShowDeviceTunnelRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    tunnelId_ = "";
    tunnelIdIsSet_ = false;
}

ShowDeviceTunnelRequest::~ShowDeviceTunnelRequest() = default;

void ShowDeviceTunnelRequest::validate()
{
}

web::json::value ShowDeviceTunnelRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(tunnelIdIsSet_) {
        val[utility::conversions::to_string_t("tunnel_id")] = ModelBase::toJson(tunnelId_);
    }

    return val;
}
bool ShowDeviceTunnelRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tunnel_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tunnel_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTunnelId(refVal);
        }
    }
    return ok;
}


std::string ShowDeviceTunnelRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDeviceTunnelRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDeviceTunnelRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDeviceTunnelRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDeviceTunnelRequest::getTunnelId() const
{
    return tunnelId_;
}

void ShowDeviceTunnelRequest::setTunnelId(const std::string& value)
{
    tunnelId_ = value;
    tunnelIdIsSet_ = true;
}

bool ShowDeviceTunnelRequest::tunnelIdIsSet() const
{
    return tunnelIdIsSet_;
}

void ShowDeviceTunnelRequest::unsettunnelId()
{
    tunnelIdIsSet_ = false;
}

}
}
}
}
}


