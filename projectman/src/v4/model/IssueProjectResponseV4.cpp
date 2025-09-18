

#include "huaweicloud/projectman/v4/model/IssueProjectResponseV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueProjectResponseV4::IssueProjectResponseV4()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    projectNumId_ = 0;
    projectNumIdIsSet_ = false;
}

IssueProjectResponseV4::~IssueProjectResponseV4() = default;

void IssueProjectResponseV4::validate()
{
}

web::json::value IssueProjectResponseV4::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(projectNumIdIsSet_) {
        val[utility::conversions::to_string_t("project_num_id")] = ModelBase::toJson(projectNumId_);
    }

    return val;
}
bool IssueProjectResponseV4::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_num_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_num_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectNumId(refVal);
        }
    }
    return ok;
}


std::string IssueProjectResponseV4::getProjectId() const
{
    return projectId_;
}

void IssueProjectResponseV4::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool IssueProjectResponseV4::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void IssueProjectResponseV4::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string IssueProjectResponseV4::getProjectName() const
{
    return projectName_;
}

void IssueProjectResponseV4::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool IssueProjectResponseV4::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void IssueProjectResponseV4::unsetprojectName()
{
    projectNameIsSet_ = false;
}

int32_t IssueProjectResponseV4::getProjectNumId() const
{
    return projectNumId_;
}

void IssueProjectResponseV4::setProjectNumId(int32_t value)
{
    projectNumId_ = value;
    projectNumIdIsSet_ = true;
}

bool IssueProjectResponseV4::projectNumIdIsSet() const
{
    return projectNumIdIsSet_;
}

void IssueProjectResponseV4::unsetprojectNumId()
{
    projectNumIdIsSet_ = false;
}

}
}
}
}
}


