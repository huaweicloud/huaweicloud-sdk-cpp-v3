

#include "huaweicloud/smn/v2/model/PublishAppMessageResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




PublishAppMessageResponse::PublishAppMessageResponse()
{
    messageId_ = "";
    messageIdIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

PublishAppMessageResponse::~PublishAppMessageResponse() = default;

void PublishAppMessageResponse::validate()
{
}

web::json::value PublishAppMessageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIdIsSet_) {
        val[utility::conversions::to_string_t("message_id")] = ModelBase::toJson(messageId_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}

bool PublishAppMessageResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}

std::string PublishAppMessageResponse::getMessageId() const
{
    return messageId_;
}

void PublishAppMessageResponse::setMessageId(const std::string& value)
{
    messageId_ = value;
    messageIdIsSet_ = true;
}

bool PublishAppMessageResponse::messageIdIsSet() const
{
    return messageIdIsSet_;
}

void PublishAppMessageResponse::unsetmessageId()
{
    messageIdIsSet_ = false;
}

std::string PublishAppMessageResponse::getRequestId() const
{
    return requestId_;
}

void PublishAppMessageResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool PublishAppMessageResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void PublishAppMessageResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


