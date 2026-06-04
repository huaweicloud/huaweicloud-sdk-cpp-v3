

#include "huaweicloud/dds/v3/model/BindPublicGatewayRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




BindPublicGatewayRequest::BindPublicGatewayRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    bodyIsSet_ = false;
}

BindPublicGatewayRequest::~BindPublicGatewayRequest() = default;

void BindPublicGatewayRequest::validate()
{
}

web::json::value BindPublicGatewayRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BindPublicGatewayRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BindPublicGatewayRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BindPublicGatewayRequest::getInstanceId() const
{
    return instanceId_;
}

void BindPublicGatewayRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BindPublicGatewayRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BindPublicGatewayRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string BindPublicGatewayRequest::getNodeId() const
{
    return nodeId_;
}

void BindPublicGatewayRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool BindPublicGatewayRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void BindPublicGatewayRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

BindPublicGatewayRequestBody BindPublicGatewayRequest::getBody() const
{
    return body_;
}

void BindPublicGatewayRequest::setBody(const BindPublicGatewayRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BindPublicGatewayRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BindPublicGatewayRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


