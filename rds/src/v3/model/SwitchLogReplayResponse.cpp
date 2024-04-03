

#include "huaweicloud/rds/v3/model/SwitchLogReplayResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SwitchLogReplayResponse::SwitchLogReplayResponse()
{
    message_ = "";
    messageIsSet_ = false;
}

SwitchLogReplayResponse::~SwitchLogReplayResponse() = default;

void SwitchLogReplayResponse::validate()
{
}

web::json::value SwitchLogReplayResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool SwitchLogReplayResponse::fromJson(const web::json::value& val)
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


std::string SwitchLogReplayResponse::getMessage() const
{
    return message_;
}

void SwitchLogReplayResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool SwitchLogReplayResponse::messageIsSet() const
{
    return messageIsSet_;
}

void SwitchLogReplayResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


