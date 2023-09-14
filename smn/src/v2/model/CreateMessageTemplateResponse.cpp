

#include "huaweicloud/smn/v2/model/CreateMessageTemplateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateMessageTemplateResponse::CreateMessageTemplateResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    messageTemplateId_ = "";
    messageTemplateIdIsSet_ = false;
}

CreateMessageTemplateResponse::~CreateMessageTemplateResponse() = default;

void CreateMessageTemplateResponse::validate()
{
}

web::json::value CreateMessageTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(messageTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("message_template_id")] = ModelBase::toJson(messageTemplateId_);
    }

    return val;
}

bool CreateMessageTemplateResponse::fromJson(const web::json::value& val)
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

std::string CreateMessageTemplateResponse::getRequestId() const
{
    return requestId_;
}

void CreateMessageTemplateResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateMessageTemplateResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateMessageTemplateResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string CreateMessageTemplateResponse::getMessageTemplateId() const
{
    return messageTemplateId_;
}

void CreateMessageTemplateResponse::setMessageTemplateId(const std::string& value)
{
    messageTemplateId_ = value;
    messageTemplateIdIsSet_ = true;
}

bool CreateMessageTemplateResponse::messageTemplateIdIsSet() const
{
    return messageTemplateIdIsSet_;
}

void CreateMessageTemplateResponse::unsetmessageTemplateId()
{
    messageTemplateIdIsSet_ = false;
}

}
}
}
}
}


