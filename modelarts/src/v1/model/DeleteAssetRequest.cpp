

#include "huaweicloud/modelarts/v1/model/DeleteAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteAssetRequest::DeleteAssetRequest()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    forceDelete_ = false;
    forceDeleteIsSet_ = false;
}

DeleteAssetRequest::~DeleteAssetRequest() = default;

void DeleteAssetRequest::validate()
{
}

web::json::value DeleteAssetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(forceDeleteIsSet_) {
        val[utility::conversions::to_string_t("force_delete")] = ModelBase::toJson(forceDelete_);
    }

    return val;
}
bool DeleteAssetRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("force_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceDelete(refVal);
        }
    }
    return ok;
}


std::string DeleteAssetRequest::getAssetId() const
{
    return assetId_;
}

void DeleteAssetRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool DeleteAssetRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void DeleteAssetRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string DeleteAssetRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void DeleteAssetRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool DeleteAssetRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void DeleteAssetRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

bool DeleteAssetRequest::isForceDelete() const
{
    return forceDelete_;
}

void DeleteAssetRequest::setForceDelete(bool value)
{
    forceDelete_ = value;
    forceDeleteIsSet_ = true;
}

bool DeleteAssetRequest::forceDeleteIsSet() const
{
    return forceDeleteIsSet_;
}

void DeleteAssetRequest::unsetforceDelete()
{
    forceDeleteIsSet_ = false;
}

}
}
}
}
}


