

#include "huaweicloud/vod/v1/model/AssetInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




AssetInfo::AssetInfo()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    isMultiTranscode_ = false;
    isMultiTranscodeIsSet_ = false;
    baseInfoIsSet_ = false;
    playInfoArrayIsSet_ = false;
}

AssetInfo::~AssetInfo() = default;

void AssetInfo::validate()
{
}

web::json::value AssetInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(isMultiTranscodeIsSet_) {
        val[utility::conversions::to_string_t("is_multi_transcode")] = ModelBase::toJson(isMultiTranscode_);
    }
    if(baseInfoIsSet_) {
        val[utility::conversions::to_string_t("base_info")] = ModelBase::toJson(baseInfo_);
    }
    if(playInfoArrayIsSet_) {
        val[utility::conversions::to_string_t("play_info_array")] = ModelBase::toJson(playInfoArray_);
    }

    return val;
}
bool AssetInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_multi_transcode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_multi_transcode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMultiTranscode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("base_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base_info"));
        if(!fieldValue.is_null())
        {
            BaseInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("play_info_array"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_info_array"));
        if(!fieldValue.is_null())
        {
            std::vector<PlayInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayInfoArray(refVal);
        }
    }
    return ok;
}


std::string AssetInfo::getAssetId() const
{
    return assetId_;
}

void AssetInfo::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool AssetInfo::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void AssetInfo::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string AssetInfo::getStatus() const
{
    return status_;
}

void AssetInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AssetInfo::statusIsSet() const
{
    return statusIsSet_;
}

void AssetInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AssetInfo::getDescription() const
{
    return description_;
}

void AssetInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AssetInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AssetInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool AssetInfo::isIsMultiTranscode() const
{
    return isMultiTranscode_;
}

void AssetInfo::setIsMultiTranscode(bool value)
{
    isMultiTranscode_ = value;
    isMultiTranscodeIsSet_ = true;
}

bool AssetInfo::isMultiTranscodeIsSet() const
{
    return isMultiTranscodeIsSet_;
}

void AssetInfo::unsetisMultiTranscode()
{
    isMultiTranscodeIsSet_ = false;
}

BaseInfo AssetInfo::getBaseInfo() const
{
    return baseInfo_;
}

void AssetInfo::setBaseInfo(const BaseInfo& value)
{
    baseInfo_ = value;
    baseInfoIsSet_ = true;
}

bool AssetInfo::baseInfoIsSet() const
{
    return baseInfoIsSet_;
}

void AssetInfo::unsetbaseInfo()
{
    baseInfoIsSet_ = false;
}

std::vector<PlayInfo>& AssetInfo::getPlayInfoArray()
{
    return playInfoArray_;
}

void AssetInfo::setPlayInfoArray(const std::vector<PlayInfo>& value)
{
    playInfoArray_ = value;
    playInfoArrayIsSet_ = true;
}

bool AssetInfo::playInfoArrayIsSet() const
{
    return playInfoArrayIsSet_;
}

void AssetInfo::unsetplayInfoArray()
{
    playInfoArrayIsSet_ = false;
}

}
}
}
}
}


