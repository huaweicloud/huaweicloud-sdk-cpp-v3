

#include "huaweicloud/smn/v2/model/AddSubscriptionRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




AddSubscriptionRequest::AddSubscriptionRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    bodyIsSet_ = false;
}

AddSubscriptionRequest::~AddSubscriptionRequest() = default;

void AddSubscriptionRequest::validate()
{
}

web::json::value AddSubscriptionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool AddSubscriptionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddSubscriptionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string AddSubscriptionRequest::getTopicUrn() const
{
    return topicUrn_;
}

void AddSubscriptionRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool AddSubscriptionRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void AddSubscriptionRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

AddSubscriptionRequestBody AddSubscriptionRequest::getBody() const
{
    return body_;
}

void AddSubscriptionRequest::setBody(const AddSubscriptionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddSubscriptionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddSubscriptionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


