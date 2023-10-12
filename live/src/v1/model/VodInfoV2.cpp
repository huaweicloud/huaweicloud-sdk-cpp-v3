

#include "huaweicloud/live/v1/model/VodInfoV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




VodInfoV2::VodInfoV2()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    playUrl_ = "";
    playUrlIsSet_ = false;
}

VodInfoV2::~VodInfoV2() = default;

void VodInfoV2::validate()
{
}

web::json::value VodInfoV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(playUrlIsSet_) {
        val[utility::conversions::to_string_t("play_url")] = ModelBase::toJson(playUrl_);
    }

    return val;
}
bool VodInfoV2::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("play_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayUrl(refVal);
        }
    }
    return ok;
}


std::string VodInfoV2::getAssetId() const
{
    return assetId_;
}

void VodInfoV2::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool VodInfoV2::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void VodInfoV2::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string VodInfoV2::getPlayUrl() const
{
    return playUrl_;
}

void VodInfoV2::setPlayUrl(const std::string& value)
{
    playUrl_ = value;
    playUrlIsSet_ = true;
}

bool VodInfoV2::playUrlIsSet() const
{
    return playUrlIsSet_;
}

void VodInfoV2::unsetplayUrl()
{
    playUrlIsSet_ = false;
}

}
}
}
}
}


