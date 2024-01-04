

#include "huaweicloud/smn/v2/model/AddSubscriptionFromSubscriptionUserResponseItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




AddSubscriptionFromSubscriptionUserResponseItem::AddSubscriptionFromSubscriptionUserResponseItem()
{
    httpCode_ = 0;
    httpCodeIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    subscriptionUrn_ = "";
    subscriptionUrnIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

AddSubscriptionFromSubscriptionUserResponseItem::~AddSubscriptionFromSubscriptionUserResponseItem() = default;

void AddSubscriptionFromSubscriptionUserResponseItem::validate()
{
}

web::json::value AddSubscriptionFromSubscriptionUserResponseItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpCodeIsSet_) {
        val[utility::conversions::to_string_t("http_code")] = ModelBase::toJson(httpCode_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(subscriptionUrnIsSet_) {
        val[utility::conversions::to_string_t("subscription_urn")] = ModelBase::toJson(subscriptionUrn_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool AddSubscriptionFromSubscriptionUserResponseItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("http_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subscription_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


int32_t AddSubscriptionFromSubscriptionUserResponseItem::getHttpCode() const
{
    return httpCode_;
}

void AddSubscriptionFromSubscriptionUserResponseItem::setHttpCode(int32_t value)
{
    httpCode_ = value;
    httpCodeIsSet_ = true;
}

bool AddSubscriptionFromSubscriptionUserResponseItem::httpCodeIsSet() const
{
    return httpCodeIsSet_;
}

void AddSubscriptionFromSubscriptionUserResponseItem::unsethttpCode()
{
    httpCodeIsSet_ = false;
}

std::string AddSubscriptionFromSubscriptionUserResponseItem::getRequestId() const
{
    return requestId_;
}

void AddSubscriptionFromSubscriptionUserResponseItem::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool AddSubscriptionFromSubscriptionUserResponseItem::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void AddSubscriptionFromSubscriptionUserResponseItem::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string AddSubscriptionFromSubscriptionUserResponseItem::getSubscriptionUrn() const
{
    return subscriptionUrn_;
}

void AddSubscriptionFromSubscriptionUserResponseItem::setSubscriptionUrn(const std::string& value)
{
    subscriptionUrn_ = value;
    subscriptionUrnIsSet_ = true;
}

bool AddSubscriptionFromSubscriptionUserResponseItem::subscriptionUrnIsSet() const
{
    return subscriptionUrnIsSet_;
}

void AddSubscriptionFromSubscriptionUserResponseItem::unsetsubscriptionUrn()
{
    subscriptionUrnIsSet_ = false;
}

std::string AddSubscriptionFromSubscriptionUserResponseItem::getErrorCode() const
{
    return errorCode_;
}

void AddSubscriptionFromSubscriptionUserResponseItem::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool AddSubscriptionFromSubscriptionUserResponseItem::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void AddSubscriptionFromSubscriptionUserResponseItem::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string AddSubscriptionFromSubscriptionUserResponseItem::getErrorMsg() const
{
    return errorMsg_;
}

void AddSubscriptionFromSubscriptionUserResponseItem::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool AddSubscriptionFromSubscriptionUserResponseItem::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void AddSubscriptionFromSubscriptionUserResponseItem::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


