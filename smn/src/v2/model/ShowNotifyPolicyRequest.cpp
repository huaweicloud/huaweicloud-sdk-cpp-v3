

#include "huaweicloud/smn/v2/model/ShowNotifyPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ShowNotifyPolicyRequest::ShowNotifyPolicyRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
}

ShowNotifyPolicyRequest::~ShowNotifyPolicyRequest() = default;

void ShowNotifyPolicyRequest::validate()
{
}

web::json::value ShowNotifyPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }

    return val;
}
bool ShowNotifyPolicyRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowNotifyPolicyRequest::getTopicUrn() const
{
    return topicUrn_;
}

void ShowNotifyPolicyRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ShowNotifyPolicyRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ShowNotifyPolicyRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

}
}
}
}
}


