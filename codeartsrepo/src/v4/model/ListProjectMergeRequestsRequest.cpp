

#include "huaweicloud/codeartsrepo/v4/model/ListProjectMergeRequestsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectMergeRequestsRequest::ListProjectMergeRequestsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
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
    topic_ = "";
    topicIsSet_ = false;
}

ListProjectMergeRequestsRequest::~ListProjectMergeRequestsRequest() = default;

void ListProjectMergeRequestsRequest::validate()
{
}

web::json::value ListProjectMergeRequestsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
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
    if(topicIsSet_) {
        val[utility::conversions::to_string_t("topic")] = ModelBase::toJson(topic_);
    }

    return val;
}
bool ListProjectMergeRequestsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("topic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopic(refVal);
        }
    }
    return ok;
}


std::string ListProjectMergeRequestsRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectMergeRequestsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectMergeRequestsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectMergeRequestsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListProjectMergeRequestsRequest::getOffset() const
{
    return offset_;
}

void ListProjectMergeRequestsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProjectMergeRequestsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProjectMergeRequestsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProjectMergeRequestsRequest::getLimit() const
{
    return limit_;
}

void ListProjectMergeRequestsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectMergeRequestsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectMergeRequestsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListProjectMergeRequestsRequest::getState() const
{
    return state_;
}

void ListProjectMergeRequestsRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListProjectMergeRequestsRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListProjectMergeRequestsRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListProjectMergeRequestsRequest::getOrderBy() const
{
    return orderBy_;
}

void ListProjectMergeRequestsRequest::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool ListProjectMergeRequestsRequest::orderByIsSet() const
{
    return orderByIsSet_;
}

void ListProjectMergeRequestsRequest::unsetorderBy()
{
    orderByIsSet_ = false;
}

std::string ListProjectMergeRequestsRequest::getSort() const
{
    return sort_;
}

void ListProjectMergeRequestsRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListProjectMergeRequestsRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListProjectMergeRequestsRequest::unsetsort()
{
    sortIsSet_ = false;
}

std::string ListProjectMergeRequestsRequest::getAuthorId() const
{
    return authorId_;
}

void ListProjectMergeRequestsRequest::setAuthorId(const std::string& value)
{
    authorId_ = value;
    authorIdIsSet_ = true;
}

bool ListProjectMergeRequestsRequest::authorIdIsSet() const
{
    return authorIdIsSet_;
}

void ListProjectMergeRequestsRequest::unsetauthorId()
{
    authorIdIsSet_ = false;
}

std::string ListProjectMergeRequestsRequest::getSourceBranch() const
{
    return sourceBranch_;
}

void ListProjectMergeRequestsRequest::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool ListProjectMergeRequestsRequest::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void ListProjectMergeRequestsRequest::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string ListProjectMergeRequestsRequest::getTargetBranch() const
{
    return targetBranch_;
}

void ListProjectMergeRequestsRequest::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool ListProjectMergeRequestsRequest::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void ListProjectMergeRequestsRequest::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

std::string ListProjectMergeRequestsRequest::getSearch() const
{
    return search_;
}

void ListProjectMergeRequestsRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListProjectMergeRequestsRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListProjectMergeRequestsRequest::unsetsearch()
{
    searchIsSet_ = false;
}

int32_t ListProjectMergeRequestsRequest::getSourceRepositoryId() const
{
    return sourceRepositoryId_;
}

void ListProjectMergeRequestsRequest::setSourceRepositoryId(int32_t value)
{
    sourceRepositoryId_ = value;
    sourceRepositoryIdIsSet_ = true;
}

bool ListProjectMergeRequestsRequest::sourceRepositoryIdIsSet() const
{
    return sourceRepositoryIdIsSet_;
}

void ListProjectMergeRequestsRequest::unsetsourceRepositoryId()
{
    sourceRepositoryIdIsSet_ = false;
}

bool ListProjectMergeRequestsRequest::isOnlyCount() const
{
    return onlyCount_;
}

void ListProjectMergeRequestsRequest::setOnlyCount(bool value)
{
    onlyCount_ = value;
    onlyCountIsSet_ = true;
}

bool ListProjectMergeRequestsRequest::onlyCountIsSet() const
{
    return onlyCountIsSet_;
}

void ListProjectMergeRequestsRequest::unsetonlyCount()
{
    onlyCountIsSet_ = false;
}

std::string ListProjectMergeRequestsRequest::getLabels() const
{
    return labels_;
}

void ListProjectMergeRequestsRequest::setLabels(const std::string& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool ListProjectMergeRequestsRequest::labelsIsSet() const
{
    return labelsIsSet_;
}

void ListProjectMergeRequestsRequest::unsetlabels()
{
    labelsIsSet_ = false;
}

std::string ListProjectMergeRequestsRequest::getTopic() const
{
    return topic_;
}

void ListProjectMergeRequestsRequest::setTopic(const std::string& value)
{
    topic_ = value;
    topicIsSet_ = true;
}

bool ListProjectMergeRequestsRequest::topicIsSet() const
{
    return topicIsSet_;
}

void ListProjectMergeRequestsRequest::unsettopic()
{
    topicIsSet_ = false;
}

}
}
}
}
}


