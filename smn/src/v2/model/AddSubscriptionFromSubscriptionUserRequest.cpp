

#include "huaweicloud/smn/v2/model/AddSubscriptionFromSubscriptionUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




AddSubscriptionFromSubscriptionUserRequest::AddSubscriptionFromSubscriptionUserRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    bodyIsSet_ = false;
}

AddSubscriptionFromSubscriptionUserRequest::~AddSubscriptionFromSubscriptionUserRequest() = default;

void AddSubscriptionFromSubscriptionUserRequest::validate()
{
}

web::json::value AddSubscriptionFromSubscriptionUserRequest::toJson() const
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
bool AddSubscriptionFromSubscriptionUserRequest::fromJson(const web::json::value& val)
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
            AddSubscriptionFromSubscriptionUserRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddSubscriptionFromSubscriptionUserRequest::getTopicUrn() const
{
    return topicUrn_;
}

void AddSubscriptionFromSubscriptionUserRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool AddSubscriptionFromSubscriptionUserRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void AddSubscriptionFromSubscriptionUserRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

AddSubscriptionFromSubscriptionUserRequestBody AddSubscriptionFromSubscriptionUserRequest::getBody() const
{
    return body_;
}

void AddSubscriptionFromSubscriptionUserRequest::setBody(const AddSubscriptionFromSubscriptionUserRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddSubscriptionFromSubscriptionUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddSubscriptionFromSubscriptionUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


