

#include "huaweicloud/smn/v2/model/ListMessageTemplatesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListMessageTemplatesRequest::ListMessageTemplatesRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    messageTemplateName_ = "";
    messageTemplateNameIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
}

ListMessageTemplatesRequest::~ListMessageTemplatesRequest() = default;

void ListMessageTemplatesRequest::validate()
{
}

web::json::value ListMessageTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(messageTemplateNameIsSet_) {
        val[utility::conversions::to_string_t("message_template_name")] = ModelBase::toJson(messageTemplateName_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }

    return val;
}

bool ListMessageTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}

int32_t ListMessageTemplatesRequest::getOffset() const
{
    return offset_;
}

void ListMessageTemplatesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMessageTemplatesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMessageTemplatesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMessageTemplatesRequest::getLimit() const
{
    return limit_;
}

void ListMessageTemplatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMessageTemplatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMessageTemplatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListMessageTemplatesRequest::getMessageTemplateName() const
{
    return messageTemplateName_;
}

void ListMessageTemplatesRequest::setMessageTemplateName(const std::string& value)
{
    messageTemplateName_ = value;
    messageTemplateNameIsSet_ = true;
}

bool ListMessageTemplatesRequest::messageTemplateNameIsSet() const
{
    return messageTemplateNameIsSet_;
}

void ListMessageTemplatesRequest::unsetmessageTemplateName()
{
    messageTemplateNameIsSet_ = false;
}

std::string ListMessageTemplatesRequest::getProtocol() const
{
    return protocol_;
}

void ListMessageTemplatesRequest::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ListMessageTemplatesRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void ListMessageTemplatesRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

}
}
}
}
}


