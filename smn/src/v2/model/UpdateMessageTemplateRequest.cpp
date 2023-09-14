

#include "huaweicloud/smn/v2/model/UpdateMessageTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateMessageTemplateRequest::UpdateMessageTemplateRequest()
{
    messageTemplateId_ = "";
    messageTemplateIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMessageTemplateRequest::~UpdateMessageTemplateRequest() = default;

void UpdateMessageTemplateRequest::validate()
{
}

web::json::value UpdateMessageTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("message_template_id")] = ModelBase::toJson(messageTemplateId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateMessageTemplateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateMessageTemplateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateMessageTemplateRequest::getMessageTemplateId() const
{
    return messageTemplateId_;
}

void UpdateMessageTemplateRequest::setMessageTemplateId(const std::string& value)
{
    messageTemplateId_ = value;
    messageTemplateIdIsSet_ = true;
}

bool UpdateMessageTemplateRequest::messageTemplateIdIsSet() const
{
    return messageTemplateIdIsSet_;
}

void UpdateMessageTemplateRequest::unsetmessageTemplateId()
{
    messageTemplateIdIsSet_ = false;
}

UpdateMessageTemplateRequestBody UpdateMessageTemplateRequest::getBody() const
{
    return body_;
}

void UpdateMessageTemplateRequest::setBody(const UpdateMessageTemplateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMessageTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMessageTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


