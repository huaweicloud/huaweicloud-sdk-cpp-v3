

#include "huaweicloud/live/v1/model/WatermarkRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




WatermarkRule::WatermarkRule()
{
    ruleName_ = "";
    ruleNameIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    locationIsSet_ = false;
    channelId_ = "";
    channelIdIsSet_ = false;
    transcodeTemplateName_ = "";
    transcodeTemplateNameIsSet_ = false;
}

WatermarkRule::~WatermarkRule() = default;

void WatermarkRule::validate()
{
}

web::json::value WatermarkRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(channelIdIsSet_) {
        val[utility::conversions::to_string_t("channel_id")] = ModelBase::toJson(channelId_);
    }
    if(transcodeTemplateNameIsSet_) {
        val[utility::conversions::to_string_t("transcode_template_name")] = ModelBase::toJson(transcodeTemplateName_);
    }

    return val;
}
bool WatermarkRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            WatermarkLocation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("channel_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("channel_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChannelId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transcode_template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transcode_template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranscodeTemplateName(refVal);
        }
    }
    return ok;
}


std::string WatermarkRule::getRuleName() const
{
    return ruleName_;
}

void WatermarkRule::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool WatermarkRule::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void WatermarkRule::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string WatermarkRule::getTemplateId() const
{
    return templateId_;
}

void WatermarkRule::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool WatermarkRule::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void WatermarkRule::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string WatermarkRule::getDomain() const
{
    return domain_;
}

void WatermarkRule::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool WatermarkRule::domainIsSet() const
{
    return domainIsSet_;
}

void WatermarkRule::unsetdomain()
{
    domainIsSet_ = false;
}

std::string WatermarkRule::getApp() const
{
    return app_;
}

void WatermarkRule::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool WatermarkRule::appIsSet() const
{
    return appIsSet_;
}

void WatermarkRule::unsetapp()
{
    appIsSet_ = false;
}

std::string WatermarkRule::getStream() const
{
    return stream_;
}

void WatermarkRule::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool WatermarkRule::streamIsSet() const
{
    return streamIsSet_;
}

void WatermarkRule::unsetstream()
{
    streamIsSet_ = false;
}

WatermarkLocation WatermarkRule::getLocation() const
{
    return location_;
}

void WatermarkRule::setLocation(const WatermarkLocation& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool WatermarkRule::locationIsSet() const
{
    return locationIsSet_;
}

void WatermarkRule::unsetlocation()
{
    locationIsSet_ = false;
}

std::string WatermarkRule::getChannelId() const
{
    return channelId_;
}

void WatermarkRule::setChannelId(const std::string& value)
{
    channelId_ = value;
    channelIdIsSet_ = true;
}

bool WatermarkRule::channelIdIsSet() const
{
    return channelIdIsSet_;
}

void WatermarkRule::unsetchannelId()
{
    channelIdIsSet_ = false;
}

std::string WatermarkRule::getTranscodeTemplateName() const
{
    return transcodeTemplateName_;
}

void WatermarkRule::setTranscodeTemplateName(const std::string& value)
{
    transcodeTemplateName_ = value;
    transcodeTemplateNameIsSet_ = true;
}

bool WatermarkRule::transcodeTemplateNameIsSet() const
{
    return transcodeTemplateNameIsSet_;
}

void WatermarkRule::unsettranscodeTemplateName()
{
    transcodeTemplateNameIsSet_ = false;
}

}
}
}
}
}


