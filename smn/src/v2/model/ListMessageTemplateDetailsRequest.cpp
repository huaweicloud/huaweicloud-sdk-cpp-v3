

#include "huaweicloud/smn/v2/model/ListMessageTemplateDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListMessageTemplateDetailsRequest::ListMessageTemplateDetailsRequest()
{
    messageTemplateId_ = "";
    messageTemplateIdIsSet_ = false;
}

ListMessageTemplateDetailsRequest::~ListMessageTemplateDetailsRequest() = default;

void ListMessageTemplateDetailsRequest::validate()
{
}

web::json::value ListMessageTemplateDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("message_template_id")] = ModelBase::toJson(messageTemplateId_);
    }

    return val;
}
bool ListMessageTemplateDetailsRequest::fromJson(const web::json::value& val)
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


std::string ListMessageTemplateDetailsRequest::getMessageTemplateId() const
{
    return messageTemplateId_;
}

void ListMessageTemplateDetailsRequest::setMessageTemplateId(const std::string& value)
{
    messageTemplateId_ = value;
    messageTemplateIdIsSet_ = true;
}

bool ListMessageTemplateDetailsRequest::messageTemplateIdIsSet() const
{
    return messageTemplateIdIsSet_;
}

void ListMessageTemplateDetailsRequest::unsetmessageTemplateId()
{
    messageTemplateIdIsSet_ = false;
}

}
}
}
}
}


