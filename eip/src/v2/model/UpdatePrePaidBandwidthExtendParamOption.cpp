

#include "huaweicloud/eip/v2/model/UpdatePrePaidBandwidthExtendParamOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




UpdatePrePaidBandwidthExtendParamOption::UpdatePrePaidBandwidthExtendParamOption()
{
    periodType_ = "";
    periodTypeIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
}

UpdatePrePaidBandwidthExtendParamOption::~UpdatePrePaidBandwidthExtendParamOption() = default;

void UpdatePrePaidBandwidthExtendParamOption::validate()
{
}

web::json::value UpdatePrePaidBandwidthExtendParamOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(periodTypeIsSet_) {
        val[utility::conversions::to_string_t("period_type")] = ModelBase::toJson(periodType_);
    }
    if(periodNumIsSet_) {
        val[utility::conversions::to_string_t("period_num")] = ModelBase::toJson(periodNum_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}
bool UpdatePrePaidBandwidthExtendParamOption::fromJson(const web::json::value& val)
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


std::string UpdatePrePaidBandwidthExtendParamOption::getPeriodType() const
{
    return periodType_;
}

void UpdatePrePaidBandwidthExtendParamOption::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool UpdatePrePaidBandwidthExtendParamOption::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void UpdatePrePaidBandwidthExtendParamOption::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t UpdatePrePaidBandwidthExtendParamOption::getPeriodNum() const
{
    return periodNum_;
}

void UpdatePrePaidBandwidthExtendParamOption::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool UpdatePrePaidBandwidthExtendParamOption::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void UpdatePrePaidBandwidthExtendParamOption::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

bool UpdatePrePaidBandwidthExtendParamOption::isIsAutoPay() const
{
    return isAutoPay_;
}

void UpdatePrePaidBandwidthExtendParamOption::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool UpdatePrePaidBandwidthExtendParamOption::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void UpdatePrePaidBandwidthExtendParamOption::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


