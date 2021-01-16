

#include "huaweicloud/eip/v2/model/CreatePrePaidPublicipExtendParamOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CreatePrePaidPublicipExtendParamOption::CreatePrePaidPublicipExtendParamOption()
{
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    periodType_ = "";
    periodTypeIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    isAutoRenew_ = false;
    isAutoRenewIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
}

CreatePrePaidPublicipExtendParamOption::~CreatePrePaidPublicipExtendParamOption() = default;

void CreatePrePaidPublicipExtendParamOption::validate()
{
}

web::json::value CreatePrePaidPublicipExtendParamOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
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
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}

bool CreatePrePaidPublicipExtendParamOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
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
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoRenew(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}


std::string CreatePrePaidPublicipExtendParamOption::getChargeMode() const
{
    return chargeMode_;
}

void CreatePrePaidPublicipExtendParamOption::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool CreatePrePaidPublicipExtendParamOption::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void CreatePrePaidPublicipExtendParamOption::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string CreatePrePaidPublicipExtendParamOption::getPeriodType() const
{
    return periodType_;
}

void CreatePrePaidPublicipExtendParamOption::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool CreatePrePaidPublicipExtendParamOption::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void CreatePrePaidPublicipExtendParamOption::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t CreatePrePaidPublicipExtendParamOption::getPeriodNum() const
{
    return periodNum_;
}

void CreatePrePaidPublicipExtendParamOption::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool CreatePrePaidPublicipExtendParamOption::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void CreatePrePaidPublicipExtendParamOption::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

bool CreatePrePaidPublicipExtendParamOption::isIsAutoRenew() const
{
    return isAutoRenew_;
}

void CreatePrePaidPublicipExtendParamOption::setIsAutoRenew(bool value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool CreatePrePaidPublicipExtendParamOption::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void CreatePrePaidPublicipExtendParamOption::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

bool CreatePrePaidPublicipExtendParamOption::isIsAutoPay() const
{
    return isAutoPay_;
}

void CreatePrePaidPublicipExtendParamOption::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool CreatePrePaidPublicipExtendParamOption::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void CreatePrePaidPublicipExtendParamOption::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


