

#include "huaweicloud/rds/v3/model/ShowRecyclePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowRecyclePolicyResponse::ShowRecyclePolicyResponse()
{
    retentionPeriodInDays_ = 0;
    retentionPeriodInDaysIsSet_ = false;
}

ShowRecyclePolicyResponse::~ShowRecyclePolicyResponse() = default;

void ShowRecyclePolicyResponse::validate()
{
}

web::json::value ShowRecyclePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(retentionPeriodInDaysIsSet_) {
        val[utility::conversions::to_string_t("retention_period_in_days")] = ModelBase::toJson(retentionPeriodInDays_);
    }

    return val;
}
bool ShowRecyclePolicyResponse::fromJson(const web::json::value& val)
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


int32_t ShowRecyclePolicyResponse::getRetentionPeriodInDays() const
{
    return retentionPeriodInDays_;
}

void ShowRecyclePolicyResponse::setRetentionPeriodInDays(int32_t value)
{
    retentionPeriodInDays_ = value;
    retentionPeriodInDaysIsSet_ = true;
}

bool ShowRecyclePolicyResponse::retentionPeriodInDaysIsSet() const
{
    return retentionPeriodInDaysIsSet_;
}

void ShowRecyclePolicyResponse::unsetretentionPeriodInDays()
{
    retentionPeriodInDaysIsSet_ = false;
}

}
}
}
}
}


