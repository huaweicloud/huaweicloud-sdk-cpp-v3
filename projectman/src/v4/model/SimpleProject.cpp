

#include "huaweicloud/projectman/v4/model/SimpleProject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




SimpleProject::SimpleProject()
{
    projectName_ = "";
    projectNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

SimpleProject::~SimpleProject() = default;

void SimpleProject::validate()
{
}

web::json::value SimpleProject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool SimpleProject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
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
    return ok;
}


std::string SimpleProject::getProjectName() const
{
    return projectName_;
}

void SimpleProject::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool SimpleProject::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void SimpleProject::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string SimpleProject::getProjectId() const
{
    return projectId_;
}

void SimpleProject::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool SimpleProject::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void SimpleProject::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


