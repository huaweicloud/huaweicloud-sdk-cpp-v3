

#include "huaweicloud/lts/v2/model/SubTemplateResBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




SubTemplateResBody::SubTemplateResBody()
{
    subType_ = "";
    subTypeIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    topic_ = "";
    topicIsSet_ = false;
    sendType_ = "";
    sendTypeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

SubTemplateResBody::~SubTemplateResBody() = default;

void SubTemplateResBody::validate()
{
}

web::json::value SubTemplateResBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subTypeIsSet_) {
        val[utility::conversions::to_string_t("sub_type")] = ModelBase::toJson(subType_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(topicIsSet_) {
        val[utility::conversions::to_string_t("topic")] = ModelBase::toJson(topic_);
    }
    if(sendTypeIsSet_) {
        val[utility::conversions::to_string_t("sendType")] = ModelBase::toJson(sendType_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool SubTemplateResBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sub_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sendType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sendType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


std::string SubTemplateResBody::getSubType() const
{
    return subType_;
}

void SubTemplateResBody::setSubType(const std::string& value)
{
    subType_ = value;
    subTypeIsSet_ = true;
}

bool SubTemplateResBody::subTypeIsSet() const
{
    return subTypeIsSet_;
}

void SubTemplateResBody::unsetsubType()
{
    subTypeIsSet_ = false;
}

std::string SubTemplateResBody::getContent() const
{
    return content_;
}

void SubTemplateResBody::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool SubTemplateResBody::contentIsSet() const
{
    return contentIsSet_;
}

void SubTemplateResBody::unsetcontent()
{
    contentIsSet_ = false;
}

std::string SubTemplateResBody::getTopic() const
{
    return topic_;
}

void SubTemplateResBody::setTopic(const std::string& value)
{
    topic_ = value;
    topicIsSet_ = true;
}

bool SubTemplateResBody::topicIsSet() const
{
    return topicIsSet_;
}

void SubTemplateResBody::unsettopic()
{
    topicIsSet_ = false;
}

std::string SubTemplateResBody::getSendType() const
{
    return sendType_;
}

void SubTemplateResBody::setSendType(const std::string& value)
{
    sendType_ = value;
    sendTypeIsSet_ = true;
}

bool SubTemplateResBody::sendTypeIsSet() const
{
    return sendTypeIsSet_;
}

void SubTemplateResBody::unsetsendType()
{
    sendTypeIsSet_ = false;
}

std::string SubTemplateResBody::getVersion() const
{
    return version_;
}

void SubTemplateResBody::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool SubTemplateResBody::versionIsSet() const
{
    return versionIsSet_;
}

void SubTemplateResBody::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


