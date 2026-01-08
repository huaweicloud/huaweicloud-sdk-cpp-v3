

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
    hlsStorageType_ = "";
    hlsStorageTypeIsSet_ = false;
    rotate_ = 0;
    rotateIsSet_ = false;
    adaptation_ = "";
    adaptationIsSet_ = false;
    fillType_ = "";
    fillTypeIsSet_ = false;
    upsample_ = 0;
    upsampleIsSet_ = false;
    hlsSegmentType_ = "";
    hlsSegmentTypeIsSet_ = false;
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
    if(hlsStorageTypeIsSet_) {
        val[utility::conversions::to_string_t("hls_storage_type")] = ModelBase::toJson(hlsStorageType_);
    }
    if(rotateIsSet_) {
        val[utility::conversions::to_string_t("rotate")] = ModelBase::toJson(rotate_);
    }
    if(adaptationIsSet_) {
        val[utility::conversions::to_string_t("adaptation")] = ModelBase::toJson(adaptation_);
    }
    if(fillTypeIsSet_) {
        val[utility::conversions::to_string_t("fill_type")] = ModelBase::toJson(fillType_);
    }
    if(upsampleIsSet_) {
        val[utility::conversions::to_string_t("upsample")] = ModelBase::toJson(upsample_);
    }
    if(hlsSegmentTypeIsSet_) {
        val[utility::conversions::to_string_t("hls_segment_type")] = ModelBase::toJson(hlsSegmentType_);
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
    if(val.has_field(utility::conversions::to_string_t("hls_storage_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hls_storage_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHlsStorageType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fill_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fill_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFillType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("hls_segment_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hls_segment_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHlsSegmentType(refVal);
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

std::string VideoProcess::getHlsStorageType() const
{
    return hlsStorageType_;
}

void VideoProcess::setHlsStorageType(const std::string& value)
{
    hlsStorageType_ = value;
    hlsStorageTypeIsSet_ = true;
}

bool VideoProcess::hlsStorageTypeIsSet() const
{
    return hlsStorageTypeIsSet_;
}

void VideoProcess::unsethlsStorageType()
{
    hlsStorageTypeIsSet_ = false;
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

std::string VideoProcess::getFillType() const
{
    return fillType_;
}

void VideoProcess::setFillType(const std::string& value)
{
    fillType_ = value;
    fillTypeIsSet_ = true;
}

bool VideoProcess::fillTypeIsSet() const
{
    return fillTypeIsSet_;
}

void VideoProcess::unsetfillType()
{
    fillTypeIsSet_ = false;
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

std::string VideoProcess::getHlsSegmentType() const
{
    return hlsSegmentType_;
}

void VideoProcess::setHlsSegmentType(const std::string& value)
{
    hlsSegmentType_ = value;
    hlsSegmentTypeIsSet_ = true;
}

bool VideoProcess::hlsSegmentTypeIsSet() const
{
    return hlsSegmentTypeIsSet_;
}

void VideoProcess::unsethlsSegmentType()
{
    hlsSegmentTypeIsSet_ = false;
}

}
}
}
}
}


