

#include "huaweicloud/live/v1/model/CreateWatermarkRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateWatermarkRuleResponse::CreateWatermarkRuleResponse()
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

CreateWatermarkRuleResponse::~CreateWatermarkRuleResponse() = default;

void CreateWatermarkRuleResponse::validate()
{
}

web::json::value CreateWatermarkRuleResponse::toJson() const
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
bool CreateWatermarkRuleResponse::fromJson(const web::json::value& val)
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


std::string CreateWatermarkRuleResponse::getRuleName() const
{
    return ruleName_;
}

void CreateWatermarkRuleResponse::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool CreateWatermarkRuleResponse::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void CreateWatermarkRuleResponse::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string CreateWatermarkRuleResponse::getTemplateId() const
{
    return templateId_;
}

void CreateWatermarkRuleResponse::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CreateWatermarkRuleResponse::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CreateWatermarkRuleResponse::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string CreateWatermarkRuleResponse::getDomain() const
{
    return domain_;
}

void CreateWatermarkRuleResponse::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool CreateWatermarkRuleResponse::domainIsSet() const
{
    return domainIsSet_;
}

void CreateWatermarkRuleResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::string CreateWatermarkRuleResponse::getApp() const
{
    return app_;
}

void CreateWatermarkRuleResponse::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool CreateWatermarkRuleResponse::appIsSet() const
{
    return appIsSet_;
}

void CreateWatermarkRuleResponse::unsetapp()
{
    appIsSet_ = false;
}

std::string CreateWatermarkRuleResponse::getStream() const
{
    return stream_;
}

void CreateWatermarkRuleResponse::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool CreateWatermarkRuleResponse::streamIsSet() const
{
    return streamIsSet_;
}

void CreateWatermarkRuleResponse::unsetstream()
{
    streamIsSet_ = false;
}

WatermarkLocation CreateWatermarkRuleResponse::getLocation() const
{
    return location_;
}

void CreateWatermarkRuleResponse::setLocation(const WatermarkLocation& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool CreateWatermarkRuleResponse::locationIsSet() const
{
    return locationIsSet_;
}

void CreateWatermarkRuleResponse::unsetlocation()
{
    locationIsSet_ = false;
}

std::string CreateWatermarkRuleResponse::getChannelId() const
{
    return channelId_;
}

void CreateWatermarkRuleResponse::setChannelId(const std::string& value)
{
    channelId_ = value;
    channelIdIsSet_ = true;
}

bool CreateWatermarkRuleResponse::channelIdIsSet() const
{
    return channelIdIsSet_;
}

void CreateWatermarkRuleResponse::unsetchannelId()
{
    channelIdIsSet_ = false;
}

std::string CreateWatermarkRuleResponse::getTranscodeTemplateName() const
{
    return transcodeTemplateName_;
}

void CreateWatermarkRuleResponse::setTranscodeTemplateName(const std::string& value)
{
    transcodeTemplateName_ = value;
    transcodeTemplateNameIsSet_ = true;
}

bool CreateWatermarkRuleResponse::transcodeTemplateNameIsSet() const
{
    return transcodeTemplateNameIsSet_;
}

void CreateWatermarkRuleResponse::unsettranscodeTemplateName()
{
    transcodeTemplateNameIsSet_ = false;
}

std::string CreateWatermarkRuleResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateWatermarkRuleResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateWatermarkRuleResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateWatermarkRuleResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


