

#include "huaweicloud/projectman/v4/model/ListIssueFieldsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueFieldsRequest::ListIssueFieldsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    categoryId_ = "";
    categoryIdIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

ListIssueFieldsRequest::~ListIssueFieldsRequest() = default;

void ListIssueFieldsRequest::validate()
{
}

web::json::value ListIssueFieldsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(categoryIdIsSet_) {
        val[utility::conversions::to_string_t("category_id")] = ModelBase::toJson(categoryId_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool ListIssueFieldsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("category_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string ListIssueFieldsRequest::getProjectId() const
{
    return projectId_;
}

void ListIssueFieldsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListIssueFieldsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListIssueFieldsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListIssueFieldsRequest::getCategoryId() const
{
    return categoryId_;
}

void ListIssueFieldsRequest::setCategoryId(const std::string& value)
{
    categoryId_ = value;
    categoryIdIsSet_ = true;
}

bool ListIssueFieldsRequest::categoryIdIsSet() const
{
    return categoryIdIsSet_;
}

void ListIssueFieldsRequest::unsetcategoryId()
{
    categoryIdIsSet_ = false;
}

int32_t ListIssueFieldsRequest::getPage() const
{
    return page_;
}

void ListIssueFieldsRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListIssueFieldsRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListIssueFieldsRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListIssueFieldsRequest::getSize() const
{
    return size_;
}

void ListIssueFieldsRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListIssueFieldsRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListIssueFieldsRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


