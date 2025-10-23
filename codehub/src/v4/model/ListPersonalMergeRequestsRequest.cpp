

#include "huaweicloud/codehub/v4/model/ListPersonalMergeRequestsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListPersonalMergeRequestsRequest::ListPersonalMergeRequestsRequest()
{
    state_ = "";
    stateIsSet_ = false;
    orderBy_ = "";
    orderByIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    labels_ = "";
    labelsIsSet_ = false;
    createdBefore_ = utility::datetime();
    createdBeforeIsSet_ = false;
    createdAfter_ = utility::datetime();
    createdAfterIsSet_ = false;
    updatedAfter_ = utility::datetime();
    updatedAfterIsSet_ = false;
    updatedBefore_ = utility::datetime();
    updatedBeforeIsSet_ = false;
    view_ = "";
    viewIsSet_ = false;
    authorId_ = "";
    authorIdIsSet_ = false;
    scope_ = "";
    scopeIsSet_ = false;
    sourceBranch_ = "";
    sourceBranchIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    wip_ = "";
    wipIsSet_ = false;
    mergedBy_ = "";
    mergedByIsSet_ = false;
    mergedAfter_ = utility::datetime();
    mergedAfterIsSet_ = false;
    mergedBefore_ = utility::datetime();
    mergedBeforeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    onlyCount_ = false;
    onlyCountIsSet_ = false;
}

ListPersonalMergeRequestsRequest::~ListPersonalMergeRequestsRequest() = default;

void ListPersonalMergeRequestsRequest::validate()
{
}

web::json::value ListPersonalMergeRequestsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(orderByIsSet_) {
        val[utility::conversions::to_string_t("order_by")] = ModelBase::toJson(orderBy_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(createdBeforeIsSet_) {
        val[utility::conversions::to_string_t("created_before")] = ModelBase::toJson(createdBefore_);
    }
    if(createdAfterIsSet_) {
        val[utility::conversions::to_string_t("created_after")] = ModelBase::toJson(createdAfter_);
    }
    if(updatedAfterIsSet_) {
        val[utility::conversions::to_string_t("updated_after")] = ModelBase::toJson(updatedAfter_);
    }
    if(updatedBeforeIsSet_) {
        val[utility::conversions::to_string_t("updated_before")] = ModelBase::toJson(updatedBefore_);
    }
    if(viewIsSet_) {
        val[utility::conversions::to_string_t("view")] = ModelBase::toJson(view_);
    }
    if(authorIdIsSet_) {
        val[utility::conversions::to_string_t("author_id")] = ModelBase::toJson(authorId_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
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
    if(wipIsSet_) {
        val[utility::conversions::to_string_t("wip")] = ModelBase::toJson(wip_);
    }
    if(mergedByIsSet_) {
        val[utility::conversions::to_string_t("merged_by")] = ModelBase::toJson(mergedBy_);
    }
    if(mergedAfterIsSet_) {
        val[utility::conversions::to_string_t("merged_after")] = ModelBase::toJson(mergedAfter_);
    }
    if(mergedBeforeIsSet_) {
        val[utility::conversions::to_string_t("merged_before")] = ModelBase::toJson(mergedBefore_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(onlyCountIsSet_) {
        val[utility::conversions::to_string_t("only_count")] = ModelBase::toJson(onlyCount_);
    }

    return val;
}
bool ListPersonalMergeRequestsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_before"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_before"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBefore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_after"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_after"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAfter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_after"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_after"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAfter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_before"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_before"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedBefore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setView(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScope(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("wip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merged_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merged_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merged_after"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merged_after"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergedAfter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merged_before"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merged_before"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergedBefore(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("only_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("only_count"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlyCount(refVal);
        }
    }
    return ok;
}


std::string ListPersonalMergeRequestsRequest::getState() const
{
    return state_;
}

void ListPersonalMergeRequestsRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListPersonalMergeRequestsRequest::getOrderBy() const
{
    return orderBy_;
}

void ListPersonalMergeRequestsRequest::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::orderByIsSet() const
{
    return orderByIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetorderBy()
{
    orderByIsSet_ = false;
}

std::string ListPersonalMergeRequestsRequest::getSort() const
{
    return sort_;
}

void ListPersonalMergeRequestsRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetsort()
{
    sortIsSet_ = false;
}

std::string ListPersonalMergeRequestsRequest::getLabels() const
{
    return labels_;
}

void ListPersonalMergeRequestsRequest::setLabels(const std::string& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::labelsIsSet() const
{
    return labelsIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetlabels()
{
    labelsIsSet_ = false;
}

utility::datetime ListPersonalMergeRequestsRequest::getCreatedBefore() const
{
    return createdBefore_;
}

void ListPersonalMergeRequestsRequest::setCreatedBefore(const utility::datetime& value)
{
    createdBefore_ = value;
    createdBeforeIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::createdBeforeIsSet() const
{
    return createdBeforeIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetcreatedBefore()
{
    createdBeforeIsSet_ = false;
}

utility::datetime ListPersonalMergeRequestsRequest::getCreatedAfter() const
{
    return createdAfter_;
}

void ListPersonalMergeRequestsRequest::setCreatedAfter(const utility::datetime& value)
{
    createdAfter_ = value;
    createdAfterIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::createdAfterIsSet() const
{
    return createdAfterIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetcreatedAfter()
{
    createdAfterIsSet_ = false;
}

utility::datetime ListPersonalMergeRequestsRequest::getUpdatedAfter() const
{
    return updatedAfter_;
}

void ListPersonalMergeRequestsRequest::setUpdatedAfter(const utility::datetime& value)
{
    updatedAfter_ = value;
    updatedAfterIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::updatedAfterIsSet() const
{
    return updatedAfterIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetupdatedAfter()
{
    updatedAfterIsSet_ = false;
}

utility::datetime ListPersonalMergeRequestsRequest::getUpdatedBefore() const
{
    return updatedBefore_;
}

void ListPersonalMergeRequestsRequest::setUpdatedBefore(const utility::datetime& value)
{
    updatedBefore_ = value;
    updatedBeforeIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::updatedBeforeIsSet() const
{
    return updatedBeforeIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetupdatedBefore()
{
    updatedBeforeIsSet_ = false;
}

std::string ListPersonalMergeRequestsRequest::getView() const
{
    return view_;
}

void ListPersonalMergeRequestsRequest::setView(const std::string& value)
{
    view_ = value;
    viewIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::viewIsSet() const
{
    return viewIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetview()
{
    viewIsSet_ = false;
}

std::string ListPersonalMergeRequestsRequest::getAuthorId() const
{
    return authorId_;
}

void ListPersonalMergeRequestsRequest::setAuthorId(const std::string& value)
{
    authorId_ = value;
    authorIdIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::authorIdIsSet() const
{
    return authorIdIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetauthorId()
{
    authorIdIsSet_ = false;
}

std::string ListPersonalMergeRequestsRequest::getScope() const
{
    return scope_;
}

void ListPersonalMergeRequestsRequest::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::scopeIsSet() const
{
    return scopeIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetscope()
{
    scopeIsSet_ = false;
}

std::string ListPersonalMergeRequestsRequest::getSourceBranch() const
{
    return sourceBranch_;
}

void ListPersonalMergeRequestsRequest::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string ListPersonalMergeRequestsRequest::getTargetBranch() const
{
    return targetBranch_;
}

void ListPersonalMergeRequestsRequest::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void ListPersonalMergeRequestsRequest::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

std::string ListPersonalMergeRequestsRequest::getSearch() const
{
    return search_;
}

void ListPersonalMergeRequestsRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetsearch()
{
    searchIsSet_ = false;
}

std::string ListPersonalMergeRequestsRequest::getWip() const
{
    return wip_;
}

void ListPersonalMergeRequestsRequest::setWip(const std::string& value)
{
    wip_ = value;
    wipIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::wipIsSet() const
{
    return wipIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetwip()
{
    wipIsSet_ = false;
}

std::string ListPersonalMergeRequestsRequest::getMergedBy() const
{
    return mergedBy_;
}

void ListPersonalMergeRequestsRequest::setMergedBy(const std::string& value)
{
    mergedBy_ = value;
    mergedByIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::mergedByIsSet() const
{
    return mergedByIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetmergedBy()
{
    mergedByIsSet_ = false;
}

utility::datetime ListPersonalMergeRequestsRequest::getMergedAfter() const
{
    return mergedAfter_;
}

void ListPersonalMergeRequestsRequest::setMergedAfter(const utility::datetime& value)
{
    mergedAfter_ = value;
    mergedAfterIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::mergedAfterIsSet() const
{
    return mergedAfterIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetmergedAfter()
{
    mergedAfterIsSet_ = false;
}

utility::datetime ListPersonalMergeRequestsRequest::getMergedBefore() const
{
    return mergedBefore_;
}

void ListPersonalMergeRequestsRequest::setMergedBefore(const utility::datetime& value)
{
    mergedBefore_ = value;
    mergedBeforeIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::mergedBeforeIsSet() const
{
    return mergedBeforeIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetmergedBefore()
{
    mergedBeforeIsSet_ = false;
}

int32_t ListPersonalMergeRequestsRequest::getOffset() const
{
    return offset_;
}

void ListPersonalMergeRequestsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPersonalMergeRequestsRequest::getLimit() const
{
    return limit_;
}

void ListPersonalMergeRequestsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

bool ListPersonalMergeRequestsRequest::isOnlyCount() const
{
    return onlyCount_;
}

void ListPersonalMergeRequestsRequest::setOnlyCount(bool value)
{
    onlyCount_ = value;
    onlyCountIsSet_ = true;
}

bool ListPersonalMergeRequestsRequest::onlyCountIsSet() const
{
    return onlyCountIsSet_;
}

void ListPersonalMergeRequestsRequest::unsetonlyCount()
{
    onlyCountIsSet_ = false;
}

}
}
}
}
}


