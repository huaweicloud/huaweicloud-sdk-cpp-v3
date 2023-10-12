

#include "huaweicloud/smn/v2/model/ListMessageTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListMessageTemplatesResponse::ListMessageTemplatesResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    messageTemplateCount_ = 0;
    messageTemplateCountIsSet_ = false;
    messageTemplatesIsSet_ = false;
}

ListMessageTemplatesResponse::~ListMessageTemplatesResponse() = default;

void ListMessageTemplatesResponse::validate()
{
}

web::json::value ListMessageTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(messageTemplateCountIsSet_) {
        val[utility::conversions::to_string_t("message_template_count")] = ModelBase::toJson(messageTemplateCount_);
    }
    if(messageTemplatesIsSet_) {
        val[utility::conversions::to_string_t("message_templates")] = ModelBase::toJson(messageTemplates_);
    }

    return val;
}
bool ListMessageTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message_template_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message_template_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessageTemplateCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message_templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message_templates"));
        if(!fieldValue.is_null())
        {
            std::vector<MessageTemplate> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessageTemplates(refVal);
        }
    }
    return ok;
}


std::string ListMessageTemplatesResponse::getRequestId() const
{
    return requestId_;
}

void ListMessageTemplatesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListMessageTemplatesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListMessageTemplatesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

int32_t ListMessageTemplatesResponse::getMessageTemplateCount() const
{
    return messageTemplateCount_;
}

void ListMessageTemplatesResponse::setMessageTemplateCount(int32_t value)
{
    messageTemplateCount_ = value;
    messageTemplateCountIsSet_ = true;
}

bool ListMessageTemplatesResponse::messageTemplateCountIsSet() const
{
    return messageTemplateCountIsSet_;
}

void ListMessageTemplatesResponse::unsetmessageTemplateCount()
{
    messageTemplateCountIsSet_ = false;
}

std::vector<MessageTemplate>& ListMessageTemplatesResponse::getMessageTemplates()
{
    return messageTemplates_;
}

void ListMessageTemplatesResponse::setMessageTemplates(const std::vector<MessageTemplate>& value)
{
    messageTemplates_ = value;
    messageTemplatesIsSet_ = true;
}

bool ListMessageTemplatesResponse::messageTemplatesIsSet() const
{
    return messageTemplatesIsSet_;
}

void ListMessageTemplatesResponse::unsetmessageTemplates()
{
    messageTemplatesIsSet_ = false;
}

}
}
}
}
}


