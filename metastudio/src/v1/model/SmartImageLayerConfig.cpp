

#include "huaweicloud/metastudio/v1/model/SmartImageLayerConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SmartImageLayerConfig::SmartImageLayerConfig()
{
    imageUrl_ = "";
    imageUrlIsSet_ = false;
    displayDuration_ = 0;
    displayDurationIsSet_ = false;
}

SmartImageLayerConfig::~SmartImageLayerConfig() = default;

void SmartImageLayerConfig::validate()
{
}

web::json::value SmartImageLayerConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageUrlIsSet_) {
        val[utility::conversions::to_string_t("image_url")] = ModelBase::toJson(imageUrl_);
    }
    if(displayDurationIsSet_) {
        val[utility::conversions::to_string_t("display_duration")] = ModelBase::toJson(displayDuration_);
    }

    return val;
}
bool SmartImageLayerConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayDuration(refVal);
        }
    }
    return ok;
}


std::string SmartImageLayerConfig::getImageUrl() const
{
    return imageUrl_;
}

void SmartImageLayerConfig::setImageUrl(const std::string& value)
{
    imageUrl_ = value;
    imageUrlIsSet_ = true;
}

bool SmartImageLayerConfig::imageUrlIsSet() const
{
    return imageUrlIsSet_;
}

void SmartImageLayerConfig::unsetimageUrl()
{
    imageUrlIsSet_ = false;
}

int32_t SmartImageLayerConfig::getDisplayDuration() const
{
    return displayDuration_;
}

void SmartImageLayerConfig::setDisplayDuration(int32_t value)
{
    displayDuration_ = value;
    displayDurationIsSet_ = true;
}

bool SmartImageLayerConfig::displayDurationIsSet() const
{
    return displayDurationIsSet_;
}

void SmartImageLayerConfig::unsetdisplayDuration()
{
    displayDurationIsSet_ = false;
}

}
}
}
}
}


