

#include "huaweicloud/modelarts/v1/model/AssetDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AssetDetail::AssetDetail()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    parentAssetId_ = "";
    parentAssetIdIsSet_ = false;
    rootAssetId_ = "";
    rootAssetIdIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    assetName_ = "";
    assetNameIsSet_ = false;
    assetGroupId_ = "";
    assetGroupIdIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    assetType_ = "";
    assetTypeIsSet_ = false;
    subAssetType_ = "";
    subAssetTypeIsSet_ = false;
    assetDesc_ = "";
    assetDescIsSet_ = false;
    assetCode_ = "";
    assetCodeIsSet_ = false;
    assetVersion_ = "";
    assetVersionIsSet_ = false;
    tagsIsSet_ = false;
    supportActionsIsSet_ = false;
    assetLocation_ = "";
    assetLocationIsSet_ = false;
    actionsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    datasetUsage_ = "";
    datasetUsageIsSet_ = false;
    datasetFileFormatsIsSet_ = false;
    datasetType_ = "";
    datasetTypeIsSet_ = false;
    datasetSubType_ = "";
    datasetSubTypeIsSet_ = false;
    datasetSchemaFormat_ = "";
    datasetSchemaFormatIsSet_ = false;
}

AssetDetail::~AssetDetail() = default;

void AssetDetail::validate()
{
}

web::json::value AssetDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(parentAssetIdIsSet_) {
        val[utility::conversions::to_string_t("parent_asset_id")] = ModelBase::toJson(parentAssetId_);
    }
    if(rootAssetIdIsSet_) {
        val[utility::conversions::to_string_t("root_asset_id")] = ModelBase::toJson(rootAssetId_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("api_version")] = ModelBase::toJson(apiVersion_);
    }
    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
    }
    if(assetGroupIdIsSet_) {
        val[utility::conversions::to_string_t("asset_group_id")] = ModelBase::toJson(assetGroupId_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(assetTypeIsSet_) {
        val[utility::conversions::to_string_t("asset_type")] = ModelBase::toJson(assetType_);
    }
    if(subAssetTypeIsSet_) {
        val[utility::conversions::to_string_t("sub_asset_type")] = ModelBase::toJson(subAssetType_);
    }
    if(assetDescIsSet_) {
        val[utility::conversions::to_string_t("asset_desc")] = ModelBase::toJson(assetDesc_);
    }
    if(assetCodeIsSet_) {
        val[utility::conversions::to_string_t("asset_code")] = ModelBase::toJson(assetCode_);
    }
    if(assetVersionIsSet_) {
        val[utility::conversions::to_string_t("asset_version")] = ModelBase::toJson(assetVersion_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(supportActionsIsSet_) {
        val[utility::conversions::to_string_t("support_actions")] = ModelBase::toJson(supportActions_);
    }
    if(assetLocationIsSet_) {
        val[utility::conversions::to_string_t("asset_location")] = ModelBase::toJson(assetLocation_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(datasetUsageIsSet_) {
        val[utility::conversions::to_string_t("dataset_usage")] = ModelBase::toJson(datasetUsage_);
    }
    if(datasetFileFormatsIsSet_) {
        val[utility::conversions::to_string_t("dataset_file_formats")] = ModelBase::toJson(datasetFileFormats_);
    }
    if(datasetTypeIsSet_) {
        val[utility::conversions::to_string_t("dataset_type")] = ModelBase::toJson(datasetType_);
    }
    if(datasetSubTypeIsSet_) {
        val[utility::conversions::to_string_t("dataset_sub_type")] = ModelBase::toJson(datasetSubType_);
    }
    if(datasetSchemaFormatIsSet_) {
        val[utility::conversions::to_string_t("dataset_schema_format")] = ModelBase::toJson(datasetSchemaFormat_);
    }

    return val;
}
bool AssetDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("parent_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("root_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("api_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("api_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sub_asset_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_asset_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubAssetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetDesc(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::vector<std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_actions"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<AssetActionRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataset_usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_usage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetUsage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataset_file_formats"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_file_formats"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetFileFormats(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataset_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataset_sub_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_sub_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetSubType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataset_schema_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_schema_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetSchemaFormat(refVal);
        }
    }
    return ok;
}


std::string AssetDetail::getAssetId() const
{
    return assetId_;
}

void AssetDetail::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool AssetDetail::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void AssetDetail::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string AssetDetail::getParentAssetId() const
{
    return parentAssetId_;
}

void AssetDetail::setParentAssetId(const std::string& value)
{
    parentAssetId_ = value;
    parentAssetIdIsSet_ = true;
}

bool AssetDetail::parentAssetIdIsSet() const
{
    return parentAssetIdIsSet_;
}

void AssetDetail::unsetparentAssetId()
{
    parentAssetIdIsSet_ = false;
}

std::string AssetDetail::getRootAssetId() const
{
    return rootAssetId_;
}

void AssetDetail::setRootAssetId(const std::string& value)
{
    rootAssetId_ = value;
    rootAssetIdIsSet_ = true;
}

bool AssetDetail::rootAssetIdIsSet() const
{
    return rootAssetIdIsSet_;
}

void AssetDetail::unsetrootAssetId()
{
    rootAssetIdIsSet_ = false;
}

std::string AssetDetail::getApiVersion() const
{
    return apiVersion_;
}

void AssetDetail::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool AssetDetail::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void AssetDetail::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string AssetDetail::getAssetName() const
{
    return assetName_;
}

void AssetDetail::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool AssetDetail::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void AssetDetail::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::string AssetDetail::getAssetGroupId() const
{
    return assetGroupId_;
}

void AssetDetail::setAssetGroupId(const std::string& value)
{
    assetGroupId_ = value;
    assetGroupIdIsSet_ = true;
}

bool AssetDetail::assetGroupIdIsSet() const
{
    return assetGroupIdIsSet_;
}

void AssetDetail::unsetassetGroupId()
{
    assetGroupIdIsSet_ = false;
}

std::string AssetDetail::getWorkspaceId() const
{
    return workspaceId_;
}

void AssetDetail::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool AssetDetail::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void AssetDetail::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string AssetDetail::getAssetType() const
{
    return assetType_;
}

void AssetDetail::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool AssetDetail::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void AssetDetail::unsetassetType()
{
    assetTypeIsSet_ = false;
}

std::string AssetDetail::getSubAssetType() const
{
    return subAssetType_;
}

void AssetDetail::setSubAssetType(const std::string& value)
{
    subAssetType_ = value;
    subAssetTypeIsSet_ = true;
}

bool AssetDetail::subAssetTypeIsSet() const
{
    return subAssetTypeIsSet_;
}

void AssetDetail::unsetsubAssetType()
{
    subAssetTypeIsSet_ = false;
}

std::string AssetDetail::getAssetDesc() const
{
    return assetDesc_;
}

void AssetDetail::setAssetDesc(const std::string& value)
{
    assetDesc_ = value;
    assetDescIsSet_ = true;
}

bool AssetDetail::assetDescIsSet() const
{
    return assetDescIsSet_;
}

void AssetDetail::unsetassetDesc()
{
    assetDescIsSet_ = false;
}

std::string AssetDetail::getAssetCode() const
{
    return assetCode_;
}

void AssetDetail::setAssetCode(const std::string& value)
{
    assetCode_ = value;
    assetCodeIsSet_ = true;
}

bool AssetDetail::assetCodeIsSet() const
{
    return assetCodeIsSet_;
}

void AssetDetail::unsetassetCode()
{
    assetCodeIsSet_ = false;
}

std::string AssetDetail::getAssetVersion() const
{
    return assetVersion_;
}

void AssetDetail::setAssetVersion(const std::string& value)
{
    assetVersion_ = value;
    assetVersionIsSet_ = true;
}

bool AssetDetail::assetVersionIsSet() const
{
    return assetVersionIsSet_;
}

void AssetDetail::unsetassetVersion()
{
    assetVersionIsSet_ = false;
}

std::map<std::string, std::vector<std::string>>& AssetDetail::getTags()
{
    return tags_;
}

void AssetDetail::setTags(const std::map<std::string, std::vector<std::string>>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool AssetDetail::tagsIsSet() const
{
    return tagsIsSet_;
}

void AssetDetail::unsettags()
{
    tagsIsSet_ = false;
}

Object AssetDetail::getSupportActions() const
{
    return supportActions_;
}

void AssetDetail::setSupportActions(const Object& value)
{
    supportActions_ = value;
    supportActionsIsSet_ = true;
}

bool AssetDetail::supportActionsIsSet() const
{
    return supportActionsIsSet_;
}

void AssetDetail::unsetsupportActions()
{
    supportActionsIsSet_ = false;
}

std::string AssetDetail::getAssetLocation() const
{
    return assetLocation_;
}

void AssetDetail::setAssetLocation(const std::string& value)
{
    assetLocation_ = value;
    assetLocationIsSet_ = true;
}

bool AssetDetail::assetLocationIsSet() const
{
    return assetLocationIsSet_;
}

void AssetDetail::unsetassetLocation()
{
    assetLocationIsSet_ = false;
}

std::vector<AssetActionRsp>& AssetDetail::getActions()
{
    return actions_;
}

void AssetDetail::setActions(const std::vector<AssetActionRsp>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool AssetDetail::actionsIsSet() const
{
    return actionsIsSet_;
}

void AssetDetail::unsetactions()
{
    actionsIsSet_ = false;
}

std::string AssetDetail::getStatus() const
{
    return status_;
}

void AssetDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AssetDetail::statusIsSet() const
{
    return statusIsSet_;
}

void AssetDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AssetDetail::getDatasetUsage() const
{
    return datasetUsage_;
}

void AssetDetail::setDatasetUsage(const std::string& value)
{
    datasetUsage_ = value;
    datasetUsageIsSet_ = true;
}

bool AssetDetail::datasetUsageIsSet() const
{
    return datasetUsageIsSet_;
}

void AssetDetail::unsetdatasetUsage()
{
    datasetUsageIsSet_ = false;
}

std::vector<std::string>& AssetDetail::getDatasetFileFormats()
{
    return datasetFileFormats_;
}

void AssetDetail::setDatasetFileFormats(const std::vector<std::string>& value)
{
    datasetFileFormats_ = value;
    datasetFileFormatsIsSet_ = true;
}

bool AssetDetail::datasetFileFormatsIsSet() const
{
    return datasetFileFormatsIsSet_;
}

void AssetDetail::unsetdatasetFileFormats()
{
    datasetFileFormatsIsSet_ = false;
}

std::string AssetDetail::getDatasetType() const
{
    return datasetType_;
}

void AssetDetail::setDatasetType(const std::string& value)
{
    datasetType_ = value;
    datasetTypeIsSet_ = true;
}

bool AssetDetail::datasetTypeIsSet() const
{
    return datasetTypeIsSet_;
}

void AssetDetail::unsetdatasetType()
{
    datasetTypeIsSet_ = false;
}

std::string AssetDetail::getDatasetSubType() const
{
    return datasetSubType_;
}

void AssetDetail::setDatasetSubType(const std::string& value)
{
    datasetSubType_ = value;
    datasetSubTypeIsSet_ = true;
}

bool AssetDetail::datasetSubTypeIsSet() const
{
    return datasetSubTypeIsSet_;
}

void AssetDetail::unsetdatasetSubType()
{
    datasetSubTypeIsSet_ = false;
}

std::string AssetDetail::getDatasetSchemaFormat() const
{
    return datasetSchemaFormat_;
}

void AssetDetail::setDatasetSchemaFormat(const std::string& value)
{
    datasetSchemaFormat_ = value;
    datasetSchemaFormatIsSet_ = true;
}

bool AssetDetail::datasetSchemaFormatIsSet() const
{
    return datasetSchemaFormatIsSet_;
}

void AssetDetail::unsetdatasetSchemaFormat()
{
    datasetSchemaFormatIsSet_ = false;
}

}
}
}
}
}


