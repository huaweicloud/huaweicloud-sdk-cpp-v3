

#include "huaweicloud/metastudio/v1/model/CheckVoiceAssetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CheckVoiceAssetResponse::CheckVoiceAssetResponse()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    assetName_ = "";
    assetNameIsSet_ = false;
    assetType_ = "";
    assetTypeIsSet_ = false;
    assetState_ = "";
    assetStateIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    assetExtraMetaIsSet_ = false;
    filesIsSet_ = false;
}

CheckVoiceAssetResponse::~CheckVoiceAssetResponse() = default;

void CheckVoiceAssetResponse::validate()
{
}

web::json::value CheckVoiceAssetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
    }
    if(assetTypeIsSet_) {
        val[utility::conversions::to_string_t("asset_type")] = ModelBase::toJson(assetType_);
    }
    if(assetStateIsSet_) {
        val[utility::conversions::to_string_t("asset_state")] = ModelBase::toJson(assetState_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(assetExtraMetaIsSet_) {
        val[utility::conversions::to_string_t("asset_extra_meta")] = ModelBase::toJson(assetExtraMeta_);
    }
    if(filesIsSet_) {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(files_);
    }

    return val;
}
bool CheckVoiceAssetResponse::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_extra_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_extra_meta"));
        if(!fieldValue.is_null())
        {
            TtscAssetExtraMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetExtraMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<TtscAssetFileInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiles(refVal);
        }
    }
    return ok;
}


std::string CheckVoiceAssetResponse::getAssetId() const
{
    return assetId_;
}

void CheckVoiceAssetResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool CheckVoiceAssetResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void CheckVoiceAssetResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string CheckVoiceAssetResponse::getAssetName() const
{
    return assetName_;
}

void CheckVoiceAssetResponse::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool CheckVoiceAssetResponse::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void CheckVoiceAssetResponse::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::string CheckVoiceAssetResponse::getAssetType() const
{
    return assetType_;
}

void CheckVoiceAssetResponse::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool CheckVoiceAssetResponse::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void CheckVoiceAssetResponse::unsetassetType()
{
    assetTypeIsSet_ = false;
}

std::string CheckVoiceAssetResponse::getAssetState() const
{
    return assetState_;
}

void CheckVoiceAssetResponse::setAssetState(const std::string& value)
{
    assetState_ = value;
    assetStateIsSet_ = true;
}

bool CheckVoiceAssetResponse::assetStateIsSet() const
{
    return assetStateIsSet_;
}

void CheckVoiceAssetResponse::unsetassetState()
{
    assetStateIsSet_ = false;
}

std::string CheckVoiceAssetResponse::getCreateTime() const
{
    return createTime_;
}

void CheckVoiceAssetResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CheckVoiceAssetResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CheckVoiceAssetResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CheckVoiceAssetResponse::getUpdateTime() const
{
    return updateTime_;
}

void CheckVoiceAssetResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CheckVoiceAssetResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CheckVoiceAssetResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

TtscAssetExtraMeta CheckVoiceAssetResponse::getAssetExtraMeta() const
{
    return assetExtraMeta_;
}

void CheckVoiceAssetResponse::setAssetExtraMeta(const TtscAssetExtraMeta& value)
{
    assetExtraMeta_ = value;
    assetExtraMetaIsSet_ = true;
}

bool CheckVoiceAssetResponse::assetExtraMetaIsSet() const
{
    return assetExtraMetaIsSet_;
}

void CheckVoiceAssetResponse::unsetassetExtraMeta()
{
    assetExtraMetaIsSet_ = false;
}

std::vector<TtscAssetFileInfo>& CheckVoiceAssetResponse::getFiles()
{
    return files_;
}

void CheckVoiceAssetResponse::setFiles(const std::vector<TtscAssetFileInfo>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool CheckVoiceAssetResponse::filesIsSet() const
{
    return filesIsSet_;
}

void CheckVoiceAssetResponse::unsetfiles()
{
    filesIsSet_ = false;
}

}
}
}
}
}


