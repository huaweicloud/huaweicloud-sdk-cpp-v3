

#include "huaweicloud/cce/v3/model/ScaleUpExtendParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ScaleUpExtendParam::ScaleUpExtendParam()
{
    periodNum_ = 0;
    periodNumIsSet_ = false;
    periodType_ = "";
    periodTypeIsSet_ = false;
    isAutoRenew_ = false;
    isAutoRenewIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
}

ScaleUpExtendParam::~ScaleUpExtendParam() = default;

void ScaleUpExtendParam::validate()
{
}

web::json::value ScaleUpExtendParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(periodNumIsSet_) {
        val[utility::conversions::to_string_t("periodNum")] = ModelBase::toJson(periodNum_);
    }
    if(periodTypeIsSet_) {
        val[utility::conversions::to_string_t("periodType")] = ModelBase::toJson(periodType_);
    }
    if(isAutoRenewIsSet_) {
        val[utility::conversions::to_string_t("isAutoRenew")] = ModelBase::toJson(isAutoRenew_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("isAutoPay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}
bool ScaleUpExtendParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("periodNum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("periodNum"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("periodType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("periodType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isAutoRenew"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAutoRenew"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoRenew(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isAutoPay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAutoPay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}


int32_t ScaleUpExtendParam::getPeriodNum() const
{
    return periodNum_;
}

void ScaleUpExtendParam::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool ScaleUpExtendParam::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void ScaleUpExtendParam::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

std::string ScaleUpExtendParam::getPeriodType() const
{
    return periodType_;
}

void ScaleUpExtendParam::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool ScaleUpExtendParam::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void ScaleUpExtendParam::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

bool ScaleUpExtendParam::isIsAutoRenew() const
{
    return isAutoRenew_;
}

void ScaleUpExtendParam::setIsAutoRenew(bool value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool ScaleUpExtendParam::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void ScaleUpExtendParam::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

bool ScaleUpExtendParam::isIsAutoPay() const
{
    return isAutoPay_;
}

void ScaleUpExtendParam::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ScaleUpExtendParam::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ScaleUpExtendParam::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


