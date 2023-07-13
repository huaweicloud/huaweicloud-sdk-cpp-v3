

#include "huaweicloud/ecs/v2/model/ChangeServerChargeModePrepaidOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeServerChargeModePrepaidOption::ChangeServerChargeModePrepaidOption()
{
    includeDataDisks_ = false;
    includeDataDisksIsSet_ = false;
    includePublicips_ = false;
    includePublicipsIsSet_ = false;
    periodType_ = "";
    periodTypeIsSet_ = false;
    periodNum_ = "";
    periodNumIsSet_ = false;
    autoPay_ = false;
    autoPayIsSet_ = false;
    autoRenew_ = false;
    autoRenewIsSet_ = false;
}

ChangeServerChargeModePrepaidOption::~ChangeServerChargeModePrepaidOption() = default;

void ChangeServerChargeModePrepaidOption::validate()
{
}

web::json::value ChangeServerChargeModePrepaidOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(includeDataDisksIsSet_) {
        val[utility::conversions::to_string_t("include_data_disks")] = ModelBase::toJson(includeDataDisks_);
    }
    if(includePublicipsIsSet_) {
        val[utility::conversions::to_string_t("include_publicips")] = ModelBase::toJson(includePublicips_);
    }
    if(periodTypeIsSet_) {
        val[utility::conversions::to_string_t("period_type")] = ModelBase::toJson(periodType_);
    }
    if(periodNumIsSet_) {
        val[utility::conversions::to_string_t("period_num")] = ModelBase::toJson(periodNum_);
    }
    if(autoPayIsSet_) {
        val[utility::conversions::to_string_t("auto_pay")] = ModelBase::toJson(autoPay_);
    }
    if(autoRenewIsSet_) {
        val[utility::conversions::to_string_t("auto_renew")] = ModelBase::toJson(autoRenew_);
    }

    return val;
}

bool ChangeServerChargeModePrepaidOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("include_data_disks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_data_disks"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeDataDisks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include_publicips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_publicips"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludePublicips(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_pay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoPay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_renew"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_renew"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoRenew(refVal);
        }
    }
    return ok;
}

bool ChangeServerChargeModePrepaidOption::isIncludeDataDisks() const
{
    return includeDataDisks_;
}

void ChangeServerChargeModePrepaidOption::setIncludeDataDisks(bool value)
{
    includeDataDisks_ = value;
    includeDataDisksIsSet_ = true;
}

bool ChangeServerChargeModePrepaidOption::includeDataDisksIsSet() const
{
    return includeDataDisksIsSet_;
}

void ChangeServerChargeModePrepaidOption::unsetincludeDataDisks()
{
    includeDataDisksIsSet_ = false;
}

bool ChangeServerChargeModePrepaidOption::isIncludePublicips() const
{
    return includePublicips_;
}

void ChangeServerChargeModePrepaidOption::setIncludePublicips(bool value)
{
    includePublicips_ = value;
    includePublicipsIsSet_ = true;
}

bool ChangeServerChargeModePrepaidOption::includePublicipsIsSet() const
{
    return includePublicipsIsSet_;
}

void ChangeServerChargeModePrepaidOption::unsetincludePublicips()
{
    includePublicipsIsSet_ = false;
}

std::string ChangeServerChargeModePrepaidOption::getPeriodType() const
{
    return periodType_;
}

void ChangeServerChargeModePrepaidOption::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool ChangeServerChargeModePrepaidOption::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void ChangeServerChargeModePrepaidOption::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

std::string ChangeServerChargeModePrepaidOption::getPeriodNum() const
{
    return periodNum_;
}

void ChangeServerChargeModePrepaidOption::setPeriodNum(const std::string& value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool ChangeServerChargeModePrepaidOption::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void ChangeServerChargeModePrepaidOption::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

bool ChangeServerChargeModePrepaidOption::isAutoPay() const
{
    return autoPay_;
}

void ChangeServerChargeModePrepaidOption::setAutoPay(bool value)
{
    autoPay_ = value;
    autoPayIsSet_ = true;
}

bool ChangeServerChargeModePrepaidOption::autoPayIsSet() const
{
    return autoPayIsSet_;
}

void ChangeServerChargeModePrepaidOption::unsetautoPay()
{
    autoPayIsSet_ = false;
}

bool ChangeServerChargeModePrepaidOption::isAutoRenew() const
{
    return autoRenew_;
}

void ChangeServerChargeModePrepaidOption::setAutoRenew(bool value)
{
    autoRenew_ = value;
    autoRenewIsSet_ = true;
}

bool ChangeServerChargeModePrepaidOption::autoRenewIsSet() const
{
    return autoRenewIsSet_;
}

void ChangeServerChargeModePrepaidOption::unsetautoRenew()
{
    autoRenewIsSet_ = false;
}

}
}
}
}
}


