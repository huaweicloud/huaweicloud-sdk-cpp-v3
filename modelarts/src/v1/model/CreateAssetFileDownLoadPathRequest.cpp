

#include "huaweicloud/modelarts/v1/model/CreateAssetFileDownLoadPathRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateAssetFileDownLoadPathRequest::CreateAssetFileDownLoadPathRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAssetFileDownLoadPathRequest::~CreateAssetFileDownLoadPathRequest() = default;

void CreateAssetFileDownLoadPathRequest::validate()
{
}

web::json::value CreateAssetFileDownLoadPathRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAssetFileDownLoadPathRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DownLoadPathReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAssetFileDownLoadPathRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void CreateAssetFileDownLoadPathRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool CreateAssetFileDownLoadPathRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void CreateAssetFileDownLoadPathRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string CreateAssetFileDownLoadPathRequest::getAssetId() const
{
    return assetId_;
}

void CreateAssetFileDownLoadPathRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool CreateAssetFileDownLoadPathRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void CreateAssetFileDownLoadPathRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

DownLoadPathReq CreateAssetFileDownLoadPathRequest::getBody() const
{
    return body_;
}

void CreateAssetFileDownLoadPathRequest::setBody(const DownLoadPathReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAssetFileDownLoadPathRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAssetFileDownLoadPathRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


