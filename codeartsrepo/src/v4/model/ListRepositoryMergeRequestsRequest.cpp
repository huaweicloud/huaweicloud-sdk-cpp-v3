

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryMergeRequestsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryMergeRequestsRequest::ListRepositoryMergeRequestsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    orderBy_ = "";
    orderByIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    authorId_ = "";
    authorIdIsSet_ = false;
    sourceBranch_ = "";
    sourceBranchIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    sourceRepositoryId_ = 0;
    sourceRepositoryIdIsSet_ = false;
    onlyCount_ = false;
    onlyCountIsSet_ = false;
    labels_ = "";
    labelsIsSet_ = false;
}

ListRepositoryMergeRequestsRequest::~ListRepositoryMergeRequestsRequest() = default;

void ListRepositoryMergeRequestsRequest::validate()
{
}

web::json::value ListRepositoryMergeRequestsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(orderByIsSet_) {
        val[utility::conversions::to_string_t("order_by")] = ModelBase::toJson(orderBy_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(authorIdIsSet_) {
        val[utility::conversions::to_string_t("author_id")] = ModelBase::toJson(authorId_);
    }
    if(sourceBranchIsSet_) {
        val[utility::conversions::to_string_t("source_branch")] = ModelBase::toJson(sourceBranch_);
    }
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(sourceRepositoryIdIsSet_) {
        val[utility::conversions::to_string_t("source_repository_id")] = ModelBase::toJson(sourceRepositoryId_);
    }
    if(onlyCountIsSet_) {
        val[utility::conversions::to_string_t("only_count")] = ModelBase::toJson(onlyCount_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }

    return val;
}
bool ListRepositoryMergeRequestsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("target_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetBranch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("source_repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("only_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("only_count"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlyCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    return ok;
}


int32_t ListRepositoryMergeRequestsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryMergeRequestsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryMergeRequestsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryMergeRequestsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListRepositoryMergeRequestsRequest::getOffset() const
{
    return offset_;
}

void ListRepositoryMergeRequestsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRepositoryMergeRequestsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRepositoryMergeRequestsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRepositoryMergeRequestsRequest::getLimit() const
{
    return limit_;
}

void ListRepositoryMergeRequestsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRepositoryMergeRequestsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRepositoryMergeRequestsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRepositoryMergeRequestsRequest::getState() const
{
    return state_;
}

void ListRepositoryMergeRequestsRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListRepositoryMergeRequestsRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListRepositoryMergeRequestsRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListRepositoryMergeRequestsRequest::getOrderBy() const
{
    return orderBy_;
}

void ListRepositoryMergeRequestsRequest::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool ListRepositoryMergeRequestsRequest::orderByIsSet() const
{
    return orderByIsSet_;
}

void ListRepositoryMergeRequestsRequest::unsetorderBy()
{
    orderByIsSet_ = false;
}

std::string ListRepositoryMergeRequestsRequest::getSort() const
{
    return sort_;
}

void ListRepositoryMergeRequestsRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListRepositoryMergeRequestsRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListRepositoryMergeRequestsRequest::unsetsort()
{
    sortIsSet_ = false;
}

std::string ListRepositoryMergeRequestsRequest::getAuthorId() const
{
    return authorId_;
}

void ListRepositoryMergeRequestsRequest::setAuthorId(const std::string& value)
{
    authorId_ = value;
    authorIdIsSet_ = true;
}

bool ListRepositoryMergeRequestsRequest::authorIdIsSet() const
{
    return authorIdIsSet_;
}

void ListRepositoryMergeRequestsRequest::unsetauthorId()
{
    authorIdIsSet_ = false;
}

std::string ListRepositoryMergeRequestsRequest::getSourceBranch() const
{
    return sourceBranch_;
}

void ListRepositoryMergeRequestsRequest::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool ListRepositoryMergeRequestsRequest::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void ListRepositoryMergeRequestsRequest::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string ListRepositoryMergeRequestsRequest::getTargetBranch() const
{
    return targetBranch_;
}

void ListRepositoryMergeRequestsRequest::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool ListRepositoryMergeRequestsRequest::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void ListRepositoryMergeRequestsRequest::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

std::string ListRepositoryMergeRequestsRequest::getSearch() const
{
    return search_;
}

void ListRepositoryMergeRequestsRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListRepositoryMergeRequestsRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListRepositoryMergeRequestsRequest::unsetsearch()
{
    searchIsSet_ = false;
}

int32_t ListRepositoryMergeRequestsRequest::getSourceRepositoryId() const
{
    return sourceRepositoryId_;
}

void ListRepositoryMergeRequestsRequest::setSourceRepositoryId(int32_t value)
{
    sourceRepositoryId_ = value;
    sourceRepositoryIdIsSet_ = true;
}

bool ListRepositoryMergeRequestsRequest::sourceRepositoryIdIsSet() const
{
    return sourceRepositoryIdIsSet_;
}

void ListRepositoryMergeRequestsRequest::unsetsourceRepositoryId()
{
    sourceRepositoryIdIsSet_ = false;
}

bool ListRepositoryMergeRequestsRequest::isOnlyCount() const
{
    return onlyCount_;
}

void ListRepositoryMergeRequestsRequest::setOnlyCount(bool value)
{
    onlyCount_ = value;
    onlyCountIsSet_ = true;
}

bool ListRepositoryMergeRequestsRequest::onlyCountIsSet() const
{
    return onlyCountIsSet_;
}

void ListRepositoryMergeRequestsRequest::unsetonlyCount()
{
    onlyCountIsSet_ = false;
}

std::string ListRepositoryMergeRequestsRequest::getLabels() const
{
    return labels_;
}

void ListRepositoryMergeRequestsRequest::setLabels(const std::string& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool ListRepositoryMergeRequestsRequest::labelsIsSet() const
{
    return labelsIsSet_;
}

void ListRepositoryMergeRequestsRequest::unsetlabels()
{
    labelsIsSet_ = false;
}

}
}
}
}
}


