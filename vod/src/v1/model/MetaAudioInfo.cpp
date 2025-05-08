

#include "huaweicloud/vod/v1/model/MetaAudioInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




MetaAudioInfo::MetaAudioInfo()
{
    codec_ = "";
    codecIsSet_ = false;
    samplingRate_ = 0;
    samplingRateIsSet_ = false;
    bitrate_ = 0L;
    bitrateIsSet_ = false;
}

MetaAudioInfo::~MetaAudioInfo() = default;

void MetaAudioInfo::validate()
{
}

web::json::value MetaAudioInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codecIsSet_) {
        val[utility::conversions::to_string_t("codec")] = ModelBase::toJson(codec_);
    }
    if(samplingRateIsSet_) {
        val[utility::conversions::to_string_t("sampling_rate")] = ModelBase::toJson(samplingRate_);
    }
    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
    }

    return val;
}
bool MetaAudioInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sampling_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sampling_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSamplingRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bitrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrate(refVal);
        }
    }
    return ok;
}


std::string MetaAudioInfo::getCodec() const
{
    return codec_;
}

void MetaAudioInfo::setCodec(const std::string& value)
{
    codec_ = value;
    codecIsSet_ = true;
}

bool MetaAudioInfo::codecIsSet() const
{
    return codecIsSet_;
}

void MetaAudioInfo::unsetcodec()
{
    codecIsSet_ = false;
}

int32_t MetaAudioInfo::getSamplingRate() const
{
    return samplingRate_;
}

void MetaAudioInfo::setSamplingRate(int32_t value)
{
    samplingRate_ = value;
    samplingRateIsSet_ = true;
}

bool MetaAudioInfo::samplingRateIsSet() const
{
    return samplingRateIsSet_;
}

void MetaAudioInfo::unsetsamplingRate()
{
    samplingRateIsSet_ = false;
}

int64_t MetaAudioInfo::getBitrate() const
{
    return bitrate_;
}

void MetaAudioInfo::setBitrate(int64_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool MetaAudioInfo::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void MetaAudioInfo::unsetbitrate()
{
    bitrateIsSet_ = false;
}

}
}
}
}
}


