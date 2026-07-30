

#include "huaweicloud/modelarts/v1/model/FuseConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




FuseConfig::FuseConfig()
{
    errorRateFuseEnable_ = false;
    errorRateFuseEnableIsSet_ = false;
    errorRateThreshold_ = 0.0f;
    errorRateThresholdIsSet_ = false;
}

FuseConfig::~FuseConfig() = default;

void FuseConfig::validate()
{
}

web::json::value FuseConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorRateFuseEnableIsSet_) {
        val[utility::conversions::to_string_t("error_rate_fuse_enable")] = ModelBase::toJson(errorRateFuseEnable_);
    }
    if(errorRateThresholdIsSet_) {
        val[utility::conversions::to_string_t("error_rate_threshold")] = ModelBase::toJson(errorRateThreshold_);
    }

    return val;
}
bool FuseConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_rate_fuse_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_rate_fuse_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorRateFuseEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_rate_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_rate_threshold"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorRateThreshold(refVal);
        }
    }
    return ok;
}


bool FuseConfig::isErrorRateFuseEnable() const
{
    return errorRateFuseEnable_;
}

void FuseConfig::setErrorRateFuseEnable(bool value)
{
    errorRateFuseEnable_ = value;
    errorRateFuseEnableIsSet_ = true;
}

bool FuseConfig::errorRateFuseEnableIsSet() const
{
    return errorRateFuseEnableIsSet_;
}

void FuseConfig::unseterrorRateFuseEnable()
{
    errorRateFuseEnableIsSet_ = false;
}

float FuseConfig::getErrorRateThreshold() const
{
    return errorRateThreshold_;
}

void FuseConfig::setErrorRateThreshold(float value)
{
    errorRateThreshold_ = value;
    errorRateThresholdIsSet_ = true;
}

bool FuseConfig::errorRateThresholdIsSet() const
{
    return errorRateThresholdIsSet_;
}

void FuseConfig::unseterrorRateThreshold()
{
    errorRateThresholdIsSet_ = false;
}

}
}
}
}
}


