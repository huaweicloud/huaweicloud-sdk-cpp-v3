

#include "huaweicloud/codehub/v4/model/UpdateMergeRequestDiscussionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateMergeRequestDiscussionRequest::UpdateMergeRequestDiscussionRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    discussionId_ = "";
    discussionIdIsSet_ = false;
    noteId_ = 0;
    noteIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMergeRequestDiscussionRequest::~UpdateMergeRequestDiscussionRequest() = default;

void UpdateMergeRequestDiscussionRequest::validate()
{
}

web::json::value UpdateMergeRequestDiscussionRequest::toJson() const
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
    if(noteIdIsSet_) {
        val[utility::conversions::to_string_t("note_id")] = ModelBase::toJson(noteId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateMergeRequestDiscussionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("note_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("note_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoteId(refVal);
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


int32_t UpdateMergeRequestDiscussionRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateMergeRequestDiscussionRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateMergeRequestDiscussionRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateMergeRequestDiscussionRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t UpdateMergeRequestDiscussionRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void UpdateMergeRequestDiscussionRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool UpdateMergeRequestDiscussionRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void UpdateMergeRequestDiscussionRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

std::string UpdateMergeRequestDiscussionRequest::getDiscussionId() const
{
    return discussionId_;
}

void UpdateMergeRequestDiscussionRequest::setDiscussionId(const std::string& value)
{
    discussionId_ = value;
    discussionIdIsSet_ = true;
}

bool UpdateMergeRequestDiscussionRequest::discussionIdIsSet() const
{
    return discussionIdIsSet_;
}

void UpdateMergeRequestDiscussionRequest::unsetdiscussionId()
{
    discussionIdIsSet_ = false;
}

int32_t UpdateMergeRequestDiscussionRequest::getNoteId() const
{
    return noteId_;
}

void UpdateMergeRequestDiscussionRequest::setNoteId(int32_t value)
{
    noteId_ = value;
    noteIdIsSet_ = true;
}

bool UpdateMergeRequestDiscussionRequest::noteIdIsSet() const
{
    return noteIdIsSet_;
}

void UpdateMergeRequestDiscussionRequest::unsetnoteId()
{
    noteIdIsSet_ = false;
}

UpdateMergeRequestNoteDto UpdateMergeRequestDiscussionRequest::getBody() const
{
    return body_;
}

void UpdateMergeRequestDiscussionRequest::setBody(const UpdateMergeRequestNoteDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMergeRequestDiscussionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMergeRequestDiscussionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


