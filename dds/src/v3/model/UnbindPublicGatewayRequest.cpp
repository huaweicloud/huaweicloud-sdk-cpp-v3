

#include "huaweicloud/dds/v3/model/UnbindPublicGatewayRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UnbindPublicGatewayRequest::UnbindPublicGatewayRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

UnbindPublicGatewayRequest::~UnbindPublicGatewayRequest() = default;

void UnbindPublicGatewayRequest::validate()
{
}

web::json::value UnbindPublicGatewayRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }

    return val;
}
bool UnbindPublicGatewayRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    return ok;
}


std::string UnbindPublicGatewayRequest::getInstanceId() const
{
    return instanceId_;
}

void UnbindPublicGatewayRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UnbindPublicGatewayRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UnbindPublicGatewayRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UnbindPublicGatewayRequest::getNodeId() const
{
    return nodeId_;
}

void UnbindPublicGatewayRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool UnbindPublicGatewayRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void UnbindPublicGatewayRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


