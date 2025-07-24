

#include "huaweicloud/cloudtest/v1/model/CreateTestCaseInPlanRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateTestCaseInPlanRequest::CreateTestCaseInPlanRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTestCaseInPlanRequest::~CreateTestCaseInPlanRequest() = default;

void CreateTestCaseInPlanRequest::validate()
{
}

web::json::value CreateTestCaseInPlanRequest::toJson() const
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
bool CreateTestCaseInPlanRequest::fromJson(const web::json::value& val)
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
            CreateTestCaseInPlanRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTestCaseInPlanRequest::getProjectId() const
{
    return projectId_;
}

void CreateTestCaseInPlanRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateTestCaseInPlanRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateTestCaseInPlanRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateTestCaseInPlanRequest::getPlanId() const
{
    return planId_;
}

void CreateTestCaseInPlanRequest::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool CreateTestCaseInPlanRequest::planIdIsSet() const
{
    return planIdIsSet_;
}

void CreateTestCaseInPlanRequest::unsetplanId()
{
    planIdIsSet_ = false;
}

CreateTestCaseInPlanRequestBody CreateTestCaseInPlanRequest::getBody() const
{
    return body_;
}

void CreateTestCaseInPlanRequest::setBody(const CreateTestCaseInPlanRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTestCaseInPlanRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTestCaseInPlanRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


