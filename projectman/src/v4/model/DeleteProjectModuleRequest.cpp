

#include "huaweicloud/projectman/v4/model/DeleteProjectModuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteProjectModuleRequest::DeleteProjectModuleRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    moduleId_ = 0;
    moduleIdIsSet_ = false;
}

DeleteProjectModuleRequest::~DeleteProjectModuleRequest() = default;

void DeleteProjectModuleRequest::validate()
{
}

web::json::value DeleteProjectModuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }

    return val;
}
bool DeleteProjectModuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
        }
    }
    return ok;
}


std::string DeleteProjectModuleRequest::getProjectId() const
{
    return projectId_;
}

void DeleteProjectModuleRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteProjectModuleRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteProjectModuleRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t DeleteProjectModuleRequest::getModuleId() const
{
    return moduleId_;
}

void DeleteProjectModuleRequest::setModuleId(int32_t value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool DeleteProjectModuleRequest::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void DeleteProjectModuleRequest::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

}
}
}
}
}


