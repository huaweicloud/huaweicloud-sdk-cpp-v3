

#include "huaweicloud/gaussdbforopengauss/v3/model/DNatInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DNatInfoResult::DNatInfoResult()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    natGatewayId_ = "";
    natGatewayIdIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
    publicIpId_ = "";
    publicIpIdIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
    externalServicePort_ = 0;
    externalServicePortIsSet_ = false;
    internalServicePort_ = 0;
    internalServicePortIsSet_ = false;
    privateIp_ = "";
    privateIpIsSet_ = false;
}

DNatInfoResult::~DNatInfoResult() = default;

void DNatInfoResult::validate()
{
}

web::json::value DNatInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(natGatewayIdIsSet_) {
        val[utility::conversions::to_string_t("nat_gateway_id")] = ModelBase::toJson(natGatewayId_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(publicIpIdIsSet_) {
        val[utility::conversions::to_string_t("public_ip_id")] = ModelBase::toJson(publicIpId_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(externalServicePortIsSet_) {
        val[utility::conversions::to_string_t("external_service_port")] = ModelBase::toJson(externalServicePort_);
    }
    if(internalServicePortIsSet_) {
        val[utility::conversions::to_string_t("internal_service_port")] = ModelBase::toJson(internalServicePort_);
    }
    if(privateIpIsSet_) {
        val[utility::conversions::to_string_t("private_ip")] = ModelBase::toJson(privateIp_);
    }

    return val;
}
bool DNatInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("public_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("internal_service_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internal_service_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternalServicePort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateIp(refVal);
        }
    }
    return ok;
}


std::string DNatInfoResult::getNodeId() const
{
    return nodeId_;
}

void DNatInfoResult::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool DNatInfoResult::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void DNatInfoResult::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string DNatInfoResult::getNatGatewayId() const
{
    return natGatewayId_;
}

void DNatInfoResult::setNatGatewayId(const std::string& value)
{
    natGatewayId_ = value;
    natGatewayIdIsSet_ = true;
}

bool DNatInfoResult::natGatewayIdIsSet() const
{
    return natGatewayIdIsSet_;
}

void DNatInfoResult::unsetnatGatewayId()
{
    natGatewayIdIsSet_ = false;
}

std::string DNatInfoResult::getPortId() const
{
    return portId_;
}

void DNatInfoResult::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool DNatInfoResult::portIdIsSet() const
{
    return portIdIsSet_;
}

void DNatInfoResult::unsetportId()
{
    portIdIsSet_ = false;
}

std::string DNatInfoResult::getPublicIpId() const
{
    return publicIpId_;
}

void DNatInfoResult::setPublicIpId(const std::string& value)
{
    publicIpId_ = value;
    publicIpIdIsSet_ = true;
}

bool DNatInfoResult::publicIpIdIsSet() const
{
    return publicIpIdIsSet_;
}

void DNatInfoResult::unsetpublicIpId()
{
    publicIpIdIsSet_ = false;
}

std::string DNatInfoResult::getPublicIp() const
{
    return publicIp_;
}

void DNatInfoResult::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool DNatInfoResult::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void DNatInfoResult::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

int32_t DNatInfoResult::getExternalServicePort() const
{
    return externalServicePort_;
}

void DNatInfoResult::setExternalServicePort(int32_t value)
{
    externalServicePort_ = value;
    externalServicePortIsSet_ = true;
}

bool DNatInfoResult::externalServicePortIsSet() const
{
    return externalServicePortIsSet_;
}

void DNatInfoResult::unsetexternalServicePort()
{
    externalServicePortIsSet_ = false;
}

int32_t DNatInfoResult::getInternalServicePort() const
{
    return internalServicePort_;
}

void DNatInfoResult::setInternalServicePort(int32_t value)
{
    internalServicePort_ = value;
    internalServicePortIsSet_ = true;
}

bool DNatInfoResult::internalServicePortIsSet() const
{
    return internalServicePortIsSet_;
}

void DNatInfoResult::unsetinternalServicePort()
{
    internalServicePortIsSet_ = false;
}

std::string DNatInfoResult::getPrivateIp() const
{
    return privateIp_;
}

void DNatInfoResult::setPrivateIp(const std::string& value)
{
    privateIp_ = value;
    privateIpIsSet_ = true;
}

bool DNatInfoResult::privateIpIsSet() const
{
    return privateIpIsSet_;
}

void DNatInfoResult::unsetprivateIp()
{
    privateIpIsSet_ = false;
}

}
}
}
}
}


