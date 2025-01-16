

#include "huaweicloud/smn/v2/model/CreateNotifyPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateNotifyPolicyRequest::CreateNotifyPolicyRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    bodyIsSet_ = false;
}

CreateNotifyPolicyRequest::~CreateNotifyPolicyRequest() = default;

void CreateNotifyPolicyRequest::validate()
{
}

web::json::value CreateNotifyPolicyRequest::toJson() const
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
bool CreateNotifyPolicyRequest::fromJson(const web::json::value& val)
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
            NotifyPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateNotifyPolicyRequest::getTopicUrn() const
{
    return topicUrn_;
}

void CreateNotifyPolicyRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool CreateNotifyPolicyRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void CreateNotifyPolicyRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

NotifyPolicyRequestBody CreateNotifyPolicyRequest::getBody() const
{
    return body_;
}

void CreateNotifyPolicyRequest::setBody(const NotifyPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateNotifyPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateNotifyPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


