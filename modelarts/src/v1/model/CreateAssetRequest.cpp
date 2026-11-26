

#include "huaweicloud/modelarts/v1/model/CreateAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateAssetRequest::CreateAssetRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    xStorageToken_ = "";
    xStorageTokenIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAssetRequest::~CreateAssetRequest() = default;

void CreateAssetRequest::validate()
{
}

web::json::value CreateAssetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(xStorageTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Storage-Token")] = ModelBase::toJson(xStorageToken_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAssetRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Storage-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Storage-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXStorageToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateAssetReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAssetRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void CreateAssetRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool CreateAssetRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void CreateAssetRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string CreateAssetRequest::getXStorageToken() const
{
    return xStorageToken_;
}

void CreateAssetRequest::setXStorageToken(const std::string& value)
{
    xStorageToken_ = value;
    xStorageTokenIsSet_ = true;
}

bool CreateAssetRequest::xStorageTokenIsSet() const
{
    return xStorageTokenIsSet_;
}

void CreateAssetRequest::unsetxStorageToken()
{
    xStorageTokenIsSet_ = false;
}

CreateAssetReq CreateAssetRequest::getBody() const
{
    return body_;
}

void CreateAssetRequest::setBody(const CreateAssetReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAssetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAssetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


