

#include "huaweicloud/projectman/v4/model/ShowCategoryStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowCategoryStatusRequest::ShowCategoryStatusRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    categories_ = "";
    categoriesIsSet_ = false;
}

ShowCategoryStatusRequest::~ShowCategoryStatusRequest() = default;

void ShowCategoryStatusRequest::validate()
{
}

web::json::value ShowCategoryStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(categoriesIsSet_) {
        val[utility::conversions::to_string_t("categories")] = ModelBase::toJson(categories_);
    }

    return val;
}
bool ShowCategoryStatusRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("categories"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategories(refVal);
        }
    }
    return ok;
}


std::string ShowCategoryStatusRequest::getProjectId() const
{
    return projectId_;
}

void ShowCategoryStatusRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowCategoryStatusRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowCategoryStatusRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowCategoryStatusRequest::getCategories() const
{
    return categories_;
}

void ShowCategoryStatusRequest::setCategories(const std::string& value)
{
    categories_ = value;
    categoriesIsSet_ = true;
}

bool ShowCategoryStatusRequest::categoriesIsSet() const
{
    return categoriesIsSet_;
}

void ShowCategoryStatusRequest::unsetcategories()
{
    categoriesIsSet_ = false;
}

}
}
}
}
}


