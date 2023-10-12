

#include "huaweicloud/smn/v2/model/MessageTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




MessageTemplate::MessageTemplate()
{
    messageTemplateId_ = "";
    messageTemplateIdIsSet_ = false;
    messageTemplateName_ = "";
    messageTemplateNameIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    tagNamesIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

MessageTemplate::~MessageTemplate() = default;

void MessageTemplate::validate()
{
}

web::json::value MessageTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("message_template_id")] = ModelBase::toJson(messageTemplateId_);
    }
    if(messageTemplateNameIsSet_) {
        val[utility::conversions::to_string_t("message_template_name")] = ModelBase::toJson(messageTemplateName_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(tagNamesIsSet_) {
        val[utility::conversions::to_string_t("tag_names")] = ModelBase::toJson(tagNames_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool MessageTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("message_template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message_template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessageTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message_template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message_template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessageTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string MessageTemplate::getMessageTemplateId() const
{
    return messageTemplateId_;
}

void MessageTemplate::setMessageTemplateId(const std::string& value)
{
    messageTemplateId_ = value;
    messageTemplateIdIsSet_ = true;
}

bool MessageTemplate::messageTemplateIdIsSet() const
{
    return messageTemplateIdIsSet_;
}

void MessageTemplate::unsetmessageTemplateId()
{
    messageTemplateIdIsSet_ = false;
}

std::string MessageTemplate::getMessageTemplateName() const
{
    return messageTemplateName_;
}

void MessageTemplate::setMessageTemplateName(const std::string& value)
{
    messageTemplateName_ = value;
    messageTemplateNameIsSet_ = true;
}

bool MessageTemplate::messageTemplateNameIsSet() const
{
    return messageTemplateNameIsSet_;
}

void MessageTemplate::unsetmessageTemplateName()
{
    messageTemplateNameIsSet_ = false;
}

std::string MessageTemplate::getProtocol() const
{
    return protocol_;
}

void MessageTemplate::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool MessageTemplate::protocolIsSet() const
{
    return protocolIsSet_;
}

void MessageTemplate::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::vector<std::string>& MessageTemplate::getTagNames()
{
    return tagNames_;
}

void MessageTemplate::setTagNames(const std::vector<std::string>& value)
{
    tagNames_ = value;
    tagNamesIsSet_ = true;
}

bool MessageTemplate::tagNamesIsSet() const
{
    return tagNamesIsSet_;
}

void MessageTemplate::unsettagNames()
{
    tagNamesIsSet_ = false;
}

std::string MessageTemplate::getCreateTime() const
{
    return createTime_;
}

void MessageTemplate::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool MessageTemplate::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void MessageTemplate::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string MessageTemplate::getUpdateTime() const
{
    return updateTime_;
}

void MessageTemplate::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool MessageTemplate::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void MessageTemplate::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


