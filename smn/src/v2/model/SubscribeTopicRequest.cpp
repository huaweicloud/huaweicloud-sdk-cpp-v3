

#include "huaweicloud/smn/v2/model/SubscribeTopicRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




SubscribeTopicRequest::SubscribeTopicRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    endpoint_ = "";
    endpointIsSet_ = false;
    token_ = "";
    tokenIsSet_ = false;
}

SubscribeTopicRequest::~SubscribeTopicRequest() = default;

void SubscribeTopicRequest::validate()
{
}

web::json::value SubscribeTopicRequest::toJson() const
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
bool SubscribeTopicRequest::fromJson(const web::json::value& val)
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


std::string SubscribeTopicRequest::getTopicUrn() const
{
    return topicUrn_;
}

void SubscribeTopicRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool SubscribeTopicRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void SubscribeTopicRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string SubscribeTopicRequest::getEndpoint() const
{
    return endpoint_;
}

void SubscribeTopicRequest::setEndpoint(const std::string& value)
{
    endpoint_ = value;
    endpointIsSet_ = true;
}

bool SubscribeTopicRequest::endpointIsSet() const
{
    return endpointIsSet_;
}

void SubscribeTopicRequest::unsetendpoint()
{
    endpointIsSet_ = false;
}

std::string SubscribeTopicRequest::getToken() const
{
    return token_;
}

void SubscribeTopicRequest::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool SubscribeTopicRequest::tokenIsSet() const
{
    return tokenIsSet_;
}

void SubscribeTopicRequest::unsettoken()
{
    tokenIsSet_ = false;
}

}
}
}
}
}


