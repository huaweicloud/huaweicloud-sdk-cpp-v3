

#include "huaweicloud/codehub/v4/model/ListMergeRequestApproversRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListMergeRequestApproversRequest::ListMergeRequestApproversRequest()
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

ListMergeRequestApproversRequest::~ListMergeRequestApproversRequest() = default;

void ListMergeRequestApproversRequest::validate()
{
}

web::json::value ListMergeRequestApproversRequest::toJson() const
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
bool ListMergeRequestApproversRequest::fromJson(const web::json::value& val)
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


int32_t ListMergeRequestApproversRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListMergeRequestApproversRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListMergeRequestApproversRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListMergeRequestApproversRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListMergeRequestApproversRequest::getTargetBranch() const
{
    return targetBranch_;
}

void ListMergeRequestApproversRequest::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool ListMergeRequestApproversRequest::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void ListMergeRequestApproversRequest::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

std::string ListMergeRequestApproversRequest::getSourceBranch() const
{
    return sourceBranch_;
}

void ListMergeRequestApproversRequest::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool ListMergeRequestApproversRequest::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void ListMergeRequestApproversRequest::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

int32_t ListMergeRequestApproversRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ListMergeRequestApproversRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ListMergeRequestApproversRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ListMergeRequestApproversRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

std::string ListMergeRequestApproversRequest::getTargetRepositoryId() const
{
    return targetRepositoryId_;
}

void ListMergeRequestApproversRequest::setTargetRepositoryId(const std::string& value)
{
    targetRepositoryId_ = value;
    targetRepositoryIdIsSet_ = true;
}

bool ListMergeRequestApproversRequest::targetRepositoryIdIsSet() const
{
    return targetRepositoryIdIsSet_;
}

void ListMergeRequestApproversRequest::unsettargetRepositoryId()
{
    targetRepositoryIdIsSet_ = false;
}

std::string ListMergeRequestApproversRequest::getSearch() const
{
    return search_;
}

void ListMergeRequestApproversRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListMergeRequestApproversRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListMergeRequestApproversRequest::unsetsearch()
{
    searchIsSet_ = false;
}

int32_t ListMergeRequestApproversRequest::getOffset() const
{
    return offset_;
}

void ListMergeRequestApproversRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMergeRequestApproversRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMergeRequestApproversRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMergeRequestApproversRequest::getLimit() const
{
    return limit_;
}

void ListMergeRequestApproversRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMergeRequestApproversRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMergeRequestApproversRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


