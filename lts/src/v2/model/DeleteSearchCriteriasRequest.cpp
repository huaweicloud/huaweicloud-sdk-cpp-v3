

#include "huaweicloud/lts/v2/model/DeleteSearchCriteriasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteSearchCriteriasRequest::DeleteSearchCriteriasRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    topicId_ = "";
    topicIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteSearchCriteriasRequest::~DeleteSearchCriteriasRequest() = default;

void DeleteSearchCriteriasRequest::validate()
{
}

web::json::value DeleteSearchCriteriasRequest::toJson() const
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
bool DeleteSearchCriteriasRequest::fromJson(const web::json::value& val)
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
            DeleteSearchCriterias refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteSearchCriteriasRequest::getGroupId() const
{
    return groupId_;
}

void DeleteSearchCriteriasRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeleteSearchCriteriasRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeleteSearchCriteriasRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string DeleteSearchCriteriasRequest::getTopicId() const
{
    return topicId_;
}

void DeleteSearchCriteriasRequest::setTopicId(const std::string& value)
{
    topicId_ = value;
    topicIdIsSet_ = true;
}

bool DeleteSearchCriteriasRequest::topicIdIsSet() const
{
    return topicIdIsSet_;
}

void DeleteSearchCriteriasRequest::unsettopicId()
{
    topicIdIsSet_ = false;
}

std::string DeleteSearchCriteriasRequest::getContentType() const
{
    return contentType_;
}

void DeleteSearchCriteriasRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteSearchCriteriasRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteSearchCriteriasRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

DeleteSearchCriterias DeleteSearchCriteriasRequest::getBody() const
{
    return body_;
}

void DeleteSearchCriteriasRequest::setBody(const DeleteSearchCriterias& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteSearchCriteriasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteSearchCriteriasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


