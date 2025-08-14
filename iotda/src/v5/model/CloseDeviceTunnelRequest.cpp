

#include "huaweicloud/iotda/v5/model/CloseDeviceTunnelRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CloseDeviceTunnelRequest::CloseDeviceTunnelRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    tunnelId_ = "";
    tunnelIdIsSet_ = false;
}

CloseDeviceTunnelRequest::~CloseDeviceTunnelRequest() = default;

void CloseDeviceTunnelRequest::validate()
{
}

web::json::value CloseDeviceTunnelRequest::toJson() const
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
bool CloseDeviceTunnelRequest::fromJson(const web::json::value& val)
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


std::string CloseDeviceTunnelRequest::getInstanceId() const
{
    return instanceId_;
}

void CloseDeviceTunnelRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CloseDeviceTunnelRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CloseDeviceTunnelRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CloseDeviceTunnelRequest::getTunnelId() const
{
    return tunnelId_;
}

void CloseDeviceTunnelRequest::setTunnelId(const std::string& value)
{
    tunnelId_ = value;
    tunnelIdIsSet_ = true;
}

bool CloseDeviceTunnelRequest::tunnelIdIsSet() const
{
    return tunnelIdIsSet_;
}

void CloseDeviceTunnelRequest::unsettunnelId()
{
    tunnelIdIsSet_ = false;
}

}
}
}
}
}


