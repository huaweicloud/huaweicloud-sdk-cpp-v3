

#include "huaweicloud/live/v1/model/FlowsOutput.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




FlowsOutput::FlowsOutput()
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

FlowsOutput::~FlowsOutput() = default;

void FlowsOutput::validate()
{
}

web::json::value FlowsOutput::toJson() const
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
bool FlowsOutput::fromJson(const web::json::value& val)
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


std::vector<std::string>& FlowsOutput::getCidrWhitelist()
{
    return cidrWhitelist_;
}

void FlowsOutput::setCidrWhitelist(const std::vector<std::string>& value)
{
    cidrWhitelist_ = value;
    cidrWhitelistIsSet_ = true;
}

bool FlowsOutput::cidrWhitelistIsSet() const
{
    return cidrWhitelistIsSet_;
}

void FlowsOutput::unsetcidrWhitelist()
{
    cidrWhitelistIsSet_ = false;
}

std::string FlowsOutput::getDestination() const
{
    return destination_;
}

void FlowsOutput::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool FlowsOutput::destinationIsSet() const
{
    return destinationIsSet_;
}

void FlowsOutput::unsetdestination()
{
    destinationIsSet_ = false;
}

std::string FlowsOutput::getName() const
{
    return name_;
}

void FlowsOutput::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool FlowsOutput::nameIsSet() const
{
    return nameIsSet_;
}

void FlowsOutput::unsetname()
{
    nameIsSet_ = false;
}

FlowSourceDecryption FlowsOutput::getEncryption() const
{
    return encryption_;
}

void FlowsOutput::setEncryption(const FlowSourceDecryption& value)
{
    encryption_ = value;
    encryptionIsSet_ = true;
}

bool FlowsOutput::encryptionIsSet() const
{
    return encryptionIsSet_;
}

void FlowsOutput::unsetencryption()
{
    encryptionIsSet_ = false;
}

std::string FlowsOutput::getOutputStatus() const
{
    return outputStatus_;
}

void FlowsOutput::setOutputStatus(const std::string& value)
{
    outputStatus_ = value;
    outputStatusIsSet_ = true;
}

bool FlowsOutput::outputStatusIsSet() const
{
    return outputStatusIsSet_;
}

void FlowsOutput::unsetoutputStatus()
{
    outputStatusIsSet_ = false;
}

std::string FlowsOutput::getListenerAddress() const
{
    return listenerAddress_;
}

void FlowsOutput::setListenerAddress(const std::string& value)
{
    listenerAddress_ = value;
    listenerAddressIsSet_ = true;
}

bool FlowsOutput::listenerAddressIsSet() const
{
    return listenerAddressIsSet_;
}

void FlowsOutput::unsetlistenerAddress()
{
    listenerAddressIsSet_ = false;
}

int32_t FlowsOutput::getPort() const
{
    return port_;
}

void FlowsOutput::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool FlowsOutput::portIsSet() const
{
    return portIsSet_;
}

void FlowsOutput::unsetport()
{
    portIsSet_ = false;
}

std::string FlowsOutput::getProtocol() const
{
    return protocol_;
}

void FlowsOutput::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool FlowsOutput::protocolIsSet() const
{
    return protocolIsSet_;
}

void FlowsOutput::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string FlowsOutput::getStreamId() const
{
    return streamId_;
}

void FlowsOutput::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool FlowsOutput::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void FlowsOutput::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string FlowsOutput::getDescription() const
{
    return description_;
}

void FlowsOutput::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool FlowsOutput::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void FlowsOutput::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t FlowsOutput::getMinLatency() const
{
    return minLatency_;
}

void FlowsOutput::setMinLatency(int32_t value)
{
    minLatency_ = value;
    minLatencyIsSet_ = true;
}

bool FlowsOutput::minLatencyIsSet() const
{
    return minLatencyIsSet_;
}

void FlowsOutput::unsetminLatency()
{
    minLatencyIsSet_ = false;
}

std::string FlowsOutput::getHealthStatus() const
{
    return healthStatus_;
}

void FlowsOutput::setHealthStatus(const std::string& value)
{
    healthStatus_ = value;
    healthStatusIsSet_ = true;
}

bool FlowsOutput::healthStatusIsSet() const
{
    return healthStatusIsSet_;
}

void FlowsOutput::unsethealthStatus()
{
    healthStatusIsSet_ = false;
}

std::string FlowsOutput::getType() const
{
    return type_;
}

void FlowsOutput::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool FlowsOutput::typeIsSet() const
{
    return typeIsSet_;
}

void FlowsOutput::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


