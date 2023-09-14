

#include "huaweicloud/smn/v2/model/UpdateSubscriptionResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateSubscriptionResponse::UpdateSubscriptionResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    subscriptionUrn_ = "";
    subscriptionUrnIsSet_ = false;
}

UpdateSubscriptionResponse::~UpdateSubscriptionResponse() = default;

void UpdateSubscriptionResponse::validate()
{
}

web::json::value UpdateSubscriptionResponse::toJson() const
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

bool UpdateSubscriptionResponse::fromJson(const web::json::value& val)
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

std::string UpdateSubscriptionResponse::getRequestId() const
{
    return requestId_;
}

void UpdateSubscriptionResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateSubscriptionResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateSubscriptionResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string UpdateSubscriptionResponse::getSubscriptionUrn() const
{
    return subscriptionUrn_;
}

void UpdateSubscriptionResponse::setSubscriptionUrn(const std::string& value)
{
    subscriptionUrn_ = value;
    subscriptionUrnIsSet_ = true;
}

bool UpdateSubscriptionResponse::subscriptionUrnIsSet() const
{
    return subscriptionUrnIsSet_;
}

void UpdateSubscriptionResponse::unsetsubscriptionUrn()
{
    subscriptionUrnIsSet_ = false;
}

}
}
}
}
}


