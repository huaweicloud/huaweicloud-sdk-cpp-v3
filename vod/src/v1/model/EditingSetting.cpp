

#include "huaweicloud/vod/v1/model/EditingSetting.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




EditingSetting::EditingSetting()
{
    resolutionAdaptation_ = "";
    resolutionAdaptationIsSet_ = false;
    resolutionUpsample_ = "";
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

EditingSetting::~EditingSetting() = default;

void EditingSetting::validate()
{
}

web::json::value EditingSetting::toJson() const
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
bool EditingSetting::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resolution_adaptation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolution_adaptation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolutionAdaptation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resolution_upsample"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolution_upsample"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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


std::string EditingSetting::getResolutionAdaptation() const
{
    return resolutionAdaptation_;
}

void EditingSetting::setResolutionAdaptation(const std::string& value)
{
    resolutionAdaptation_ = value;
    resolutionAdaptationIsSet_ = true;
}

bool EditingSetting::resolutionAdaptationIsSet() const
{
    return resolutionAdaptationIsSet_;
}

void EditingSetting::unsetresolutionAdaptation()
{
    resolutionAdaptationIsSet_ = false;
}

std::string EditingSetting::getResolutionUpsample() const
{
    return resolutionUpsample_;
}

void EditingSetting::setResolutionUpsample(const std::string& value)
{
    resolutionUpsample_ = value;
    resolutionUpsampleIsSet_ = true;
}

bool EditingSetting::resolutionUpsampleIsSet() const
{
    return resolutionUpsampleIsSet_;
}

void EditingSetting::unsetresolutionUpsample()
{
    resolutionUpsampleIsSet_ = false;
}

std::string EditingSetting::getFormat() const
{
    return format_;
}

void EditingSetting::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool EditingSetting::formatIsSet() const
{
    return formatIsSet_;
}

void EditingSetting::unsetformat()
{
    formatIsSet_ = false;
}

int32_t EditingSetting::getWidth() const
{
    return width_;
}

void EditingSetting::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool EditingSetting::widthIsSet() const
{
    return widthIsSet_;
}

void EditingSetting::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t EditingSetting::getHeight() const
{
    return height_;
}

void EditingSetting::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool EditingSetting::heightIsSet() const
{
    return heightIsSet_;
}

void EditingSetting::unsetheight()
{
    heightIsSet_ = false;
}

std::string EditingSetting::getReference() const
{
    return reference_;
}

void EditingSetting::setReference(const std::string& value)
{
    reference_ = value;
    referenceIsSet_ = true;
}

bool EditingSetting::referenceIsSet() const
{
    return referenceIsSet_;
}

void EditingSetting::unsetreference()
{
    referenceIsSet_ = false;
}

int32_t EditingSetting::getVideoCodec() const
{
    return videoCodec_;
}

void EditingSetting::setVideoCodec(int32_t value)
{
    videoCodec_ = value;
    videoCodecIsSet_ = true;
}

bool EditingSetting::videoCodecIsSet() const
{
    return videoCodecIsSet_;
}

void EditingSetting::unsetvideoCodec()
{
    videoCodecIsSet_ = false;
}

}
}
}
}
}


