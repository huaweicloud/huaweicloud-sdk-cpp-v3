

#include "huaweicloud/mpc/v1/model/VideoProcess.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




VideoProcess::VideoProcess()
{
    hlsInitCount_ = 0;
    hlsInitCountIsSet_ = false;
    hlsInitInterval_ = 0;
    hlsInitIntervalIsSet_ = false;
    rotate_ = 0;
    rotateIsSet_ = false;
    adaptation_ = "";
    adaptationIsSet_ = false;
    upsample_ = 0;
    upsampleIsSet_ = false;
}

VideoProcess::~VideoProcess() = default;

void VideoProcess::validate()
{
}

web::json::value VideoProcess::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hlsInitCountIsSet_) {
        val[utility::conversions::to_string_t("hls_init_count")] = ModelBase::toJson(hlsInitCount_);
    }
    if(hlsInitIntervalIsSet_) {
        val[utility::conversions::to_string_t("hls_init_interval")] = ModelBase::toJson(hlsInitInterval_);
    }
    if(rotateIsSet_) {
        val[utility::conversions::to_string_t("rotate")] = ModelBase::toJson(rotate_);
    }
    if(adaptationIsSet_) {
        val[utility::conversions::to_string_t("adaptation")] = ModelBase::toJson(adaptation_);
    }
    if(upsampleIsSet_) {
        val[utility::conversions::to_string_t("upsample")] = ModelBase::toJson(upsample_);
    }

    return val;
}

bool VideoProcess::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hls_init_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hls_init_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHlsInitCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hls_init_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hls_init_interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHlsInitInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rotate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rotate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRotate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("adaptation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adaptation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdaptation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upsample"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upsample"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpsample(refVal);
        }
    }
    return ok;
}


int32_t VideoProcess::getHlsInitCount() const
{
    return hlsInitCount_;
}

void VideoProcess::setHlsInitCount(int32_t value)
{
    hlsInitCount_ = value;
    hlsInitCountIsSet_ = true;
}

bool VideoProcess::hlsInitCountIsSet() const
{
    return hlsInitCountIsSet_;
}

void VideoProcess::unsethlsInitCount()
{
    hlsInitCountIsSet_ = false;
}

int32_t VideoProcess::getHlsInitInterval() const
{
    return hlsInitInterval_;
}

void VideoProcess::setHlsInitInterval(int32_t value)
{
    hlsInitInterval_ = value;
    hlsInitIntervalIsSet_ = true;
}

bool VideoProcess::hlsInitIntervalIsSet() const
{
    return hlsInitIntervalIsSet_;
}

void VideoProcess::unsethlsInitInterval()
{
    hlsInitIntervalIsSet_ = false;
}

int32_t VideoProcess::getRotate() const
{
    return rotate_;
}

void VideoProcess::setRotate(int32_t value)
{
    rotate_ = value;
    rotateIsSet_ = true;
}

bool VideoProcess::rotateIsSet() const
{
    return rotateIsSet_;
}

void VideoProcess::unsetrotate()
{
    rotateIsSet_ = false;
}

std::string VideoProcess::getAdaptation() const
{
    return adaptation_;
}

void VideoProcess::setAdaptation(const std::string& value)
{
    adaptation_ = value;
    adaptationIsSet_ = true;
}

bool VideoProcess::adaptationIsSet() const
{
    return adaptationIsSet_;
}

void VideoProcess::unsetadaptation()
{
    adaptationIsSet_ = false;
}

int32_t VideoProcess::getUpsample() const
{
    return upsample_;
}

void VideoProcess::setUpsample(int32_t value)
{
    upsample_ = value;
    upsampleIsSet_ = true;
}

bool VideoProcess::upsampleIsSet() const
{
    return upsampleIsSet_;
}

void VideoProcess::unsetupsample()
{
    upsampleIsSet_ = false;
}

}
}
}
}
}


