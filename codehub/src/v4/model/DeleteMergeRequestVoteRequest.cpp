

#include "huaweicloud/codehub/v4/model/DeleteMergeRequestVoteRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DeleteMergeRequestVoteRequest::DeleteMergeRequestVoteRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
}

DeleteMergeRequestVoteRequest::~DeleteMergeRequestVoteRequest() = default;

void DeleteMergeRequestVoteRequest::validate()
{
}

web::json::value DeleteMergeRequestVoteRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(mergeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("merge_request_iid")] = ModelBase::toJson(mergeRequestIid_);
    }

    return val;
}
bool DeleteMergeRequestVoteRequest::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t DeleteMergeRequestVoteRequest::getRepositoryId() const
{
    return repositoryId_;
}

void DeleteMergeRequestVoteRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool DeleteMergeRequestVoteRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void DeleteMergeRequestVoteRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t DeleteMergeRequestVoteRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void DeleteMergeRequestVoteRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool DeleteMergeRequestVoteRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void DeleteMergeRequestVoteRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

}
}
}
}
}


