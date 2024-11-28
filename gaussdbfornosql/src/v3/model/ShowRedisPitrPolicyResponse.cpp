

#include "huaweicloud/gaussdbfornosql/v3/model/ShowRedisPitrPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowRedisPitrPolicyResponse::ShowRedisPitrPolicyResponse()
{
    enabled_ = false;
    enabledIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
    keepDays_ = 0;
    keepDaysIsSet_ = false;
}

ShowRedisPitrPolicyResponse::~ShowRedisPitrPolicyResponse() = default;

void ShowRedisPitrPolicyResponse::validate()
{
}

web::json::value ShowRedisPitrPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }
    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }

    return val;
}
bool ShowRedisPitrPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keep_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepDays(refVal);
        }
    }
    return ok;
}


bool ShowRedisPitrPolicyResponse::isEnabled() const
{
    return enabled_;
}

void ShowRedisPitrPolicyResponse::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ShowRedisPitrPolicyResponse::enabledIsSet() const
{
    return enabledIsSet_;
}

void ShowRedisPitrPolicyResponse::unsetenabled()
{
    enabledIsSet_ = false;
}

int32_t ShowRedisPitrPolicyResponse::getInterval() const
{
    return interval_;
}

void ShowRedisPitrPolicyResponse::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ShowRedisPitrPolicyResponse::intervalIsSet() const
{
    return intervalIsSet_;
}

void ShowRedisPitrPolicyResponse::unsetinterval()
{
    intervalIsSet_ = false;
}

int32_t ShowRedisPitrPolicyResponse::getKeepDays() const
{
    return keepDays_;
}

void ShowRedisPitrPolicyResponse::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool ShowRedisPitrPolicyResponse::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void ShowRedisPitrPolicyResponse::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

}
}
}
}
}


