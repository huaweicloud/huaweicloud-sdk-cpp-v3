

#include "huaweicloud/live/v1/model/UpdateFlowOutputRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateFlowOutputRequestBody::UpdateFlowOutputRequestBody()
{
    cidrWhitelistIsSet_ = false;
    destination_ = "";
    destinationIsSet_ = false;
    encryptionIsSet_ = false;
    outputStatus_ = "";
    outputStatusIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    streamId_ = "";
    streamIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    minLatency_ = 0;
    minLatencyIsSet_ = false;
}

UpdateFlowOutputRequestBody::~UpdateFlowOutputRequestBody() = default;

void UpdateFlowOutputRequestBody::validate()
{
}

web::json::value UpdateFlowOutputRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cidrWhitelistIsSet_) {
        val[utility::conversions::to_string_t("cidr_whitelist")] = ModelBase::toJson(cidrWhitelist_);
    }
    if(destinationIsSet_) {
        val[utility::conversions::to_string_t("destination")] = ModelBase::toJson(destination_);
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
bool UpdateFlowOutputRequestBody::fromJson(const web::json::value& val)
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


std::vector<std::string>& UpdateFlowOutputRequestBody::getCidrWhitelist()
{
    return cidrWhitelist_;
}

void UpdateFlowOutputRequestBody::setCidrWhitelist(const std::vector<std::string>& value)
{
    cidrWhitelist_ = value;
    cidrWhitelistIsSet_ = true;
}

bool UpdateFlowOutputRequestBody::cidrWhitelistIsSet() const
{
    return cidrWhitelistIsSet_;
}

void UpdateFlowOutputRequestBody::unsetcidrWhitelist()
{
    cidrWhitelistIsSet_ = false;
}

std::string UpdateFlowOutputRequestBody::getDestination() const
{
    return destination_;
}

void UpdateFlowOutputRequestBody::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool UpdateFlowOutputRequestBody::destinationIsSet() const
{
    return destinationIsSet_;
}

void UpdateFlowOutputRequestBody::unsetdestination()
{
    destinationIsSet_ = false;
}

FlowSourceDecryption UpdateFlowOutputRequestBody::getEncryption() const
{
    return encryption_;
}

void UpdateFlowOutputRequestBody::setEncryption(const FlowSourceDecryption& value)
{
    encryption_ = value;
    encryptionIsSet_ = true;
}

bool UpdateFlowOutputRequestBody::encryptionIsSet() const
{
    return encryptionIsSet_;
}

void UpdateFlowOutputRequestBody::unsetencryption()
{
    encryptionIsSet_ = false;
}

std::string UpdateFlowOutputRequestBody::getOutputStatus() const
{
    return outputStatus_;
}

void UpdateFlowOutputRequestBody::setOutputStatus(const std::string& value)
{
    outputStatus_ = value;
    outputStatusIsSet_ = true;
}

bool UpdateFlowOutputRequestBody::outputStatusIsSet() const
{
    return outputStatusIsSet_;
}

void UpdateFlowOutputRequestBody::unsetoutputStatus()
{
    outputStatusIsSet_ = false;
}

int32_t UpdateFlowOutputRequestBody::getPort() const
{
    return port_;
}

void UpdateFlowOutputRequestBody::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool UpdateFlowOutputRequestBody::portIsSet() const
{
    return portIsSet_;
}

void UpdateFlowOutputRequestBody::unsetport()
{
    portIsSet_ = false;
}

std::string UpdateFlowOutputRequestBody::getStreamId() const
{
    return streamId_;
}

void UpdateFlowOutputRequestBody::setStreamId(const std::string& value)
{
    streamId_ = value;
    streamIdIsSet_ = true;
}

bool UpdateFlowOutputRequestBody::streamIdIsSet() const
{
    return streamIdIsSet_;
}

void UpdateFlowOutputRequestBody::unsetstreamId()
{
    streamIdIsSet_ = false;
}

std::string UpdateFlowOutputRequestBody::getDescription() const
{
    return description_;
}

void UpdateFlowOutputRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateFlowOutputRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateFlowOutputRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t UpdateFlowOutputRequestBody::getMinLatency() const
{
    return minLatency_;
}

void UpdateFlowOutputRequestBody::setMinLatency(int32_t value)
{
    minLatency_ = value;
    minLatencyIsSet_ = true;
}

bool UpdateFlowOutputRequestBody::minLatencyIsSet() const
{
    return minLatencyIsSet_;
}

void UpdateFlowOutputRequestBody::unsetminLatency()
{
    minLatencyIsSet_ = false;
}

}
}
}
}
}


