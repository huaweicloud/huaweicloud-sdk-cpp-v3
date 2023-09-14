

#include "huaweicloud/smn/v2/model/ListMessageTemplateDetailsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListMessageTemplateDetailsResponse::ListMessageTemplateDetailsResponse()
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
    content_ = "";
    contentIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ListMessageTemplateDetailsResponse::~ListMessageTemplateDetailsResponse() = default;

void ListMessageTemplateDetailsResponse::validate()
{
}

web::json::value ListMessageTemplateDetailsResponse::toJson() const
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
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}

bool ListMessageTemplateDetailsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}

std::string ListMessageTemplateDetailsResponse::getMessageTemplateId() const
{
    return messageTemplateId_;
}

void ListMessageTemplateDetailsResponse::setMessageTemplateId(const std::string& value)
{
    messageTemplateId_ = value;
    messageTemplateIdIsSet_ = true;
}

bool ListMessageTemplateDetailsResponse::messageTemplateIdIsSet() const
{
    return messageTemplateIdIsSet_;
}

void ListMessageTemplateDetailsResponse::unsetmessageTemplateId()
{
    messageTemplateIdIsSet_ = false;
}

std::string ListMessageTemplateDetailsResponse::getMessageTemplateName() const
{
    return messageTemplateName_;
}

void ListMessageTemplateDetailsResponse::setMessageTemplateName(const std::string& value)
{
    messageTemplateName_ = value;
    messageTemplateNameIsSet_ = true;
}

bool ListMessageTemplateDetailsResponse::messageTemplateNameIsSet() const
{
    return messageTemplateNameIsSet_;
}

void ListMessageTemplateDetailsResponse::unsetmessageTemplateName()
{
    messageTemplateNameIsSet_ = false;
}

std::string ListMessageTemplateDetailsResponse::getProtocol() const
{
    return protocol_;
}

void ListMessageTemplateDetailsResponse::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListMessageTemplateDetailsResponse::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListMessageTemplateDetailsResponse::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::vector<std::string>& ListMessageTemplateDetailsResponse::getTagNames()
{
    return tagNames_;
}

void ListMessageTemplateDetailsResponse::setTagNames(const std::vector<std::string>& value)
{
    tagNames_ = value;
    tagNamesIsSet_ = true;
}

bool ListMessageTemplateDetailsResponse::tagNamesIsSet() const
{
    return tagNamesIsSet_;
}

void ListMessageTemplateDetailsResponse::unsettagNames()
{
    tagNamesIsSet_ = false;
}

std::string ListMessageTemplateDetailsResponse::getCreateTime() const
{
    return createTime_;
}

void ListMessageTemplateDetailsResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ListMessageTemplateDetailsResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ListMessageTemplateDetailsResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ListMessageTemplateDetailsResponse::getUpdateTime() const
{
    return updateTime_;
}

void ListMessageTemplateDetailsResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ListMessageTemplateDetailsResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ListMessageTemplateDetailsResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ListMessageTemplateDetailsResponse::getContent() const
{
    return content_;
}

void ListMessageTemplateDetailsResponse::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ListMessageTemplateDetailsResponse::contentIsSet() const
{
    return contentIsSet_;
}

void ListMessageTemplateDetailsResponse::unsetcontent()
{
    contentIsSet_ = false;
}

std::string ListMessageTemplateDetailsResponse::getRequestId() const
{
    return requestId_;
}

void ListMessageTemplateDetailsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListMessageTemplateDetailsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListMessageTemplateDetailsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


