

#include "huaweicloud/cpcs/v1/model/CreateElbClusterPortRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




CreateElbClusterPortRequestBody::CreateElbClusterPortRequestBody()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    elbId_ = "";
    elbIdIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    lbListenerPort_ = 0;
    lbListenerPortIsSet_ = false;
    serverPort_ = 0;
    serverPortIsSet_ = false;
    tunnelLbListenerPort_ = 0;
    tunnelLbListenerPortIsSet_ = false;
    tunnelServerPort_ = 0;
    tunnelServerPortIsSet_ = false;
}

CreateElbClusterPortRequestBody::~CreateElbClusterPortRequestBody() = default;

void CreateElbClusterPortRequestBody::validate()
{
}

web::json::value CreateElbClusterPortRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(elbIdIsSet_) {
        val[utility::conversions::to_string_t("elb_id")] = ModelBase::toJson(elbId_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(lbListenerPortIsSet_) {
        val[utility::conversions::to_string_t("lb_listener_port")] = ModelBase::toJson(lbListenerPort_);
    }
    if(serverPortIsSet_) {
        val[utility::conversions::to_string_t("server_port")] = ModelBase::toJson(serverPort_);
    }
    if(tunnelLbListenerPortIsSet_) {
        val[utility::conversions::to_string_t("tunnel_lb_listener_port")] = ModelBase::toJson(tunnelLbListenerPort_);
    }
    if(tunnelServerPortIsSet_) {
        val[utility::conversions::to_string_t("tunnel_server_port")] = ModelBase::toJson(tunnelServerPort_);
    }

    return val;
}
bool CreateElbClusterPortRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elb_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elb_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElbId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lb_listener_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lb_listener_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLbListenerPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tunnel_lb_listener_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tunnel_lb_listener_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTunnelLbListenerPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tunnel_server_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tunnel_server_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTunnelServerPort(refVal);
        }
    }
    return ok;
}


std::string CreateElbClusterPortRequestBody::getClusterId() const
{
    return clusterId_;
}

void CreateElbClusterPortRequestBody::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateElbClusterPortRequestBody::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateElbClusterPortRequestBody::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string CreateElbClusterPortRequestBody::getElbId() const
{
    return elbId_;
}

void CreateElbClusterPortRequestBody::setElbId(const std::string& value)
{
    elbId_ = value;
    elbIdIsSet_ = true;
}

bool CreateElbClusterPortRequestBody::elbIdIsSet() const
{
    return elbIdIsSet_;
}

void CreateElbClusterPortRequestBody::unsetelbId()
{
    elbIdIsSet_ = false;
}

std::string CreateElbClusterPortRequestBody::getMode() const
{
    return mode_;
}

void CreateElbClusterPortRequestBody::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool CreateElbClusterPortRequestBody::modeIsSet() const
{
    return modeIsSet_;
}

void CreateElbClusterPortRequestBody::unsetmode()
{
    modeIsSet_ = false;
}

int32_t CreateElbClusterPortRequestBody::getLbListenerPort() const
{
    return lbListenerPort_;
}

void CreateElbClusterPortRequestBody::setLbListenerPort(int32_t value)
{
    lbListenerPort_ = value;
    lbListenerPortIsSet_ = true;
}

bool CreateElbClusterPortRequestBody::lbListenerPortIsSet() const
{
    return lbListenerPortIsSet_;
}

void CreateElbClusterPortRequestBody::unsetlbListenerPort()
{
    lbListenerPortIsSet_ = false;
}

int32_t CreateElbClusterPortRequestBody::getServerPort() const
{
    return serverPort_;
}

void CreateElbClusterPortRequestBody::setServerPort(int32_t value)
{
    serverPort_ = value;
    serverPortIsSet_ = true;
}

bool CreateElbClusterPortRequestBody::serverPortIsSet() const
{
    return serverPortIsSet_;
}

void CreateElbClusterPortRequestBody::unsetserverPort()
{
    serverPortIsSet_ = false;
}

int32_t CreateElbClusterPortRequestBody::getTunnelLbListenerPort() const
{
    return tunnelLbListenerPort_;
}

void CreateElbClusterPortRequestBody::setTunnelLbListenerPort(int32_t value)
{
    tunnelLbListenerPort_ = value;
    tunnelLbListenerPortIsSet_ = true;
}

bool CreateElbClusterPortRequestBody::tunnelLbListenerPortIsSet() const
{
    return tunnelLbListenerPortIsSet_;
}

void CreateElbClusterPortRequestBody::unsettunnelLbListenerPort()
{
    tunnelLbListenerPortIsSet_ = false;
}

int32_t CreateElbClusterPortRequestBody::getTunnelServerPort() const
{
    return tunnelServerPort_;
}

void CreateElbClusterPortRequestBody::setTunnelServerPort(int32_t value)
{
    tunnelServerPort_ = value;
    tunnelServerPortIsSet_ = true;
}

bool CreateElbClusterPortRequestBody::tunnelServerPortIsSet() const
{
    return tunnelServerPortIsSet_;
}

void CreateElbClusterPortRequestBody::unsettunnelServerPort()
{
    tunnelServerPortIsSet_ = false;
}

}
}
}
}
}


