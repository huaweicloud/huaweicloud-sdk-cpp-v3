

#include "huaweicloud/modelarts/v1/model/ListAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListAssetRequest::ListAssetRequest()
{
    sortDir_ = "";
    sortDirIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    assetName_ = "";
    assetNameIsSet_ = false;
    assetTypeIsSet_ = false;
    assetSource_ = "";
    assetSourceIsSet_ = false;
    assetSourceType_ = "";
    assetSourceTypeIsSet_ = false;
    assetCode_ = "";
    assetCodeIsSet_ = false;
    assetVersion_ = "";
    assetVersionIsSet_ = false;
    assetGroupId_ = "";
    assetGroupIdIsSet_ = false;
    filterAllVersion_ = false;
    filterAllVersionIsSet_ = false;
    supportActionsIsSet_ = false;
    tagIsSet_ = false;
    isMine_ = false;
    isMineIsSet_ = false;
    withActions_ = false;
    withActionsIsSet_ = false;
    assetSeries_ = "";
    assetSeriesIsSet_ = false;
    assetCapabilitiesIsSet_ = false;
    assetScenesIsSet_ = false;
    rootAssetId_ = "";
    rootAssetIdIsSet_ = false;
    parentAssetId_ = "";
    parentAssetIdIsSet_ = false;
    isDeleted_ = false;
    isDeletedIsSet_ = false;
    assetIdsIsSet_ = false;
    tagMode_ = "";
    tagModeIsSet_ = false;
    datasetUsage_ = "";
    datasetUsageIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    datasetFileFormatsIsSet_ = false;
    datasetType_ = "";
    datasetTypeIsSet_ = false;
    datasetSubType_ = "";
    datasetSubTypeIsSet_ = false;
    datasetSchemaFormat_ = "";
    datasetSchemaFormatIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    dataSourceId_ = "";
    dataSourceIdIsSet_ = false;
}

ListAssetRequest::~ListAssetRequest() = default;

void ListAssetRequest::validate()
{
}

web::json::value ListAssetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
    }
    if(assetTypeIsSet_) {
        val[utility::conversions::to_string_t("asset_type")] = ModelBase::toJson(assetType_);
    }
    if(assetSourceIsSet_) {
        val[utility::conversions::to_string_t("asset_source")] = ModelBase::toJson(assetSource_);
    }
    if(assetSourceTypeIsSet_) {
        val[utility::conversions::to_string_t("asset_source_type")] = ModelBase::toJson(assetSourceType_);
    }
    if(assetCodeIsSet_) {
        val[utility::conversions::to_string_t("asset_code")] = ModelBase::toJson(assetCode_);
    }
    if(assetVersionIsSet_) {
        val[utility::conversions::to_string_t("asset_version")] = ModelBase::toJson(assetVersion_);
    }
    if(assetGroupIdIsSet_) {
        val[utility::conversions::to_string_t("asset_group_id")] = ModelBase::toJson(assetGroupId_);
    }
    if(filterAllVersionIsSet_) {
        val[utility::conversions::to_string_t("filter_all_version")] = ModelBase::toJson(filterAllVersion_);
    }
    if(supportActionsIsSet_) {
        val[utility::conversions::to_string_t("support_actions")] = ModelBase::toJson(supportActions_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(isMineIsSet_) {
        val[utility::conversions::to_string_t("is_mine")] = ModelBase::toJson(isMine_);
    }
    if(withActionsIsSet_) {
        val[utility::conversions::to_string_t("with_actions")] = ModelBase::toJson(withActions_);
    }
    if(assetSeriesIsSet_) {
        val[utility::conversions::to_string_t("asset_series")] = ModelBase::toJson(assetSeries_);
    }
    if(assetCapabilitiesIsSet_) {
        val[utility::conversions::to_string_t("asset_capabilities")] = ModelBase::toJson(assetCapabilities_);
    }
    if(assetScenesIsSet_) {
        val[utility::conversions::to_string_t("asset_scenes")] = ModelBase::toJson(assetScenes_);
    }
    if(rootAssetIdIsSet_) {
        val[utility::conversions::to_string_t("root_asset_id")] = ModelBase::toJson(rootAssetId_);
    }
    if(parentAssetIdIsSet_) {
        val[utility::conversions::to_string_t("parent_asset_id")] = ModelBase::toJson(parentAssetId_);
    }
    if(isDeletedIsSet_) {
        val[utility::conversions::to_string_t("is_deleted")] = ModelBase::toJson(isDeleted_);
    }
    if(assetIdsIsSet_) {
        val[utility::conversions::to_string_t("asset_ids")] = ModelBase::toJson(assetIds_);
    }
    if(tagModeIsSet_) {
        val[utility::conversions::to_string_t("tag_mode")] = ModelBase::toJson(tagMode_);
    }
    if(datasetUsageIsSet_) {
        val[utility::conversions::to_string_t("dataset_usage")] = ModelBase::toJson(datasetUsage_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
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
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(dataSourceIdIsSet_) {
        val[utility::conversions::to_string_t("data_source_id")] = ModelBase::toJson(dataSourceId_);
    }

    return val;
}
bool ListAssetRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("asset_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetSourceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("asset_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter_all_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_all_version"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterAllVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_actions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_mine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_mine"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("with_actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("with_actions"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWithActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_series"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_series"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetSeries(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_capabilities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_capabilities"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetCapabilities(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_scenes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_scenes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetScenes(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_deleted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_source_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_source_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataSourceId(refVal);
        }
    }
    return ok;
}


std::string ListAssetRequest::getSortDir() const
{
    return sortDir_;
}

void ListAssetRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListAssetRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListAssetRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListAssetRequest::getSortKey() const
{
    return sortKey_;
}

void ListAssetRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListAssetRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListAssetRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

int32_t ListAssetRequest::getLimit() const
{
    return limit_;
}

void ListAssetRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAssetRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAssetRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAssetRequest::getOffset() const
{
    return offset_;
}

void ListAssetRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAssetRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAssetRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAssetRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListAssetRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListAssetRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListAssetRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ListAssetRequest::getAssetName() const
{
    return assetName_;
}

void ListAssetRequest::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool ListAssetRequest::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void ListAssetRequest::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::vector<std::string>& ListAssetRequest::getAssetType()
{
    return assetType_;
}

void ListAssetRequest::setAssetType(const std::vector<std::string>& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool ListAssetRequest::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void ListAssetRequest::unsetassetType()
{
    assetTypeIsSet_ = false;
}

std::string ListAssetRequest::getAssetSource() const
{
    return assetSource_;
}

void ListAssetRequest::setAssetSource(const std::string& value)
{
    assetSource_ = value;
    assetSourceIsSet_ = true;
}

bool ListAssetRequest::assetSourceIsSet() const
{
    return assetSourceIsSet_;
}

void ListAssetRequest::unsetassetSource()
{
    assetSourceIsSet_ = false;
}

std::string ListAssetRequest::getAssetSourceType() const
{
    return assetSourceType_;
}

void ListAssetRequest::setAssetSourceType(const std::string& value)
{
    assetSourceType_ = value;
    assetSourceTypeIsSet_ = true;
}

bool ListAssetRequest::assetSourceTypeIsSet() const
{
    return assetSourceTypeIsSet_;
}

void ListAssetRequest::unsetassetSourceType()
{
    assetSourceTypeIsSet_ = false;
}

std::string ListAssetRequest::getAssetCode() const
{
    return assetCode_;
}

void ListAssetRequest::setAssetCode(const std::string& value)
{
    assetCode_ = value;
    assetCodeIsSet_ = true;
}

bool ListAssetRequest::assetCodeIsSet() const
{
    return assetCodeIsSet_;
}

void ListAssetRequest::unsetassetCode()
{
    assetCodeIsSet_ = false;
}

std::string ListAssetRequest::getAssetVersion() const
{
    return assetVersion_;
}

void ListAssetRequest::setAssetVersion(const std::string& value)
{
    assetVersion_ = value;
    assetVersionIsSet_ = true;
}

bool ListAssetRequest::assetVersionIsSet() const
{
    return assetVersionIsSet_;
}

void ListAssetRequest::unsetassetVersion()
{
    assetVersionIsSet_ = false;
}

std::string ListAssetRequest::getAssetGroupId() const
{
    return assetGroupId_;
}

void ListAssetRequest::setAssetGroupId(const std::string& value)
{
    assetGroupId_ = value;
    assetGroupIdIsSet_ = true;
}

bool ListAssetRequest::assetGroupIdIsSet() const
{
    return assetGroupIdIsSet_;
}

void ListAssetRequest::unsetassetGroupId()
{
    assetGroupIdIsSet_ = false;
}

bool ListAssetRequest::isFilterAllVersion() const
{
    return filterAllVersion_;
}

void ListAssetRequest::setFilterAllVersion(bool value)
{
    filterAllVersion_ = value;
    filterAllVersionIsSet_ = true;
}

bool ListAssetRequest::filterAllVersionIsSet() const
{
    return filterAllVersionIsSet_;
}

void ListAssetRequest::unsetfilterAllVersion()
{
    filterAllVersionIsSet_ = false;
}

std::vector<std::string>& ListAssetRequest::getSupportActions()
{
    return supportActions_;
}

void ListAssetRequest::setSupportActions(const std::vector<std::string>& value)
{
    supportActions_ = value;
    supportActionsIsSet_ = true;
}

bool ListAssetRequest::supportActionsIsSet() const
{
    return supportActionsIsSet_;
}

void ListAssetRequest::unsetsupportActions()
{
    supportActionsIsSet_ = false;
}

std::vector<std::string>& ListAssetRequest::getTag()
{
    return tag_;
}

void ListAssetRequest::setTag(const std::vector<std::string>& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ListAssetRequest::tagIsSet() const
{
    return tagIsSet_;
}

void ListAssetRequest::unsettag()
{
    tagIsSet_ = false;
}

bool ListAssetRequest::isIsMine() const
{
    return isMine_;
}

void ListAssetRequest::setIsMine(bool value)
{
    isMine_ = value;
    isMineIsSet_ = true;
}

bool ListAssetRequest::isMineIsSet() const
{
    return isMineIsSet_;
}

void ListAssetRequest::unsetisMine()
{
    isMineIsSet_ = false;
}

bool ListAssetRequest::isWithActions() const
{
    return withActions_;
}

void ListAssetRequest::setWithActions(bool value)
{
    withActions_ = value;
    withActionsIsSet_ = true;
}

bool ListAssetRequest::withActionsIsSet() const
{
    return withActionsIsSet_;
}

void ListAssetRequest::unsetwithActions()
{
    withActionsIsSet_ = false;
}

std::string ListAssetRequest::getAssetSeries() const
{
    return assetSeries_;
}

void ListAssetRequest::setAssetSeries(const std::string& value)
{
    assetSeries_ = value;
    assetSeriesIsSet_ = true;
}

bool ListAssetRequest::assetSeriesIsSet() const
{
    return assetSeriesIsSet_;
}

void ListAssetRequest::unsetassetSeries()
{
    assetSeriesIsSet_ = false;
}

std::vector<std::string>& ListAssetRequest::getAssetCapabilities()
{
    return assetCapabilities_;
}

void ListAssetRequest::setAssetCapabilities(const std::vector<std::string>& value)
{
    assetCapabilities_ = value;
    assetCapabilitiesIsSet_ = true;
}

bool ListAssetRequest::assetCapabilitiesIsSet() const
{
    return assetCapabilitiesIsSet_;
}

void ListAssetRequest::unsetassetCapabilities()
{
    assetCapabilitiesIsSet_ = false;
}

std::vector<std::string>& ListAssetRequest::getAssetScenes()
{
    return assetScenes_;
}

void ListAssetRequest::setAssetScenes(const std::vector<std::string>& value)
{
    assetScenes_ = value;
    assetScenesIsSet_ = true;
}

bool ListAssetRequest::assetScenesIsSet() const
{
    return assetScenesIsSet_;
}

void ListAssetRequest::unsetassetScenes()
{
    assetScenesIsSet_ = false;
}

std::string ListAssetRequest::getRootAssetId() const
{
    return rootAssetId_;
}

void ListAssetRequest::setRootAssetId(const std::string& value)
{
    rootAssetId_ = value;
    rootAssetIdIsSet_ = true;
}

bool ListAssetRequest::rootAssetIdIsSet() const
{
    return rootAssetIdIsSet_;
}

void ListAssetRequest::unsetrootAssetId()
{
    rootAssetIdIsSet_ = false;
}

std::string ListAssetRequest::getParentAssetId() const
{
    return parentAssetId_;
}

void ListAssetRequest::setParentAssetId(const std::string& value)
{
    parentAssetId_ = value;
    parentAssetIdIsSet_ = true;
}

bool ListAssetRequest::parentAssetIdIsSet() const
{
    return parentAssetIdIsSet_;
}

void ListAssetRequest::unsetparentAssetId()
{
    parentAssetIdIsSet_ = false;
}

bool ListAssetRequest::isIsDeleted() const
{
    return isDeleted_;
}

void ListAssetRequest::setIsDeleted(bool value)
{
    isDeleted_ = value;
    isDeletedIsSet_ = true;
}

bool ListAssetRequest::isDeletedIsSet() const
{
    return isDeletedIsSet_;
}

void ListAssetRequest::unsetisDeleted()
{
    isDeletedIsSet_ = false;
}

std::vector<std::string>& ListAssetRequest::getAssetIds()
{
    return assetIds_;
}

void ListAssetRequest::setAssetIds(const std::vector<std::string>& value)
{
    assetIds_ = value;
    assetIdsIsSet_ = true;
}

bool ListAssetRequest::assetIdsIsSet() const
{
    return assetIdsIsSet_;
}

void ListAssetRequest::unsetassetIds()
{
    assetIdsIsSet_ = false;
}

std::string ListAssetRequest::getTagMode() const
{
    return tagMode_;
}

void ListAssetRequest::setTagMode(const std::string& value)
{
    tagMode_ = value;
    tagModeIsSet_ = true;
}

bool ListAssetRequest::tagModeIsSet() const
{
    return tagModeIsSet_;
}

void ListAssetRequest::unsettagMode()
{
    tagModeIsSet_ = false;
}

std::string ListAssetRequest::getDatasetUsage() const
{
    return datasetUsage_;
}

void ListAssetRequest::setDatasetUsage(const std::string& value)
{
    datasetUsage_ = value;
    datasetUsageIsSet_ = true;
}

bool ListAssetRequest::datasetUsageIsSet() const
{
    return datasetUsageIsSet_;
}

void ListAssetRequest::unsetdatasetUsage()
{
    datasetUsageIsSet_ = false;
}

std::string ListAssetRequest::getStatus() const
{
    return status_;
}

void ListAssetRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAssetRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAssetRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ListAssetRequest::getDatasetFileFormats()
{
    return datasetFileFormats_;
}

void ListAssetRequest::setDatasetFileFormats(const std::vector<std::string>& value)
{
    datasetFileFormats_ = value;
    datasetFileFormatsIsSet_ = true;
}

bool ListAssetRequest::datasetFileFormatsIsSet() const
{
    return datasetFileFormatsIsSet_;
}

void ListAssetRequest::unsetdatasetFileFormats()
{
    datasetFileFormatsIsSet_ = false;
}

std::string ListAssetRequest::getDatasetType() const
{
    return datasetType_;
}

void ListAssetRequest::setDatasetType(const std::string& value)
{
    datasetType_ = value;
    datasetTypeIsSet_ = true;
}

bool ListAssetRequest::datasetTypeIsSet() const
{
    return datasetTypeIsSet_;
}

void ListAssetRequest::unsetdatasetType()
{
    datasetTypeIsSet_ = false;
}

std::string ListAssetRequest::getDatasetSubType() const
{
    return datasetSubType_;
}

void ListAssetRequest::setDatasetSubType(const std::string& value)
{
    datasetSubType_ = value;
    datasetSubTypeIsSet_ = true;
}

bool ListAssetRequest::datasetSubTypeIsSet() const
{
    return datasetSubTypeIsSet_;
}

void ListAssetRequest::unsetdatasetSubType()
{
    datasetSubTypeIsSet_ = false;
}

std::string ListAssetRequest::getDatasetSchemaFormat() const
{
    return datasetSchemaFormat_;
}

void ListAssetRequest::setDatasetSchemaFormat(const std::string& value)
{
    datasetSchemaFormat_ = value;
    datasetSchemaFormatIsSet_ = true;
}

bool ListAssetRequest::datasetSchemaFormatIsSet() const
{
    return datasetSchemaFormatIsSet_;
}

void ListAssetRequest::unsetdatasetSchemaFormat()
{
    datasetSchemaFormatIsSet_ = false;
}

std::string ListAssetRequest::getCreator() const
{
    return creator_;
}

void ListAssetRequest::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ListAssetRequest::creatorIsSet() const
{
    return creatorIsSet_;
}

void ListAssetRequest::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string ListAssetRequest::getDataSourceId() const
{
    return dataSourceId_;
}

void ListAssetRequest::setDataSourceId(const std::string& value)
{
    dataSourceId_ = value;
    dataSourceIdIsSet_ = true;
}

bool ListAssetRequest::dataSourceIdIsSet() const
{
    return dataSourceIdIsSet_;
}

void ListAssetRequest::unsetdataSourceId()
{
    dataSourceIdIsSet_ = false;
}

}
}
}
}
}


