

#include "huaweicloud/projectman/v4/model/CreateProjectV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateProjectV4Response::CreateProjectV4Response()
{
    projectNumId_ = 0;
    projectNumIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    projectType_ = "";
    projectTypeIsSet_ = false;
    userNumId_ = 0;
    userNumIdIsSet_ = false;
}

CreateProjectV4Response::~CreateProjectV4Response() = default;

void CreateProjectV4Response::validate()
{
}

web::json::value CreateProjectV4Response::toJson() const
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
    if(projectTypeIsSet_) {
        val[utility::conversions::to_string_t("project_type")] = ModelBase::toJson(projectType_);
    }
    if(userNumIdIsSet_) {
        val[utility::conversions::to_string_t("user_num_id")] = ModelBase::toJson(userNumId_);
    }

    return val;
}
bool CreateProjectV4Response::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_num_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_num_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserNumId(refVal);
        }
    }
    return ok;
}


int32_t CreateProjectV4Response::getProjectNumId() const
{
    return projectNumId_;
}

void CreateProjectV4Response::setProjectNumId(int32_t value)
{
    projectNumId_ = value;
    projectNumIdIsSet_ = true;
}

bool CreateProjectV4Response::projectNumIdIsSet() const
{
    return projectNumIdIsSet_;
}

void CreateProjectV4Response::unsetprojectNumId()
{
    projectNumIdIsSet_ = false;
}

std::string CreateProjectV4Response::getProjectId() const
{
    return projectId_;
}

void CreateProjectV4Response::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateProjectV4Response::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateProjectV4Response::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateProjectV4Response::getProjectName() const
{
    return projectName_;
}

void CreateProjectV4Response::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool CreateProjectV4Response::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void CreateProjectV4Response::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string CreateProjectV4Response::getDescription() const
{
    return description_;
}

void CreateProjectV4Response::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateProjectV4Response::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateProjectV4Response::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateProjectV4Response::getProjectType() const
{
    return projectType_;
}

void CreateProjectV4Response::setProjectType(const std::string& value)
{
    projectType_ = value;
    projectTypeIsSet_ = true;
}

bool CreateProjectV4Response::projectTypeIsSet() const
{
    return projectTypeIsSet_;
}

void CreateProjectV4Response::unsetprojectType()
{
    projectTypeIsSet_ = false;
}

int32_t CreateProjectV4Response::getUserNumId() const
{
    return userNumId_;
}

void CreateProjectV4Response::setUserNumId(int32_t value)
{
    userNumId_ = value;
    userNumIdIsSet_ = true;
}

bool CreateProjectV4Response::userNumIdIsSet() const
{
    return userNumIdIsSet_;
}

void CreateProjectV4Response::unsetuserNumId()
{
    userNumIdIsSet_ = false;
}

}
}
}
}
}


