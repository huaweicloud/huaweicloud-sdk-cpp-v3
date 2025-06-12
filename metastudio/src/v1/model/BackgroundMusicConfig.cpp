

#include "huaweicloud/metastudio/v1/model/BackgroundMusicConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BackgroundMusicConfig::BackgroundMusicConfig()
{
    musicAssetId_ = "";
    musicAssetIdIsSet_ = false;
    volume_ = 0;
    volumeIsSet_ = false;
}

BackgroundMusicConfig::~BackgroundMusicConfig() = default;

void BackgroundMusicConfig::validate()
{
}

web::json::value BackgroundMusicConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(musicAssetIdIsSet_) {
        val[utility::conversions::to_string_t("music_asset_id")] = ModelBase::toJson(musicAssetId_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }

    return val;
}
bool BackgroundMusicConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("music_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("music_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMusicAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    return ok;
}


std::string BackgroundMusicConfig::getMusicAssetId() const
{
    return musicAssetId_;
}

void BackgroundMusicConfig::setMusicAssetId(const std::string& value)
{
    musicAssetId_ = value;
    musicAssetIdIsSet_ = true;
}

bool BackgroundMusicConfig::musicAssetIdIsSet() const
{
    return musicAssetIdIsSet_;
}

void BackgroundMusicConfig::unsetmusicAssetId()
{
    musicAssetIdIsSet_ = false;
}

int32_t BackgroundMusicConfig::getVolume() const
{
    return volume_;
}

void BackgroundMusicConfig::setVolume(int32_t value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool BackgroundMusicConfig::volumeIsSet() const
{
    return volumeIsSet_;
}

void BackgroundMusicConfig::unsetvolume()
{
    volumeIsSet_ = false;
}

}
}
}
}
}


