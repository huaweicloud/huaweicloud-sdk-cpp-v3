

#include "huaweicloud/projectman/v4/model/UpdatePlanInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdatePlanInfoRequest::UpdatePlanInfoRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePlanInfoRequest::~UpdatePlanInfoRequest() = default;

void UpdatePlanInfoRequest::validate()
{
}

web::json::value UpdatePlanInfoRequest::toJson() const
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
bool UpdatePlanInfoRequest::fromJson(const web::json::value& val)
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
            PlanVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePlanInfoRequest::getProjectId() const
{
    return projectId_;
}

void UpdatePlanInfoRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdatePlanInfoRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdatePlanInfoRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdatePlanInfoRequest::getPlanId() const
{
    return planId_;
}

void UpdatePlanInfoRequest::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool UpdatePlanInfoRequest::planIdIsSet() const
{
    return planIdIsSet_;
}

void UpdatePlanInfoRequest::unsetplanId()
{
    planIdIsSet_ = false;
}

PlanVO UpdatePlanInfoRequest::getBody() const
{
    return body_;
}

void UpdatePlanInfoRequest::setBody(const PlanVO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePlanInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePlanInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


