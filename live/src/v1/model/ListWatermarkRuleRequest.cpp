

#include "huaweicloud/live/v1/model/ListWatermarkRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListWatermarkRuleRequest::ListWatermarkRuleRequest()
{
    templateId_ = "";
    templateIdIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    channelId_ = "";
    channelIdIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListWatermarkRuleRequest::~ListWatermarkRuleRequest() = default;

void ListWatermarkRuleRequest::validate()
{
}

web::json::value ListWatermarkRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(channelIdIsSet_) {
        val[utility::conversions::to_string_t("channel_id")] = ModelBase::toJson(channelId_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListWatermarkRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("channel_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("channel_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChannelId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListWatermarkRuleRequest::getTemplateId() const
{
    return templateId_;
}

void ListWatermarkRuleRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ListWatermarkRuleRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ListWatermarkRuleRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string ListWatermarkRuleRequest::getDomain() const
{
    return domain_;
}

void ListWatermarkRuleRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListWatermarkRuleRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ListWatermarkRuleRequest::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ListWatermarkRuleRequest::getApp() const
{
    return app_;
}

void ListWatermarkRuleRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListWatermarkRuleRequest::appIsSet() const
{
    return appIsSet_;
}

void ListWatermarkRuleRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListWatermarkRuleRequest::getChannelId() const
{
    return channelId_;
}

void ListWatermarkRuleRequest::setChannelId(const std::string& value)
{
    channelId_ = value;
    channelIdIsSet_ = true;
}

bool ListWatermarkRuleRequest::channelIdIsSet() const
{
    return channelIdIsSet_;
}

void ListWatermarkRuleRequest::unsetchannelId()
{
    channelIdIsSet_ = false;
}

std::string ListWatermarkRuleRequest::getStream() const
{
    return stream_;
}

void ListWatermarkRuleRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListWatermarkRuleRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ListWatermarkRuleRequest::unsetstream()
{
    streamIsSet_ = false;
}

int32_t ListWatermarkRuleRequest::getOffset() const
{
    return offset_;
}

void ListWatermarkRuleRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListWatermarkRuleRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListWatermarkRuleRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListWatermarkRuleRequest::getLimit() const
{
    return limit_;
}

void ListWatermarkRuleRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListWatermarkRuleRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListWatermarkRuleRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


