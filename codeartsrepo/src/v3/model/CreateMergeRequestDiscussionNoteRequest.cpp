

#include "huaweicloud/codeartsrepo/v3/model/CreateMergeRequestDiscussionNoteRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CreateMergeRequestDiscussionNoteRequest::CreateMergeRequestDiscussionNoteRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    discussionId_ = "";
    discussionIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateMergeRequestDiscussionNoteRequest::~CreateMergeRequestDiscussionNoteRequest() = default;

void CreateMergeRequestDiscussionNoteRequest::validate()
{
}

web::json::value CreateMergeRequestDiscussionNoteRequest::toJson() const
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
bool CreateMergeRequestDiscussionNoteRequest::fromJson(const web::json::value& val)
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
            CreateMergeRequestDiscussionNoteDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CreateMergeRequestDiscussionNoteRequest::getRepositoryId() const
{
    return repositoryId_;
}

void CreateMergeRequestDiscussionNoteRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateMergeRequestDiscussionNoteRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateMergeRequestDiscussionNoteRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t CreateMergeRequestDiscussionNoteRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void CreateMergeRequestDiscussionNoteRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool CreateMergeRequestDiscussionNoteRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void CreateMergeRequestDiscussionNoteRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

std::string CreateMergeRequestDiscussionNoteRequest::getDiscussionId() const
{
    return discussionId_;
}

void CreateMergeRequestDiscussionNoteRequest::setDiscussionId(const std::string& value)
{
    discussionId_ = value;
    discussionIdIsSet_ = true;
}

bool CreateMergeRequestDiscussionNoteRequest::discussionIdIsSet() const
{
    return discussionIdIsSet_;
}

void CreateMergeRequestDiscussionNoteRequest::unsetdiscussionId()
{
    discussionIdIsSet_ = false;
}

CreateMergeRequestDiscussionNoteDto CreateMergeRequestDiscussionNoteRequest::getBody() const
{
    return body_;
}

void CreateMergeRequestDiscussionNoteRequest::setBody(const CreateMergeRequestDiscussionNoteDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMergeRequestDiscussionNoteRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMergeRequestDiscussionNoteRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


