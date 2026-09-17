

#include "huaweicloud/projectman/v4/model/ChangePlanStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ChangePlanStatusRequest::ChangePlanStatusRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangePlanStatusRequest::~ChangePlanStatusRequest() = default;

void ChangePlanStatusRequest::validate()
{
}

web::json::value ChangePlanStatusRequest::toJson() const
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
bool ChangePlanStatusRequest::fromJson(const web::json::value& val)
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
            CompleteSprintVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangePlanStatusRequest::getProjectId() const
{
    return projectId_;
}

void ChangePlanStatusRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ChangePlanStatusRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ChangePlanStatusRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ChangePlanStatusRequest::getPlanId() const
{
    return planId_;
}

void ChangePlanStatusRequest::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool ChangePlanStatusRequest::planIdIsSet() const
{
    return planIdIsSet_;
}

void ChangePlanStatusRequest::unsetplanId()
{
    planIdIsSet_ = false;
}

CompleteSprintVO ChangePlanStatusRequest::getBody() const
{
    return body_;
}

void ChangePlanStatusRequest::setBody(const CompleteSprintVO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangePlanStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangePlanStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


