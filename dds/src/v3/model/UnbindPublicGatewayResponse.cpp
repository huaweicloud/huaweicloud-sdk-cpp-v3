

#include "huaweicloud/dds/v3/model/UnbindPublicGatewayResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UnbindPublicGatewayResponse::UnbindPublicGatewayResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
}

UnbindPublicGatewayResponse::~UnbindPublicGatewayResponse() = default;

void UnbindPublicGatewayResponse::validate()
{
}

web::json::value UnbindPublicGatewayResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }

    return val;
}
bool UnbindPublicGatewayResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
        }
    }
    return ok;
}


std::string UnbindPublicGatewayResponse::getInstanceId() const
{
    return instanceId_;
}

void UnbindPublicGatewayResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UnbindPublicGatewayResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UnbindPublicGatewayResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UnbindPublicGatewayResponse::getInstanceName() const
{
    return instanceName_;
}

void UnbindPublicGatewayResponse::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool UnbindPublicGatewayResponse::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void UnbindPublicGatewayResponse::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string UnbindPublicGatewayResponse::getNodeId() const
{
    return nodeId_;
}

void UnbindPublicGatewayResponse::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool UnbindPublicGatewayResponse::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void UnbindPublicGatewayResponse::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string UnbindPublicGatewayResponse::getNodeName() const
{
    return nodeName_;
}

void UnbindPublicGatewayResponse::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool UnbindPublicGatewayResponse::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void UnbindPublicGatewayResponse::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

}
}
}
}
}


