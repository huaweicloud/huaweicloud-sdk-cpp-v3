

#include "huaweicloud/projectman/v4/model/CreateScrumPlanToProjectRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateScrumPlanToProjectRequest::CreateScrumPlanToProjectRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    body_ = "";
    bodyIsSet_ = false;
}

CreateScrumPlanToProjectRequest::~CreateScrumPlanToProjectRequest() = default;

void CreateScrumPlanToProjectRequest::validate()
{
}

web::json::value CreateScrumPlanToProjectRequest::toJson() const
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
bool CreateScrumPlanToProjectRequest::fromJson(const web::json::value& val)
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


std::string CreateScrumPlanToProjectRequest::getProjectId() const
{
    return projectId_;
}

void CreateScrumPlanToProjectRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateScrumPlanToProjectRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateScrumPlanToProjectRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateScrumPlanToProjectRequest::getBody() const
{
    return body_;
}

void CreateScrumPlanToProjectRequest::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateScrumPlanToProjectRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateScrumPlanToProjectRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


