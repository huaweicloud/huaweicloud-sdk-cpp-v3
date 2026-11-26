

#include "huaweicloud/modelarts/v1/model/CreateAssetReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateAssetReq::CreateAssetReq()
{
    parentAssetId_ = "";
    parentAssetIdIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    assetName_ = "";
    assetNameIsSet_ = false;
    assetSource_ = "";
    assetSourceIsSet_ = false;
    assetSourceType_ = "";
    assetSourceTypeIsSet_ = false;
    assetCode_ = "";
    assetCodeIsSet_ = false;
    assetDesc_ = "";
    assetDescIsSet_ = false;
    assetGroupDesc_ = "";
    assetGroupDescIsSet_ = false;
    assetVersion_ = "";
    assetVersionIsSet_ = false;
    supportActionsIsSet_ = false;
    assetLocation_ = "";
    assetLocationIsSet_ = false;
    assetType_ = "";
    assetTypeIsSet_ = false;
    assetGroupId_ = "";
    assetGroupIdIsSet_ = false;
    assetSeries_ = "";
    assetSeriesIsSet_ = false;
    assetCapabilitiesIsSet_ = false;
    actionsIsSet_ = false;
    sourceOperation_ = "";
    sourceOperationIsSet_ = false;
    sourceJobName_ = "";
    sourceJobNameIsSet_ = false;
    sourceJobId_ = "";
    sourceJobIdIsSet_ = false;
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
    importFileSource_ = "";
    importFileSourceIsSet_ = false;
    dataSourceId_ = "";
    dataSourceIdIsSet_ = false;
}

CreateAssetReq::~CreateAssetReq() = default;

void CreateAssetReq::validate()
{
}

web::json::value CreateAssetReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parentAssetIdIsSet_) {
        val[utility::conversions::to_string_t("parent_asset_id")] = ModelBase::toJson(parentAssetId_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("api_version")] = ModelBase::toJson(apiVersion_);
    }
    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
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
    if(assetDescIsSet_) {
        val[utility::conversions::to_string_t("asset_desc")] = ModelBase::toJson(assetDesc_);
    }
    if(assetGroupDescIsSet_) {
        val[utility::conversions::to_string_t("asset_group_desc")] = ModelBase::toJson(assetGroupDesc_);
    }
    if(assetVersionIsSet_) {
        val[utility::conversions::to_string_t("asset_version")] = ModelBase::toJson(assetVersion_);
    }
    if(supportActionsIsSet_) {
        val[utility::conversions::to_string_t("support_actions")] = ModelBase::toJson(supportActions_);
    }
    if(assetLocationIsSet_) {
        val[utility::conversions::to_string_t("asset_location")] = ModelBase::toJson(assetLocation_);
    }
    if(assetTypeIsSet_) {
        val[utility::conversions::to_string_t("asset_type")] = ModelBase::toJson(assetType_);
    }
    if(assetGroupIdIsSet_) {
        val[utility::conversions::to_string_t("asset_group_id")] = ModelBase::toJson(assetGroupId_);
    }
    if(assetSeriesIsSet_) {
        val[utility::conversions::to_string_t("asset_series")] = ModelBase::toJson(assetSeries_);
    }
    if(assetCapabilitiesIsSet_) {
        val[utility::conversions::to_string_t("asset_capabilities")] = ModelBase::toJson(assetCapabilities_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(sourceOperationIsSet_) {
        val[utility::conversions::to_string_t("source_operation")] = ModelBase::toJson(sourceOperation_);
    }
    if(sourceJobNameIsSet_) {
        val[utility::conversions::to_string_t("source_job_name")] = ModelBase::toJson(sourceJobName_);
    }
    if(sourceJobIdIsSet_) {
        val[utility::conversions::to_string_t("source_job_id")] = ModelBase::toJson(sourceJobId_);
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
    if(importFileSourceIsSet_) {
        val[utility::conversions::to_string_t("import_file_source")] = ModelBase::toJson(importFileSource_);
    }
    if(dataSourceIdIsSet_) {
        val[utility::conversions::to_string_t("data_source_id")] = ModelBase::toJson(dataSourceId_);
    }

    return val;
}
bool CreateAssetReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parent_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentAssetId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("asset_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_group_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_group_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetGroupDesc(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("support_actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_actions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("asset_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<AssetActionReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_operation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_operation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceOperation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceJobName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("import_file_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("import_file_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportFileSource(refVal);
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


std::string CreateAssetReq::getParentAssetId() const
{
    return parentAssetId_;
}

void CreateAssetReq::setParentAssetId(const std::string& value)
{
    parentAssetId_ = value;
    parentAssetIdIsSet_ = true;
}

bool CreateAssetReq::parentAssetIdIsSet() const
{
    return parentAssetIdIsSet_;
}

void CreateAssetReq::unsetparentAssetId()
{
    parentAssetIdIsSet_ = false;
}

std::string CreateAssetReq::getApiVersion() const
{
    return apiVersion_;
}

void CreateAssetReq::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreateAssetReq::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreateAssetReq::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string CreateAssetReq::getAssetName() const
{
    return assetName_;
}

void CreateAssetReq::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool CreateAssetReq::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void CreateAssetReq::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::string CreateAssetReq::getAssetSource() const
{
    return assetSource_;
}

void CreateAssetReq::setAssetSource(const std::string& value)
{
    assetSource_ = value;
    assetSourceIsSet_ = true;
}

bool CreateAssetReq::assetSourceIsSet() const
{
    return assetSourceIsSet_;
}

void CreateAssetReq::unsetassetSource()
{
    assetSourceIsSet_ = false;
}

std::string CreateAssetReq::getAssetSourceType() const
{
    return assetSourceType_;
}

void CreateAssetReq::setAssetSourceType(const std::string& value)
{
    assetSourceType_ = value;
    assetSourceTypeIsSet_ = true;
}

bool CreateAssetReq::assetSourceTypeIsSet() const
{
    return assetSourceTypeIsSet_;
}

void CreateAssetReq::unsetassetSourceType()
{
    assetSourceTypeIsSet_ = false;
}

std::string CreateAssetReq::getAssetCode() const
{
    return assetCode_;
}

void CreateAssetReq::setAssetCode(const std::string& value)
{
    assetCode_ = value;
    assetCodeIsSet_ = true;
}

bool CreateAssetReq::assetCodeIsSet() const
{
    return assetCodeIsSet_;
}

void CreateAssetReq::unsetassetCode()
{
    assetCodeIsSet_ = false;
}

std::string CreateAssetReq::getAssetDesc() const
{
    return assetDesc_;
}

void CreateAssetReq::setAssetDesc(const std::string& value)
{
    assetDesc_ = value;
    assetDescIsSet_ = true;
}

bool CreateAssetReq::assetDescIsSet() const
{
    return assetDescIsSet_;
}

void CreateAssetReq::unsetassetDesc()
{
    assetDescIsSet_ = false;
}

std::string CreateAssetReq::getAssetGroupDesc() const
{
    return assetGroupDesc_;
}

void CreateAssetReq::setAssetGroupDesc(const std::string& value)
{
    assetGroupDesc_ = value;
    assetGroupDescIsSet_ = true;
}

bool CreateAssetReq::assetGroupDescIsSet() const
{
    return assetGroupDescIsSet_;
}

void CreateAssetReq::unsetassetGroupDesc()
{
    assetGroupDescIsSet_ = false;
}

std::string CreateAssetReq::getAssetVersion() const
{
    return assetVersion_;
}

void CreateAssetReq::setAssetVersion(const std::string& value)
{
    assetVersion_ = value;
    assetVersionIsSet_ = true;
}

bool CreateAssetReq::assetVersionIsSet() const
{
    return assetVersionIsSet_;
}

void CreateAssetReq::unsetassetVersion()
{
    assetVersionIsSet_ = false;
}

std::vector<std::string>& CreateAssetReq::getSupportActions()
{
    return supportActions_;
}

void CreateAssetReq::setSupportActions(const std::vector<std::string>& value)
{
    supportActions_ = value;
    supportActionsIsSet_ = true;
}

bool CreateAssetReq::supportActionsIsSet() const
{
    return supportActionsIsSet_;
}

void CreateAssetReq::unsetsupportActions()
{
    supportActionsIsSet_ = false;
}

std::string CreateAssetReq::getAssetLocation() const
{
    return assetLocation_;
}

void CreateAssetReq::setAssetLocation(const std::string& value)
{
    assetLocation_ = value;
    assetLocationIsSet_ = true;
}

bool CreateAssetReq::assetLocationIsSet() const
{
    return assetLocationIsSet_;
}

void CreateAssetReq::unsetassetLocation()
{
    assetLocationIsSet_ = false;
}

std::string CreateAssetReq::getAssetType() const
{
    return assetType_;
}

void CreateAssetReq::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool CreateAssetReq::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void CreateAssetReq::unsetassetType()
{
    assetTypeIsSet_ = false;
}

std::string CreateAssetReq::getAssetGroupId() const
{
    return assetGroupId_;
}

void CreateAssetReq::setAssetGroupId(const std::string& value)
{
    assetGroupId_ = value;
    assetGroupIdIsSet_ = true;
}

bool CreateAssetReq::assetGroupIdIsSet() const
{
    return assetGroupIdIsSet_;
}

void CreateAssetReq::unsetassetGroupId()
{
    assetGroupIdIsSet_ = false;
}

std::string CreateAssetReq::getAssetSeries() const
{
    return assetSeries_;
}

void CreateAssetReq::setAssetSeries(const std::string& value)
{
    assetSeries_ = value;
    assetSeriesIsSet_ = true;
}

bool CreateAssetReq::assetSeriesIsSet() const
{
    return assetSeriesIsSet_;
}

void CreateAssetReq::unsetassetSeries()
{
    assetSeriesIsSet_ = false;
}

std::vector<std::string>& CreateAssetReq::getAssetCapabilities()
{
    return assetCapabilities_;
}

void CreateAssetReq::setAssetCapabilities(const std::vector<std::string>& value)
{
    assetCapabilities_ = value;
    assetCapabilitiesIsSet_ = true;
}

bool CreateAssetReq::assetCapabilitiesIsSet() const
{
    return assetCapabilitiesIsSet_;
}

void CreateAssetReq::unsetassetCapabilities()
{
    assetCapabilitiesIsSet_ = false;
}

std::vector<AssetActionReq>& CreateAssetReq::getActions()
{
    return actions_;
}

void CreateAssetReq::setActions(const std::vector<AssetActionReq>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool CreateAssetReq::actionsIsSet() const
{
    return actionsIsSet_;
}

void CreateAssetReq::unsetactions()
{
    actionsIsSet_ = false;
}

std::string CreateAssetReq::getSourceOperation() const
{
    return sourceOperation_;
}

void CreateAssetReq::setSourceOperation(const std::string& value)
{
    sourceOperation_ = value;
    sourceOperationIsSet_ = true;
}

bool CreateAssetReq::sourceOperationIsSet() const
{
    return sourceOperationIsSet_;
}

void CreateAssetReq::unsetsourceOperation()
{
    sourceOperationIsSet_ = false;
}

std::string CreateAssetReq::getSourceJobName() const
{
    return sourceJobName_;
}

void CreateAssetReq::setSourceJobName(const std::string& value)
{
    sourceJobName_ = value;
    sourceJobNameIsSet_ = true;
}

bool CreateAssetReq::sourceJobNameIsSet() const
{
    return sourceJobNameIsSet_;
}

void CreateAssetReq::unsetsourceJobName()
{
    sourceJobNameIsSet_ = false;
}

std::string CreateAssetReq::getSourceJobId() const
{
    return sourceJobId_;
}

void CreateAssetReq::setSourceJobId(const std::string& value)
{
    sourceJobId_ = value;
    sourceJobIdIsSet_ = true;
}

bool CreateAssetReq::sourceJobIdIsSet() const
{
    return sourceJobIdIsSet_;
}

void CreateAssetReq::unsetsourceJobId()
{
    sourceJobIdIsSet_ = false;
}

std::string CreateAssetReq::getStatus() const
{
    return status_;
}

void CreateAssetReq::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateAssetReq::statusIsSet() const
{
    return statusIsSet_;
}

void CreateAssetReq::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateAssetReq::getDatasetUsage() const
{
    return datasetUsage_;
}

void CreateAssetReq::setDatasetUsage(const std::string& value)
{
    datasetUsage_ = value;
    datasetUsageIsSet_ = true;
}

bool CreateAssetReq::datasetUsageIsSet() const
{
    return datasetUsageIsSet_;
}

void CreateAssetReq::unsetdatasetUsage()
{
    datasetUsageIsSet_ = false;
}

std::vector<std::string>& CreateAssetReq::getDatasetFileFormats()
{
    return datasetFileFormats_;
}

void CreateAssetReq::setDatasetFileFormats(const std::vector<std::string>& value)
{
    datasetFileFormats_ = value;
    datasetFileFormatsIsSet_ = true;
}

bool CreateAssetReq::datasetFileFormatsIsSet() const
{
    return datasetFileFormatsIsSet_;
}

void CreateAssetReq::unsetdatasetFileFormats()
{
    datasetFileFormatsIsSet_ = false;
}

std::string CreateAssetReq::getDatasetType() const
{
    return datasetType_;
}

void CreateAssetReq::setDatasetType(const std::string& value)
{
    datasetType_ = value;
    datasetTypeIsSet_ = true;
}

bool CreateAssetReq::datasetTypeIsSet() const
{
    return datasetTypeIsSet_;
}

void CreateAssetReq::unsetdatasetType()
{
    datasetTypeIsSet_ = false;
}

std::string CreateAssetReq::getDatasetSubType() const
{
    return datasetSubType_;
}

void CreateAssetReq::setDatasetSubType(const std::string& value)
{
    datasetSubType_ = value;
    datasetSubTypeIsSet_ = true;
}

bool CreateAssetReq::datasetSubTypeIsSet() const
{
    return datasetSubTypeIsSet_;
}

void CreateAssetReq::unsetdatasetSubType()
{
    datasetSubTypeIsSet_ = false;
}

std::string CreateAssetReq::getDatasetSchemaFormat() const
{
    return datasetSchemaFormat_;
}

void CreateAssetReq::setDatasetSchemaFormat(const std::string& value)
{
    datasetSchemaFormat_ = value;
    datasetSchemaFormatIsSet_ = true;
}

bool CreateAssetReq::datasetSchemaFormatIsSet() const
{
    return datasetSchemaFormatIsSet_;
}

void CreateAssetReq::unsetdatasetSchemaFormat()
{
    datasetSchemaFormatIsSet_ = false;
}

std::string CreateAssetReq::getImportFileSource() const
{
    return importFileSource_;
}

void CreateAssetReq::setImportFileSource(const std::string& value)
{
    importFileSource_ = value;
    importFileSourceIsSet_ = true;
}

bool CreateAssetReq::importFileSourceIsSet() const
{
    return importFileSourceIsSet_;
}

void CreateAssetReq::unsetimportFileSource()
{
    importFileSourceIsSet_ = false;
}

std::string CreateAssetReq::getDataSourceId() const
{
    return dataSourceId_;
}

void CreateAssetReq::setDataSourceId(const std::string& value)
{
    dataSourceId_ = value;
    dataSourceIdIsSet_ = true;
}

bool CreateAssetReq::dataSourceIdIsSet() const
{
    return dataSourceIdIsSet_;
}

void CreateAssetReq::unsetdataSourceId()
{
    dataSourceIdIsSet_ = false;
}

}
}
}
}
}


