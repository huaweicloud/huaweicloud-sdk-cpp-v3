

#include "huaweicloud/live/v1/model/ShowPullSourcesConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowPullSourcesConfigResponse::ShowPullSourcesConfigResponse()
{
    playDomain_ = "";
    playDomainIsSet_ = false;
    sourceType_ = "";
    sourceTypeIsSet_ = false;
    sourcesIsSet_ = false;
    sourcesIpIsSet_ = false;
    sourcePort_ = 0;
    sourcePortIsSet_ = false;
    scheme_ = "";
    schemeIsSet_ = false;
    additionalArgsIsSet_ = false;
}

ShowPullSourcesConfigResponse::~ShowPullSourcesConfigResponse() = default;

void ShowPullSourcesConfigResponse::validate()
{
}

web::json::value ShowPullSourcesConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(playDomainIsSet_) {
        val[utility::conversions::to_string_t("play_domain")] = ModelBase::toJson(playDomain_);
    }
    if(sourceTypeIsSet_) {
        val[utility::conversions::to_string_t("source_type")] = ModelBase::toJson(sourceType_);
    }
    if(sourcesIsSet_) {
        val[utility::conversions::to_string_t("sources")] = ModelBase::toJson(sources_);
    }
    if(sourcesIpIsSet_) {
        val[utility::conversions::to_string_t("sources_ip")] = ModelBase::toJson(sourcesIp_);
    }
    if(sourcePortIsSet_) {
        val[utility::conversions::to_string_t("source_port")] = ModelBase::toJson(sourcePort_);
    }
    if(schemeIsSet_) {
        val[utility::conversions::to_string_t("scheme")] = ModelBase::toJson(scheme_);
    }
    if(additionalArgsIsSet_) {
        val[utility::conversions::to_string_t("additional_args")] = ModelBase::toJson(additionalArgs_);
    }

    return val;
}
bool ShowPullSourcesConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("play_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sources_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources_ip"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourcesIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourcePort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scheme"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scheme"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheme(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("additional_args"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additional_args"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionalArgs(refVal);
        }
    }
    return ok;
}


std::string ShowPullSourcesConfigResponse::getPlayDomain() const
{
    return playDomain_;
}

void ShowPullSourcesConfigResponse::setPlayDomain(const std::string& value)
{
    playDomain_ = value;
    playDomainIsSet_ = true;
}

bool ShowPullSourcesConfigResponse::playDomainIsSet() const
{
    return playDomainIsSet_;
}

void ShowPullSourcesConfigResponse::unsetplayDomain()
{
    playDomainIsSet_ = false;
}

std::string ShowPullSourcesConfigResponse::getSourceType() const
{
    return sourceType_;
}

void ShowPullSourcesConfigResponse::setSourceType(const std::string& value)
{
    sourceType_ = value;
    sourceTypeIsSet_ = true;
}

bool ShowPullSourcesConfigResponse::sourceTypeIsSet() const
{
    return sourceTypeIsSet_;
}

void ShowPullSourcesConfigResponse::unsetsourceType()
{
    sourceTypeIsSet_ = false;
}

std::vector<std::string>& ShowPullSourcesConfigResponse::getSources()
{
    return sources_;
}

void ShowPullSourcesConfigResponse::setSources(const std::vector<std::string>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool ShowPullSourcesConfigResponse::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void ShowPullSourcesConfigResponse::unsetsources()
{
    sourcesIsSet_ = false;
}

std::vector<std::string>& ShowPullSourcesConfigResponse::getSourcesIp()
{
    return sourcesIp_;
}

void ShowPullSourcesConfigResponse::setSourcesIp(const std::vector<std::string>& value)
{
    sourcesIp_ = value;
    sourcesIpIsSet_ = true;
}

bool ShowPullSourcesConfigResponse::sourcesIpIsSet() const
{
    return sourcesIpIsSet_;
}

void ShowPullSourcesConfigResponse::unsetsourcesIp()
{
    sourcesIpIsSet_ = false;
}

int32_t ShowPullSourcesConfigResponse::getSourcePort() const
{
    return sourcePort_;
}

void ShowPullSourcesConfigResponse::setSourcePort(int32_t value)
{
    sourcePort_ = value;
    sourcePortIsSet_ = true;
}

bool ShowPullSourcesConfigResponse::sourcePortIsSet() const
{
    return sourcePortIsSet_;
}

void ShowPullSourcesConfigResponse::unsetsourcePort()
{
    sourcePortIsSet_ = false;
}

std::string ShowPullSourcesConfigResponse::getScheme() const
{
    return scheme_;
}

void ShowPullSourcesConfigResponse::setScheme(const std::string& value)
{
    scheme_ = value;
    schemeIsSet_ = true;
}

bool ShowPullSourcesConfigResponse::schemeIsSet() const
{
    return schemeIsSet_;
}

void ShowPullSourcesConfigResponse::unsetscheme()
{
    schemeIsSet_ = false;
}

std::map<std::string, std::string>& ShowPullSourcesConfigResponse::getAdditionalArgs()
{
    return additionalArgs_;
}

void ShowPullSourcesConfigResponse::setAdditionalArgs(const std::map<std::string, std::string>& value)
{
    additionalArgs_ = value;
    additionalArgsIsSet_ = true;
}

bool ShowPullSourcesConfigResponse::additionalArgsIsSet() const
{
    return additionalArgsIsSet_;
}

void ShowPullSourcesConfigResponse::unsetadditionalArgs()
{
    additionalArgsIsSet_ = false;
}

}
}
}
}
}


