

#include "huaweicloud/smn/v2/model/UpdateNotifyPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateNotifyPolicyRequest::UpdateNotifyPolicyRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    notifyPolicyId_ = "";
    notifyPolicyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateNotifyPolicyRequest::~UpdateNotifyPolicyRequest() = default;

void UpdateNotifyPolicyRequest::validate()
{
}

web::json::value UpdateNotifyPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(notifyPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("notify_policy_id")] = ModelBase::toJson(notifyPolicyId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateNotifyPolicyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("notify_policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notify_policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotifyPolicyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NotifyPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateNotifyPolicyRequest::getTopicUrn() const
{
    return topicUrn_;
}

void UpdateNotifyPolicyRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool UpdateNotifyPolicyRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void UpdateNotifyPolicyRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string UpdateNotifyPolicyRequest::getNotifyPolicyId() const
{
    return notifyPolicyId_;
}

void UpdateNotifyPolicyRequest::setNotifyPolicyId(const std::string& value)
{
    notifyPolicyId_ = value;
    notifyPolicyIdIsSet_ = true;
}

bool UpdateNotifyPolicyRequest::notifyPolicyIdIsSet() const
{
    return notifyPolicyIdIsSet_;
}

void UpdateNotifyPolicyRequest::unsetnotifyPolicyId()
{
    notifyPolicyIdIsSet_ = false;
}

NotifyPolicyRequestBody UpdateNotifyPolicyRequest::getBody() const
{
    return body_;
}

void UpdateNotifyPolicyRequest::setBody(const NotifyPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateNotifyPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateNotifyPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


