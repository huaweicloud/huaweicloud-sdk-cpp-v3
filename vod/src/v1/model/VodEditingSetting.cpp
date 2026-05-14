

#include "huaweicloud/vod/v1/model/VodEditingSetting.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




VodEditingSetting::VodEditingSetting()
{
    resolutionAdaptation_ = false;
    resolutionAdaptationIsSet_ = false;
    resolutionUpsample_ = false;
    resolutionUpsampleIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    reference_ = "";
    referenceIsSet_ = false;
    videoCodec_ = 0;
    videoCodecIsSet_ = false;
}

VodEditingSetting::~VodEditingSetting() = default;

void VodEditingSetting::validate()
{
}

web::json::value VodEditingSetting::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resolutionAdaptationIsSet_) {
        val[utility::conversions::to_string_t("resolution_adaptation")] = ModelBase::toJson(resolutionAdaptation_);
    }
    if(resolutionUpsampleIsSet_) {
        val[utility::conversions::to_string_t("resolution_upsample")] = ModelBase::toJson(resolutionUpsample_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(referenceIsSet_) {
        val[utility::conversions::to_string_t("reference")] = ModelBase::toJson(reference_);
    }
    if(videoCodecIsSet_) {
        val[utility::conversions::to_string_t("video_codec")] = ModelBase::toJson(videoCodec_);
    }

    return val;
}
bool VodEditingSetting::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resolution_adaptation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolution_adaptation"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolutionAdaptation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resolution_upsample"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolution_upsample"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolutionUpsample(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reference"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reference"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReference(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_codec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_codec"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoCodec(refVal);
        }
    }
    return ok;
}


bool VodEditingSetting::isResolutionAdaptation() const
{
    return resolutionAdaptation_;
}

void VodEditingSetting::setResolutionAdaptation(bool value)
{
    resolutionAdaptation_ = value;
    resolutionAdaptationIsSet_ = true;
}

bool VodEditingSetting::resolutionAdaptationIsSet() const
{
    return resolutionAdaptationIsSet_;
}

void VodEditingSetting::unsetresolutionAdaptation()
{
    resolutionAdaptationIsSet_ = false;
}

bool VodEditingSetting::isResolutionUpsample() const
{
    return resolutionUpsample_;
}

void VodEditingSetting::setResolutionUpsample(bool value)
{
    resolutionUpsample_ = value;
    resolutionUpsampleIsSet_ = true;
}

bool VodEditingSetting::resolutionUpsampleIsSet() const
{
    return resolutionUpsampleIsSet_;
}

void VodEditingSetting::unsetresolutionUpsample()
{
    resolutionUpsampleIsSet_ = false;
}

std::string VodEditingSetting::getFormat() const
{
    return format_;
}

void VodEditingSetting::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool VodEditingSetting::formatIsSet() const
{
    return formatIsSet_;
}

void VodEditingSetting::unsetformat()
{
    formatIsSet_ = false;
}

int32_t VodEditingSetting::getWidth() const
{
    return width_;
}

void VodEditingSetting::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool VodEditingSetting::widthIsSet() const
{
    return widthIsSet_;
}

void VodEditingSetting::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t VodEditingSetting::getHeight() const
{
    return height_;
}

void VodEditingSetting::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool VodEditingSetting::heightIsSet() const
{
    return heightIsSet_;
}

void VodEditingSetting::unsetheight()
{
    heightIsSet_ = false;
}

std::string VodEditingSetting::getReference() const
{
    return reference_;
}

void VodEditingSetting::setReference(const std::string& value)
{
    reference_ = value;
    referenceIsSet_ = true;
}

bool VodEditingSetting::referenceIsSet() const
{
    return referenceIsSet_;
}

void VodEditingSetting::unsetreference()
{
    referenceIsSet_ = false;
}

int32_t VodEditingSetting::getVideoCodec() const
{
    return videoCodec_;
}

void VodEditingSetting::setVideoCodec(int32_t value)
{
    videoCodec_ = value;
    videoCodecIsSet_ = true;
}

bool VodEditingSetting::videoCodecIsSet() const
{
    return videoCodecIsSet_;
}

void VodEditingSetting::unsetvideoCodec()
{
    videoCodecIsSet_ = false;
}

}
}
}
}
}


