

#include "huaweicloud/metastudio/v1/model/LiveAudioConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LiveAudioConfig::LiveAudioConfig()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    audioUrl_ = "";
    audioUrlIsSet_ = false;
    subtitleUrl_ = "";
    subtitleUrlIsSet_ = false;
}

LiveAudioConfig::~LiveAudioConfig() = default;

void LiveAudioConfig::validate()
{
}

web::json::value LiveAudioConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(audioUrlIsSet_) {
        val[utility::conversions::to_string_t("audio_url")] = ModelBase::toJson(audioUrl_);
    }
    if(subtitleUrlIsSet_) {
        val[utility::conversions::to_string_t("subtitle_url")] = ModelBase::toJson(subtitleUrl_);
    }

    return val;
}
bool LiveAudioConfig::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("audio_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtitle_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtitle_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtitleUrl(refVal);
        }
    }
    return ok;
}


std::string LiveAudioConfig::getAssetId() const
{
    return assetId_;
}

void LiveAudioConfig::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool LiveAudioConfig::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void LiveAudioConfig::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string LiveAudioConfig::getAudioUrl() const
{
    return audioUrl_;
}

void LiveAudioConfig::setAudioUrl(const std::string& value)
{
    audioUrl_ = value;
    audioUrlIsSet_ = true;
}

bool LiveAudioConfig::audioUrlIsSet() const
{
    return audioUrlIsSet_;
}

void LiveAudioConfig::unsetaudioUrl()
{
    audioUrlIsSet_ = false;
}

std::string LiveAudioConfig::getSubtitleUrl() const
{
    return subtitleUrl_;
}

void LiveAudioConfig::setSubtitleUrl(const std::string& value)
{
    subtitleUrl_ = value;
    subtitleUrlIsSet_ = true;
}

bool LiveAudioConfig::subtitleUrlIsSet() const
{
    return subtitleUrlIsSet_;
}

void LiveAudioConfig::unsetsubtitleUrl()
{
    subtitleUrlIsSet_ = false;
}

}
}
}
}
}


