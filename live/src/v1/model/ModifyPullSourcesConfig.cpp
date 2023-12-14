

#include "huaweicloud/live/v1/model/ModifyPullSourcesConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyPullSourcesConfig::ModifyPullSourcesConfig()
{
    playDomain_ = "";
    playDomainIsSet_ = false;
    sourceType_ = "";
    sourceTypeIsSet_ = false;
    sourcesIsSet_ = false;
    sourcesIpIsSet_ = false;
    scheme_ = "";
    schemeIsSet_ = false;
    additionalArgsIsSet_ = false;
}

ModifyPullSourcesConfig::~ModifyPullSourcesConfig() = default;

void ModifyPullSourcesConfig::validate()
{
}

web::json::value ModifyPullSourcesConfig::toJson() const
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
    if(schemeIsSet_) {
        val[utility::conversions::to_string_t("scheme")] = ModelBase::toJson(scheme_);
    }
    if(additionalArgsIsSet_) {
        val[utility::conversions::to_string_t("additional_args")] = ModelBase::toJson(additionalArgs_);
    }

    return val;
}
bool ModifyPullSourcesConfig::fromJson(const web::json::value& val)
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


std::string ModifyPullSourcesConfig::getPlayDomain() const
{
    return playDomain_;
}

void ModifyPullSourcesConfig::setPlayDomain(const std::string& value)
{
    playDomain_ = value;
    playDomainIsSet_ = true;
}

bool ModifyPullSourcesConfig::playDomainIsSet() const
{
    return playDomainIsSet_;
}

void ModifyPullSourcesConfig::unsetplayDomain()
{
    playDomainIsSet_ = false;
}

std::string ModifyPullSourcesConfig::getSourceType() const
{
    return sourceType_;
}

void ModifyPullSourcesConfig::setSourceType(const std::string& value)
{
    sourceType_ = value;
    sourceTypeIsSet_ = true;
}

bool ModifyPullSourcesConfig::sourceTypeIsSet() const
{
    return sourceTypeIsSet_;
}

void ModifyPullSourcesConfig::unsetsourceType()
{
    sourceTypeIsSet_ = false;
}

std::vector<std::string>& ModifyPullSourcesConfig::getSources()
{
    return sources_;
}

void ModifyPullSourcesConfig::setSources(const std::vector<std::string>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool ModifyPullSourcesConfig::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void ModifyPullSourcesConfig::unsetsources()
{
    sourcesIsSet_ = false;
}

std::vector<std::string>& ModifyPullSourcesConfig::getSourcesIp()
{
    return sourcesIp_;
}

void ModifyPullSourcesConfig::setSourcesIp(const std::vector<std::string>& value)
{
    sourcesIp_ = value;
    sourcesIpIsSet_ = true;
}

bool ModifyPullSourcesConfig::sourcesIpIsSet() const
{
    return sourcesIpIsSet_;
}

void ModifyPullSourcesConfig::unsetsourcesIp()
{
    sourcesIpIsSet_ = false;
}

std::string ModifyPullSourcesConfig::getScheme() const
{
    return scheme_;
}

void ModifyPullSourcesConfig::setScheme(const std::string& value)
{
    scheme_ = value;
    schemeIsSet_ = true;
}

bool ModifyPullSourcesConfig::schemeIsSet() const
{
    return schemeIsSet_;
}

void ModifyPullSourcesConfig::unsetscheme()
{
    schemeIsSet_ = false;
}

std::map<std::string, std::string>& ModifyPullSourcesConfig::getAdditionalArgs()
{
    return additionalArgs_;
}

void ModifyPullSourcesConfig::setAdditionalArgs(const std::map<std::string, std::string>& value)
{
    additionalArgs_ = value;
    additionalArgsIsSet_ = true;
}

bool ModifyPullSourcesConfig::additionalArgsIsSet() const
{
    return additionalArgsIsSet_;
}

void ModifyPullSourcesConfig::unsetadditionalArgs()
{
    additionalArgsIsSet_ = false;
}

}
}
}
}
}


