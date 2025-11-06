

#include "huaweicloud/codeartsrepo/v4/model/CreateMergeRequestDiscussionResponseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateMergeRequestDiscussionResponseRequest::CreateMergeRequestDiscussionResponseRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    discussionId_ = "";
    discussionIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateMergeRequestDiscussionResponseRequest::~CreateMergeRequestDiscussionResponseRequest() = default;

void CreateMergeRequestDiscussionResponseRequest::validate()
{
}

web::json::value CreateMergeRequestDiscussionResponseRequest::toJson() const
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
bool CreateMergeRequestDiscussionResponseRequest::fromJson(const web::json::value& val)
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
            ReplyMergeRequestNoteDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CreateMergeRequestDiscussionResponseRequest::getRepositoryId() const
{
    return repositoryId_;
}

void CreateMergeRequestDiscussionResponseRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void CreateMergeRequestDiscussionResponseRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t CreateMergeRequestDiscussionResponseRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void CreateMergeRequestDiscussionResponseRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void CreateMergeRequestDiscussionResponseRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

std::string CreateMergeRequestDiscussionResponseRequest::getDiscussionId() const
{
    return discussionId_;
}

void CreateMergeRequestDiscussionResponseRequest::setDiscussionId(const std::string& value)
{
    discussionId_ = value;
    discussionIdIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseRequest::discussionIdIsSet() const
{
    return discussionIdIsSet_;
}

void CreateMergeRequestDiscussionResponseRequest::unsetdiscussionId()
{
    discussionIdIsSet_ = false;
}

ReplyMergeRequestNoteDto CreateMergeRequestDiscussionResponseRequest::getBody() const
{
    return body_;
}

void CreateMergeRequestDiscussionResponseRequest::setBody(const ReplyMergeRequestNoteDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMergeRequestDiscussionResponseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMergeRequestDiscussionResponseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


