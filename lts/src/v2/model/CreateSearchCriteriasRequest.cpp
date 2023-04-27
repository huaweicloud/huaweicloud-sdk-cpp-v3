

#include "huaweicloud/lts/v2/model/CreateSearchCriteriasRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateSearchCriteriasRequest::CreateSearchCriteriasRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    topicId_ = "";
    topicIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSearchCriteriasRequest::~CreateSearchCriteriasRequest() = default;

void CreateSearchCriteriasRequest::validate()
{
}

web::json::value CreateSearchCriteriasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(topicIdIsSet_) {
        val[utility::conversions::to_string_t("topic_id")] = ModelBase::toJson(topicId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateSearchCriteriasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateSearchCriteriasBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateSearchCriteriasRequest::getGroupId() const
{
    return groupId_;
}

void CreateSearchCriteriasRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateSearchCriteriasRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateSearchCriteriasRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string CreateSearchCriteriasRequest::getTopicId() const
{
    return topicId_;
}

void CreateSearchCriteriasRequest::setTopicId(const std::string& value)
{
    topicId_ = value;
    topicIdIsSet_ = true;
}

bool CreateSearchCriteriasRequest::topicIdIsSet() const
{
    return topicIdIsSet_;
}

void CreateSearchCriteriasRequest::unsettopicId()
{
    topicIdIsSet_ = false;
}

std::string CreateSearchCriteriasRequest::getContentType() const
{
    return contentType_;
}

void CreateSearchCriteriasRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateSearchCriteriasRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateSearchCriteriasRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

CreateSearchCriteriasBody CreateSearchCriteriasRequest::getBody() const
{
    return body_;
}

void CreateSearchCriteriasRequest::setBody(const CreateSearchCriteriasBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSearchCriteriasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSearchCriteriasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


