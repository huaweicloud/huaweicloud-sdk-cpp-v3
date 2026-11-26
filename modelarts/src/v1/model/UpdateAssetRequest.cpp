

#include "huaweicloud/modelarts/v1/model/UpdateAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateAssetRequest::UpdateAssetRequest()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAssetRequest::~UpdateAssetRequest() = default;

void UpdateAssetRequest::validate()
{
}

web::json::value UpdateAssetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAssetRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
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
            UpdateAssetReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAssetRequest::getAssetId() const
{
    return assetId_;
}

void UpdateAssetRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool UpdateAssetRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void UpdateAssetRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string UpdateAssetRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void UpdateAssetRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool UpdateAssetRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void UpdateAssetRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

UpdateAssetReq UpdateAssetRequest::getBody() const
{
    return body_;
}

void UpdateAssetRequest::setBody(const UpdateAssetReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAssetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAssetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


