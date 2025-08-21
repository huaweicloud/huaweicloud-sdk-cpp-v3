

#include "huaweicloud/live/v1/model/ModifyFlowOutputResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyFlowOutputResponse::ModifyFlowOutputResponse()
{
    cidrWhitelistIsSet_ = false;
    destination_ = "";
    destinationIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    encryptionIsSet_ = false;
    outputStatus_ = "";
    outputStatusIsSet_ = false;
    listenerAddress_ = "";
    listenerAddressIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    minLatency_ = 0;
    minLatencyIsSet_ = false;
    healthStatus_ = "";
    healthStatusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ModifyFlowOutputResponse::~ModifyFlowOutputResponse() = default;

void ModifyFlowOutputResponse::validate()
{
}

web::json::value ModifyFlowOutputResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cidrWhitelistIsSet_) {
        val[utility::conversions::to_string_t("cidr_whitelist")] = ModelBase::toJson(cidrWhitelist_);
    }
    if(destinationIsSet_) {
        val[utility::conversions::to_string_t("destination")] = ModelBase::toJson(destination_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(encryptionIsSet_) {
        val[utility::conversions::to_string_t("encryption")] = ModelBase::toJson(encryption_);
    }
    if(outputStatusIsSet_) {
        val[utility::conversions::to_string_t("output_status")] = ModelBase::toJson(outputStatus_);
    }
    if(listenerAddressIsSet_) {
        val[utility::conversions::to_string_t("listener_address")] = ModelBase::toJson(listenerAddress_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(streamIdIsSet_) {
        val[utility::conversions::to_string_t("stream_id")] = ModelBase::toJson(streamId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(minLatencyIsSet_) {
        val[utility::conversions::to_string_t("min_latency")] = ModelBase::toJson(minLatency_);
    }
    if(healthStatusIsSet_) {
        val[utility::conversions::to_string_t("health_status")] = ModelBase::toJson(healthStatus_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ModifyFlowOutputResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cidr_whitelist"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr_whitelist"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidrWhitelist(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestination(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encryption"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryption"));
        if(!fieldValue.is_null())
        {
            FlowSourceDecryption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("listener_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("listener_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListenerAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_latency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_latency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinLatency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("health_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("health_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHealthStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ModifyFlowOutputResponse::getCidrWhitelist()
{
    return cidrWhitelist_;
}

void ModifyFlowOutputResponse::setCidrWhitelist(const std::vector<std::string>& value)
{
    cidrWhitelist_ = value;
    cidrWhitelistIsSet_ = true;
}

bool ModifyFlowOutputResponse::cidrWhitelistIsSet() const
{
    return cidrWhitelistIsSet_;
}

void ModifyFlowOutputResponse::unsetcidrWhitelist()
{
    cidrWhitelistIsSet_ = false;
}

std::string ModifyFlowOutputResponse::getDestination() const
{
    return destination_;
}

void ModifyFlowOutputResponse::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool ModifyFlowOutputResponse::destinationIsSet() const
{
    return destinationIsSet_;
}

void ModifyFlowOutputResponse::unsetdestination()
{
    destinationIsSet_ = false;
}

std::string ModifyFlowOutputResponse::getName() const
{
    return name_;
}

void ModifyFlowOutputResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ModifyFlowOutputResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ModifyFlowOutputResponse::unsetname()
{
    nameIsSet_ = false;
}

FlowSourceDecryption ModifyFlowOutputResponse::getEncryption() const
{
    return encryption_;
}

void ModifyFlowOutputResponse::setEncryption(const FlowSourceDecryption& value)
{
    encryption_ = value;
    encryptionIsSet_ = true;
}

bool ModifyFlowOutputResponse::encryptionIsSet() const
{
    return encryptionIsSet_;
}

void ModifyFlowOutputResponse::unsetencryption()
{
    encryptionIsSet_ = false;
}

std::string ModifyFlowOutputResponse::getOutputStatus() const
{
    return outputStatus_;
}

void ModifyFlowOutputResponse::setOutputStatus(const std::string& value)
{
    outputStatus_ = value;
    outputStatusIsSet_ = true;
}

bool ModifyFlowOutputResponse::outputStatusIsSet() const
{
    return outputStatusIsSet_;
}

void ModifyFlowOutputResponse::unsetoutputStatus()
{
    outputStatusIsSet_ = false;
}

std::string ModifyFlowOutputResponse::getListenerAddress() const
{
    return listenerAddress_;
}

void ModifyFlowOutputResponse::setListenerAddress(const std::string& value)
{
    listenerAddress_ = value;
    listenerAddressIsSet_ = true;
}

bool ModifyFlowOutputResponse::listenerAddressIsSet() const
{
    return listenerAddressIsSet_;
}

void ModifyFlowOutputResponse::unsetlistenerAddress()
{
    listenerAddressIsSet_ = false;
}

int32_t ModifyFlowOutputResponse::getPort() const
{
    return port_;
}

void ModifyFlowOutputResponse::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ModifyFlowOutputResponse::portIsSet() const
{
    return portIsSet_;
}

void ModifyFlowOutputResponse::unsetport()
{
    portIsSet_ = false;
}

std::string ModifyFlowOutputResponse::getProtocol() const
{
    return protocol_;
}

void ModifyFlowOutputResponse::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ModifyFlowOutputResponse::protocolIsSet() const
{
    return protocolIsSet_;
}

void ModifyFlowOutputResponse::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string ModifyFlowOutputResponse::getStreamId() const
{
    return streamId_;
}

void ModifyFlowOutputResponse::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool ModifyFlowOutputResponse::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void ModifyFlowOutputResponse::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string ModifyFlowOutputResponse::getDescription() const
{
    return description_;
}

void ModifyFlowOutputResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ModifyFlowOutputResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ModifyFlowOutputResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t ModifyFlowOutputResponse::getMinLatency() const
{
    return minLatency_;
}

void ModifyFlowOutputResponse::setMinLatency(int32_t value)
{
    minLatency_ = value;
    minLatencyIsSet_ = true;
}

bool ModifyFlowOutputResponse::minLatencyIsSet() const
{
    return minLatencyIsSet_;
}

void ModifyFlowOutputResponse::unsetminLatency()
{
    minLatencyIsSet_ = false;
}

std::string ModifyFlowOutputResponse::getHealthStatus() const
{
    return healthStatus_;
}

void ModifyFlowOutputResponse::setHealthStatus(const std::string& value)
{
    healthStatus_ = value;
    healthStatusIsSet_ = true;
}

bool ModifyFlowOutputResponse::healthStatusIsSet() const
{
    return healthStatusIsSet_;
}

void ModifyFlowOutputResponse::unsethealthStatus()
{
    healthStatusIsSet_ = false;
}

std::string ModifyFlowOutputResponse::getType() const
{
    return type_;
}

void ModifyFlowOutputResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ModifyFlowOutputResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ModifyFlowOutputResponse::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


