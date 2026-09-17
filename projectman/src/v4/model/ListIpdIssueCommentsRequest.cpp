

#include "huaweicloud/projectman/v4/model/ListIpdIssueCommentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIpdIssueCommentsRequest::ListIpdIssueCommentsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    dateDesc_ = false;
    dateDescIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
}

ListIpdIssueCommentsRequest::~ListIpdIssueCommentsRequest() = default;

void ListIpdIssueCommentsRequest::validate()
{
}

web::json::value ListIpdIssueCommentsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(dateDescIsSet_) {
        val[utility::conversions::to_string_t("date_desc")] = ModelBase::toJson(dateDesc_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }

    return val;
}
bool ListIpdIssueCommentsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_desc"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    return ok;
}


std::string ListIpdIssueCommentsRequest::getProjectId() const
{
    return projectId_;
}

void ListIpdIssueCommentsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListIpdIssueCommentsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListIpdIssueCommentsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListIpdIssueCommentsRequest::getIssueId() const
{
    return issueId_;
}

void ListIpdIssueCommentsRequest::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool ListIpdIssueCommentsRequest::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void ListIpdIssueCommentsRequest::unsetissueId()
{
    issueIdIsSet_ = false;
}

bool ListIpdIssueCommentsRequest::isDateDesc() const
{
    return dateDesc_;
}

void ListIpdIssueCommentsRequest::setDateDesc(bool value)
{
    dateDesc_ = value;
    dateDescIsSet_ = true;
}

bool ListIpdIssueCommentsRequest::dateDescIsSet() const
{
    return dateDescIsSet_;
}

void ListIpdIssueCommentsRequest::unsetdateDesc()
{
    dateDescIsSet_ = false;
}

int32_t ListIpdIssueCommentsRequest::getPageNo() const
{
    return pageNo_;
}

void ListIpdIssueCommentsRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListIpdIssueCommentsRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListIpdIssueCommentsRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t ListIpdIssueCommentsRequest::getPageSize() const
{
    return pageSize_;
}

void ListIpdIssueCommentsRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListIpdIssueCommentsRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListIpdIssueCommentsRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListIpdIssueCommentsRequest::getCategory() const
{
    return category_;
}

void ListIpdIssueCommentsRequest::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ListIpdIssueCommentsRequest::categoryIsSet() const
{
    return categoryIsSet_;
}

void ListIpdIssueCommentsRequest::unsetcategory()
{
    categoryIsSet_ = false;
}

}
}
}
}
}


