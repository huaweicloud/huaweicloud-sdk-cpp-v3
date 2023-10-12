

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowRecyclePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowRecyclePolicyResponse::ShowRecyclePolicyResponse()
{
    retentionPeriodInDays_ = "";
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionPeriodInDays(refVal);
        }
    }
    return ok;
}


std::string ShowRecyclePolicyResponse::getRetentionPeriodInDays() const
{
    return retentionPeriodInDays_;
}

void ShowRecyclePolicyResponse::setRetentionPeriodInDays(const std::string& value)
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


