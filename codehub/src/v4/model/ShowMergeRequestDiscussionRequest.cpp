

#include "huaweicloud/codehub/v4/model/ShowMergeRequestDiscussionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowMergeRequestDiscussionRequest::ShowMergeRequestDiscussionRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    discussionId_ = "";
    discussionIdIsSet_ = false;
}

ShowMergeRequestDiscussionRequest::~ShowMergeRequestDiscussionRequest() = default;

void ShowMergeRequestDiscussionRequest::validate()
{
}

web::json::value ShowMergeRequestDiscussionRequest::toJson() const
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

    return val;
}
bool ShowMergeRequestDiscussionRequest::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t ShowMergeRequestDiscussionRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowMergeRequestDiscussionRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowMergeRequestDiscussionRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowMergeRequestDiscussionRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ShowMergeRequestDiscussionRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ShowMergeRequestDiscussionRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ShowMergeRequestDiscussionRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ShowMergeRequestDiscussionRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

std::string ShowMergeRequestDiscussionRequest::getDiscussionId() const
{
    return discussionId_;
}

void ShowMergeRequestDiscussionRequest::setDiscussionId(const std::string& value)
{
    discussionId_ = value;
    discussionIdIsSet_ = true;
}

bool ShowMergeRequestDiscussionRequest::discussionIdIsSet() const
{
    return discussionIdIsSet_;
}

void ShowMergeRequestDiscussionRequest::unsetdiscussionId()
{
    discussionIdIsSet_ = false;
}

}
}
}
}
}


