

#include "huaweicloud/dds/v3/model/BindPublicGatewayRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




BindPublicGatewayRequestBody::BindPublicGatewayRequestBody()
{
    natGatewayId_ = "";
    natGatewayIdIsSet_ = false;
    publicIpId_ = "";
    publicIpIdIsSet_ = false;
    externalServicePort_ = 0;
    externalServicePortIsSet_ = false;
}

BindPublicGatewayRequestBody::~BindPublicGatewayRequestBody() = default;

void BindPublicGatewayRequestBody::validate()
{
}

web::json::value BindPublicGatewayRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool BindPublicGatewayRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string BindPublicGatewayRequestBody::getNatGatewayId() const
{
    return natGatewayId_;
}

void BindPublicGatewayRequestBody::setNatGatewayId(const std::string& value)
{
    natGatewayId_ = value;
    natGatewayIdIsSet_ = true;
}

bool BindPublicGatewayRequestBody::natGatewayIdIsSet() const
{
    return natGatewayIdIsSet_;
}

void BindPublicGatewayRequestBody::unsetnatGatewayId()
{
    natGatewayIdIsSet_ = false;
}

std::string BindPublicGatewayRequestBody::getPublicIpId() const
{
    return publicIpId_;
}

void BindPublicGatewayRequestBody::setPublicIpId(const std::string& value)
{
    publicIpId_ = value;
    publicIpIdIsSet_ = true;
}

bool BindPublicGatewayRequestBody::publicIpIdIsSet() const
{
    return publicIpIdIsSet_;
}

void BindPublicGatewayRequestBody::unsetpublicIpId()
{
    publicIpIdIsSet_ = false;
}

int32_t BindPublicGatewayRequestBody::getExternalServicePort() const
{
    return externalServicePort_;
}

void BindPublicGatewayRequestBody::setExternalServicePort(int32_t value)
{
    externalServicePort_ = value;
    externalServicePortIsSet_ = true;
}

bool BindPublicGatewayRequestBody::externalServicePortIsSet() const
{
    return externalServicePortIsSet_;
}

void BindPublicGatewayRequestBody::unsetexternalServicePort()
{
    externalServicePortIsSet_ = false;
}

}
}
}
}
}


