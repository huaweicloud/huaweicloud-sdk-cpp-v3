

#include "huaweicloud/iotda/v5/model/CreateMessageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateMessageResponse::CreateMessageResponse()
{
    messageId_ = "";
    messageIdIsSet_ = false;
    resultIsSet_ = false;
}

CreateMessageResponse::~CreateMessageResponse() = default;

void CreateMessageResponse::validate()
{
}

web::json::value CreateMessageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIdIsSet_) {
        val[utility::conversions::to_string_t("message_id")] = ModelBase::toJson(messageId_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool CreateMessageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("message_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            MessageResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string CreateMessageResponse::getMessageId() const
{
    return messageId_;
}

void CreateMessageResponse::setMessageId(const std::string& value)
{
    messageId_ = value;
    messageIdIsSet_ = true;
}

bool CreateMessageResponse::messageIdIsSet() const
{
    return messageIdIsSet_;
}

void CreateMessageResponse::unsetmessageId()
{
    messageIdIsSet_ = false;
}

MessageResult CreateMessageResponse::getResult() const
{
    return result_;
}

void CreateMessageResponse::setResult(const MessageResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateMessageResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateMessageResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


