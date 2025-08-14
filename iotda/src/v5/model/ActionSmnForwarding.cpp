

#include "huaweicloud/iotda/v5/model/ActionSmnForwarding.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ActionSmnForwarding::ActionSmnForwarding()
{
    regionName_ = "";
    regionNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    themeName_ = "";
    themeNameIsSet_ = false;
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    messageContent_ = "";
    messageContentIsSet_ = false;
    messageTemplateName_ = "";
    messageTemplateNameIsSet_ = false;
    messageTitle_ = "";
    messageTitleIsSet_ = false;
}

ActionSmnForwarding::~ActionSmnForwarding() = default;

void ActionSmnForwarding::validate()
{
}

web::json::value ActionSmnForwarding::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionNameIsSet_) {
        val[utility::conversions::to_string_t("region_name")] = ModelBase::toJson(regionName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(themeNameIsSet_) {
        val[utility::conversions::to_string_t("theme_name")] = ModelBase::toJson(themeName_);
    }
    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(messageContentIsSet_) {
        val[utility::conversions::to_string_t("message_content")] = ModelBase::toJson(messageContent_);
    }
    if(messageTemplateNameIsSet_) {
        val[utility::conversions::to_string_t("message_template_name")] = ModelBase::toJson(messageTemplateName_);
    }
    if(messageTitleIsSet_) {
        val[utility::conversions::to_string_t("message_title")] = ModelBase::toJson(messageTitle_);
    }

    return val;
}
bool ActionSmnForwarding::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("theme_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("theme_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThemeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessageContent(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("message_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessageTitle(refVal);
        }
    }
    return ok;
}


std::string ActionSmnForwarding::getRegionName() const
{
    return regionName_;
}

void ActionSmnForwarding::setRegionName(const std::string& value)
{
    regionName_ = value;
    regionNameIsSet_ = true;
}

bool ActionSmnForwarding::regionNameIsSet() const
{
    return regionNameIsSet_;
}

void ActionSmnForwarding::unsetregionName()
{
    regionNameIsSet_ = false;
}

std::string ActionSmnForwarding::getProjectId() const
{
    return projectId_;
}

void ActionSmnForwarding::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ActionSmnForwarding::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ActionSmnForwarding::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ActionSmnForwarding::getThemeName() const
{
    return themeName_;
}

void ActionSmnForwarding::setThemeName(const std::string& value)
{
    themeName_ = value;
    themeNameIsSet_ = true;
}

bool ActionSmnForwarding::themeNameIsSet() const
{
    return themeNameIsSet_;
}

void ActionSmnForwarding::unsetthemeName()
{
    themeNameIsSet_ = false;
}

std::string ActionSmnForwarding::getTopicUrn() const
{
    return topicUrn_;
}

void ActionSmnForwarding::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ActionSmnForwarding::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ActionSmnForwarding::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string ActionSmnForwarding::getMessageContent() const
{
    return messageContent_;
}

void ActionSmnForwarding::setMessageContent(const std::string& value)
{
    messageContent_ = value;
    messageContentIsSet_ = true;
}

bool ActionSmnForwarding::messageContentIsSet() const
{
    return messageContentIsSet_;
}

void ActionSmnForwarding::unsetmessageContent()
{
    messageContentIsSet_ = false;
}

std::string ActionSmnForwarding::getMessageTemplateName() const
{
    return messageTemplateName_;
}

void ActionSmnForwarding::setMessageTemplateName(const std::string& value)
{
    messageTemplateName_ = value;
    messageTemplateNameIsSet_ = true;
}

bool ActionSmnForwarding::messageTemplateNameIsSet() const
{
    return messageTemplateNameIsSet_;
}

void ActionSmnForwarding::unsetmessageTemplateName()
{
    messageTemplateNameIsSet_ = false;
}

std::string ActionSmnForwarding::getMessageTitle() const
{
    return messageTitle_;
}

void ActionSmnForwarding::setMessageTitle(const std::string& value)
{
    messageTitle_ = value;
    messageTitleIsSet_ = true;
}

bool ActionSmnForwarding::messageTitleIsSet() const
{
    return messageTitleIsSet_;
}

void ActionSmnForwarding::unsetmessageTitle()
{
    messageTitleIsSet_ = false;
}

}
}
}
}
}


