

#include "huaweicloud/projectman/v4/model/ListIssueStatuesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueStatuesRequest::ListIssueStatuesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    categoryId_ = "";
    categoryIdIsSet_ = false;
}

ListIssueStatuesRequest::~ListIssueStatuesRequest() = default;

void ListIssueStatuesRequest::validate()
{
}

web::json::value ListIssueStatuesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(categoryIdIsSet_) {
        val[utility::conversions::to_string_t("category_id")] = ModelBase::toJson(categoryId_);
    }

    return val;
}
bool ListIssueStatuesRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListIssueStatuesRequest::getProjectId() const
{
    return projectId_;
}

void ListIssueStatuesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListIssueStatuesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListIssueStatuesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListIssueStatuesRequest::getCategoryId() const
{
    return categoryId_;
}

void ListIssueStatuesRequest::setCategoryId(const std::string& value)
{
    categoryId_ = value;
    categoryIdIsSet_ = true;
}

bool ListIssueStatuesRequest::categoryIdIsSet() const
{
    return categoryIdIsSet_;
}

void ListIssueStatuesRequest::unsetcategoryId()
{
    categoryIdIsSet_ = false;
}

}
}
}
}
}


