

#include "huaweicloud/smn/v2/model/PublishMessageResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




PublishMessageResponse::PublishMessageResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    messageId_ = "";
    messageIdIsSet_ = false;
}

PublishMessageResponse::~PublishMessageResponse() = default;

void PublishMessageResponse::validate()
{
}

web::json::value PublishMessageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(messageIdIsSet_) {
        val[utility::conversions::to_string_t("message_id")] = ModelBase::toJson(messageId_);
    }

    return val;
}

bool PublishMessageResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("message_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessageId(refVal);
        }
    }
    return ok;
}

std::string PublishMessageResponse::getRequestId() const
{
    return requestId_;
}

void PublishMessageResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool PublishMessageResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void PublishMessageResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string PublishMessageResponse::getMessageId() const
{
    return messageId_;
}

void PublishMessageResponse::setMessageId(const std::string& value)
{
    messageId_ = value;
    messageIdIsSet_ = true;
}

bool PublishMessageResponse::messageIdIsSet() const
{
    return messageIdIsSet_;
}

void PublishMessageResponse::unsetmessageId()
{
    messageIdIsSet_ = false;
}

}
}
}
}
}


