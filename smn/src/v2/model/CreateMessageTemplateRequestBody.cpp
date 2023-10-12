

#include "huaweicloud/smn/v2/model/CreateMessageTemplateRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateMessageTemplateRequestBody::CreateMessageTemplateRequestBody()
{
    messageTemplateName_ = "";
    messageTemplateNameIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
}

CreateMessageTemplateRequestBody::~CreateMessageTemplateRequestBody() = default;

void CreateMessageTemplateRequestBody::validate()
{
}

web::json::value CreateMessageTemplateRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageTemplateNameIsSet_) {
        val[utility::conversions::to_string_t("message_template_name")] = ModelBase::toJson(messageTemplateName_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool CreateMessageTemplateRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    return ok;
}


std::string CreateMessageTemplateRequestBody::getMessageTemplateName() const
{
    return messageTemplateName_;
}

void CreateMessageTemplateRequestBody::setMessageTemplateName(const std::string& value)
{
    messageTemplateName_ = value;
    messageTemplateNameIsSet_ = true;
}

bool CreateMessageTemplateRequestBody::messageTemplateNameIsSet() const
{
    return messageTemplateNameIsSet_;
}

void CreateMessageTemplateRequestBody::unsetmessageTemplateName()
{
    messageTemplateNameIsSet_ = false;
}

std::string CreateMessageTemplateRequestBody::getProtocol() const
{
    return protocol_;
}

void CreateMessageTemplateRequestBody::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool CreateMessageTemplateRequestBody::protocolIsSet() const
{
    return protocolIsSet_;
}

void CreateMessageTemplateRequestBody::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string CreateMessageTemplateRequestBody::getContent() const
{
    return content_;
}

void CreateMessageTemplateRequestBody::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool CreateMessageTemplateRequestBody::contentIsSet() const
{
    return contentIsSet_;
}

void CreateMessageTemplateRequestBody::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


