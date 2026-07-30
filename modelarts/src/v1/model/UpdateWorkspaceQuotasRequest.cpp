

#include "huaweicloud/modelarts/v1/model/UpdateWorkspaceQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateWorkspaceQuotasRequest::UpdateWorkspaceQuotasRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateWorkspaceQuotasRequest::~UpdateWorkspaceQuotasRequest() = default;

void UpdateWorkspaceQuotasRequest::validate()
{
}

web::json::value UpdateWorkspaceQuotasRequest::toJson() const
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
bool UpdateWorkspaceQuotasRequest::fromJson(const web::json::value& val)
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
            UpdateWorkspaceQuotasReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateWorkspaceQuotasRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void UpdateWorkspaceQuotasRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool UpdateWorkspaceQuotasRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void UpdateWorkspaceQuotasRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

UpdateWorkspaceQuotasReq UpdateWorkspaceQuotasRequest::getBody() const
{
    return body_;
}

void UpdateWorkspaceQuotasRequest::setBody(const UpdateWorkspaceQuotasReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateWorkspaceQuotasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateWorkspaceQuotasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


