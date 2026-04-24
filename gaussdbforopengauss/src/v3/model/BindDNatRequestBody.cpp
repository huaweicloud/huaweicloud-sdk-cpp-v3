

#include "huaweicloud/gaussdbforopengauss/v3/model/BindDNatRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BindDNatRequestBody::BindDNatRequestBody()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    publicIpId_ = "";
    publicIpIdIsSet_ = false;
    natGatewayId_ = "";
    natGatewayIdIsSet_ = false;
    externalServicePort_ = 0;
    externalServicePortIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

BindDNatRequestBody::~BindDNatRequestBody() = default;

void BindDNatRequestBody::validate()
{
}

web::json::value BindDNatRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(publicIpIdIsSet_) {
        val[utility::conversions::to_string_t("public_ip_id")] = ModelBase::toJson(publicIpId_);
    }
    if(natGatewayIdIsSet_) {
        val[utility::conversions::to_string_t("nat_gateway_id")] = ModelBase::toJson(natGatewayId_);
    }
    if(externalServicePortIsSet_) {
        val[utility::conversions::to_string_t("external_service_port")] = ModelBase::toJson(externalServicePort_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}
bool BindDNatRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("public_ip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("external_service_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_service_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalServicePort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}


std::string BindDNatRequestBody::getNodeId() const
{
    return nodeId_;
}

void BindDNatRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool BindDNatRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void BindDNatRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string BindDNatRequestBody::getPublicIpId() const
{
    return publicIpId_;
}

void BindDNatRequestBody::setPublicIpId(const std::string& value)
{
    publicIpId_ = value;
    publicIpIdIsSet_ = true;
}

bool BindDNatRequestBody::publicIpIdIsSet() const
{
    return publicIpIdIsSet_;
}

void BindDNatRequestBody::unsetpublicIpId()
{
    publicIpIdIsSet_ = false;
}

std::string BindDNatRequestBody::getNatGatewayId() const
{
    return natGatewayId_;
}

void BindDNatRequestBody::setNatGatewayId(const std::string& value)
{
    natGatewayId_ = value;
    natGatewayIdIsSet_ = true;
}

bool BindDNatRequestBody::natGatewayIdIsSet() const
{
    return natGatewayIdIsSet_;
}

void BindDNatRequestBody::unsetnatGatewayId()
{
    natGatewayIdIsSet_ = false;
}

int32_t BindDNatRequestBody::getExternalServicePort() const
{
    return externalServicePort_;
}

void BindDNatRequestBody::setExternalServicePort(int32_t value)
{
    externalServicePort_ = value;
    externalServicePortIsSet_ = true;
}

bool BindDNatRequestBody::externalServicePortIsSet() const
{
    return externalServicePortIsSet_;
}

void BindDNatRequestBody::unsetexternalServicePort()
{
    externalServicePortIsSet_ = false;
}

std::string BindDNatRequestBody::getAction() const
{
    return action_;
}

void BindDNatRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BindDNatRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void BindDNatRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


