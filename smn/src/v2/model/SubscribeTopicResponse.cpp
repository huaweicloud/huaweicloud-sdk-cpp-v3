

#include "huaweicloud/smn/v2/model/SubscribeTopicResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




SubscribeTopicResponse::SubscribeTopicResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    subscriptionUrn_ = "";
    subscriptionUrnIsSet_ = false;
}

SubscribeTopicResponse::~SubscribeTopicResponse() = default;

void SubscribeTopicResponse::validate()
{
}

web::json::value SubscribeTopicResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(subscriptionUrnIsSet_) {
        val[utility::conversions::to_string_t("subscription_urn")] = ModelBase::toJson(subscriptionUrn_);
    }

    return val;
}
bool SubscribeTopicResponse::fromJson(const web::json::value& val)
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


std::string SubscribeTopicResponse::getRequestId() const
{
    return requestId_;
}

void SubscribeTopicResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool SubscribeTopicResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void SubscribeTopicResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string SubscribeTopicResponse::getSubscriptionUrn() const
{
    return subscriptionUrn_;
}

void SubscribeTopicResponse::setSubscriptionUrn(const std::string& value)
{
    subscriptionUrn_ = value;
    subscriptionUrnIsSet_ = true;
}

bool SubscribeTopicResponse::subscriptionUrnIsSet() const
{
    return subscriptionUrnIsSet_;
}

void SubscribeTopicResponse::unsetsubscriptionUrn()
{
    subscriptionUrnIsSet_ = false;
}

}
}
}
}
}


