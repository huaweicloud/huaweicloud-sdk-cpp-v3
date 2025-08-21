

#include "huaweicloud/live/v1/model/AddFlowOutputsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




AddFlowOutputsRequest::AddFlowOutputsRequest()
{
    cidrWhitelistIsSet_ = false;
    destination_ = "";
    destinationIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    encryptionIsSet_ = false;
    outputStatus_ = "";
    outputStatusIsSet_ = false;
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
}

AddFlowOutputsRequest::~AddFlowOutputsRequest() = default;

void AddFlowOutputsRequest::validate()
{
}

web::json::value AddFlowOutputsRequest::toJson() const
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

    return val;
}
bool AddFlowOutputsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::vector<std::string>& AddFlowOutputsRequest::getCidrWhitelist()
{
    return cidrWhitelist_;
}

void AddFlowOutputsRequest::setCidrWhitelist(const std::vector<std::string>& value)
{
    cidrWhitelist_ = value;
    cidrWhitelistIsSet_ = true;
}

bool AddFlowOutputsRequest::cidrWhitelistIsSet() const
{
    return cidrWhitelistIsSet_;
}

void AddFlowOutputsRequest::unsetcidrWhitelist()
{
    cidrWhitelistIsSet_ = false;
}

std::string AddFlowOutputsRequest::getDestination() const
{
    return destination_;
}

void AddFlowOutputsRequest::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool AddFlowOutputsRequest::destinationIsSet() const
{
    return destinationIsSet_;
}

void AddFlowOutputsRequest::unsetdestination()
{
    destinationIsSet_ = false;
}

std::string AddFlowOutputsRequest::getName() const
{
    return name_;
}

void AddFlowOutputsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddFlowOutputsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void AddFlowOutputsRequest::unsetname()
{
    nameIsSet_ = false;
}

FlowSourceDecryption AddFlowOutputsRequest::getEncryption() const
{
    return encryption_;
}

void AddFlowOutputsRequest::setEncryption(const FlowSourceDecryption& value)
{
    encryption_ = value;
    encryptionIsSet_ = true;
}

bool AddFlowOutputsRequest::encryptionIsSet() const
{
    return encryptionIsSet_;
}

void AddFlowOutputsRequest::unsetencryption()
{
    encryptionIsSet_ = false;
}

std::string AddFlowOutputsRequest::getOutputStatus() const
{
    return outputStatus_;
}

void AddFlowOutputsRequest::setOutputStatus(const std::string& value)
{
    outputStatus_ = value;
    outputStatusIsSet_ = true;
}

bool AddFlowOutputsRequest::outputStatusIsSet() const
{
    return outputStatusIsSet_;
}

void AddFlowOutputsRequest::unsetoutputStatus()
{
    outputStatusIsSet_ = false;
}

int32_t AddFlowOutputsRequest::getPort() const
{
    return port_;
}

void AddFlowOutputsRequest::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool AddFlowOutputsRequest::portIsSet() const
{
    return portIsSet_;
}

void AddFlowOutputsRequest::unsetport()
{
    portIsSet_ = false;
}

std::string AddFlowOutputsRequest::getProtocol() const
{
    return protocol_;
}

void AddFlowOutputsRequest::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool AddFlowOutputsRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void AddFlowOutputsRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string AddFlowOutputsRequest::getStreamId() const
{
    return streamId_;
}

void AddFlowOutputsRequest::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool AddFlowOutputsRequest::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void AddFlowOutputsRequest::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string AddFlowOutputsRequest::getDescription() const
{
    return description_;
}

void AddFlowOutputsRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddFlowOutputsRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddFlowOutputsRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t AddFlowOutputsRequest::getMinLatency() const
{
    return minLatency_;
}

void AddFlowOutputsRequest::setMinLatency(int32_t value)
{
    minLatency_ = value;
    minLatencyIsSet_ = true;
}

bool AddFlowOutputsRequest::minLatencyIsSet() const
{
    return minLatencyIsSet_;
}

void AddFlowOutputsRequest::unsetminLatency()
{
    minLatencyIsSet_ = false;
}

}
}
}
}
}


