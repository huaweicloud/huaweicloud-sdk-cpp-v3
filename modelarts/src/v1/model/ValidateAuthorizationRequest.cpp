

#include "huaweicloud/modelarts/v1/model/ValidateAuthorizationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ValidateAuthorizationRequest::ValidateAuthorizationRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ValidateAuthorizationRequest::~ValidateAuthorizationRequest() = default;

void ValidateAuthorizationRequest::validate()
{
}

web::json::value ValidateAuthorizationRequest::toJson() const
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
bool ValidateAuthorizationRequest::fromJson(const web::json::value& val)
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
            ValidateAuthorizationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ValidateAuthorizationRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ValidateAuthorizationRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ValidateAuthorizationRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ValidateAuthorizationRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

ValidateAuthorizationRequestBody ValidateAuthorizationRequest::getBody() const
{
    return body_;
}

void ValidateAuthorizationRequest::setBody(const ValidateAuthorizationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ValidateAuthorizationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ValidateAuthorizationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


