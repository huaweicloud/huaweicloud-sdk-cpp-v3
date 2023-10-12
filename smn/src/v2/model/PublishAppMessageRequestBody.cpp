

#include "huaweicloud/smn/v2/model/PublishAppMessageRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




PublishAppMessageRequestBody::PublishAppMessageRequestBody()
{
    message_ = "";
    messageIsSet_ = false;
    messageStructure_ = "";
    messageStructureIsSet_ = false;
    timeToLive_ = "";
    timeToLiveIsSet_ = false;
}

PublishAppMessageRequestBody::~PublishAppMessageRequestBody() = default;

void PublishAppMessageRequestBody::validate()
{
}

web::json::value PublishAppMessageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(messageStructureIsSet_) {
        val[utility::conversions::to_string_t("message_structure")] = ModelBase::toJson(messageStructure_);
    }
    if(timeToLiveIsSet_) {
        val[utility::conversions::to_string_t("time_to_live")] = ModelBase::toJson(timeToLive_);
    }

    return val;
}
bool PublishAppMessageRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("message_structure"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message_structure"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessageStructure(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_to_live"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_to_live"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeToLive(refVal);
        }
    }
    return ok;
}


std::string PublishAppMessageRequestBody::getMessage() const
{
    return message_;
}

void PublishAppMessageRequestBody::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool PublishAppMessageRequestBody::messageIsSet() const
{
    return messageIsSet_;
}

void PublishAppMessageRequestBody::unsetmessage()
{
    messageIsSet_ = false;
}

std::string PublishAppMessageRequestBody::getMessageStructure() const
{
    return messageStructure_;
}

void PublishAppMessageRequestBody::setMessageStructure(const std::string& value)
{
    messageStructure_ = value;
    messageStructureIsSet_ = true;
}

bool PublishAppMessageRequestBody::messageStructureIsSet() const
{
    return messageStructureIsSet_;
}

void PublishAppMessageRequestBody::unsetmessageStructure()
{
    messageStructureIsSet_ = false;
}

std::string PublishAppMessageRequestBody::getTimeToLive() const
{
    return timeToLive_;
}

void PublishAppMessageRequestBody::setTimeToLive(const std::string& value)
{
    timeToLive_ = value;
    timeToLiveIsSet_ = true;
}

bool PublishAppMessageRequestBody::timeToLiveIsSet() const
{
    return timeToLiveIsSet_;
}

void PublishAppMessageRequestBody::unsettimeToLive()
{
    timeToLiveIsSet_ = false;
}

}
}
}
}
}


