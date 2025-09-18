

#include "huaweicloud/projectman/v4/model/ShowScrumPlansByConditionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowScrumPlansByConditionRequest::ShowScrumPlansByConditionRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    body_ = "";
    bodyIsSet_ = false;
}

ShowScrumPlansByConditionRequest::~ShowScrumPlansByConditionRequest() = default;

void ShowScrumPlansByConditionRequest::validate()
{
}

web::json::value ShowScrumPlansByConditionRequest::toJson() const
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
bool ShowScrumPlansByConditionRequest::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowScrumPlansByConditionRequest::getProjectId() const
{
    return projectId_;
}

void ShowScrumPlansByConditionRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowScrumPlansByConditionRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowScrumPlansByConditionRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowScrumPlansByConditionRequest::getBody() const
{
    return body_;
}

void ShowScrumPlansByConditionRequest::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowScrumPlansByConditionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowScrumPlansByConditionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


