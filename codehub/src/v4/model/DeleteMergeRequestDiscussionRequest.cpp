

#include "huaweicloud/codehub/v4/model/DeleteMergeRequestDiscussionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DeleteMergeRequestDiscussionRequest::DeleteMergeRequestDiscussionRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    discussionId_ = "";
    discussionIdIsSet_ = false;
    noteId_ = 0;
    noteIdIsSet_ = false;
}

DeleteMergeRequestDiscussionRequest::~DeleteMergeRequestDiscussionRequest() = default;

void DeleteMergeRequestDiscussionRequest::validate()
{
}

web::json::value DeleteMergeRequestDiscussionRequest::toJson() const
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

    return val;
}
bool DeleteMergeRequestDiscussionRequest::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t DeleteMergeRequestDiscussionRequest::getRepositoryId() const
{
    return repositoryId_;
}

void DeleteMergeRequestDiscussionRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool DeleteMergeRequestDiscussionRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void DeleteMergeRequestDiscussionRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t DeleteMergeRequestDiscussionRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void DeleteMergeRequestDiscussionRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool DeleteMergeRequestDiscussionRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void DeleteMergeRequestDiscussionRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

std::string DeleteMergeRequestDiscussionRequest::getDiscussionId() const
{
    return discussionId_;
}

void DeleteMergeRequestDiscussionRequest::setDiscussionId(const std::string& value)
{
    discussionId_ = value;
    discussionIdIsSet_ = true;
}

bool DeleteMergeRequestDiscussionRequest::discussionIdIsSet() const
{
    return discussionIdIsSet_;
}

void DeleteMergeRequestDiscussionRequest::unsetdiscussionId()
{
    discussionIdIsSet_ = false;
}

int32_t DeleteMergeRequestDiscussionRequest::getNoteId() const
{
    return noteId_;
}

void DeleteMergeRequestDiscussionRequest::setNoteId(int32_t value)
{
    noteId_ = value;
    noteIdIsSet_ = true;
}

bool DeleteMergeRequestDiscussionRequest::noteIdIsSet() const
{
    return noteIdIsSet_;
}

void DeleteMergeRequestDiscussionRequest::unsetnoteId()
{
    noteIdIsSet_ = false;
}

}
}
}
}
}


