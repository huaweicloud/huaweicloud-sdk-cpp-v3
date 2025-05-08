

#include "huaweicloud/vod/v1/model/VideoProcess.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




VideoProcess::VideoProcess()
{
    hlsInitCount_ = 0;
    hlsInitCountIsSet_ = false;
    hlsInitInterval_ = 0;
    hlsInitIntervalIsSet_ = false;
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

}
}
}
}
}


