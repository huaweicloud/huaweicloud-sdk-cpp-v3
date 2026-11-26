

#include "huaweicloud/modelarts/v1/model/ShowAssetResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAssetResourceRequest::ShowAssetResourceRequest()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    checkLocale_ = false;
    checkLocaleIsSet_ = false;
}

ShowAssetResourceRequest::~ShowAssetResourceRequest() = default;

void ShowAssetResourceRequest::validate()
{
}

web::json::value ShowAssetResourceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(checkLocaleIsSet_) {
        val[utility::conversions::to_string_t("check_locale")] = ModelBase::toJson(checkLocale_);
    }

    return val;
}
bool ShowAssetResourceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_locale"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_locale"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckLocale(refVal);
        }
    }
    return ok;
}


std::string ShowAssetResourceRequest::getAssetId() const
{
    return assetId_;
}

void ShowAssetResourceRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ShowAssetResourceRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ShowAssetResourceRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ShowAssetResourceRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowAssetResourceRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowAssetResourceRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowAssetResourceRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ShowAssetResourceRequest::getResourceName() const
{
    return resourceName_;
}

void ShowAssetResourceRequest::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ShowAssetResourceRequest::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ShowAssetResourceRequest::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

bool ShowAssetResourceRequest::isCheckLocale() const
{
    return checkLocale_;
}

void ShowAssetResourceRequest::setCheckLocale(bool value)
{
    checkLocale_ = value;
    checkLocaleIsSet_ = true;
}

bool ShowAssetResourceRequest::checkLocaleIsSet() const
{
    return checkLocaleIsSet_;
}

void ShowAssetResourceRequest::unsetcheckLocale()
{
    checkLocaleIsSet_ = false;
}

}
}
}
}
}


