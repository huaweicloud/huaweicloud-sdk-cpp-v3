

#include "huaweicloud/modelarts/v1/model/ShowAssetExtendMessageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAssetExtendMessageRequest::ShowAssetExtendMessageRequest()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

ShowAssetExtendMessageRequest::~ShowAssetExtendMessageRequest() = default;

void ShowAssetExtendMessageRequest::validate()
{
}

web::json::value ShowAssetExtendMessageRequest::toJson() const
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
bool ShowAssetExtendMessageRequest::fromJson(const web::json::value& val)
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


std::string ShowAssetExtendMessageRequest::getAssetId() const
{
    return assetId_;
}

void ShowAssetExtendMessageRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ShowAssetExtendMessageRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ShowAssetExtendMessageRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ShowAssetExtendMessageRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowAssetExtendMessageRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowAssetExtendMessageRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowAssetExtendMessageRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


