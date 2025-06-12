

#include "huaweicloud/metastudio/v1/model/PublicCloudServiceOrder.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




PublicCloudServiceOrder::PublicCloudServiceOrder()
{
    isAutoPay_ = 0;
    isAutoPayIsSet_ = false;
    periodType_ = 0;
    periodTypeIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    isAutoRenew_ = 0;
    isAutoRenewIsSet_ = false;
    subscriptionNum_ = 0;
    subscriptionNumIsSet_ = false;
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
}

PublicCloudServiceOrder::~PublicCloudServiceOrder() = default;

void PublicCloudServiceOrder::validate()
{
}

web::json::value PublicCloudServiceOrder::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }
    if(periodTypeIsSet_) {
        val[utility::conversions::to_string_t("period_type")] = ModelBase::toJson(periodType_);
    }
    if(periodNumIsSet_) {
        val[utility::conversions::to_string_t("period_num")] = ModelBase::toJson(periodNum_);
    }
    if(isAutoRenewIsSet_) {
        val[utility::conversions::to_string_t("is_auto_renew")] = ModelBase::toJson(isAutoRenew_);
    }
    if(subscriptionNumIsSet_) {
        val[utility::conversions::to_string_t("subscription_num")] = ModelBase::toJson(subscriptionNum_);
    }
    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resource_spec_code")] = ModelBase::toJson(resourceSpecCode_);
    }

    return val;
}
bool PublicCloudServiceOrder::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_renew"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_renew"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoRenew(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscription_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscription_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriptionNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSpecCode(refVal);
        }
    }
    return ok;
}


int32_t PublicCloudServiceOrder::getIsAutoPay() const
{
    return isAutoPay_;
}

void PublicCloudServiceOrder::setIsAutoPay(int32_t value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool PublicCloudServiceOrder::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void PublicCloudServiceOrder::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

int32_t PublicCloudServiceOrder::getPeriodType() const
{
    return periodType_;
}

void PublicCloudServiceOrder::setPeriodType(int32_t value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool PublicCloudServiceOrder::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void PublicCloudServiceOrder::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t PublicCloudServiceOrder::getPeriodNum() const
{
    return periodNum_;
}

void PublicCloudServiceOrder::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool PublicCloudServiceOrder::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void PublicCloudServiceOrder::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

int32_t PublicCloudServiceOrder::getIsAutoRenew() const
{
    return isAutoRenew_;
}

void PublicCloudServiceOrder::setIsAutoRenew(int32_t value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool PublicCloudServiceOrder::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void PublicCloudServiceOrder::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

int32_t PublicCloudServiceOrder::getSubscriptionNum() const
{
    return subscriptionNum_;
}

void PublicCloudServiceOrder::setSubscriptionNum(int32_t value)
{
    subscriptionNum_ = value;
    subscriptionNumIsSet_ = true;
}

bool PublicCloudServiceOrder::subscriptionNumIsSet() const
{
    return subscriptionNumIsSet_;
}

void PublicCloudServiceOrder::unsetsubscriptionNum()
{
    subscriptionNumIsSet_ = false;
}

std::string PublicCloudServiceOrder::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void PublicCloudServiceOrder::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool PublicCloudServiceOrder::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void PublicCloudServiceOrder::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

}
}
}
}
}


