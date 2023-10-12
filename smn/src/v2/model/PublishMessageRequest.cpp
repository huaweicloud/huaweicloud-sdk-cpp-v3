

#include "huaweicloud/smn/v2/model/PublishMessageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




PublishMessageRequest::PublishMessageRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    bodyIsSet_ = false;
}

PublishMessageRequest::~PublishMessageRequest() = default;

void PublishMessageRequest::validate()
{
}

web::json::value PublishMessageRequest::toJson() const
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
bool PublishMessageRequest::fromJson(const web::json::value& val)
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
            PublishMessageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string PublishMessageRequest::getTopicUrn() const
{
    return topicUrn_;
}

void PublishMessageRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool PublishMessageRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void PublishMessageRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

PublishMessageRequestBody PublishMessageRequest::getBody() const
{
    return body_;
}

void PublishMessageRequest::setBody(const PublishMessageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PublishMessageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PublishMessageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


