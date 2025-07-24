

#include "huaweicloud/cloudtest/v1/model/CreatePlanRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreatePlanRequest::CreatePlanRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePlanRequest::~CreatePlanRequest() = default;

void CreatePlanRequest::validate()
{
}

web::json::value CreatePlanRequest::toJson() const
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
bool CreatePlanRequest::fromJson(const web::json::value& val)
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
            CreatePlanRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePlanRequest::getProjectId() const
{
    return projectId_;
}

void CreatePlanRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreatePlanRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreatePlanRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreatePlanRequestBody CreatePlanRequest::getBody() const
{
    return body_;
}

void CreatePlanRequest::setBody(const CreatePlanRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePlanRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePlanRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


