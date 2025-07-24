

#include "huaweicloud/cloudtest/v1/model/AssetExportParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AssetExportParam::AssetExportParam()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    factorIdsIsSet_ = false;
}

AssetExportParam::~AssetExportParam() = default;

void AssetExportParam::validate()
{
}

web::json::value AssetExportParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(factorIdsIsSet_) {
        val[utility::conversions::to_string_t("factor_ids")] = ModelBase::toJson(factorIds_);
    }

    return val;
}
bool AssetExportParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("factor_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("factor_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFactorIds(refVal);
        }
    }
    return ok;
}


std::string AssetExportParam::getProjectId() const
{
    return projectId_;
}

void AssetExportParam::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AssetExportParam::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AssetExportParam::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AssetExportParam::getAssetId() const
{
    return assetId_;
}

void AssetExportParam::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool AssetExportParam::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void AssetExportParam::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string AssetExportParam::getParentId() const
{
    return parentId_;
}

void AssetExportParam::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool AssetExportParam::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void AssetExportParam::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::vector<std::string>& AssetExportParam::getFactorIds()
{
    return factorIds_;
}

void AssetExportParam::setFactorIds(const std::vector<std::string>& value)
{
    factorIds_ = value;
    factorIdsIsSet_ = true;
}

bool AssetExportParam::factorIdsIsSet() const
{
    return factorIdsIsSet_;
}

void AssetExportParam::unsetfactorIds()
{
    factorIdsIsSet_ = false;
}

}
}
}
}
}


