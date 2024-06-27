

#include "huaweicloud/gaussdb/v3/model/CreateChInstanceRequestBody_pay_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateChInstanceRequestBody_pay_info::CreateChInstanceRequestBody_pay_info()
{
    payModel_ = "";
    payModelIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    period_ = 0;
    periodIsSet_ = false;
    periodType_ = 0;
    periodTypeIsSet_ = false;
    isAutoRenew_ = 0;
    isAutoRenewIsSet_ = false;
}

CreateChInstanceRequestBody_pay_info::~CreateChInstanceRequestBody_pay_info() = default;

void CreateChInstanceRequestBody_pay_info::validate()
{
}

web::json::value CreateChInstanceRequestBody_pay_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(payModelIsSet_) {
        val[utility::conversions::to_string_t("pay_model")] = ModelBase::toJson(payModel_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(periodTypeIsSet_) {
        val[utility::conversions::to_string_t("period_type")] = ModelBase::toJson(periodType_);
    }
    if(isAutoRenewIsSet_) {
        val[utility::conversions::to_string_t("is_auto_renew")] = ModelBase::toJson(isAutoRenew_);
    }

    return val;
}
bool CreateChInstanceRequestBody_pay_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pay_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pay_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPayModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_auto_renew"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_renew"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoRenew(refVal);
        }
    }
    return ok;
}


std::string CreateChInstanceRequestBody_pay_info::getPayModel() const
{
    return payModel_;
}

void CreateChInstanceRequestBody_pay_info::setPayModel(const std::string& value)
{
    payModel_ = value;
    payModelIsSet_ = true;
}

bool CreateChInstanceRequestBody_pay_info::payModelIsSet() const
{
    return payModelIsSet_;
}

void CreateChInstanceRequestBody_pay_info::unsetpayModel()
{
    payModelIsSet_ = false;
}

std::string CreateChInstanceRequestBody_pay_info::getOrderId() const
{
    return orderId_;
}

void CreateChInstanceRequestBody_pay_info::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateChInstanceRequestBody_pay_info::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateChInstanceRequestBody_pay_info::unsetorderId()
{
    orderIdIsSet_ = false;
}

int32_t CreateChInstanceRequestBody_pay_info::getPeriod() const
{
    return period_;
}

void CreateChInstanceRequestBody_pay_info::setPeriod(int32_t value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool CreateChInstanceRequestBody_pay_info::periodIsSet() const
{
    return periodIsSet_;
}

void CreateChInstanceRequestBody_pay_info::unsetperiod()
{
    periodIsSet_ = false;
}

int32_t CreateChInstanceRequestBody_pay_info::getPeriodType() const
{
    return periodType_;
}

void CreateChInstanceRequestBody_pay_info::setPeriodType(int32_t value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool CreateChInstanceRequestBody_pay_info::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void CreateChInstanceRequestBody_pay_info::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t CreateChInstanceRequestBody_pay_info::getIsAutoRenew() const
{
    return isAutoRenew_;
}

void CreateChInstanceRequestBody_pay_info::setIsAutoRenew(int32_t value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool CreateChInstanceRequestBody_pay_info::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void CreateChInstanceRequestBody_pay_info::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

}
}
}
}
}


