

#include "huaweicloud/vod/v1/model/AssetDetails.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




AssetDetails::AssetDetails()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    assetStatus_ = "";
    assetStatusIsSet_ = false;
    transcodeStatus_ = "";
    transcodeStatusIsSet_ = false;
    baseInfoIsSet_ = false;
    transcodeInfoIsSet_ = false;
}

AssetDetails::~AssetDetails() = default;

void AssetDetails::validate()
{
}

web::json::value AssetDetails::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(assetStatusIsSet_) {
        val[utility::conversions::to_string_t("asset_status")] = ModelBase::toJson(assetStatus_);
    }
    if(transcodeStatusIsSet_) {
        val[utility::conversions::to_string_t("transcode_status")] = ModelBase::toJson(transcodeStatus_);
    }
    if(baseInfoIsSet_) {
        val[utility::conversions::to_string_t("base_info")] = ModelBase::toJson(baseInfo_);
    }
    if(transcodeInfoIsSet_) {
        val[utility::conversions::to_string_t("transcode_info")] = ModelBase::toJson(transcodeInfo_);
    }

    return val;
}

bool AssetDetails::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("asset_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transcode_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transcode_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranscodeStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("transcode_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transcode_info"));
        if(!fieldValue.is_null())
        {
            TranscodeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranscodeInfo(refVal);
        }
    }
    return ok;
}


std::string AssetDetails::getAssetId() const
{
    return assetId_;
}

void AssetDetails::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool AssetDetails::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void AssetDetails::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string AssetDetails::getAssetStatus() const
{
    return assetStatus_;
}

void AssetDetails::setAssetStatus(const std::string& value)
{
    assetStatus_ = value;
    assetStatusIsSet_ = true;
}

bool AssetDetails::assetStatusIsSet() const
{
    return assetStatusIsSet_;
}

void AssetDetails::unsetassetStatus()
{
    assetStatusIsSet_ = false;
}

std::string AssetDetails::getTranscodeStatus() const
{
    return transcodeStatus_;
}

void AssetDetails::setTranscodeStatus(const std::string& value)
{
    transcodeStatus_ = value;
    transcodeStatusIsSet_ = true;
}

bool AssetDetails::transcodeStatusIsSet() const
{
    return transcodeStatusIsSet_;
}

void AssetDetails::unsettranscodeStatus()
{
    transcodeStatusIsSet_ = false;
}

BaseInfo AssetDetails::getBaseInfo() const
{
    return baseInfo_;
}

void AssetDetails::setBaseInfo(const BaseInfo& value)
{
    baseInfo_ = value;
    baseInfoIsSet_ = true;
}

bool AssetDetails::baseInfoIsSet() const
{
    return baseInfoIsSet_;
}

void AssetDetails::unsetbaseInfo()
{
    baseInfoIsSet_ = false;
}

TranscodeInfo AssetDetails::getTranscodeInfo() const
{
    return transcodeInfo_;
}

void AssetDetails::setTranscodeInfo(const TranscodeInfo& value)
{
    transcodeInfo_ = value;
    transcodeInfoIsSet_ = true;
}

bool AssetDetails::transcodeInfoIsSet() const
{
    return transcodeInfoIsSet_;
}

void AssetDetails::unsettranscodeInfo()
{
    transcodeInfoIsSet_ = false;
}

}
}
}
}
}


