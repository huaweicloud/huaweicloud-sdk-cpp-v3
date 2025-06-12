

#include "huaweicloud/metastudio/v1/model/LiveExitConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LiveExitConfig::LiveExitConfig()
{
    maxLiveDuration_ = 0;
    maxLiveDurationIsSet_ = false;
    autoStopMode_ = "";
    autoStopModeIsSet_ = false;
    maxExceptionWaitingDuration_ = 0;
    maxExceptionWaitingDurationIsSet_ = false;
}

LiveExitConfig::~LiveExitConfig() = default;

void LiveExitConfig::validate()
{
}

web::json::value LiveExitConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maxLiveDurationIsSet_) {
        val[utility::conversions::to_string_t("max_live_duration")] = ModelBase::toJson(maxLiveDuration_);
    }
    if(autoStopModeIsSet_) {
        val[utility::conversions::to_string_t("auto_stop_mode")] = ModelBase::toJson(autoStopMode_);
    }
    if(maxExceptionWaitingDurationIsSet_) {
        val[utility::conversions::to_string_t("max_exception_waiting_duration")] = ModelBase::toJson(maxExceptionWaitingDuration_);
    }

    return val;
}
bool LiveExitConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("max_live_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_live_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxLiveDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_stop_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_stop_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoStopMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_exception_waiting_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_exception_waiting_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxExceptionWaitingDuration(refVal);
        }
    }
    return ok;
}


int32_t LiveExitConfig::getMaxLiveDuration() const
{
    return maxLiveDuration_;
}

void LiveExitConfig::setMaxLiveDuration(int32_t value)
{
    maxLiveDuration_ = value;
    maxLiveDurationIsSet_ = true;
}

bool LiveExitConfig::maxLiveDurationIsSet() const
{
    return maxLiveDurationIsSet_;
}

void LiveExitConfig::unsetmaxLiveDuration()
{
    maxLiveDurationIsSet_ = false;
}

std::string LiveExitConfig::getAutoStopMode() const
{
    return autoStopMode_;
}

void LiveExitConfig::setAutoStopMode(const std::string& value)
{
    autoStopMode_ = value;
    autoStopModeIsSet_ = true;
}

bool LiveExitConfig::autoStopModeIsSet() const
{
    return autoStopModeIsSet_;
}

void LiveExitConfig::unsetautoStopMode()
{
    autoStopModeIsSet_ = false;
}

int32_t LiveExitConfig::getMaxExceptionWaitingDuration() const
{
    return maxExceptionWaitingDuration_;
}

void LiveExitConfig::setMaxExceptionWaitingDuration(int32_t value)
{
    maxExceptionWaitingDuration_ = value;
    maxExceptionWaitingDurationIsSet_ = true;
}

bool LiveExitConfig::maxExceptionWaitingDurationIsSet() const
{
    return maxExceptionWaitingDurationIsSet_;
}

void LiveExitConfig::unsetmaxExceptionWaitingDuration()
{
    maxExceptionWaitingDurationIsSet_ = false;
}

}
}
}
}
}


