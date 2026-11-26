

#include "huaweicloud/modelarts/v1/model/ShowAssetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAssetResponse::ShowAssetResponse()
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

ShowAssetResponse::~ShowAssetResponse() = default;

void ShowAssetResponse::validate()
{
}

web::json::value ShowAssetResponse::toJson() const
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
bool ShowAssetResponse::fromJson(const web::json::value& val)
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


std::string ShowAssetResponse::getAssetId() const
{
    return assetId_;
}

void ShowAssetResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ShowAssetResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ShowAssetResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ShowAssetResponse::getParentAssetId() const
{
    return parentAssetId_;
}

void ShowAssetResponse::setParentAssetId(const std::string& value)
{
    parentAssetId_ = value;
    parentAssetIdIsSet_ = true;
}

bool ShowAssetResponse::parentAssetIdIsSet() const
{
    return parentAssetIdIsSet_;
}

void ShowAssetResponse::unsetparentAssetId()
{
    parentAssetIdIsSet_ = false;
}

std::string ShowAssetResponse::getRootAssetId() const
{
    return rootAssetId_;
}

void ShowAssetResponse::setRootAssetId(const std::string& value)
{
    rootAssetId_ = value;
    rootAssetIdIsSet_ = true;
}

bool ShowAssetResponse::rootAssetIdIsSet() const
{
    return rootAssetIdIsSet_;
}

void ShowAssetResponse::unsetrootAssetId()
{
    rootAssetIdIsSet_ = false;
}

std::string ShowAssetResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowAssetResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowAssetResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowAssetResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ShowAssetResponse::getAssetName() const
{
    return assetName_;
}

void ShowAssetResponse::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool ShowAssetResponse::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void ShowAssetResponse::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::string ShowAssetResponse::getAssetGroupId() const
{
    return assetGroupId_;
}

void ShowAssetResponse::setAssetGroupId(const std::string& value)
{
    assetGroupId_ = value;
    assetGroupIdIsSet_ = true;
}

bool ShowAssetResponse::assetGroupIdIsSet() const
{
    return assetGroupIdIsSet_;
}

void ShowAssetResponse::unsetassetGroupId()
{
    assetGroupIdIsSet_ = false;
}

std::string ShowAssetResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowAssetResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowAssetResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowAssetResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ShowAssetResponse::getAssetType() const
{
    return assetType_;
}

void ShowAssetResponse::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool ShowAssetResponse::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void ShowAssetResponse::unsetassetType()
{
    assetTypeIsSet_ = false;
}

std::string ShowAssetResponse::getSubAssetType() const
{
    return subAssetType_;
}

void ShowAssetResponse::setSubAssetType(const std::string& value)
{
    subAssetType_ = value;
    subAssetTypeIsSet_ = true;
}

bool ShowAssetResponse::subAssetTypeIsSet() const
{
    return subAssetTypeIsSet_;
}

void ShowAssetResponse::unsetsubAssetType()
{
    subAssetTypeIsSet_ = false;
}

std::string ShowAssetResponse::getAssetDesc() const
{
    return assetDesc_;
}

void ShowAssetResponse::setAssetDesc(const std::string& value)
{
    assetDesc_ = value;
    assetDescIsSet_ = true;
}

bool ShowAssetResponse::assetDescIsSet() const
{
    return assetDescIsSet_;
}

void ShowAssetResponse::unsetassetDesc()
{
    assetDescIsSet_ = false;
}

std::string ShowAssetResponse::getAssetCode() const
{
    return assetCode_;
}

void ShowAssetResponse::setAssetCode(const std::string& value)
{
    assetCode_ = value;
    assetCodeIsSet_ = true;
}

bool ShowAssetResponse::assetCodeIsSet() const
{
    return assetCodeIsSet_;
}

void ShowAssetResponse::unsetassetCode()
{
    assetCodeIsSet_ = false;
}

std::string ShowAssetResponse::getAssetVersion() const
{
    return assetVersion_;
}

void ShowAssetResponse::setAssetVersion(const std::string& value)
{
    assetVersion_ = value;
    assetVersionIsSet_ = true;
}

bool ShowAssetResponse::assetVersionIsSet() const
{
    return assetVersionIsSet_;
}

void ShowAssetResponse::unsetassetVersion()
{
    assetVersionIsSet_ = false;
}

std::map<std::string, std::vector<std::string>>& ShowAssetResponse::getTags()
{
    return tags_;
}

void ShowAssetResponse::setTags(const std::map<std::string, std::vector<std::string>>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowAssetResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowAssetResponse::unsettags()
{
    tagsIsSet_ = false;
}

Object ShowAssetResponse::getSupportActions() const
{
    return supportActions_;
}

void ShowAssetResponse::setSupportActions(const Object& value)
{
    supportActions_ = value;
    supportActionsIsSet_ = true;
}

bool ShowAssetResponse::supportActionsIsSet() const
{
    return supportActionsIsSet_;
}

void ShowAssetResponse::unsetsupportActions()
{
    supportActionsIsSet_ = false;
}

std::string ShowAssetResponse::getAssetLocation() const
{
    return assetLocation_;
}

void ShowAssetResponse::setAssetLocation(const std::string& value)
{
    assetLocation_ = value;
    assetLocationIsSet_ = true;
}

bool ShowAssetResponse::assetLocationIsSet() const
{
    return assetLocationIsSet_;
}

void ShowAssetResponse::unsetassetLocation()
{
    assetLocationIsSet_ = false;
}

std::vector<AssetActionRsp>& ShowAssetResponse::getActions()
{
    return actions_;
}

void ShowAssetResponse::setActions(const std::vector<AssetActionRsp>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool ShowAssetResponse::actionsIsSet() const
{
    return actionsIsSet_;
}

void ShowAssetResponse::unsetactions()
{
    actionsIsSet_ = false;
}

std::string ShowAssetResponse::getStatus() const
{
    return status_;
}

void ShowAssetResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAssetResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAssetResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowAssetResponse::getDatasetUsage() const
{
    return datasetUsage_;
}

void ShowAssetResponse::setDatasetUsage(const std::string& value)
{
    datasetUsage_ = value;
    datasetUsageIsSet_ = true;
}

bool ShowAssetResponse::datasetUsageIsSet() const
{
    return datasetUsageIsSet_;
}

void ShowAssetResponse::unsetdatasetUsage()
{
    datasetUsageIsSet_ = false;
}

std::vector<std::string>& ShowAssetResponse::getDatasetFileFormats()
{
    return datasetFileFormats_;
}

void ShowAssetResponse::setDatasetFileFormats(const std::vector<std::string>& value)
{
    datasetFileFormats_ = value;
    datasetFileFormatsIsSet_ = true;
}

bool ShowAssetResponse::datasetFileFormatsIsSet() const
{
    return datasetFileFormatsIsSet_;
}

void ShowAssetResponse::unsetdatasetFileFormats()
{
    datasetFileFormatsIsSet_ = false;
}

std::string ShowAssetResponse::getDatasetType() const
{
    return datasetType_;
}

void ShowAssetResponse::setDatasetType(const std::string& value)
{
    datasetType_ = value;
    datasetTypeIsSet_ = true;
}

bool ShowAssetResponse::datasetTypeIsSet() const
{
    return datasetTypeIsSet_;
}

void ShowAssetResponse::unsetdatasetType()
{
    datasetTypeIsSet_ = false;
}

std::string ShowAssetResponse::getDatasetSubType() const
{
    return datasetSubType_;
}

void ShowAssetResponse::setDatasetSubType(const std::string& value)
{
    datasetSubType_ = value;
    datasetSubTypeIsSet_ = true;
}

bool ShowAssetResponse::datasetSubTypeIsSet() const
{
    return datasetSubTypeIsSet_;
}

void ShowAssetResponse::unsetdatasetSubType()
{
    datasetSubTypeIsSet_ = false;
}

std::string ShowAssetResponse::getDatasetSchemaFormat() const
{
    return datasetSchemaFormat_;
}

void ShowAssetResponse::setDatasetSchemaFormat(const std::string& value)
{
    datasetSchemaFormat_ = value;
    datasetSchemaFormatIsSet_ = true;
}

bool ShowAssetResponse::datasetSchemaFormatIsSet() const
{
    return datasetSchemaFormatIsSet_;
}

void ShowAssetResponse::unsetdatasetSchemaFormat()
{
    datasetSchemaFormatIsSet_ = false;
}

}
}
}
}
}


