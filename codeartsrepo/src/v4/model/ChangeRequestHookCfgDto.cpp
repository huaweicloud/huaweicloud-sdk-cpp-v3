

#include "huaweicloud/codeartsrepo/v4/model/ChangeRequestHookCfgDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ChangeRequestHookCfgDto::ChangeRequestHookCfgDto()
{
    eventCfgsIsSet_ = false;
    projectCfgsIsSet_ = false;
    branchCfgsIsSet_ = false;
}

ChangeRequestHookCfgDto::~ChangeRequestHookCfgDto() = default;

void ChangeRequestHookCfgDto::validate()
{
}

web::json::value ChangeRequestHookCfgDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventCfgsIsSet_) {
        val[utility::conversions::to_string_t("event_cfgs")] = ModelBase::toJson(eventCfgs_);
    }
    if(projectCfgsIsSet_) {
        val[utility::conversions::to_string_t("project_cfgs")] = ModelBase::toJson(projectCfgs_);
    }
    if(branchCfgsIsSet_) {
        val[utility::conversions::to_string_t("branch_cfgs")] = ModelBase::toJson(branchCfgs_);
    }

    return val;
}
bool ChangeRequestHookCfgDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event_cfgs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_cfgs"));
        if(!fieldValue.is_null())
        {
            std::vector<WebHookEventCfgDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventCfgs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_cfgs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_cfgs"));
        if(!fieldValue.is_null())
        {
            std::vector<WebHookBranchCfgDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectCfgs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_cfgs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_cfgs"));
        if(!fieldValue.is_null())
        {
            std::vector<WebHookBranchCfgDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchCfgs(refVal);
        }
    }
    return ok;
}


std::vector<WebHookEventCfgDto>& ChangeRequestHookCfgDto::getEventCfgs()
{
    return eventCfgs_;
}

void ChangeRequestHookCfgDto::setEventCfgs(const std::vector<WebHookEventCfgDto>& value)
{
    eventCfgs_ = value;
    eventCfgsIsSet_ = true;
}

bool ChangeRequestHookCfgDto::eventCfgsIsSet() const
{
    return eventCfgsIsSet_;
}

void ChangeRequestHookCfgDto::unseteventCfgs()
{
    eventCfgsIsSet_ = false;
}

std::vector<WebHookBranchCfgDto>& ChangeRequestHookCfgDto::getProjectCfgs()
{
    return projectCfgs_;
}

void ChangeRequestHookCfgDto::setProjectCfgs(const std::vector<WebHookBranchCfgDto>& value)
{
    projectCfgs_ = value;
    projectCfgsIsSet_ = true;
}

bool ChangeRequestHookCfgDto::projectCfgsIsSet() const
{
    return projectCfgsIsSet_;
}

void ChangeRequestHookCfgDto::unsetprojectCfgs()
{
    projectCfgsIsSet_ = false;
}

std::vector<WebHookBranchCfgDto>& ChangeRequestHookCfgDto::getBranchCfgs()
{
    return branchCfgs_;
}

void ChangeRequestHookCfgDto::setBranchCfgs(const std::vector<WebHookBranchCfgDto>& value)
{
    branchCfgs_ = value;
    branchCfgsIsSet_ = true;
}

bool ChangeRequestHookCfgDto::branchCfgsIsSet() const
{
    return branchCfgsIsSet_;
}

void ChangeRequestHookCfgDto::unsetbranchCfgs()
{
    branchCfgsIsSet_ = false;
}

}
}
}
}
}


