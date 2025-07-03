

#include "huaweicloud/live/v1/model/FlowSource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




FlowSource::FlowSource()
{
    sourceListenerAddress_ = "";
    sourceListenerAddressIsSet_ = false;
    sourceListenerPort_ = 0;
    sourceListenerPortIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
    minLatency_ = 0;
    minLatencyIsSet_ = false;
    cidrWhitelistIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    decryptionIsSet_ = false;
}

FlowSource::~FlowSource() = default;

void FlowSource::validate()
{
}

web::json::value FlowSource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceListenerAddressIsSet_) {
        val[utility::conversions::to_string_t("source_listener_address")] = ModelBase::toJson(sourceListenerAddress_);
    }
    if(sourceListenerPortIsSet_) {
        val[utility::conversions::to_string_t("source_listener_port")] = ModelBase::toJson(sourceListenerPort_);
    }
    if(streamIdIsSet_) {
        val[utility::conversions::to_string_t("stream_id")] = ModelBase::toJson(streamId_);
    }
    if(minLatencyIsSet_) {
        val[utility::conversions::to_string_t("min_latency")] = ModelBase::toJson(minLatency_);
    }
    if(cidrWhitelistIsSet_) {
        val[utility::conversions::to_string_t("cidr_whitelist")] = ModelBase::toJson(cidrWhitelist_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(decryptionIsSet_) {
        val[utility::conversions::to_string_t("decryption")] = ModelBase::toJson(decryption_);
    }

    return val;
}
bool FlowSource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_listener_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_listener_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceListenerAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_listener_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_listener_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceListenerPort(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("min_latency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_latency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinLatency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cidr_whitelist"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr_whitelist"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidrWhitelist(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("decryption"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("decryption"));
        if(!fieldValue.is_null())
        {
            FlowSourceDecryption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDecryption(refVal);
        }
    }
    return ok;
}


std::string FlowSource::getSourceListenerAddress() const
{
    return sourceListenerAddress_;
}

void FlowSource::setSourceListenerAddress(const std::string& value)
{
    sourceListenerAddress_ = value;
    sourceListenerAddressIsSet_ = true;
}

bool FlowSource::sourceListenerAddressIsSet() const
{
    return sourceListenerAddressIsSet_;
}

void FlowSource::unsetsourceListenerAddress()
{
    sourceListenerAddressIsSet_ = false;
}

int32_t FlowSource::getSourceListenerPort() const
{
    return sourceListenerPort_;
}

void FlowSource::setSourceListenerPort(int32_t value)
{
    sourceListenerPort_ = value;
    sourceListenerPortIsSet_ = true;
}

bool FlowSource::sourceListenerPortIsSet() const
{
    return sourceListenerPortIsSet_;
}

void FlowSource::unsetsourceListenerPort()
{
    sourceListenerPortIsSet_ = false;
}

std::string FlowSource::getStreamId() const
{
    return streamId_;
}

void FlowSource::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool FlowSource::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void FlowSource::unsetstreamId()
{
    streamIdIsSet_ = false;
}

int32_t FlowSource::getMinLatency() const
{
    return minLatency_;
}

void FlowSource::setMinLatency(int32_t value)
{
    minLatency_ = value;
    minLatencyIsSet_ = true;
}

bool FlowSource::minLatencyIsSet() const
{
    return minLatencyIsSet_;
}

void FlowSource::unsetminLatency()
{
    minLatencyIsSet_ = false;
}

std::vector<std::string>& FlowSource::getCidrWhitelist()
{
    return cidrWhitelist_;
}

void FlowSource::setCidrWhitelist(const std::vector<std::string>& value)
{
    cidrWhitelist_ = value;
    cidrWhitelistIsSet_ = true;
}

bool FlowSource::cidrWhitelistIsSet() const
{
    return cidrWhitelistIsSet_;
}

void FlowSource::unsetcidrWhitelist()
{
    cidrWhitelistIsSet_ = false;
}

std::string FlowSource::getDescription() const
{
    return description_;
}

void FlowSource::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool FlowSource::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void FlowSource::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string FlowSource::getProtocol() const
{
    return protocol_;
}

void FlowSource::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool FlowSource::protocolIsSet() const
{
    return protocolIsSet_;
}

void FlowSource::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string FlowSource::getName() const
{
    return name_;
}

void FlowSource::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool FlowSource::nameIsSet() const
{
    return nameIsSet_;
}

void FlowSource::unsetname()
{
    nameIsSet_ = false;
}

FlowSourceDecryption FlowSource::getDecryption() const
{
    return decryption_;
}

void FlowSource::setDecryption(const FlowSourceDecryption& value)
{
    decryption_ = value;
    decryptionIsSet_ = true;
}

bool FlowSource::decryptionIsSet() const
{
    return decryptionIsSet_;
}

void FlowSource::unsetdecryption()
{
    decryptionIsSet_ = false;
}

}
}
}
}
}


