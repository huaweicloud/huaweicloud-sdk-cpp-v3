

#include "huaweicloud/codeartsrepo/v4/model/UpdateProjectGeneralPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateProjectGeneralPolicyRequest::UpdateProjectGeneralPolicyRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProjectGeneralPolicyRequest::~UpdateProjectGeneralPolicyRequest() = default;

void UpdateProjectGeneralPolicyRequest::validate()
{
}

web::json::value UpdateProjectGeneralPolicyRequest::toJson() const
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
bool UpdateProjectGeneralPolicyRequest::fromJson(const web::json::value& val)
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
            UpdateGeneralPolicyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProjectGeneralPolicyRequest::getProjectId() const
{
    return projectId_;
}

void UpdateProjectGeneralPolicyRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateProjectGeneralPolicyRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateProjectGeneralPolicyRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

UpdateGeneralPolicyDto UpdateProjectGeneralPolicyRequest::getBody() const
{
    return body_;
}

void UpdateProjectGeneralPolicyRequest::setBody(const UpdateGeneralPolicyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProjectGeneralPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProjectGeneralPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


