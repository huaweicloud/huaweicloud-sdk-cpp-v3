

#include "huaweicloud/cloudtest/v1/model/ShowReportRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowReportRequest::ShowReportRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowReportRequest::~ShowReportRequest() = default;

void ShowReportRequest::validate()
{
}

web::json::value ShowReportRequest::toJson() const
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
bool ShowReportRequest::fromJson(const web::json::value& val)
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
            GenerateReportInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowReportRequest::getProjectId() const
{
    return projectId_;
}

void ShowReportRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowReportRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowReportRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowReportRequest::getPlanId() const
{
    return planId_;
}

void ShowReportRequest::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool ShowReportRequest::planIdIsSet() const
{
    return planIdIsSet_;
}

void ShowReportRequest::unsetplanId()
{
    planIdIsSet_ = false;
}

GenerateReportInfo ShowReportRequest::getBody() const
{
    return body_;
}

void ShowReportRequest::setBody(const GenerateReportInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowReportRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowReportRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


