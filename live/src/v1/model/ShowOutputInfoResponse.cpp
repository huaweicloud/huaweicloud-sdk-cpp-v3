

#include "huaweicloud/live/v1/model/ShowOutputInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowOutputInfoResponse::ShowOutputInfoResponse()
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

ShowOutputInfoResponse::~ShowOutputInfoResponse() = default;

void ShowOutputInfoResponse::validate()
{
}

web::json::value ShowOutputInfoResponse::toJson() const
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
bool ShowOutputInfoResponse::fromJson(const web::json::value& val)
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


std::vector<std::string>& ShowOutputInfoResponse::getCidrWhitelist()
{
    return cidrWhitelist_;
}

void ShowOutputInfoResponse::setCidrWhitelist(const std::vector<std::string>& value)
{
    cidrWhitelist_ = value;
    cidrWhitelistIsSet_ = true;
}

bool ShowOutputInfoResponse::cidrWhitelistIsSet() const
{
    return cidrWhitelistIsSet_;
}

void ShowOutputInfoResponse::unsetcidrWhitelist()
{
    cidrWhitelistIsSet_ = false;
}

std::string ShowOutputInfoResponse::getDestination() const
{
    return destination_;
}

void ShowOutputInfoResponse::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool ShowOutputInfoResponse::destinationIsSet() const
{
    return destinationIsSet_;
}

void ShowOutputInfoResponse::unsetdestination()
{
    destinationIsSet_ = false;
}

std::string ShowOutputInfoResponse::getName() const
{
    return name_;
}

void ShowOutputInfoResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowOutputInfoResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowOutputInfoResponse::unsetname()
{
    nameIsSet_ = false;
}

FlowSourceDecryption ShowOutputInfoResponse::getEncryption() const
{
    return encryption_;
}

void ShowOutputInfoResponse::setEncryption(const FlowSourceDecryption& value)
{
    encryption_ = value;
    encryptionIsSet_ = true;
}

bool ShowOutputInfoResponse::encryptionIsSet() const
{
    return encryptionIsSet_;
}

void ShowOutputInfoResponse::unsetencryption()
{
    encryptionIsSet_ = false;
}

std::string ShowOutputInfoResponse::getOutputStatus() const
{
    return outputStatus_;
}

void ShowOutputInfoResponse::setOutputStatus(const std::string& value)
{
    outputStatus_ = value;
    outputStatusIsSet_ = true;
}

bool ShowOutputInfoResponse::outputStatusIsSet() const
{
    return outputStatusIsSet_;
}

void ShowOutputInfoResponse::unsetoutputStatus()
{
    outputStatusIsSet_ = false;
}

std::string ShowOutputInfoResponse::getListenerAddress() const
{
    return listenerAddress_;
}

void ShowOutputInfoResponse::setListenerAddress(const std::string& value)
{
    listenerAddress_ = value;
    listenerAddressIsSet_ = true;
}

bool ShowOutputInfoResponse::listenerAddressIsSet() const
{
    return listenerAddressIsSet_;
}

void ShowOutputInfoResponse::unsetlistenerAddress()
{
    listenerAddressIsSet_ = false;
}

int32_t ShowOutputInfoResponse::getPort() const
{
    return port_;
}

void ShowOutputInfoResponse::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ShowOutputInfoResponse::portIsSet() const
{
    return portIsSet_;
}

void ShowOutputInfoResponse::unsetport()
{
    portIsSet_ = false;
}

std::string ShowOutputInfoResponse::getProtocol() const
{
    return protocol_;
}

void ShowOutputInfoResponse::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ShowOutputInfoResponse::protocolIsSet() const
{
    return protocolIsSet_;
}

void ShowOutputInfoResponse::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string ShowOutputInfoResponse::getStreamId() const
{
    return streamId_;
}

void ShowOutputInfoResponse::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool ShowOutputInfoResponse::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void ShowOutputInfoResponse::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string ShowOutputInfoResponse::getDescription() const
{
    return description_;
}

void ShowOutputInfoResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowOutputInfoResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowOutputInfoResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t ShowOutputInfoResponse::getMinLatency() const
{
    return minLatency_;
}

void ShowOutputInfoResponse::setMinLatency(int32_t value)
{
    minLatency_ = value;
    minLatencyIsSet_ = true;
}

bool ShowOutputInfoResponse::minLatencyIsSet() const
{
    return minLatencyIsSet_;
}

void ShowOutputInfoResponse::unsetminLatency()
{
    minLatencyIsSet_ = false;
}

std::string ShowOutputInfoResponse::getHealthStatus() const
{
    return healthStatus_;
}

void ShowOutputInfoResponse::setHealthStatus(const std::string& value)
{
    healthStatus_ = value;
    healthStatusIsSet_ = true;
}

bool ShowOutputInfoResponse::healthStatusIsSet() const
{
    return healthStatusIsSet_;
}

void ShowOutputInfoResponse::unsethealthStatus()
{
    healthStatusIsSet_ = false;
}

std::string ShowOutputInfoResponse::getType() const
{
    return type_;
}

void ShowOutputInfoResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowOutputInfoResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowOutputInfoResponse::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


