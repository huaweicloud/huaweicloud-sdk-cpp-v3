

#include "huaweicloud/smn/v2/model/BatchResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




BatchResult::BatchResult()
{
    code_ = "";
    codeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    subscriptionUrn_ = "";
    subscriptionUrnIsSet_ = false;
}

BatchResult::~BatchResult() = default;

void BatchResult::validate()
{
}

web::json::value BatchResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(subscriptionUrnIsSet_) {
        val[utility::conversions::to_string_t("subscription_urn")] = ModelBase::toJson(subscriptionUrn_);
    }

    return val;
}
bool BatchResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("subscription_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionUrn(refVal);
        }
    }
    return ok;
}


std::string BatchResult::getCode() const
{
    return code_;
}

void BatchResult::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool BatchResult::codeIsSet() const
{
    return codeIsSet_;
}

void BatchResult::unsetcode()
{
    codeIsSet_ = false;
}

std::string BatchResult::getMessage() const
{
    return message_;
}

void BatchResult::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool BatchResult::messageIsSet() const
{
    return messageIsSet_;
}

void BatchResult::unsetmessage()
{
    messageIsSet_ = false;
}

std::string BatchResult::getSubscriptionUrn() const
{
    return subscriptionUrn_;
}

void BatchResult::setSubscriptionUrn(const std::string& value)
{
    subscriptionUrn_ = value;
    subscriptionUrnIsSet_ = true;
}

bool BatchResult::subscriptionUrnIsSet() const
{
    return subscriptionUrnIsSet_;
}

void BatchResult::unsetsubscriptionUrn()
{
    subscriptionUrnIsSet_ = false;
}

}
}
}
}
}


