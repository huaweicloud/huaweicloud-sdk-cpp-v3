

#include "huaweicloud/modelarts/v1/model/ShowWorkflowsOverviewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkflowsOverviewRequest::ShowWorkflowsOverviewRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    searchType_ = "";
    searchTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ShowWorkflowsOverviewRequest::~ShowWorkflowsOverviewRequest() = default;

void ShowWorkflowsOverviewRequest::validate()
{
}

web::json::value ShowWorkflowsOverviewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(searchTypeIsSet_) {
        val[utility::conversions::to_string_t("search_type")] = ModelBase::toJson(searchType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool ShowWorkflowsOverviewRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string ShowWorkflowsOverviewRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowWorkflowsOverviewRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowWorkflowsOverviewRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowWorkflowsOverviewRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ShowWorkflowsOverviewRequest::getSearchType() const
{
    return searchType_;
}

void ShowWorkflowsOverviewRequest::setSearchType(const std::string& value)
{
    searchType_ = value;
    searchTypeIsSet_ = true;
}

bool ShowWorkflowsOverviewRequest::searchTypeIsSet() const
{
    return searchTypeIsSet_;
}

void ShowWorkflowsOverviewRequest::unsetsearchType()
{
    searchTypeIsSet_ = false;
}

std::string ShowWorkflowsOverviewRequest::getName() const
{
    return name_;
}

void ShowWorkflowsOverviewRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowWorkflowsOverviewRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ShowWorkflowsOverviewRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowWorkflowsOverviewRequest::getDescription() const
{
    return description_;
}

void ShowWorkflowsOverviewRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowWorkflowsOverviewRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowWorkflowsOverviewRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


