

#include "huaweicloud/projectman/v4/model/CreateIpdProjectIssueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateIpdProjectIssueRequest::CreateIpdProjectIssueRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateIpdProjectIssueRequest::~CreateIpdProjectIssueRequest() = default;

void CreateIpdProjectIssueRequest::validate()
{
}

web::json::value CreateIpdProjectIssueRequest::toJson() const
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
bool CreateIpdProjectIssueRequest::fromJson(const web::json::value& val)
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
            CreateIpdProjectIssueRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateIpdProjectIssueRequest::getProjectId() const
{
    return projectId_;
}

void CreateIpdProjectIssueRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateIpdProjectIssueRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateIpdProjectIssueRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

CreateIpdProjectIssueRequestBody CreateIpdProjectIssueRequest::getBody() const
{
    return body_;
}

void CreateIpdProjectIssueRequest::setBody(const CreateIpdProjectIssueRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateIpdProjectIssueRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateIpdProjectIssueRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


