

#include "huaweicloud/metastudio/v1/model/ModelInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ModelInfo::ModelInfo()
{
    modelAssetId_ = "";
    modelAssetIdIsSet_ = false;
    assetName_ = "";
    assetNameIsSet_ = false;
    backupModelAssetIdsIsSet_ = false;
}

ModelInfo::~ModelInfo() = default;

void ModelInfo::validate()
{
}

web::json::value ModelInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modelAssetIdIsSet_) {
        val[utility::conversions::to_string_t("model_asset_id")] = ModelBase::toJson(modelAssetId_);
    }
    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
    }
    if(backupModelAssetIdsIsSet_) {
        val[utility::conversions::to_string_t("backup_model_asset_ids")] = ModelBase::toJson(backupModelAssetIds_);
    }

    return val;
}
bool ModelInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("model_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelAssetId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("backup_model_asset_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_model_asset_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupModelAssetIds(refVal);
        }
    }
    return ok;
}


std::string ModelInfo::getModelAssetId() const
{
    return modelAssetId_;
}

void ModelInfo::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool ModelInfo::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void ModelInfo::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

std::string ModelInfo::getAssetName() const
{
    return assetName_;
}

void ModelInfo::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool ModelInfo::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void ModelInfo::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::vector<std::string>& ModelInfo::getBackupModelAssetIds()
{
    return backupModelAssetIds_;
}

void ModelInfo::setBackupModelAssetIds(const std::vector<std::string>& value)
{
    backupModelAssetIds_ = value;
    backupModelAssetIdsIsSet_ = true;
}

bool ModelInfo::backupModelAssetIdsIsSet() const
{
    return backupModelAssetIdsIsSet_;
}

void ModelInfo::unsetbackupModelAssetIds()
{
    backupModelAssetIdsIsSet_ = false;
}

}
}
}
}
}


