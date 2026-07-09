

#include "huaweicloud/dbss/v1/model/CommonSettingsResponse_log_retention.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CommonSettingsResponse_log_retention::CommonSettingsResponse_log_retention()
{
    retentionDays_ = 0;
    retentionDaysIsSet_ = false;
    rangeDaysMin_ = 0;
    rangeDaysMinIsSet_ = false;
    rangeDaysMax_ = 0;
    rangeDaysMaxIsSet_ = false;
}

CommonSettingsResponse_log_retention::~CommonSettingsResponse_log_retention() = default;

void CommonSettingsResponse_log_retention::validate()
{
}

web::json::value CommonSettingsResponse_log_retention::toJson() const
{
    web::json::value val = web::json::value::object();

    if(retentionDaysIsSet_) {
        val[utility::conversions::to_string_t("retention_days")] = ModelBase::toJson(retentionDays_);
    }
    if(rangeDaysMinIsSet_) {
        val[utility::conversions::to_string_t("range_days_min")] = ModelBase::toJson(rangeDaysMin_);
    }
    if(rangeDaysMaxIsSet_) {
        val[utility::conversions::to_string_t("range_days_max")] = ModelBase::toJson(rangeDaysMax_);
    }

    return val;
}
bool CommonSettingsResponse_log_retention::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("retention_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("range_days_min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("range_days_min"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRangeDaysMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("range_days_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("range_days_max"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRangeDaysMax(refVal);
        }
    }
    return ok;
}


int32_t CommonSettingsResponse_log_retention::getRetentionDays() const
{
    return retentionDays_;
}

void CommonSettingsResponse_log_retention::setRetentionDays(int32_t value)
{
    retentionDays_ = value;
    retentionDaysIsSet_ = true;
}

bool CommonSettingsResponse_log_retention::retentionDaysIsSet() const
{
    return retentionDaysIsSet_;
}

void CommonSettingsResponse_log_retention::unsetretentionDays()
{
    retentionDaysIsSet_ = false;
}

int32_t CommonSettingsResponse_log_retention::getRangeDaysMin() const
{
    return rangeDaysMin_;
}

void CommonSettingsResponse_log_retention::setRangeDaysMin(int32_t value)
{
    rangeDaysMin_ = value;
    rangeDaysMinIsSet_ = true;
}

bool CommonSettingsResponse_log_retention::rangeDaysMinIsSet() const
{
    return rangeDaysMinIsSet_;
}

void CommonSettingsResponse_log_retention::unsetrangeDaysMin()
{
    rangeDaysMinIsSet_ = false;
}

int32_t CommonSettingsResponse_log_retention::getRangeDaysMax() const
{
    return rangeDaysMax_;
}

void CommonSettingsResponse_log_retention::setRangeDaysMax(int32_t value)
{
    rangeDaysMax_ = value;
    rangeDaysMaxIsSet_ = true;
}

bool CommonSettingsResponse_log_retention::rangeDaysMaxIsSet() const
{
    return rangeDaysMaxIsSet_;
}

void CommonSettingsResponse_log_retention::unsetrangeDaysMax()
{
    rangeDaysMaxIsSet_ = false;
}

}
}
}
}
}


