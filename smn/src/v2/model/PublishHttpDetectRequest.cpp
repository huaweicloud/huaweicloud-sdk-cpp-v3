

#include "huaweicloud/smn/v2/model/PublishHttpDetectRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




PublishHttpDetectRequest::PublishHttpDetectRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    bodyIsSet_ = false;
}

PublishHttpDetectRequest::~PublishHttpDetectRequest() = default;

void PublishHttpDetectRequest::validate()
{
}

web::json::value PublishHttpDetectRequest::toJson() const
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
bool PublishHttpDetectRequest::fromJson(const web::json::value& val)
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
            HttpDetectRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string PublishHttpDetectRequest::getTopicUrn() const
{
    return topicUrn_;
}

void PublishHttpDetectRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool PublishHttpDetectRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void PublishHttpDetectRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

HttpDetectRequestBody PublishHttpDetectRequest::getBody() const
{
    return body_;
}

void PublishHttpDetectRequest::setBody(const HttpDetectRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PublishHttpDetectRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PublishHttpDetectRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


