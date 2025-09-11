

#include "huaweicloud/smn/v2/model/ConfirmSubscriptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ConfirmSubscriptionRequest::ConfirmSubscriptionRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    endpoint_ = "";
    endpointIsSet_ = false;
    token_ = "";
    tokenIsSet_ = false;
}

ConfirmSubscriptionRequest::~ConfirmSubscriptionRequest() = default;

void ConfirmSubscriptionRequest::validate()
{
}

web::json::value ConfirmSubscriptionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(endpointIsSet_) {
        val[utility::conversions::to_string_t("endpoint")] = ModelBase::toJson(endpoint_);
    }
    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }

    return val;
}
bool ConfirmSubscriptionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToken(refVal);
        }
    }
    return ok;
}


std::string ConfirmSubscriptionRequest::getTopicUrn() const
{
    return topicUrn_;
}

void ConfirmSubscriptionRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ConfirmSubscriptionRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ConfirmSubscriptionRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string ConfirmSubscriptionRequest::getEndpoint() const
{
    return endpoint_;
}

void ConfirmSubscriptionRequest::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool ConfirmSubscriptionRequest::endpointIsSet() const
{
    return endpointIsSet_;
}

void ConfirmSubscriptionRequest::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string ConfirmSubscriptionRequest::getToken() const
{
    return token_;
}

void ConfirmSubscriptionRequest::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool ConfirmSubscriptionRequest::tokenIsSet() const
{
    return tokenIsSet_;
}

void ConfirmSubscriptionRequest::unsettoken()
{
    tokenIsSet_ = false;
}

}
}
}
}
}


