

#include "huaweicloud/modelarts/v1/model/UpdateWorkspaceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateWorkspaceRequest::UpdateWorkspaceRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateWorkspaceRequest::~UpdateWorkspaceRequest() = default;

void UpdateWorkspaceRequest::validate()
{
}

web::json::value UpdateWorkspaceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateWorkspaceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateWorkspaceReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateWorkspaceRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void UpdateWorkspaceRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool UpdateWorkspaceRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void UpdateWorkspaceRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

UpdateWorkspaceReq UpdateWorkspaceRequest::getBody() const
{
    return body_;
}

void UpdateWorkspaceRequest::setBody(const UpdateWorkspaceReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateWorkspaceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateWorkspaceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


