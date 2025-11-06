

#include "huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestVoteRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateMergeRequestVoteRequest::UpdateMergeRequestVoteRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMergeRequestVoteRequest::~UpdateMergeRequestVoteRequest() = default;

void UpdateMergeRequestVoteRequest::validate()
{
}

web::json::value UpdateMergeRequestVoteRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(mergeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("merge_request_iid")] = ModelBase::toJson(mergeRequestIid_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateMergeRequestVoteRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            MergeRequestVoteBodyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateMergeRequestVoteRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateMergeRequestVoteRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateMergeRequestVoteRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateMergeRequestVoteRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t UpdateMergeRequestVoteRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void UpdateMergeRequestVoteRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool UpdateMergeRequestVoteRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void UpdateMergeRequestVoteRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

MergeRequestVoteBodyDto UpdateMergeRequestVoteRequest::getBody() const
{
    return body_;
}

void UpdateMergeRequestVoteRequest::setBody(const MergeRequestVoteBodyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMergeRequestVoteRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMergeRequestVoteRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


