

#include "huaweicloud/codehub/v4/model/CreateProjectProtectedBranchesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateProjectProtectedBranchesRequest::CreateProjectProtectedBranchesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateProjectProtectedBranchesRequest::~CreateProjectProtectedBranchesRequest() = default;

void CreateProjectProtectedBranchesRequest::validate()
{
}

web::json::value CreateProjectProtectedBranchesRequest::toJson() const
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
bool CreateProjectProtectedBranchesRequest::fromJson(const web::json::value& val)
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
            ProtectedBranchBodyApiDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateProjectProtectedBranchesRequest::getProjectId() const
{
    return projectId_;
}

void CreateProjectProtectedBranchesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateProjectProtectedBranchesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateProjectProtectedBranchesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

ProtectedBranchBodyApiDto CreateProjectProtectedBranchesRequest::getBody() const
{
    return body_;
}

void CreateProjectProtectedBranchesRequest::setBody(const ProtectedBranchBodyApiDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateProjectProtectedBranchesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateProjectProtectedBranchesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


