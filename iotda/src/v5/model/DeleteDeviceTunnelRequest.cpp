

#include "huaweicloud/iotda/v5/model/DeleteDeviceTunnelRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteDeviceTunnelRequest::DeleteDeviceTunnelRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    tunnelId_ = "";
    tunnelIdIsSet_ = false;
}

DeleteDeviceTunnelRequest::~DeleteDeviceTunnelRequest() = default;

void DeleteDeviceTunnelRequest::validate()
{
}

web::json::value DeleteDeviceTunnelRequest::toJson() const
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
bool DeleteDeviceTunnelRequest::fromJson(const web::json::value& val)
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


std::string DeleteDeviceTunnelRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDeviceTunnelRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDeviceTunnelRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDeviceTunnelRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteDeviceTunnelRequest::getTunnelId() const
{
    return tunnelId_;
}

void DeleteDeviceTunnelRequest::setTunnelId(const std::string& value)
{
    tunnelId_ = value;
    tunnelIdIsSet_ = true;
}

bool DeleteDeviceTunnelRequest::tunnelIdIsSet() const
{
    return tunnelIdIsSet_;
}

void DeleteDeviceTunnelRequest::unsettunnelId()
{
    tunnelIdIsSet_ = false;
}

}
}
}
}
}


