

#include "huaweicloud/projectman/v4/model/ListIpdLabelsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIpdLabelsRequest::ListIpdLabelsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    labelType_ = "";
    labelTypeIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    categoryTypes_ = "";
    categoryTypesIsSet_ = false;
}

ListIpdLabelsRequest::~ListIpdLabelsRequest() = default;

void ListIpdLabelsRequest::validate()
{
}

web::json::value ListIpdLabelsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(labelTypeIsSet_) {
        val[utility::conversions::to_string_t("label_type")] = ModelBase::toJson(labelType_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(categoryTypesIsSet_) {
        val[utility::conversions::to_string_t("category_types")] = ModelBase::toJson(categoryTypes_);
    }

    return val;
}
bool ListIpdLabelsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("label_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_types"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategoryTypes(refVal);
        }
    }
    return ok;
}


std::string ListIpdLabelsRequest::getProjectId() const
{
    return projectId_;
}

void ListIpdLabelsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListIpdLabelsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListIpdLabelsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListIpdLabelsRequest::getLabelType() const
{
    return labelType_;
}

void ListIpdLabelsRequest::setLabelType(const std::string& value)
{
    labelType_ = value;
    labelTypeIsSet_ = true;
}

bool ListIpdLabelsRequest::labelTypeIsSet() const
{
    return labelTypeIsSet_;
}

void ListIpdLabelsRequest::unsetlabelType()
{
    labelTypeIsSet_ = false;
}

std::string ListIpdLabelsRequest::getTitle() const
{
    return title_;
}

void ListIpdLabelsRequest::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ListIpdLabelsRequest::titleIsSet() const
{
    return titleIsSet_;
}

void ListIpdLabelsRequest::unsettitle()
{
    titleIsSet_ = false;
}

std::string ListIpdLabelsRequest::getCategoryTypes() const
{
    return categoryTypes_;
}

void ListIpdLabelsRequest::setCategoryTypes(const std::string& value)
{
    categoryTypes_ = value;
    categoryTypesIsSet_ = true;
}

bool ListIpdLabelsRequest::categoryTypesIsSet() const
{
    return categoryTypesIsSet_;
}

void ListIpdLabelsRequest::unsetcategoryTypes()
{
    categoryTypesIsSet_ = false;
}

}
}
}
}
}


