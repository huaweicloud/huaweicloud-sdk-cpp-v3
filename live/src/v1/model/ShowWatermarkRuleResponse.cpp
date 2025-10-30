

#include "huaweicloud/live/v1/model/ShowWatermarkRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowWatermarkRuleResponse::ShowWatermarkRuleResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowWatermarkRuleResponse::~ShowWatermarkRuleResponse() = default;

void ShowWatermarkRuleResponse::validate()
{
}

web::json::value ShowWatermarkRuleResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowWatermarkRuleResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowWatermarkRuleResponse::getRuleName() const
{
    return ruleName_;
}

void ShowWatermarkRuleResponse::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool ShowWatermarkRuleResponse::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void ShowWatermarkRuleResponse::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string ShowWatermarkRuleResponse::getTemplateId() const
{
    return templateId_;
}

void ShowWatermarkRuleResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ShowWatermarkRuleResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ShowWatermarkRuleResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string ShowWatermarkRuleResponse::getDomain() const
{
    return domain_;
}

void ShowWatermarkRuleResponse::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ShowWatermarkRuleResponse::domainIsSet() const
{
    return domainIsSet_;
}

void ShowWatermarkRuleResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ShowWatermarkRuleResponse::getApp() const
{
    return app_;
}

void ShowWatermarkRuleResponse::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ShowWatermarkRuleResponse::appIsSet() const
{
    return appIsSet_;
}

void ShowWatermarkRuleResponse::unsetapp()
{
    appIsSet_ = false;
}

std::string ShowWatermarkRuleResponse::getStream() const
{
    return stream_;
}

void ShowWatermarkRuleResponse::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ShowWatermarkRuleResponse::streamIsSet() const
{
    return streamIsSet_;
}

void ShowWatermarkRuleResponse::unsetstream()
{
    streamIsSet_ = false;
}

WatermarkLocation ShowWatermarkRuleResponse::getLocation() const
{
    return location_;
}

void ShowWatermarkRuleResponse::setLocation(const WatermarkLocation& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool ShowWatermarkRuleResponse::locationIsSet() const
{
    return locationIsSet_;
}

void ShowWatermarkRuleResponse::unsetlocation()
{
    locationIsSet_ = false;
}

std::string ShowWatermarkRuleResponse::getChannelId() const
{
    return channelId_;
}

void ShowWatermarkRuleResponse::setChannelId(const std::string& value)
{
    channelId_ = value;
    channelIdIsSet_ = true;
}

bool ShowWatermarkRuleResponse::channelIdIsSet() const
{
    return channelIdIsSet_;
}

void ShowWatermarkRuleResponse::unsetchannelId()
{
    channelIdIsSet_ = false;
}

std::string ShowWatermarkRuleResponse::getTranscodeTemplateName() const
{
    return transcodeTemplateName_;
}

void ShowWatermarkRuleResponse::setTranscodeTemplateName(const std::string& value)
{
    transcodeTemplateName_ = value;
    transcodeTemplateNameIsSet_ = true;
}

bool ShowWatermarkRuleResponse::transcodeTemplateNameIsSet() const
{
    return transcodeTemplateNameIsSet_;
}

void ShowWatermarkRuleResponse::unsettranscodeTemplateName()
{
    transcodeTemplateNameIsSet_ = false;
}

std::string ShowWatermarkRuleResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowWatermarkRuleResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowWatermarkRuleResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowWatermarkRuleResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


