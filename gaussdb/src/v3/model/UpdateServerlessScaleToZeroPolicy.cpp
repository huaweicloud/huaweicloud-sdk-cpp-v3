

#include "huaweicloud/gaussdb/v3/model/UpdateServerlessScaleToZeroPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateServerlessScaleToZeroPolicy::UpdateServerlessScaleToZeroPolicy()
{
    scaleToZero_ = false;
    scaleToZeroIsSet_ = false;
    idleDurationSeconds_ = 0;
    idleDurationSecondsIsSet_ = false;
}

UpdateServerlessScaleToZeroPolicy::~UpdateServerlessScaleToZeroPolicy() = default;

void UpdateServerlessScaleToZeroPolicy::validate()
{
}

web::json::value UpdateServerlessScaleToZeroPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scaleToZeroIsSet_) {
        val[utility::conversions::to_string_t("scale_to_zero")] = ModelBase::toJson(scaleToZero_);
    }
    if(idleDurationSecondsIsSet_) {
        val[utility::conversions::to_string_t("idle_duration_seconds")] = ModelBase::toJson(idleDurationSeconds_);
    }

    return val;
}
bool UpdateServerlessScaleToZeroPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("scale_to_zero"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scale_to_zero"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScaleToZero(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("idle_duration_seconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idle_duration_seconds"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdleDurationSeconds(refVal);
        }
    }
    return ok;
}


bool UpdateServerlessScaleToZeroPolicy::isScaleToZero() const
{
    return scaleToZero_;
}

void UpdateServerlessScaleToZeroPolicy::setScaleToZero(bool value)
{
    scaleToZero_ = value;
    scaleToZeroIsSet_ = true;
}

bool UpdateServerlessScaleToZeroPolicy::scaleToZeroIsSet() const
{
    return scaleToZeroIsSet_;
}

void UpdateServerlessScaleToZeroPolicy::unsetscaleToZero()
{
    scaleToZeroIsSet_ = false;
}

int32_t UpdateServerlessScaleToZeroPolicy::getIdleDurationSeconds() const
{
    return idleDurationSeconds_;
}

void UpdateServerlessScaleToZeroPolicy::setIdleDurationSeconds(int32_t value)
{
    idleDurationSeconds_ = value;
    idleDurationSecondsIsSet_ = true;
}

bool UpdateServerlessScaleToZeroPolicy::idleDurationSecondsIsSet() const
{
    return idleDurationSecondsIsSet_;
}

void UpdateServerlessScaleToZeroPolicy::unsetidleDurationSeconds()
{
    idleDurationSecondsIsSet_ = false;
}

}
}
}
}
}


