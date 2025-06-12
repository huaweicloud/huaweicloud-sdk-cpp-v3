

#include "huaweicloud/metastudio/v1/model/BackgroundConfigInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BackgroundConfigInfo::BackgroundConfigInfo()
{
    backgroundType_ = "";
    backgroundTypeIsSet_ = false;
    backgroundConfig_ = "";
    backgroundConfigIsSet_ = false;
    backgroundColorConfig_ = "";
    backgroundColorConfigIsSet_ = false;
    backgroundAssetId_ = "";
    backgroundAssetIdIsSet_ = false;
    backgroundImageConfigIsSet_ = false;
}

BackgroundConfigInfo::~BackgroundConfigInfo() = default;

void BackgroundConfigInfo::validate()
{
}

web::json::value BackgroundConfigInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backgroundTypeIsSet_) {
        val[utility::conversions::to_string_t("background_type")] = ModelBase::toJson(backgroundType_);
    }
    if(backgroundConfigIsSet_) {
        val[utility::conversions::to_string_t("background_config")] = ModelBase::toJson(backgroundConfig_);
    }
    if(backgroundColorConfigIsSet_) {
        val[utility::conversions::to_string_t("background_color_config")] = ModelBase::toJson(backgroundColorConfig_);
    }
    if(backgroundAssetIdIsSet_) {
        val[utility::conversions::to_string_t("background_asset_id")] = ModelBase::toJson(backgroundAssetId_);
    }
    if(backgroundImageConfigIsSet_) {
        val[utility::conversions::to_string_t("background_image_config")] = ModelBase::toJson(backgroundImageConfig_);
    }

    return val;
}
bool BackgroundConfigInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("background_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("background_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackgroundType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("background_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("background_config"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackgroundConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("background_color_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("background_color_config"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackgroundColorConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("background_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("background_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackgroundAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("background_image_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("background_image_config"));
        if(!fieldValue.is_null())
        {
            BackgroundImageConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackgroundImageConfig(refVal);
        }
    }
    return ok;
}


std::string BackgroundConfigInfo::getBackgroundType() const
{
    return backgroundType_;
}

void BackgroundConfigInfo::setBackgroundType(const std::string& value)
{
    backgroundType_ = value;
    backgroundTypeIsSet_ = true;
}

bool BackgroundConfigInfo::backgroundTypeIsSet() const
{
    return backgroundTypeIsSet_;
}

void BackgroundConfigInfo::unsetbackgroundType()
{
    backgroundTypeIsSet_ = false;
}

std::string BackgroundConfigInfo::getBackgroundConfig() const
{
    return backgroundConfig_;
}

void BackgroundConfigInfo::setBackgroundConfig(const std::string& value)
{
    backgroundConfig_ = value;
    backgroundConfigIsSet_ = true;
}

bool BackgroundConfigInfo::backgroundConfigIsSet() const
{
    return backgroundConfigIsSet_;
}

void BackgroundConfigInfo::unsetbackgroundConfig()
{
    backgroundConfigIsSet_ = false;
}

std::string BackgroundConfigInfo::getBackgroundColorConfig() const
{
    return backgroundColorConfig_;
}

void BackgroundConfigInfo::setBackgroundColorConfig(const std::string& value)
{
    backgroundColorConfig_ = value;
    backgroundColorConfigIsSet_ = true;
}

bool BackgroundConfigInfo::backgroundColorConfigIsSet() const
{
    return backgroundColorConfigIsSet_;
}

void BackgroundConfigInfo::unsetbackgroundColorConfig()
{
    backgroundColorConfigIsSet_ = false;
}

std::string BackgroundConfigInfo::getBackgroundAssetId() const
{
    return backgroundAssetId_;
}

void BackgroundConfigInfo::setBackgroundAssetId(const std::string& value)
{
    backgroundAssetId_ = value;
    backgroundAssetIdIsSet_ = true;
}

bool BackgroundConfigInfo::backgroundAssetIdIsSet() const
{
    return backgroundAssetIdIsSet_;
}

void BackgroundConfigInfo::unsetbackgroundAssetId()
{
    backgroundAssetIdIsSet_ = false;
}

BackgroundImageConfig BackgroundConfigInfo::getBackgroundImageConfig() const
{
    return backgroundImageConfig_;
}

void BackgroundConfigInfo::setBackgroundImageConfig(const BackgroundImageConfig& value)
{
    backgroundImageConfig_ = value;
    backgroundImageConfigIsSet_ = true;
}

bool BackgroundConfigInfo::backgroundImageConfigIsSet() const
{
    return backgroundImageConfigIsSet_;
}

void BackgroundConfigInfo::unsetbackgroundImageConfig()
{
    backgroundImageConfigIsSet_ = false;
}

}
}
}
}
}


