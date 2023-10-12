

#include "huaweicloud/vod/v1/model/ShowTakeOverAssetDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowTakeOverAssetDetailsResponse::ShowTakeOverAssetDetailsResponse()
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

ShowTakeOverAssetDetailsResponse::~ShowTakeOverAssetDetailsResponse() = default;

void ShowTakeOverAssetDetailsResponse::validate()
{
}

web::json::value ShowTakeOverAssetDetailsResponse::toJson() const
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
bool ShowTakeOverAssetDetailsResponse::fromJson(const web::json::value& val)
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


std::string ShowTakeOverAssetDetailsResponse::getAssetId() const
{
    return assetId_;
}

void ShowTakeOverAssetDetailsResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ShowTakeOverAssetDetailsResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ShowTakeOverAssetDetailsResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ShowTakeOverAssetDetailsResponse::getAssetStatus() const
{
    return assetStatus_;
}

void ShowTakeOverAssetDetailsResponse::setAssetStatus(const std::string& value)
{
    assetStatus_ = value;
    assetStatusIsSet_ = true;
}

bool ShowTakeOverAssetDetailsResponse::assetStatusIsSet() const
{
    return assetStatusIsSet_;
}

void ShowTakeOverAssetDetailsResponse::unsetassetStatus()
{
    assetStatusIsSet_ = false;
}

std::string ShowTakeOverAssetDetailsResponse::getTranscodeStatus() const
{
    return transcodeStatus_;
}

void ShowTakeOverAssetDetailsResponse::setTranscodeStatus(const std::string& value)
{
    transcodeStatus_ = value;
    transcodeStatusIsSet_ = true;
}

bool ShowTakeOverAssetDetailsResponse::transcodeStatusIsSet() const
{
    return transcodeStatusIsSet_;
}

void ShowTakeOverAssetDetailsResponse::unsettranscodeStatus()
{
    transcodeStatusIsSet_ = false;
}

BaseInfo ShowTakeOverAssetDetailsResponse::getBaseInfo() const
{
    return baseInfo_;
}

void ShowTakeOverAssetDetailsResponse::setBaseInfo(const BaseInfo& value)
{
    baseInfo_ = value;
    baseInfoIsSet_ = true;
}

bool ShowTakeOverAssetDetailsResponse::baseInfoIsSet() const
{
    return baseInfoIsSet_;
}

void ShowTakeOverAssetDetailsResponse::unsetbaseInfo()
{
    baseInfoIsSet_ = false;
}

TranscodeInfo ShowTakeOverAssetDetailsResponse::getTranscodeInfo() const
{
    return transcodeInfo_;
}

void ShowTakeOverAssetDetailsResponse::setTranscodeInfo(const TranscodeInfo& value)
{
    transcodeInfo_ = value;
    transcodeInfoIsSet_ = true;
}

bool ShowTakeOverAssetDetailsResponse::transcodeInfoIsSet() const
{
    return transcodeInfoIsSet_;
}

void ShowTakeOverAssetDetailsResponse::unsettranscodeInfo()
{
    transcodeInfoIsSet_ = false;
}

}
}
}
}
}


