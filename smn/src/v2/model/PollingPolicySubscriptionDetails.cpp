

#include "huaweicloud/smn/v2/model/PollingPolicySubscriptionDetails.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




PollingPolicySubscriptionDetails::PollingPolicySubscriptionDetails()
{
    subscriptionUrn_ = "";
    subscriptionUrnIsSet_ = false;
    endpoint_ = "";
    endpointIsSet_ = false;
    remark_ = "";
    remarkIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

PollingPolicySubscriptionDetails::~PollingPolicySubscriptionDetails() = default;

void PollingPolicySubscriptionDetails::validate()
{
}

web::json::value PollingPolicySubscriptionDetails::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subscriptionUrnIsSet_) {
        val[utility::conversions::to_string_t("subscription_urn")] = ModelBase::toJson(subscriptionUrn_);
    }
    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(remarkIsSet_) {
        val[utility::conversions::to_string_t("remark")] = ModelBase::toJson(remark_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool PollingPolicySubscriptionDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subscription_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string PollingPolicySubscriptionDetails::getSubscriptionUrn() const
{
    return subscriptionUrn_;
}

void PollingPolicySubscriptionDetails::setSubscriptionUrn(const std::string& value)
{
    subscriptionUrn_ = value;
    subscriptionUrnIsSet_ = true;
}

bool PollingPolicySubscriptionDetails::subscriptionUrnIsSet() const
{
    return subscriptionUrnIsSet_;
}

void PollingPolicySubscriptionDetails::unsetsubscriptionUrn()
{
    subscriptionUrnIsSet_ = false;
}

std::string PollingPolicySubscriptionDetails::getEndpoint() const
{
    return endpoint_;
}

void PollingPolicySubscriptionDetails::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool PollingPolicySubscriptionDetails::endpointIsSet() const
{
    return endpointIsSet_;
}

void PollingPolicySubscriptionDetails::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string PollingPolicySubscriptionDetails::getRemark() const
{
    return remark_;
}

void PollingPolicySubscriptionDetails::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool PollingPolicySubscriptionDetails::remarkIsSet() const
{
    return remarkIsSet_;
}

void PollingPolicySubscriptionDetails::unsetremark()
{
    remarkIsSet_ = false;
}

int32_t PollingPolicySubscriptionDetails::getStatus() const
{
    return status_;
}

void PollingPolicySubscriptionDetails::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PollingPolicySubscriptionDetails::statusIsSet() const
{
    return statusIsSet_;
}

void PollingPolicySubscriptionDetails::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


