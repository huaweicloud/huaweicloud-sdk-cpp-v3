

#include "huaweicloud/smn/v2/model/ConfirmSubscriptionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ConfirmSubscriptionResponse::ConfirmSubscriptionResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    subscriptionUrn_ = "";
    subscriptionUrnIsSet_ = false;
}

ConfirmSubscriptionResponse::~ConfirmSubscriptionResponse() = default;

void ConfirmSubscriptionResponse::validate()
{
}

web::json::value ConfirmSubscriptionResponse::toJson() const
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
bool ConfirmSubscriptionResponse::fromJson(const web::json::value& val)
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


std::string ConfirmSubscriptionResponse::getRequestId() const
{
    return requestId_;
}

void ConfirmSubscriptionResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ConfirmSubscriptionResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ConfirmSubscriptionResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ConfirmSubscriptionResponse::getSubscriptionUrn() const
{
    return subscriptionUrn_;
}

void ConfirmSubscriptionResponse::setSubscriptionUrn(const std::string& value)
{
    subscriptionUrn_ = value;
    subscriptionUrnIsSet_ = true;
}

bool ConfirmSubscriptionResponse::subscriptionUrnIsSet() const
{
    return subscriptionUrnIsSet_;
}

void ConfirmSubscriptionResponse::unsetsubscriptionUrn()
{
    subscriptionUrnIsSet_ = false;
}

}
}
}
}
}


