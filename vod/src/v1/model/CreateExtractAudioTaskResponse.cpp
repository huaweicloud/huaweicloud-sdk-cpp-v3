

#include "huaweicloud/vod/v1/model/CreateExtractAudioTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateExtractAudioTaskResponse::CreateExtractAudioTaskResponse()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    audioAssetId_ = "";
    audioAssetIdIsSet_ = false;
}

CreateExtractAudioTaskResponse::~CreateExtractAudioTaskResponse() = default;

void CreateExtractAudioTaskResponse::validate()
{
}

web::json::value CreateExtractAudioTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(audioAssetIdIsSet_) {
        val[utility::conversions::to_string_t("audio_asset_id")] = ModelBase::toJson(audioAssetId_);
    }

    return val;
}

bool CreateExtractAudioTaskResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("audio_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioAssetId(refVal);
        }
    }
    return ok;
}

std::string CreateExtractAudioTaskResponse::getAssetId() const
{
    return assetId_;
}

void CreateExtractAudioTaskResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool CreateExtractAudioTaskResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void CreateExtractAudioTaskResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string CreateExtractAudioTaskResponse::getAudioAssetId() const
{
    return audioAssetId_;
}

void CreateExtractAudioTaskResponse::setAudioAssetId(const std::string& value)
{
    audioAssetId_ = value;
    audioAssetIdIsSet_ = true;
}

bool CreateExtractAudioTaskResponse::audioAssetIdIsSet() const
{
    return audioAssetIdIsSet_;
}

void CreateExtractAudioTaskResponse::unsetaudioAssetId()
{
    audioAssetIdIsSet_ = false;
}

}
}
}
}
}


