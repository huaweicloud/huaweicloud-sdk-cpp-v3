

#include "huaweicloud/rds/v3/model/RecyclePolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RecyclePolicy::RecyclePolicy()
{
    retentionPeriodInDays_ = "";
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionPeriodInDays(refVal);
        }
    }
    return ok;
}


std::string RecyclePolicy::getRetentionPeriodInDays() const
{
    return retentionPeriodInDays_;
}

void RecyclePolicy::setRetentionPeriodInDays(const std::string& value)
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


