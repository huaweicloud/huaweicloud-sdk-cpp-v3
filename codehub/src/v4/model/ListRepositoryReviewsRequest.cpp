

#include "huaweicloud/codehub/v4/model/ListRepositoryReviewsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryReviewsRequest::ListRepositoryReviewsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    noteableType_ = "";
    noteableTypeIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    startDate_ = utility::datetime();
    startDateIsSet_ = false;
    endDate_ = utility::datetime();
    endDateIsSet_ = false;
    onlyCount_ = false;
    onlyCountIsSet_ = false;
    reviewCategories_ = "";
    reviewCategoriesIsSet_ = false;
    reviewModules_ = "";
    reviewModulesIsSet_ = false;
    severity_ = "";
    severityIsSet_ = false;
    assigneeId_ = 0;
    assigneeIdIsSet_ = false;
    proposerId_ = 0;
    proposerIdIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    includeReply_ = false;
    includeReplyIsSet_ = false;
    orderBy_ = "";
    orderByIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRepositoryReviewsRequest::~ListRepositoryReviewsRequest() = default;

void ListRepositoryReviewsRequest::validate()
{
}

web::json::value ListRepositoryReviewsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(noteableTypeIsSet_) {
        val[utility::conversions::to_string_t("noteable_type")] = ModelBase::toJson(noteableType_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }
    if(onlyCountIsSet_) {
        val[utility::conversions::to_string_t("only_count")] = ModelBase::toJson(onlyCount_);
    }
    if(reviewCategoriesIsSet_) {
        val[utility::conversions::to_string_t("review_categories")] = ModelBase::toJson(reviewCategories_);
    }
    if(reviewModulesIsSet_) {
        val[utility::conversions::to_string_t("review_modules")] = ModelBase::toJson(reviewModules_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(assigneeIdIsSet_) {
        val[utility::conversions::to_string_t("assignee_id")] = ModelBase::toJson(assigneeId_);
    }
    if(proposerIdIsSet_) {
        val[utility::conversions::to_string_t("proposer_id")] = ModelBase::toJson(proposerId_);
    }
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
    }
    if(includeReplyIsSet_) {
        val[utility::conversions::to_string_t("include_reply")] = ModelBase::toJson(includeReply_);
    }
    if(orderByIsSet_) {
        val[utility::conversions::to_string_t("order_by")] = ModelBase::toJson(orderBy_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListRepositoryReviewsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("noteable_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("noteable_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoteableType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("review_categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_categories"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewCategories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_modules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_modules"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewModules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assignee_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignee_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssigneeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proposer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proposer_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProposerId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("include_reply"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_reply"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeReply(refVal);
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


int32_t ListRepositoryReviewsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryReviewsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryReviewsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryReviewsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListRepositoryReviewsRequest::getNoteableType() const
{
    return noteableType_;
}

void ListRepositoryReviewsRequest::setNoteableType(const std::string& value)
{
    noteableType_ = value;
    noteableTypeIsSet_ = true;
}

bool ListRepositoryReviewsRequest::noteableTypeIsSet() const
{
    return noteableTypeIsSet_;
}

void ListRepositoryReviewsRequest::unsetnoteableType()
{
    noteableTypeIsSet_ = false;
}

std::string ListRepositoryReviewsRequest::getSearch() const
{
    return search_;
}

void ListRepositoryReviewsRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListRepositoryReviewsRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListRepositoryReviewsRequest::unsetsearch()
{
    searchIsSet_ = false;
}

utility::datetime ListRepositoryReviewsRequest::getStartDate() const
{
    return startDate_;
}

void ListRepositoryReviewsRequest::setStartDate(const utility::datetime& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool ListRepositoryReviewsRequest::startDateIsSet() const
{
    return startDateIsSet_;
}

void ListRepositoryReviewsRequest::unsetstartDate()
{
    startDateIsSet_ = false;
}

utility::datetime ListRepositoryReviewsRequest::getEndDate() const
{
    return endDate_;
}

void ListRepositoryReviewsRequest::setEndDate(const utility::datetime& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ListRepositoryReviewsRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void ListRepositoryReviewsRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

bool ListRepositoryReviewsRequest::isOnlyCount() const
{
    return onlyCount_;
}

void ListRepositoryReviewsRequest::setOnlyCount(bool value)
{
    onlyCount_ = value;
    onlyCountIsSet_ = true;
}

bool ListRepositoryReviewsRequest::onlyCountIsSet() const
{
    return onlyCountIsSet_;
}

void ListRepositoryReviewsRequest::unsetonlyCount()
{
    onlyCountIsSet_ = false;
}

std::string ListRepositoryReviewsRequest::getReviewCategories() const
{
    return reviewCategories_;
}

void ListRepositoryReviewsRequest::setReviewCategories(const std::string& value)
{
    reviewCategories_ = value;
    reviewCategoriesIsSet_ = true;
}

bool ListRepositoryReviewsRequest::reviewCategoriesIsSet() const
{
    return reviewCategoriesIsSet_;
}

void ListRepositoryReviewsRequest::unsetreviewCategories()
{
    reviewCategoriesIsSet_ = false;
}

std::string ListRepositoryReviewsRequest::getReviewModules() const
{
    return reviewModules_;
}

void ListRepositoryReviewsRequest::setReviewModules(const std::string& value)
{
    reviewModules_ = value;
    reviewModulesIsSet_ = true;
}

bool ListRepositoryReviewsRequest::reviewModulesIsSet() const
{
    return reviewModulesIsSet_;
}

void ListRepositoryReviewsRequest::unsetreviewModules()
{
    reviewModulesIsSet_ = false;
}

std::string ListRepositoryReviewsRequest::getSeverity() const
{
    return severity_;
}

void ListRepositoryReviewsRequest::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool ListRepositoryReviewsRequest::severityIsSet() const
{
    return severityIsSet_;
}

void ListRepositoryReviewsRequest::unsetseverity()
{
    severityIsSet_ = false;
}

int32_t ListRepositoryReviewsRequest::getAssigneeId() const
{
    return assigneeId_;
}

void ListRepositoryReviewsRequest::setAssigneeId(int32_t value)
{
    assigneeId_ = value;
    assigneeIdIsSet_ = true;
}

bool ListRepositoryReviewsRequest::assigneeIdIsSet() const
{
    return assigneeIdIsSet_;
}

void ListRepositoryReviewsRequest::unsetassigneeId()
{
    assigneeIdIsSet_ = false;
}

int32_t ListRepositoryReviewsRequest::getProposerId() const
{
    return proposerId_;
}

void ListRepositoryReviewsRequest::setProposerId(int32_t value)
{
    proposerId_ = value;
    proposerIdIsSet_ = true;
}

bool ListRepositoryReviewsRequest::proposerIdIsSet() const
{
    return proposerIdIsSet_;
}

void ListRepositoryReviewsRequest::unsetproposerId()
{
    proposerIdIsSet_ = false;
}

std::string ListRepositoryReviewsRequest::getTargetBranch() const
{
    return targetBranch_;
}

void ListRepositoryReviewsRequest::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool ListRepositoryReviewsRequest::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void ListRepositoryReviewsRequest::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

bool ListRepositoryReviewsRequest::isIncludeReply() const
{
    return includeReply_;
}

void ListRepositoryReviewsRequest::setIncludeReply(bool value)
{
    includeReply_ = value;
    includeReplyIsSet_ = true;
}

bool ListRepositoryReviewsRequest::includeReplyIsSet() const
{
    return includeReplyIsSet_;
}

void ListRepositoryReviewsRequest::unsetincludeReply()
{
    includeReplyIsSet_ = false;
}

std::string ListRepositoryReviewsRequest::getOrderBy() const
{
    return orderBy_;
}

void ListRepositoryReviewsRequest::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool ListRepositoryReviewsRequest::orderByIsSet() const
{
    return orderByIsSet_;
}

void ListRepositoryReviewsRequest::unsetorderBy()
{
    orderByIsSet_ = false;
}

std::string ListRepositoryReviewsRequest::getSort() const
{
    return sort_;
}

void ListRepositoryReviewsRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListRepositoryReviewsRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListRepositoryReviewsRequest::unsetsort()
{
    sortIsSet_ = false;
}

int32_t ListRepositoryReviewsRequest::getOffset() const
{
    return offset_;
}

void ListRepositoryReviewsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRepositoryReviewsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRepositoryReviewsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRepositoryReviewsRequest::getLimit() const
{
    return limit_;
}

void ListRepositoryReviewsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRepositoryReviewsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRepositoryReviewsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


