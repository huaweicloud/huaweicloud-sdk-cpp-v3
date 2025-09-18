

#include "huaweicloud/projectman/v4/model/CreateProjectModuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateProjectModuleRequest::CreateProjectModuleRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateProjectModuleRequest::~CreateProjectModuleRequest() = default;

void CreateProjectModuleRequest::validate()
{
}

web::json::value CreateProjectModuleRequest::toJson() const
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
bool CreateProjectModuleRequest::fromJson(const web::json::value& val)
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
            CreateProjectModuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateProjectModuleRequest::getProjectId() const
{
    return projectId_;
}

void CreateProjectModuleRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateProjectModuleRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateProjectModuleRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreateProjectModuleRequestBody CreateProjectModuleRequest::getBody() const
{
    return body_;
}

void CreateProjectModuleRequest::setBody(const CreateProjectModuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateProjectModuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateProjectModuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


