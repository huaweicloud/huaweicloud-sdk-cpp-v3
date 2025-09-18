

#include "huaweicloud/projectman/v4/model/UpdateScrumPlanInProjectRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateScrumPlanInProjectRequest::UpdateScrumPlanInProjectRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    body_ = "";
    bodyIsSet_ = false;
}

UpdateScrumPlanInProjectRequest::~UpdateScrumPlanInProjectRequest() = default;

void UpdateScrumPlanInProjectRequest::validate()
{
}

web::json::value UpdateScrumPlanInProjectRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("plan_id")] = ModelBase::toJson(planId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateScrumPlanInProjectRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("plan_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateScrumPlanInProjectRequest::getProjectId() const
{
    return projectId_;
}

void UpdateScrumPlanInProjectRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateScrumPlanInProjectRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateScrumPlanInProjectRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateScrumPlanInProjectRequest::getPlanId() const
{
    return planId_;
}

void UpdateScrumPlanInProjectRequest::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool UpdateScrumPlanInProjectRequest::planIdIsSet() const
{
    return planIdIsSet_;
}

void UpdateScrumPlanInProjectRequest::unsetplanId()
{
    planIdIsSet_ = false;
}

std::string UpdateScrumPlanInProjectRequest::getBody() const
{
    return body_;
}

void UpdateScrumPlanInProjectRequest::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateScrumPlanInProjectRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateScrumPlanInProjectRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


