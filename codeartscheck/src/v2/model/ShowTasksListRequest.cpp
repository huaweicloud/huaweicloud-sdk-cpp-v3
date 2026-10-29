

#include "huaweicloud/codeartscheck/v2/model/ShowTasksListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTasksListRequest::ShowTasksListRequest()
{
    page_ = 0;
    pageIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    reviewResultTypes_ = "";
    reviewResultTypesIsSet_ = false;
    jobStatusTypes_ = "";
    jobStatusTypesIsSet_ = false;
    orderByExecuteTime_ = "";
    orderByExecuteTimeIsSet_ = false;
    taskClassificationId_ = "";
    taskClassificationIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    sortOrder_ = "";
    sortOrderIsSet_ = false;
    operator_ = "";
    operatorIsSet_ = false;
    repoUrl_ = "";
    repoUrlIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    repoUrlFullMatch_ = "";
    repoUrlFullMatchIsSet_ = false;
}

ShowTasksListRequest::~ShowTasksListRequest() = default;

void ShowTasksListRequest::validate()
{
}

web::json::value ShowTasksListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(reviewResultTypesIsSet_) {
        val[utility::conversions::to_string_t("review_result_types")] = ModelBase::toJson(reviewResultTypes_);
    }
    if(jobStatusTypesIsSet_) {
        val[utility::conversions::to_string_t("job_status_types")] = ModelBase::toJson(jobStatusTypes_);
    }
    if(orderByExecuteTimeIsSet_) {
        val[utility::conversions::to_string_t("order_by_execute_time")] = ModelBase::toJson(orderByExecuteTime_);
    }
    if(taskClassificationIdIsSet_) {
        val[utility::conversions::to_string_t("task_classification_id")] = ModelBase::toJson(taskClassificationId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(sortOrderIsSet_) {
        val[utility::conversions::to_string_t("sort_order")] = ModelBase::toJson(sortOrder_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(repoUrlIsSet_) {
        val[utility::conversions::to_string_t("repo_url")] = ModelBase::toJson(repoUrl_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(repoUrlFullMatchIsSet_) {
        val[utility::conversions::to_string_t("repo_url_full_match")] = ModelBase::toJson(repoUrlFullMatch_);
    }

    return val;
}
bool ShowTasksListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_result_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_result_types"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewResultTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_status_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_status_types"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobStatusTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_by_execute_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_by_execute_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderByExecuteTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_classification_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_classification_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskClassificationId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_url_full_match"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_url_full_match"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoUrlFullMatch(refVal);
        }
    }
    return ok;
}


int32_t ShowTasksListRequest::getPage() const
{
    return page_;
}

void ShowTasksListRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ShowTasksListRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ShowTasksListRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ShowTasksListRequest::getPageSize() const
{
    return pageSize_;
}

void ShowTasksListRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowTasksListRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowTasksListRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ShowTasksListRequest::getSearch() const
{
    return search_;
}

void ShowTasksListRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ShowTasksListRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ShowTasksListRequest::unsetsearch()
{
    searchIsSet_ = false;
}

std::string ShowTasksListRequest::getProjectId() const
{
    return projectId_;
}

void ShowTasksListRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTasksListRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTasksListRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowTasksListRequest::getReviewResultTypes() const
{
    return reviewResultTypes_;
}

void ShowTasksListRequest::setReviewResultTypes(const std::string& value)
{
    reviewResultTypes_ = value;
    reviewResultTypesIsSet_ = true;
}

bool ShowTasksListRequest::reviewResultTypesIsSet() const
{
    return reviewResultTypesIsSet_;
}

void ShowTasksListRequest::unsetreviewResultTypes()
{
    reviewResultTypesIsSet_ = false;
}

std::string ShowTasksListRequest::getJobStatusTypes() const
{
    return jobStatusTypes_;
}

void ShowTasksListRequest::setJobStatusTypes(const std::string& value)
{
    jobStatusTypes_ = value;
    jobStatusTypesIsSet_ = true;
}

bool ShowTasksListRequest::jobStatusTypesIsSet() const
{
    return jobStatusTypesIsSet_;
}

void ShowTasksListRequest::unsetjobStatusTypes()
{
    jobStatusTypesIsSet_ = false;
}

std::string ShowTasksListRequest::getOrderByExecuteTime() const
{
    return orderByExecuteTime_;
}

void ShowTasksListRequest::setOrderByExecuteTime(const std::string& value)
{
    orderByExecuteTime_ = value;
    orderByExecuteTimeIsSet_ = true;
}

bool ShowTasksListRequest::orderByExecuteTimeIsSet() const
{
    return orderByExecuteTimeIsSet_;
}

void ShowTasksListRequest::unsetorderByExecuteTime()
{
    orderByExecuteTimeIsSet_ = false;
}

std::string ShowTasksListRequest::getTaskClassificationId() const
{
    return taskClassificationId_;
}

void ShowTasksListRequest::setTaskClassificationId(const std::string& value)
{
    taskClassificationId_ = value;
    taskClassificationIdIsSet_ = true;
}

bool ShowTasksListRequest::taskClassificationIdIsSet() const
{
    return taskClassificationIdIsSet_;
}

void ShowTasksListRequest::unsettaskClassificationId()
{
    taskClassificationIdIsSet_ = false;
}

int32_t ShowTasksListRequest::getOffset() const
{
    return offset_;
}

void ShowTasksListRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowTasksListRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowTasksListRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowTasksListRequest::getLimit() const
{
    return limit_;
}

void ShowTasksListRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowTasksListRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowTasksListRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowTasksListRequest::getSortField() const
{
    return sortField_;
}

void ShowTasksListRequest::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool ShowTasksListRequest::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void ShowTasksListRequest::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string ShowTasksListRequest::getSortOrder() const
{
    return sortOrder_;
}

void ShowTasksListRequest::setSortOrder(const std::string& value)
{
    sortOrder_ = value;
    sortOrderIsSet_ = true;
}

bool ShowTasksListRequest::sortOrderIsSet() const
{
    return sortOrderIsSet_;
}

void ShowTasksListRequest::unsetsortOrder()
{
    sortOrderIsSet_ = false;
}

std::string ShowTasksListRequest::getOperator() const
{
    return operator_;
}

void ShowTasksListRequest::setOperator(const std::string& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool ShowTasksListRequest::operatorIsSet() const
{
    return operatorIsSet_;
}

void ShowTasksListRequest::unsetoperator()
{
    operatorIsSet_ = false;
}

std::string ShowTasksListRequest::getRepoUrl() const
{
    return repoUrl_;
}

void ShowTasksListRequest::setRepoUrl(const std::string& value)
{
    repoUrl_ = value;
    repoUrlIsSet_ = true;
}

bool ShowTasksListRequest::repoUrlIsSet() const
{
    return repoUrlIsSet_;
}

void ShowTasksListRequest::unsetrepoUrl()
{
    repoUrlIsSet_ = false;
}

std::string ShowTasksListRequest::getBranch() const
{
    return branch_;
}

void ShowTasksListRequest::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool ShowTasksListRequest::branchIsSet() const
{
    return branchIsSet_;
}

void ShowTasksListRequest::unsetbranch()
{
    branchIsSet_ = false;
}

std::string ShowTasksListRequest::getRepoUrlFullMatch() const
{
    return repoUrlFullMatch_;
}

void ShowTasksListRequest::setRepoUrlFullMatch(const std::string& value)
{
    repoUrlFullMatch_ = value;
    repoUrlFullMatchIsSet_ = true;
}

bool ShowTasksListRequest::repoUrlFullMatchIsSet() const
{
    return repoUrlFullMatchIsSet_;
}

void ShowTasksListRequest::unsetrepoUrlFullMatch()
{
    repoUrlFullMatchIsSet_ = false;
}

}
}
}
}
}


