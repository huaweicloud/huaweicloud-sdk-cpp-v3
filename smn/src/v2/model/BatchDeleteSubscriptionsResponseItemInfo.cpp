

#include "huaweicloud/smn/v2/model/BatchDeleteSubscriptionsResponseItemInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




BatchDeleteSubscriptionsResponseItemInfo::BatchDeleteSubscriptionsResponseItemInfo()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    httpCode_ = 0;
    httpCodeIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

BatchDeleteSubscriptionsResponseItemInfo::~BatchDeleteSubscriptionsResponseItemInfo() = default;

void BatchDeleteSubscriptionsResponseItemInfo::validate()
{
}

web::json::value BatchDeleteSubscriptionsResponseItemInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(httpCodeIsSet_) {
        val[utility::conversions::to_string_t("http_code")] = ModelBase::toJson(httpCode_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool BatchDeleteSubscriptionsResponseItemInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("http_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
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


std::string BatchDeleteSubscriptionsResponseItemInfo::getRequestId() const
{
    return requestId_;
}

void BatchDeleteSubscriptionsResponseItemInfo::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool BatchDeleteSubscriptionsResponseItemInfo::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void BatchDeleteSubscriptionsResponseItemInfo::unsetrequestId()
{
    requestIdIsSet_ = false;
}

int32_t BatchDeleteSubscriptionsResponseItemInfo::getHttpCode() const
{
    return httpCode_;
}

void BatchDeleteSubscriptionsResponseItemInfo::setHttpCode(int32_t value)
{
    httpCode_ = value;
    httpCodeIsSet_ = true;
}

bool BatchDeleteSubscriptionsResponseItemInfo::httpCodeIsSet() const
{
    return httpCodeIsSet_;
}

void BatchDeleteSubscriptionsResponseItemInfo::unsethttpCode()
{
    httpCodeIsSet_ = false;
}

std::string BatchDeleteSubscriptionsResponseItemInfo::getCode() const
{
    return code_;
}

void BatchDeleteSubscriptionsResponseItemInfo::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool BatchDeleteSubscriptionsResponseItemInfo::codeIsSet() const
{
    return codeIsSet_;
}

void BatchDeleteSubscriptionsResponseItemInfo::unsetcode()
{
    codeIsSet_ = false;
}

std::string BatchDeleteSubscriptionsResponseItemInfo::getMessage() const
{
    return message_;
}

void BatchDeleteSubscriptionsResponseItemInfo::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool BatchDeleteSubscriptionsResponseItemInfo::messageIsSet() const
{
    return messageIsSet_;
}

void BatchDeleteSubscriptionsResponseItemInfo::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


