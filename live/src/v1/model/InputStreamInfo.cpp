

#include "huaweicloud/live/v1/model/InputStreamInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




InputStreamInfo::InputStreamInfo()
{
    inputProtocol_ = "";
    inputProtocolIsSet_ = false;
    sourcesIsSet_ = false;
    secondarySourcesIsSet_ = false;
    failoverConditionsIsSet_ = false;
    maxBandwidthLimit_ = 0;
    maxBandwidthLimitIsSet_ = false;
    ipPortMode_ = false;
    ipPortModeIsSet_ = false;
    ipWhitelist_ = "";
    ipWhitelistIsSet_ = false;
    scte35Source_ = "";
    scte35SourceIsSet_ = false;
    adTriggersIsSet_ = false;
    audioSelectorsIsSet_ = false;
}

InputStreamInfo::~InputStreamInfo() = default;

void InputStreamInfo::validate()
{
}

web::json::value InputStreamInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputProtocolIsSet_) {
        val[utility::conversions::to_string_t("input_protocol")] = ModelBase::toJson(inputProtocol_);
    }
    if(sourcesIsSet_) {
        val[utility::conversions::to_string_t("sources")] = ModelBase::toJson(sources_);
    }
    if(secondarySourcesIsSet_) {
        val[utility::conversions::to_string_t("secondary_sources")] = ModelBase::toJson(secondarySources_);
    }
    if(failoverConditionsIsSet_) {
        val[utility::conversions::to_string_t("failover_conditions")] = ModelBase::toJson(failoverConditions_);
    }
    if(maxBandwidthLimitIsSet_) {
        val[utility::conversions::to_string_t("max_bandwidth_limit")] = ModelBase::toJson(maxBandwidthLimit_);
    }
    if(ipPortModeIsSet_) {
        val[utility::conversions::to_string_t("ip_port_mode")] = ModelBase::toJson(ipPortMode_);
    }
    if(ipWhitelistIsSet_) {
        val[utility::conversions::to_string_t("ip_whitelist")] = ModelBase::toJson(ipWhitelist_);
    }
    if(scte35SourceIsSet_) {
        val[utility::conversions::to_string_t("scte35_source")] = ModelBase::toJson(scte35Source_);
    }
    if(adTriggersIsSet_) {
        val[utility::conversions::to_string_t("ad_triggers")] = ModelBase::toJson(adTriggers_);
    }
    if(audioSelectorsIsSet_) {
        val[utility::conversions::to_string_t("audio_selectors")] = ModelBase::toJson(audioSelectors_);
    }

    return val;
}
bool InputStreamInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("input_protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input_protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources"));
        if(!fieldValue.is_null())
        {
            std::vector<SourcesInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secondary_sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secondary_sources"));
        if(!fieldValue.is_null())
        {
            std::vector<SecondarySourcesInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecondarySources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failover_conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failover_conditions"));
        if(!fieldValue.is_null())
        {
            FailoverConditions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailoverConditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_bandwidth_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_bandwidth_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxBandwidthLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_port_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_port_mode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpPortMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_whitelist"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_whitelist"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpWhitelist(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scte35_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scte35_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScte35Source(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ad_triggers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ad_triggers"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdTriggers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_selectors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_selectors"));
        if(!fieldValue.is_null())
        {
            std::vector<InputAudioSelector> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioSelectors(refVal);
        }
    }
    return ok;
}


std::string InputStreamInfo::getInputProtocol() const
{
    return inputProtocol_;
}

void InputStreamInfo::setInputProtocol(const std::string& value)
{
    inputProtocol_ = value;
    inputProtocolIsSet_ = true;
}

bool InputStreamInfo::inputProtocolIsSet() const
{
    return inputProtocolIsSet_;
}

void InputStreamInfo::unsetinputProtocol()
{
    inputProtocolIsSet_ = false;
}

std::vector<SourcesInfo>& InputStreamInfo::getSources()
{
    return sources_;
}

void InputStreamInfo::setSources(const std::vector<SourcesInfo>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool InputStreamInfo::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void InputStreamInfo::unsetsources()
{
    sourcesIsSet_ = false;
}

std::vector<SecondarySourcesInfo>& InputStreamInfo::getSecondarySources()
{
    return secondarySources_;
}

void InputStreamInfo::setSecondarySources(const std::vector<SecondarySourcesInfo>& value)
{
    secondarySources_ = value;
    secondarySourcesIsSet_ = true;
}

bool InputStreamInfo::secondarySourcesIsSet() const
{
    return secondarySourcesIsSet_;
}

void InputStreamInfo::unsetsecondarySources()
{
    secondarySourcesIsSet_ = false;
}

FailoverConditions InputStreamInfo::getFailoverConditions() const
{
    return failoverConditions_;
}

void InputStreamInfo::setFailoverConditions(const FailoverConditions& value)
{
    failoverConditions_ = value;
    failoverConditionsIsSet_ = true;
}

bool InputStreamInfo::failoverConditionsIsSet() const
{
    return failoverConditionsIsSet_;
}

void InputStreamInfo::unsetfailoverConditions()
{
    failoverConditionsIsSet_ = false;
}

int32_t InputStreamInfo::getMaxBandwidthLimit() const
{
    return maxBandwidthLimit_;
}

void InputStreamInfo::setMaxBandwidthLimit(int32_t value)
{
    maxBandwidthLimit_ = value;
    maxBandwidthLimitIsSet_ = true;
}

bool InputStreamInfo::maxBandwidthLimitIsSet() const
{
    return maxBandwidthLimitIsSet_;
}

void InputStreamInfo::unsetmaxBandwidthLimit()
{
    maxBandwidthLimitIsSet_ = false;
}

bool InputStreamInfo::isIpPortMode() const
{
    return ipPortMode_;
}

void InputStreamInfo::setIpPortMode(bool value)
{
    ipPortMode_ = value;
    ipPortModeIsSet_ = true;
}

bool InputStreamInfo::ipPortModeIsSet() const
{
    return ipPortModeIsSet_;
}

void InputStreamInfo::unsetipPortMode()
{
    ipPortModeIsSet_ = false;
}

std::string InputStreamInfo::getIpWhitelist() const
{
    return ipWhitelist_;
}

void InputStreamInfo::setIpWhitelist(const std::string& value)
{
    ipWhitelist_ = value;
    ipWhitelistIsSet_ = true;
}

bool InputStreamInfo::ipWhitelistIsSet() const
{
    return ipWhitelistIsSet_;
}

void InputStreamInfo::unsetipWhitelist()
{
    ipWhitelistIsSet_ = false;
}

std::string InputStreamInfo::getScte35Source() const
{
    return scte35Source_;
}

void InputStreamInfo::setScte35Source(const std::string& value)
{
    scte35Source_ = value;
    scte35SourceIsSet_ = true;
}

bool InputStreamInfo::scte35SourceIsSet() const
{
    return scte35SourceIsSet_;
}

void InputStreamInfo::unsetscte35Source()
{
    scte35SourceIsSet_ = false;
}

std::vector<std::string>& InputStreamInfo::getAdTriggers()
{
    return adTriggers_;
}

void InputStreamInfo::setAdTriggers(const std::vector<std::string>& value)
{
    adTriggers_ = value;
    adTriggersIsSet_ = true;
}

bool InputStreamInfo::adTriggersIsSet() const
{
    return adTriggersIsSet_;
}

void InputStreamInfo::unsetadTriggers()
{
    adTriggersIsSet_ = false;
}

std::vector<InputAudioSelector>& InputStreamInfo::getAudioSelectors()
{
    return audioSelectors_;
}

void InputStreamInfo::setAudioSelectors(const std::vector<InputAudioSelector>& value)
{
    audioSelectors_ = value;
    audioSelectorsIsSet_ = true;
}

bool InputStreamInfo::audioSelectorsIsSet() const
{
    return audioSelectorsIsSet_;
}

void InputStreamInfo::unsetaudioSelectors()
{
    audioSelectorsIsSet_ = false;
}

}
}
}
}
}


