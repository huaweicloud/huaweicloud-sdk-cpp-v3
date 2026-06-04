

#include "huaweicloud/dds/v3/model/BindPublicGatewayResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




BindPublicGatewayResponse::BindPublicGatewayResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
    natGatewayId_ = "";
    natGatewayIdIsSet_ = false;
    publicIpId_ = "";
    publicIpIdIsSet_ = false;
    externalServicePort_ = 0;
    externalServicePortIsSet_ = false;
}

BindPublicGatewayResponse::~BindPublicGatewayResponse() = default;

void BindPublicGatewayResponse::validate()
{
}

web::json::value BindPublicGatewayResponse::toJson() const
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
    if(natGatewayIdIsSet_) {
        val[utility::conversions::to_string_t("nat_gateway_id")] = ModelBase::toJson(natGatewayId_);
    }
    if(publicIpIdIsSet_) {
        val[utility::conversions::to_string_t("public_ip_id")] = ModelBase::toJson(publicIpId_);
    }
    if(externalServicePortIsSet_) {
        val[utility::conversions::to_string_t("external_service_port")] = ModelBase::toJson(externalServicePort_);
    }

    return val;
}
bool BindPublicGatewayResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("nat_gateway_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nat_gateway_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNatGatewayId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external_service_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_service_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalServicePort(refVal);
        }
    }
    return ok;
}


std::string BindPublicGatewayResponse::getInstanceId() const
{
    return instanceId_;
}

void BindPublicGatewayResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BindPublicGatewayResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BindPublicGatewayResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string BindPublicGatewayResponse::getInstanceName() const
{
    return instanceName_;
}

void BindPublicGatewayResponse::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool BindPublicGatewayResponse::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void BindPublicGatewayResponse::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string BindPublicGatewayResponse::getNodeId() const
{
    return nodeId_;
}

void BindPublicGatewayResponse::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool BindPublicGatewayResponse::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void BindPublicGatewayResponse::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string BindPublicGatewayResponse::getNodeName() const
{
    return nodeName_;
}

void BindPublicGatewayResponse::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool BindPublicGatewayResponse::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void BindPublicGatewayResponse::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string BindPublicGatewayResponse::getNatGatewayId() const
{
    return natGatewayId_;
}

void BindPublicGatewayResponse::setNatGatewayId(const std::string& value)
{
    natGatewayId_ = value;
    natGatewayIdIsSet_ = true;
}

bool BindPublicGatewayResponse::natGatewayIdIsSet() const
{
    return natGatewayIdIsSet_;
}

void BindPublicGatewayResponse::unsetnatGatewayId()
{
    natGatewayIdIsSet_ = false;
}

std::string BindPublicGatewayResponse::getPublicIpId() const
{
    return publicIpId_;
}

void BindPublicGatewayResponse::setPublicIpId(const std::string& value)
{
    publicIpId_ = value;
    publicIpIdIsSet_ = true;
}

bool BindPublicGatewayResponse::publicIpIdIsSet() const
{
    return publicIpIdIsSet_;
}

void BindPublicGatewayResponse::unsetpublicIpId()
{
    publicIpIdIsSet_ = false;
}

int32_t BindPublicGatewayResponse::getExternalServicePort() const
{
    return externalServicePort_;
}

void BindPublicGatewayResponse::setExternalServicePort(int32_t value)
{
    externalServicePort_ = value;
    externalServicePortIsSet_ = true;
}

bool BindPublicGatewayResponse::externalServicePortIsSet() const
{
    return externalServicePortIsSet_;
}

void BindPublicGatewayResponse::unsetexternalServicePort()
{
    externalServicePortIsSet_ = false;
}

}
}
}
}
}


