

#include "huaweicloud/projectman/v4/model/ListProjectsV4ResponseBody_projects.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectsV4ResponseBody_projects::ListProjectsV4ResponseBody_projects()
{
    projectNumId_ = 0;
    projectNumIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createdTime_ = 0L;
    createdTimeIsSet_ = false;
    updatedTime_ = 0L;
    updatedTimeIsSet_ = false;
    projectType_ = "";
    projectTypeIsSet_ = false;
    creatorIsSet_ = false;
}

ListProjectsV4ResponseBody_projects::~ListProjectsV4ResponseBody_projects() = default;

void ListProjectsV4ResponseBody_projects::validate()
{
}

web::json::value ListProjectsV4ResponseBody_projects::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectNumIdIsSet_) {
        val[utility::conversions::to_string_t("project_num_id")] = ModelBase::toJson(projectNumId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(updatedTimeIsSet_) {
        val[utility::conversions::to_string_t("updated_time")] = ModelBase::toJson(updatedTime_);
    }
    if(projectTypeIsSet_) {
        val[utility::conversions::to_string_t("project_type")] = ModelBase::toJson(projectType_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }

    return val;
}
bool ListProjectsV4ResponseBody_projects::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_num_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_num_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectNumId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            ListProjectsV4ResponseBody_creator refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    return ok;
}


int32_t ListProjectsV4ResponseBody_projects::getProjectNumId() const
{
    return projectNumId_;
}

void ListProjectsV4ResponseBody_projects::setProjectNumId(int32_t value)
{
    projectNumId_ = value;
    projectNumIdIsSet_ = true;
}

bool ListProjectsV4ResponseBody_projects::projectNumIdIsSet() const
{
    return projectNumIdIsSet_;
}

void ListProjectsV4ResponseBody_projects::unsetprojectNumId()
{
    projectNumIdIsSet_ = false;
}

std::string ListProjectsV4ResponseBody_projects::getProjectId() const
{
    return projectId_;
}

void ListProjectsV4ResponseBody_projects::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectsV4ResponseBody_projects::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectsV4ResponseBody_projects::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListProjectsV4ResponseBody_projects::getProjectName() const
{
    return projectName_;
}

void ListProjectsV4ResponseBody_projects::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ListProjectsV4ResponseBody_projects::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ListProjectsV4ResponseBody_projects::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ListProjectsV4ResponseBody_projects::getDescription() const
{
    return description_;
}

void ListProjectsV4ResponseBody_projects::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListProjectsV4ResponseBody_projects::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListProjectsV4ResponseBody_projects::unsetdescription()
{
    descriptionIsSet_ = false;
}

int64_t ListProjectsV4ResponseBody_projects::getCreatedTime() const
{
    return createdTime_;
}

void ListProjectsV4ResponseBody_projects::setCreatedTime(int64_t value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ListProjectsV4ResponseBody_projects::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ListProjectsV4ResponseBody_projects::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

int64_t ListProjectsV4ResponseBody_projects::getUpdatedTime() const
{
    return updatedTime_;
}

void ListProjectsV4ResponseBody_projects::setUpdatedTime(int64_t value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool ListProjectsV4ResponseBody_projects::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void ListProjectsV4ResponseBody_projects::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

std::string ListProjectsV4ResponseBody_projects::getProjectType() const
{
    return projectType_;
}

void ListProjectsV4ResponseBody_projects::setProjectType(const std::string& value)
{
    projectType_ = value;
    projectTypeIsSet_ = true;
}

bool ListProjectsV4ResponseBody_projects::projectTypeIsSet() const
{
    return projectTypeIsSet_;
}

void ListProjectsV4ResponseBody_projects::unsetprojectType()
{
    projectTypeIsSet_ = false;
}

ListProjectsV4ResponseBody_creator ListProjectsV4ResponseBody_projects::getCreator() const
{
    return creator_;
}

void ListProjectsV4ResponseBody_projects::setCreator(const ListProjectsV4ResponseBody_creator& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ListProjectsV4ResponseBody_projects::creatorIsSet() const
{
    return creatorIsSet_;
}

void ListProjectsV4ResponseBody_projects::unsetcreator()
{
    creatorIsSet_ = false;
}

}
}
}
}
}


