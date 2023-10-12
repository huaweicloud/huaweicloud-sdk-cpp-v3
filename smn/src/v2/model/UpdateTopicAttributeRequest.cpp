

#include "huaweicloud/smn/v2/model/UpdateTopicAttributeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateTopicAttributeRequest::UpdateTopicAttributeRequest()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTopicAttributeRequest::~UpdateTopicAttributeRequest() = default;

void UpdateTopicAttributeRequest::validate()
{
}

web::json::value UpdateTopicAttributeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTopicAttributeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateTopicAttributeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTopicAttributeRequest::getTopicUrn() const
{
    return topicUrn_;
}

void UpdateTopicAttributeRequest::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool UpdateTopicAttributeRequest::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void UpdateTopicAttributeRequest::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string UpdateTopicAttributeRequest::getName() const
{
    return name_;
}

void UpdateTopicAttributeRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateTopicAttributeRequest::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateTopicAttributeRequest::unsetname()
{
    nameIsSet_ = false;
}

UpdateTopicAttributeRequestBody UpdateTopicAttributeRequest::getBody() const
{
    return body_;
}

void UpdateTopicAttributeRequest::setBody(const UpdateTopicAttributeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTopicAttributeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTopicAttributeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


