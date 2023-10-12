

#include "huaweicloud/gaussdbfornosql/v3/model/RecyclePolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RecyclePolicy::RecyclePolicy()
{
    retentionPeriodInDays_ = 0;
    retentionPeriodInDaysIsSet_ = false;
}

RecyclePolicy::~RecyclePolicy() = default;

void RecyclePolicy::validate()
{
}

web::json::value RecyclePolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(retentionPeriodInDaysIsSet_) {
        val[utility::conversions::to_string_t("retention_period_in_days")] = ModelBase::toJson(retentionPeriodInDays_);
    }

    return val;
}
bool RecyclePolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("retention_period_in_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_period_in_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionPeriodInDays(refVal);
        }
    }
    return ok;
}


int32_t RecyclePolicy::getRetentionPeriodInDays() const
{
    return retentionPeriodInDays_;
}

void RecyclePolicy::setRetentionPeriodInDays(int32_t value)
{
    retentionPeriodInDays_ = value;
    retentionPeriodInDaysIsSet_ = true;
}

bool RecyclePolicy::retentionPeriodInDaysIsSet() const
{
    return retentionPeriodInDaysIsSet_;
}

void RecyclePolicy::unsetretentionPeriodInDays()
{
    retentionPeriodInDaysIsSet_ = false;
}

}
}
}
}
}


