

#include "huaweicloud/smn/v2/model/UnsubscribeTopicResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UnsubscribeTopicResponse::UnsubscribeTopicResponse()
{
    message_ = "";
    messageIsSet_ = false;
}

UnsubscribeTopicResponse::~UnsubscribeTopicResponse() = default;

void UnsubscribeTopicResponse::validate()
{
}

web::json::value UnsubscribeTopicResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool UnsubscribeTopicResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string UnsubscribeTopicResponse::getMessage() const
{
    return message_;
}

void UnsubscribeTopicResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool UnsubscribeTopicResponse::messageIsSet() const
{
    return messageIsSet_;
}

void UnsubscribeTopicResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


