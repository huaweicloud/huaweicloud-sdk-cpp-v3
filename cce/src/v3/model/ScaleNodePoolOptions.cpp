

#include "huaweicloud/cce/v3/model/ScaleNodePoolOptions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ScaleNodePoolOptions::ScaleNodePoolOptions()
{
    scalableChecking_ = "";
    scalableCheckingIsSet_ = false;
    scalePolicy_ = "";
    scalePolicyIsSet_ = false;
    billingConfigOverrideIsSet_ = false;
}

ScaleNodePoolOptions::~ScaleNodePoolOptions() = default;

void ScaleNodePoolOptions::validate()
{
}

web::json::value ScaleNodePoolOptions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scalableCheckingIsSet_) {
        val[utility::conversions::to_string_t("scalableChecking")] = ModelBase::toJson(scalableChecking_);
    }
    if(scalePolicyIsSet_) {
        val[utility::conversions::to_string_t("scalePolicy")] = ModelBase::toJson(scalePolicy_);
    }
    if(billingConfigOverrideIsSet_) {
        val[utility::conversions::to_string_t("billingConfigOverride")] = ModelBase::toJson(billingConfigOverride_);
    }

    return val;
}
bool ScaleNodePoolOptions::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("scalableChecking"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scalableChecking"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScalableChecking(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scalePolicy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scalePolicy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScalePolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billingConfigOverride"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billingConfigOverride"));
        if(!fieldValue.is_null())
        {
            ScaleUpBillingConfigOverride refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingConfigOverride(refVal);
        }
    }
    return ok;
}


std::string ScaleNodePoolOptions::getScalableChecking() const
{
    return scalableChecking_;
}

void ScaleNodePoolOptions::setScalableChecking(const std::string& value)
{
    scalableChecking_ = value;
    scalableCheckingIsSet_ = true;
}

bool ScaleNodePoolOptions::scalableCheckingIsSet() const
{
    return scalableCheckingIsSet_;
}

void ScaleNodePoolOptions::unsetscalableChecking()
{
    scalableCheckingIsSet_ = false;
}

std::string ScaleNodePoolOptions::getScalePolicy() const
{
    return scalePolicy_;
}

void ScaleNodePoolOptions::setScalePolicy(const std::string& value)
{
    scalePolicy_ = value;
    scalePolicyIsSet_ = true;
}

bool ScaleNodePoolOptions::scalePolicyIsSet() const
{
    return scalePolicyIsSet_;
}

void ScaleNodePoolOptions::unsetscalePolicy()
{
    scalePolicyIsSet_ = false;
}

ScaleUpBillingConfigOverride ScaleNodePoolOptions::getBillingConfigOverride() const
{
    return billingConfigOverride_;
}

void ScaleNodePoolOptions::setBillingConfigOverride(const ScaleUpBillingConfigOverride& value)
{
    billingConfigOverride_ = value;
    billingConfigOverrideIsSet_ = true;
}

bool ScaleNodePoolOptions::billingConfigOverrideIsSet() const
{
    return billingConfigOverrideIsSet_;
}

void ScaleNodePoolOptions::unsetbillingConfigOverride()
{
    billingConfigOverrideIsSet_ = false;
}

}
}
}
}
}


