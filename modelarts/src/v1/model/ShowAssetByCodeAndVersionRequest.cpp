

#include "huaweicloud/modelarts/v1/model/ShowAssetByCodeAndVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAssetByCodeAndVersionRequest::ShowAssetByCodeAndVersionRequest()
{
    assetCode_ = "";
    assetCodeIsSet_ = false;
    assetVersion_ = "";
    assetVersionIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    assetType_ = "";
    assetTypeIsSet_ = false;
}

ShowAssetByCodeAndVersionRequest::~ShowAssetByCodeAndVersionRequest() = default;

void ShowAssetByCodeAndVersionRequest::validate()
{
}

web::json::value ShowAssetByCodeAndVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetCodeIsSet_) {
        val[utility::conversions::to_string_t("asset_code")] = ModelBase::toJson(assetCode_);
    }
    if(assetVersionIsSet_) {
        val[utility::conversions::to_string_t("asset_version")] = ModelBase::toJson(assetVersion_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(assetTypeIsSet_) {
        val[utility::conversions::to_string_t("asset_type")] = ModelBase::toJson(assetType_);
    }

    return val;
}
bool ShowAssetByCodeAndVersionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("asset_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetType(refVal);
        }
    }
    return ok;
}


std::string ShowAssetByCodeAndVersionRequest::getAssetCode() const
{
    return assetCode_;
}

void ShowAssetByCodeAndVersionRequest::setAssetCode(const std::string& value)
{
    assetCode_ = value;
    assetCodeIsSet_ = true;
}

bool ShowAssetByCodeAndVersionRequest::assetCodeIsSet() const
{
    return assetCodeIsSet_;
}

void ShowAssetByCodeAndVersionRequest::unsetassetCode()
{
    assetCodeIsSet_ = false;
}

std::string ShowAssetByCodeAndVersionRequest::getAssetVersion() const
{
    return assetVersion_;
}

void ShowAssetByCodeAndVersionRequest::setAssetVersion(const std::string& value)
{
    assetVersion_ = value;
    assetVersionIsSet_ = true;
}

bool ShowAssetByCodeAndVersionRequest::assetVersionIsSet() const
{
    return assetVersionIsSet_;
}

void ShowAssetByCodeAndVersionRequest::unsetassetVersion()
{
    assetVersionIsSet_ = false;
}

std::string ShowAssetByCodeAndVersionRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowAssetByCodeAndVersionRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowAssetByCodeAndVersionRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowAssetByCodeAndVersionRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ShowAssetByCodeAndVersionRequest::getAssetType() const
{
    return assetType_;
}

void ShowAssetByCodeAndVersionRequest::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool ShowAssetByCodeAndVersionRequest::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void ShowAssetByCodeAndVersionRequest::unsetassetType()
{
    assetTypeIsSet_ = false;
}

}
}
}
}
}


