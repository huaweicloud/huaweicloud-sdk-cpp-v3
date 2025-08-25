

#include "huaweicloud/cce/v3/model/ScaleUpBillingConfigOverride.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ScaleUpBillingConfigOverride::ScaleUpBillingConfigOverride()
{
    billingMode_ = 0;
    billingModeIsSet_ = false;
    extendParamIsSet_ = false;
}

ScaleUpBillingConfigOverride::~ScaleUpBillingConfigOverride() = default;

void ScaleUpBillingConfigOverride::validate()
{
}

web::json::value ScaleUpBillingConfigOverride::toJson() const
{
    web::json::value val = web::json::value::object();

    if(billingModeIsSet_) {
        val[utility::conversions::to_string_t("billingMode")] = ModelBase::toJson(billingMode_);
    }
    if(extendParamIsSet_) {
        val[utility::conversions::to_string_t("extendParam")] = ModelBase::toJson(extendParam_);
    }

    return val;
}
bool ScaleUpBillingConfigOverride::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("billingMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billingMode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParam"));
        if(!fieldValue.is_null())
        {
            ScaleUpExtendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParam(refVal);
        }
    }
    return ok;
}


int32_t ScaleUpBillingConfigOverride::getBillingMode() const
{
    return billingMode_;
}

void ScaleUpBillingConfigOverride::setBillingMode(int32_t value)
{
    billingMode_ = value;
    billingModeIsSet_ = true;
}

bool ScaleUpBillingConfigOverride::billingModeIsSet() const
{
    return billingModeIsSet_;
}

void ScaleUpBillingConfigOverride::unsetbillingMode()
{
    billingModeIsSet_ = false;
}

ScaleUpExtendParam ScaleUpBillingConfigOverride::getExtendParam() const
{
    return extendParam_;
}

void ScaleUpBillingConfigOverride::setExtendParam(const ScaleUpExtendParam& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool ScaleUpBillingConfigOverride::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void ScaleUpBillingConfigOverride::unsetextendParam()
{
    extendParamIsSet_ = false;
}

}
}
}
}
}


