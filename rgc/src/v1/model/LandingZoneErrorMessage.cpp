

#include "huaweicloud/rgc/v1/model/LandingZoneErrorMessage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




LandingZoneErrorMessage::LandingZoneErrorMessage()
{
    level_ = "";
    levelIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

LandingZoneErrorMessage::~LandingZoneErrorMessage() = default;

void LandingZoneErrorMessage::validate()
{
}

web::json::value LandingZoneErrorMessage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool LandingZoneErrorMessage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
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


std::string LandingZoneErrorMessage::getLevel() const
{
    return level_;
}

void LandingZoneErrorMessage::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool LandingZoneErrorMessage::levelIsSet() const
{
    return levelIsSet_;
}

void LandingZoneErrorMessage::unsetlevel()
{
    levelIsSet_ = false;
}

std::string LandingZoneErrorMessage::getMessage() const
{
    return message_;
}

void LandingZoneErrorMessage::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool LandingZoneErrorMessage::messageIsSet() const
{
    return messageIsSet_;
}

void LandingZoneErrorMessage::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


