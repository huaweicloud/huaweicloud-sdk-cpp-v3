

#include "huaweicloud/modelarts/v1/model/ShowAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAssetRequest::ShowAssetRequest()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

ShowAssetRequest::~ShowAssetRequest() = default;

void ShowAssetRequest::validate()
{
}

web::json::value ShowAssetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool ShowAssetRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowAssetRequest::getAssetId() const
{
    return assetId_;
}

void ShowAssetRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ShowAssetRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ShowAssetRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ShowAssetRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowAssetRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowAssetRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowAssetRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


