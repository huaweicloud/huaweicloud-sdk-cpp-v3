

#include "huaweicloud/metastudio/v1/model/AnimationItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AnimationItem::AnimationItem()
{
    animationAssetId_ = "";
    animationAssetIdIsSet_ = false;
    timestamp_ = 0.0f;
    timestampIsSet_ = false;
}

AnimationItem::~AnimationItem() = default;

void AnimationItem::validate()
{
}

web::json::value AnimationItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(animationAssetIdIsSet_) {
        val[utility::conversions::to_string_t("animation_asset_id")] = ModelBase::toJson(animationAssetId_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }

    return val;
}
bool AnimationItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("animation_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("animation_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnimationAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    return ok;
}


std::string AnimationItem::getAnimationAssetId() const
{
    return animationAssetId_;
}

void AnimationItem::setAnimationAssetId(const std::string& value)
{
    animationAssetId_ = value;
    animationAssetIdIsSet_ = true;
}

bool AnimationItem::animationAssetIdIsSet() const
{
    return animationAssetIdIsSet_;
}

void AnimationItem::unsetanimationAssetId()
{
    animationAssetIdIsSet_ = false;
}

float AnimationItem::getTimestamp() const
{
    return timestamp_;
}

void AnimationItem::setTimestamp(float value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool AnimationItem::timestampIsSet() const
{
    return timestampIsSet_;
}

void AnimationItem::unsettimestamp()
{
    timestampIsSet_ = false;
}

}
}
}
}
}


