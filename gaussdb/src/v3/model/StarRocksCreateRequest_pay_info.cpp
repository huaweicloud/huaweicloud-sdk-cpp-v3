

#include "huaweicloud/gaussdb/v3/model/StarRocksCreateRequest_pay_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StarRocksCreateRequest_pay_info::StarRocksCreateRequest_pay_info()
{
    payModel_ = "";
    payModelIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    periodType_ = "";
    periodTypeIsSet_ = false;
    isAutoRenew_ = "";
    isAutoRenewIsSet_ = false;
}

StarRocksCreateRequest_pay_info::~StarRocksCreateRequest_pay_info() = default;

void StarRocksCreateRequest_pay_info::validate()
{
}

web::json::value StarRocksCreateRequest_pay_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(payModelIsSet_) {
        val[utility::conversions::to_string_t("pay_model")] = ModelBase::toJson(payModel_);
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
bool StarRocksCreateRequest_pay_info::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_renew"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_renew"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoRenew(refVal);
        }
    }
    return ok;
}


std::string StarRocksCreateRequest_pay_info::getPayModel() const
{
    return payModel_;
}

void StarRocksCreateRequest_pay_info::setPayModel(const std::string& value)
{
    payModel_ = value;
    payModelIsSet_ = true;
}

bool StarRocksCreateRequest_pay_info::payModelIsSet() const
{
    return payModelIsSet_;
}

void StarRocksCreateRequest_pay_info::unsetpayModel()
{
    payModelIsSet_ = false;
}

std::string StarRocksCreateRequest_pay_info::getPeriod() const
{
    return period_;
}

void StarRocksCreateRequest_pay_info::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool StarRocksCreateRequest_pay_info::periodIsSet() const
{
    return periodIsSet_;
}

void StarRocksCreateRequest_pay_info::unsetperiod()
{
    periodIsSet_ = false;
}

std::string StarRocksCreateRequest_pay_info::getPeriodType() const
{
    return periodType_;
}

void StarRocksCreateRequest_pay_info::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool StarRocksCreateRequest_pay_info::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void StarRocksCreateRequest_pay_info::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

std::string StarRocksCreateRequest_pay_info::getIsAutoRenew() const
{
    return isAutoRenew_;
}

void StarRocksCreateRequest_pay_info::setIsAutoRenew(const std::string& value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool StarRocksCreateRequest_pay_info::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void StarRocksCreateRequest_pay_info::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

}
}
}
}
}


