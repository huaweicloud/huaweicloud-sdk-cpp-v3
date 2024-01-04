

#include "huaweicloud/smn/v2/model/PublishMessageRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




PublishMessageRequestBody::PublishMessageRequestBody()
{
    subject_ = "";
    subjectIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    messageStructure_ = "";
    messageStructureIsSet_ = false;
    messageTemplateName_ = "";
    messageTemplateNameIsSet_ = false;
    tagsIsSet_ = false;
    timeToLive_ = "";
    timeToLiveIsSet_ = false;
    messageAttributesIsSet_ = false;
}

PublishMessageRequestBody::~PublishMessageRequestBody() = default;

void PublishMessageRequestBody::validate()
{
}

web::json::value PublishMessageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(messageStructureIsSet_) {
        val[utility::conversions::to_string_t("message_structure")] = ModelBase::toJson(messageStructure_);
    }
    if(messageTemplateNameIsSet_) {
        val[utility::conversions::to_string_t("message_template_name")] = ModelBase::toJson(messageTemplateName_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(timeToLiveIsSet_) {
        val[utility::conversions::to_string_t("time_to_live")] = ModelBase::toJson(timeToLive_);
    }
    if(messageAttributesIsSet_) {
        val[utility::conversions::to_string_t("message_attributes")] = ModelBase::toJson(messageAttributes_);
    }

    return val;
}
bool PublishMessageRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message_structure"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message_structure"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessageStructure(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_to_live"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_to_live"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeToLive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message_attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message_attributes"));
        if(!fieldValue.is_null())
        {
            std::vector<MessageAttribute> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessageAttributes(refVal);
        }
    }
    return ok;
}


std::string PublishMessageRequestBody::getSubject() const
{
    return subject_;
}

void PublishMessageRequestBody::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool PublishMessageRequestBody::subjectIsSet() const
{
    return subjectIsSet_;
}

void PublishMessageRequestBody::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string PublishMessageRequestBody::getMessage() const
{
    return message_;
}

void PublishMessageRequestBody::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool PublishMessageRequestBody::messageIsSet() const
{
    return messageIsSet_;
}

void PublishMessageRequestBody::unsetmessage()
{
    messageIsSet_ = false;
}

std::string PublishMessageRequestBody::getMessageStructure() const
{
    return messageStructure_;
}

void PublishMessageRequestBody::setMessageStructure(const std::string& value)
{
    messageStructure_ = value;
    messageStructureIsSet_ = true;
}

bool PublishMessageRequestBody::messageStructureIsSet() const
{
    return messageStructureIsSet_;
}

void PublishMessageRequestBody::unsetmessageStructure()
{
    messageStructureIsSet_ = false;
}

std::string PublishMessageRequestBody::getMessageTemplateName() const
{
    return messageTemplateName_;
}

void PublishMessageRequestBody::setMessageTemplateName(const std::string& value)
{
    messageTemplateName_ = value;
    messageTemplateNameIsSet_ = true;
}

bool PublishMessageRequestBody::messageTemplateNameIsSet() const
{
    return messageTemplateNameIsSet_;
}

void PublishMessageRequestBody::unsetmessageTemplateName()
{
    messageTemplateNameIsSet_ = false;
}

std::map<std::string, std::string>& PublishMessageRequestBody::getTags()
{
    return tags_;
}

void PublishMessageRequestBody::setTags(const std::map<std::string, std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool PublishMessageRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void PublishMessageRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::string PublishMessageRequestBody::getTimeToLive() const
{
    return timeToLive_;
}

void PublishMessageRequestBody::setTimeToLive(const std::string& value)
{
    timeToLive_ = value;
    timeToLiveIsSet_ = true;
}

bool PublishMessageRequestBody::timeToLiveIsSet() const
{
    return timeToLiveIsSet_;
}

void PublishMessageRequestBody::unsettimeToLive()
{
    timeToLiveIsSet_ = false;
}

std::vector<MessageAttribute>& PublishMessageRequestBody::getMessageAttributes()
{
    return messageAttributes_;
}

void PublishMessageRequestBody::setMessageAttributes(const std::vector<MessageAttribute>& value)
{
    messageAttributes_ = value;
    messageAttributesIsSet_ = true;
}

bool PublishMessageRequestBody::messageAttributesIsSet() const
{
    return messageAttributesIsSet_;
}

void PublishMessageRequestBody::unsetmessageAttributes()
{
    messageAttributesIsSet_ = false;
}

}
}
}
}
}


