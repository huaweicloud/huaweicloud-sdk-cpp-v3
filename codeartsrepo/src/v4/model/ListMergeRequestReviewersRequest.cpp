

#include "huaweicloud/codeartsrepo/v4/model/ListMergeRequestReviewersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListMergeRequestReviewersRequest::ListMergeRequestReviewersRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    sourceBranch_ = "";
    sourceBranchIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    targetRepositoryId_ = "";
    targetRepositoryIdIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListMergeRequestReviewersRequest::~ListMergeRequestReviewersRequest() = default;

void ListMergeRequestReviewersRequest::validate()
{
}

web::json::value ListMergeRequestReviewersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
    }
    if(sourceBranchIsSet_) {
        val[utility::conversions::to_string_t("source_branch")] = ModelBase::toJson(sourceBranch_);
    }
    if(mergeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("merge_request_iid")] = ModelBase::toJson(mergeRequestIid_);
    }
    if(targetRepositoryIdIsSet_) {
        val[utility::conversions::to_string_t("target_repository_id")] = ModelBase::toJson(targetRepositoryId_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListMergeRequestReviewersRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("target_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceBranch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("target_repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_repository_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


int32_t ListMergeRequestReviewersRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListMergeRequestReviewersRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListMergeRequestReviewersRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListMergeRequestReviewersRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListMergeRequestReviewersRequest::getTargetBranch() const
{
    return targetBranch_;
}

void ListMergeRequestReviewersRequest::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool ListMergeRequestReviewersRequest::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void ListMergeRequestReviewersRequest::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

std::string ListMergeRequestReviewersRequest::getSourceBranch() const
{
    return sourceBranch_;
}

void ListMergeRequestReviewersRequest::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool ListMergeRequestReviewersRequest::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void ListMergeRequestReviewersRequest::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

int32_t ListMergeRequestReviewersRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ListMergeRequestReviewersRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ListMergeRequestReviewersRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ListMergeRequestReviewersRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

std::string ListMergeRequestReviewersRequest::getTargetRepositoryId() const
{
    return targetRepositoryId_;
}

void ListMergeRequestReviewersRequest::setTargetRepositoryId(const std::string& value)
{
    targetRepositoryId_ = value;
    targetRepositoryIdIsSet_ = true;
}

bool ListMergeRequestReviewersRequest::targetRepositoryIdIsSet() const
{
    return targetRepositoryIdIsSet_;
}

void ListMergeRequestReviewersRequest::unsettargetRepositoryId()
{
    targetRepositoryIdIsSet_ = false;
}

std::string ListMergeRequestReviewersRequest::getSearch() const
{
    return search_;
}

void ListMergeRequestReviewersRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListMergeRequestReviewersRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListMergeRequestReviewersRequest::unsetsearch()
{
    searchIsSet_ = false;
}

int32_t ListMergeRequestReviewersRequest::getOffset() const
{
    return offset_;
}

void ListMergeRequestReviewersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMergeRequestReviewersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMergeRequestReviewersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMergeRequestReviewersRequest::getLimit() const
{
    return limit_;
}

void ListMergeRequestReviewersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMergeRequestReviewersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMergeRequestReviewersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


