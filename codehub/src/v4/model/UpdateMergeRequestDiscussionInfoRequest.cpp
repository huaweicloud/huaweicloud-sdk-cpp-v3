

#include "huaweicloud/codehub/v4/model/UpdateMergeRequestDiscussionInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateMergeRequestDiscussionInfoRequest::UpdateMergeRequestDiscussionInfoRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    discussionId_ = "";
    discussionIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMergeRequestDiscussionInfoRequest::~UpdateMergeRequestDiscussionInfoRequest() = default;

void UpdateMergeRequestDiscussionInfoRequest::validate()
{
}

web::json::value UpdateMergeRequestDiscussionInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(mergeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("merge_request_iid")] = ModelBase::toJson(mergeRequestIid_);
    }
    if(discussionIdIsSet_) {
        val[utility::conversions::to_string_t("discussion_id")] = ModelBase::toJson(discussionId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateMergeRequestDiscussionInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_iid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestIid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("discussion_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("discussion_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiscussionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateMergeRequestNoteDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateMergeRequestDiscussionInfoRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateMergeRequestDiscussionInfoRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateMergeRequestDiscussionInfoRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t UpdateMergeRequestDiscussionInfoRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void UpdateMergeRequestDiscussionInfoRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void UpdateMergeRequestDiscussionInfoRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionInfoRequest::getDiscussionId() const
{
    return discussionId_;
}

void UpdateMergeRequestDiscussionInfoRequest::setDiscussionId(const std::string& value)
{
    discussionId_ = value;
    discussionIdIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoRequest::discussionIdIsSet() const
{
    return discussionIdIsSet_;
}

void UpdateMergeRequestDiscussionInfoRequest::unsetdiscussionId()
{
    discussionIdIsSet_ = false;
}

UpdateMergeRequestNoteDto UpdateMergeRequestDiscussionInfoRequest::getBody() const
{
    return body_;
}

void UpdateMergeRequestDiscussionInfoRequest::setBody(const UpdateMergeRequestNoteDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMergeRequestDiscussionInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMergeRequestDiscussionInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


