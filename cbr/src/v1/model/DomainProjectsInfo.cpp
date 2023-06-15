

#include "huaweicloud/cbr/v1/model/DomainProjectsInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




DomainProjectsInfo::DomainProjectsInfo()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
}

DomainProjectsInfo::~DomainProjectsInfo() = default;

void DomainProjectsInfo::validate()
{
}

web::json::value DomainProjectsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }

    return val;
}

bool DomainProjectsInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    return ok;
}


std::string DomainProjectsInfo::getProjectId() const
{
    return projectId_;
}

void DomainProjectsInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DomainProjectsInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DomainProjectsInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DomainProjectsInfo::getProjectName() const
{
    return projectName_;
}

void DomainProjectsInfo::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool DomainProjectsInfo::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void DomainProjectsInfo::unsetprojectName()
{
    projectNameIsSet_ = false;
}

}
}
}
}
}


