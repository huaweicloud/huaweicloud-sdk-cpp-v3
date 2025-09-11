

#include "huaweicloud/smn/v2/model/UnsubscribeSubscriptionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UnsubscribeSubscriptionResponse::UnsubscribeSubscriptionResponse()
{
    message_ = "";
    messageIsSet_ = false;
}

UnsubscribeSubscriptionResponse::~UnsubscribeSubscriptionResponse() = default;

void UnsubscribeSubscriptionResponse::validate()
{
}

web::json::value UnsubscribeSubscriptionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool UnsubscribeSubscriptionResponse::fromJson(const web::json::value& val)
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


std::string UnsubscribeSubscriptionResponse::getMessage() const
{
    return message_;
}

void UnsubscribeSubscriptionResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool UnsubscribeSubscriptionResponse::messageIsSet() const
{
    return messageIsSet_;
}

void UnsubscribeSubscriptionResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


