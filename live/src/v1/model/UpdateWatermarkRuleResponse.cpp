

#include "huaweicloud/live/v1/model/UpdateWatermarkRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateWatermarkRuleResponse::UpdateWatermarkRuleResponse()
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

UpdateWatermarkRuleResponse::~UpdateWatermarkRuleResponse() = default;

void UpdateWatermarkRuleResponse::validate()
{
}

web::json::value UpdateWatermarkRuleResponse::toJson() const
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
bool UpdateWatermarkRuleResponse::fromJson(const web::json::value& val)
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


std::string UpdateWatermarkRuleResponse::getRuleName() const
{
    return ruleName_;
}

void UpdateWatermarkRuleResponse::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool UpdateWatermarkRuleResponse::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void UpdateWatermarkRuleResponse::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string UpdateWatermarkRuleResponse::getTemplateId() const
{
    return templateId_;
}

void UpdateWatermarkRuleResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool UpdateWatermarkRuleResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void UpdateWatermarkRuleResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string UpdateWatermarkRuleResponse::getDomain() const
{
    return domain_;
}

void UpdateWatermarkRuleResponse::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool UpdateWatermarkRuleResponse::domainIsSet() const
{
    return domainIsSet_;
}

void UpdateWatermarkRuleResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::string UpdateWatermarkRuleResponse::getApp() const
{
    return app_;
}

void UpdateWatermarkRuleResponse::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool UpdateWatermarkRuleResponse::appIsSet() const
{
    return appIsSet_;
}

void UpdateWatermarkRuleResponse::unsetapp()
{
    appIsSet_ = false;
}

std::string UpdateWatermarkRuleResponse::getStream() const
{
    return stream_;
}

void UpdateWatermarkRuleResponse::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool UpdateWatermarkRuleResponse::streamIsSet() const
{
    return streamIsSet_;
}

void UpdateWatermarkRuleResponse::unsetstream()
{
    streamIsSet_ = false;
}

WatermarkLocation UpdateWatermarkRuleResponse::getLocation() const
{
    return location_;
}

void UpdateWatermarkRuleResponse::setLocation(const WatermarkLocation& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool UpdateWatermarkRuleResponse::locationIsSet() const
{
    return locationIsSet_;
}

void UpdateWatermarkRuleResponse::unsetlocation()
{
    locationIsSet_ = false;
}

std::string UpdateWatermarkRuleResponse::getChannelId() const
{
    return channelId_;
}

void UpdateWatermarkRuleResponse::setChannelId(const std::string& value)
{
    channelId_ = value;
    channelIdIsSet_ = true;
}

bool UpdateWatermarkRuleResponse::channelIdIsSet() const
{
    return channelIdIsSet_;
}

void UpdateWatermarkRuleResponse::unsetchannelId()
{
    channelIdIsSet_ = false;
}

std::string UpdateWatermarkRuleResponse::getTranscodeTemplateName() const
{
    return transcodeTemplateName_;
}

void UpdateWatermarkRuleResponse::setTranscodeTemplateName(const std::string& value)
{
    transcodeTemplateName_ = value;
    transcodeTemplateNameIsSet_ = true;
}

bool UpdateWatermarkRuleResponse::transcodeTemplateNameIsSet() const
{
    return transcodeTemplateNameIsSet_;
}

void UpdateWatermarkRuleResponse::unsettranscodeTemplateName()
{
    transcodeTemplateNameIsSet_ = false;
}

std::string UpdateWatermarkRuleResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateWatermarkRuleResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateWatermarkRuleResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateWatermarkRuleResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


