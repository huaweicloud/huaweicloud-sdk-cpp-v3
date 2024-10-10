

#include "huaweicloud/rds/v3/model/ToPeriodReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ToPeriodReq::ToPeriodReq()
{
    periodType_ = "";
    periodTypeIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    autoPayPolicy_ = "";
    autoPayPolicyIsSet_ = false;
    autoRenewPolicy_ = "";
    autoRenewPolicyIsSet_ = false;
}

ToPeriodReq::~ToPeriodReq() = default;

void ToPeriodReq::validate()
{
}

web::json::value ToPeriodReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(periodTypeIsSet_) {
        val[utility::conversions::to_string_t("period_type")] = ModelBase::toJson(periodType_);
    }
    if(periodNumIsSet_) {
        val[utility::conversions::to_string_t("period_num")] = ModelBase::toJson(periodNum_);
    }
    if(autoPayPolicyIsSet_) {
        val[utility::conversions::to_string_t("auto_pay_policy")] = ModelBase::toJson(autoPayPolicy_);
    }
    if(autoRenewPolicyIsSet_) {
        val[utility::conversions::to_string_t("auto_renew_policy")] = ModelBase::toJson(autoRenewPolicy_);
    }

    return val;
}
bool ToPeriodReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("auto_pay_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_pay_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoPayPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_renew_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_renew_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoRenewPolicy(refVal);
        }
    }
    return ok;
}


std::string ToPeriodReq::getPeriodType() const
{
    return periodType_;
}

void ToPeriodReq::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool ToPeriodReq::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void ToPeriodReq::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t ToPeriodReq::getPeriodNum() const
{
    return periodNum_;
}

void ToPeriodReq::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool ToPeriodReq::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void ToPeriodReq::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

std::string ToPeriodReq::getAutoPayPolicy() const
{
    return autoPayPolicy_;
}

void ToPeriodReq::setAutoPayPolicy(const std::string& value)
{
    autoPayPolicy_ = value;
    autoPayPolicyIsSet_ = true;
}

bool ToPeriodReq::autoPayPolicyIsSet() const
{
    return autoPayPolicyIsSet_;
}

void ToPeriodReq::unsetautoPayPolicy()
{
    autoPayPolicyIsSet_ = false;
}

std::string ToPeriodReq::getAutoRenewPolicy() const
{
    return autoRenewPolicy_;
}

void ToPeriodReq::setAutoRenewPolicy(const std::string& value)
{
    autoRenewPolicy_ = value;
    autoRenewPolicyIsSet_ = true;
}

bool ToPeriodReq::autoRenewPolicyIsSet() const
{
    return autoRenewPolicyIsSet_;
}

void ToPeriodReq::unsetautoRenewPolicy()
{
    autoRenewPolicyIsSet_ = false;
}

}
}
}
}
}


