

#include "huaweicloud/cloudtest/v1/model/ShowProjectDataDashboardRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowProjectDataDashboardRequest::ShowProjectDataDashboardRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowProjectDataDashboardRequest::~ShowProjectDataDashboardRequest() = default;

void ShowProjectDataDashboardRequest::validate()
{
}

web::json::value ShowProjectDataDashboardRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowProjectDataDashboardRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TestReportInfoRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowProjectDataDashboardRequest::getProjectId() const
{
    return projectId_;
}

void ShowProjectDataDashboardRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectDataDashboardRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectDataDashboardRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

TestReportInfoRequestBody ShowProjectDataDashboardRequest::getBody() const
{
    return body_;
}

void ShowProjectDataDashboardRequest::setBody(const TestReportInfoRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowProjectDataDashboardRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowProjectDataDashboardRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


