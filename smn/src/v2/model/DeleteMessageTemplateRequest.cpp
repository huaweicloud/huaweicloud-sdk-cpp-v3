

#include "huaweicloud/smn/v2/model/DeleteMessageTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteMessageTemplateRequest::DeleteMessageTemplateRequest()
{
    messageTemplateId_ = "";
    messageTemplateIdIsSet_ = false;
}

DeleteMessageTemplateRequest::~DeleteMessageTemplateRequest() = default;

void DeleteMessageTemplateRequest::validate()
{
}

web::json::value DeleteMessageTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("message_template_id")] = ModelBase::toJson(messageTemplateId_);
    }

    return val;
}
bool DeleteMessageTemplateRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteMessageTemplateRequest::getMessageTemplateId() const
{
    return messageTemplateId_;
}

void DeleteMessageTemplateRequest::setMessageTemplateId(const std::string& value)
{
    messageTemplateId_ = value;
    messageTemplateIdIsSet_ = true;
}

bool DeleteMessageTemplateRequest::messageTemplateIdIsSet() const
{
    return messageTemplateIdIsSet_;
}

void DeleteMessageTemplateRequest::unsetmessageTemplateId()
{
    messageTemplateIdIsSet_ = false;
}

}
}
}
}
}


