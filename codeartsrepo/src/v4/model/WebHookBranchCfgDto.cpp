

#include "huaweicloud/codeartsrepo/v4/model/WebHookBranchCfgDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




WebHookBranchCfgDto::WebHookBranchCfgDto()
{
    branchType_ = 0;
    branchTypeIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    projectType_ = 0;
    projectTypeIsSet_ = false;
    project_ = "";
    projectIsSet_ = false;
}

WebHookBranchCfgDto::~WebHookBranchCfgDto() = default;

void WebHookBranchCfgDto::validate()
{
}

web::json::value WebHookBranchCfgDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchTypeIsSet_) {
        val[utility::conversions::to_string_t("branch_type")] = ModelBase::toJson(branchType_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(projectTypeIsSet_) {
        val[utility::conversions::to_string_t("project_type")] = ModelBase::toJson(projectType_);
    }
    if(projectIsSet_) {
        val[utility::conversions::to_string_t("project")] = ModelBase::toJson(project_);
    }

    return val;
}
bool WebHookBranchCfgDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("branch_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProject(refVal);
        }
    }
    return ok;
}


int32_t WebHookBranchCfgDto::getBranchType() const
{
    return branchType_;
}

void WebHookBranchCfgDto::setBranchType(int32_t value)
{
    branchType_ = value;
    branchTypeIsSet_ = true;
}

bool WebHookBranchCfgDto::branchTypeIsSet() const
{
    return branchTypeIsSet_;
}

void WebHookBranchCfgDto::unsetbranchType()
{
    branchTypeIsSet_ = false;
}

std::string WebHookBranchCfgDto::getBranch() const
{
    return branch_;
}

void WebHookBranchCfgDto::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool WebHookBranchCfgDto::branchIsSet() const
{
    return branchIsSet_;
}

void WebHookBranchCfgDto::unsetbranch()
{
    branchIsSet_ = false;
}

int32_t WebHookBranchCfgDto::getProjectType() const
{
    return projectType_;
}

void WebHookBranchCfgDto::setProjectType(int32_t value)
{
    projectType_ = value;
    projectTypeIsSet_ = true;
}

bool WebHookBranchCfgDto::projectTypeIsSet() const
{
    return projectTypeIsSet_;
}

void WebHookBranchCfgDto::unsetprojectType()
{
    projectTypeIsSet_ = false;
}

std::string WebHookBranchCfgDto::getProject() const
{
    return project_;
}

void WebHookBranchCfgDto::setProject(const std::string& value)
{
    project_ = value;
    projectIsSet_ = true;
}

bool WebHookBranchCfgDto::projectIsSet() const
{
    return projectIsSet_;
}

void WebHookBranchCfgDto::unsetproject()
{
    projectIsSet_ = false;
}

}
}
}
}
}


