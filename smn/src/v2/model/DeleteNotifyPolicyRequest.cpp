

#include "huaweicloud/smn/v2/model/DeleteNotifyPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




DeleteNotifyPolicyRequest::DeleteNotifyPolicyRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    notifyPolicyId_ = "";
    notifyPolicyIdIsSet_ = false;
}

DeleteNotifyPolicyRequest::~DeleteNotifyPolicyRequest() = default;

void DeleteNotifyPolicyRequest::validate()
{
}

web::json::value DeleteNotifyPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(notifyPolicyIdIsSet_) {
        val[utility::conversions::to_string_t("notify_policy_id")] = ModelBase::toJson(notifyPolicyId_);
    }

    return val;
}
bool DeleteNotifyPolicyRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteNotifyPolicyRequest::getTopicUrn() const
{
    return topicUrn_;
}

void DeleteNotifyPolicyRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool DeleteNotifyPolicyRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void DeleteNotifyPolicyRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string DeleteNotifyPolicyRequest::getNotifyPolicyId() const
{
    return notifyPolicyId_;
}

void DeleteNotifyPolicyRequest::setNotifyPolicyId(const std::string& value)
{
    notifyPolicyId_ = value;
    notifyPolicyIdIsSet_ = true;
}

bool DeleteNotifyPolicyRequest::notifyPolicyIdIsSet() const
{
    return notifyPolicyIdIsSet_;
}

void DeleteNotifyPolicyRequest::unsetnotifyPolicyId()
{
    notifyPolicyIdIsSet_ = false;
}

}
}
}
}
}


