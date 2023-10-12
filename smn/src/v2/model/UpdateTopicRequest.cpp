

#include "huaweicloud/smn/v2/model/UpdateTopicRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateTopicRequest::UpdateTopicRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTopicRequest::~UpdateTopicRequest() = default;

void UpdateTopicRequest::validate()
{
}

web::json::value UpdateTopicRequest::toJson() const
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
bool UpdateTopicRequest::fromJson(const web::json::value& val)
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
            UpdateTopicRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTopicRequest::getTopicUrn() const
{
    return topicUrn_;
}

void UpdateTopicRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool UpdateTopicRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void UpdateTopicRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

UpdateTopicRequestBody UpdateTopicRequest::getBody() const
{
    return body_;
}

void UpdateTopicRequest::setBody(const UpdateTopicRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTopicRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTopicRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


