

#include "huaweicloud/metastudio/v1/model/PhotoVideoConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




PhotoVideoConfig::PhotoVideoConfig()
{
    codec_ = "";
    codecIsSet_ = false;
    bitrate_ = 0;
    bitrateIsSet_ = false;
    frameRate_ = "";
    frameRateIsSet_ = false;
}

PhotoVideoConfig::~PhotoVideoConfig() = default;

void PhotoVideoConfig::validate()
{
}

web::json::value PhotoVideoConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codecIsSet_) {
        val[utility::conversions::to_string_t("codec")] = ModelBase::toJson(codec_);
    }
    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
    }
    if(frameRateIsSet_) {
        val[utility::conversions::to_string_t("frame_rate")] = ModelBase::toJson(frameRate_);
    }

    return val;
}
bool PhotoVideoConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("codec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bitrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frame_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frame_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrameRate(refVal);
        }
    }
    return ok;
}


std::string PhotoVideoConfig::getCodec() const
{
    return codec_;
}

void PhotoVideoConfig::setCodec(const std::string& value)
{
    codec_ = value;
    codecIsSet_ = true;
}

bool PhotoVideoConfig::codecIsSet() const
{
    return codecIsSet_;
}

void PhotoVideoConfig::unsetcodec()
{
    codecIsSet_ = false;
}

int32_t PhotoVideoConfig::getBitrate() const
{
    return bitrate_;
}

void PhotoVideoConfig::setBitrate(int32_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool PhotoVideoConfig::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void PhotoVideoConfig::unsetbitrate()
{
    bitrateIsSet_ = false;
}

std::string PhotoVideoConfig::getFrameRate() const
{
    return frameRate_;
}

void PhotoVideoConfig::setFrameRate(const std::string& value)
{
    frameRate_ = value;
    frameRateIsSet_ = true;
}

bool PhotoVideoConfig::frameRateIsSet() const
{
    return frameRateIsSet_;
}

void PhotoVideoConfig::unsetframeRate()
{
    frameRateIsSet_ = false;
}

}
}
}
}
}


