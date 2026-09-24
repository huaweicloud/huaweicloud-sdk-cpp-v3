

#include "huaweicloud/cbr/v1/model/PrePaidBillingCreate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




PrePaidBillingCreate::PrePaidBillingCreate()
{
    cloudType_ = "";
    cloudTypeIsSet_ = false;
    consistentLevel_ = "";
    consistentLevelIsSet_ = false;
    objectType_ = "";
    objectTypeIsSet_ = false;
    protectType_ = "";
    protectTypeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    periodType_ = "";
    periodTypeIsSet_ = false;
    periodNum_ = 0;
    periodNumIsSet_ = false;
    isAutoRenew_ = false;
    isAutoRenewIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
    consoleUrl_ = "";
    consoleUrlIsSet_ = false;
    isMultiAz_ = false;
    isMultiAzIsSet_ = false;
    isDoubleAz_ = false;
    isDoubleAzIsSet_ = false;
    promotionInfo_ = "";
    promotionInfoIsSet_ = false;
    purchaseMode_ = "";
    purchaseModeIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

PrePaidBillingCreate::~PrePaidBillingCreate() = default;

void PrePaidBillingCreate::validate()
{
}

web::json::value PrePaidBillingCreate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cloudTypeIsSet_) {
        val[utility::conversions::to_string_t("cloud_type")] = ModelBase::toJson(cloudType_);
    }
    if(consistentLevelIsSet_) {
        val[utility::conversions::to_string_t("consistent_level")] = ModelBase::toJson(consistentLevel_);
    }
    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }
    if(protectTypeIsSet_) {
        val[utility::conversions::to_string_t("protect_type")] = ModelBase::toJson(protectType_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
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
    if(consoleUrlIsSet_) {
        val[utility::conversions::to_string_t("console_url")] = ModelBase::toJson(consoleUrl_);
    }
    if(isMultiAzIsSet_) {
        val[utility::conversions::to_string_t("is_multi_az")] = ModelBase::toJson(isMultiAz_);
    }
    if(isDoubleAzIsSet_) {
        val[utility::conversions::to_string_t("is_double_az")] = ModelBase::toJson(isDoubleAz_);
    }
    if(promotionInfoIsSet_) {
        val[utility::conversions::to_string_t("promotion_info")] = ModelBase::toJson(promotionInfo_);
    }
    if(purchaseModeIsSet_) {
        val[utility::conversions::to_string_t("purchase_mode")] = ModelBase::toJson(purchaseMode_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}
bool PrePaidBillingCreate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cloud_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consistent_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consistent_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsistentLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protect_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protect_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("console_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("console_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsoleUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_multi_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_multi_az"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMultiAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_double_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_double_az"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDoubleAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("promotion_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("promotion_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPromotionInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("purchase_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("purchase_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPurchaseMode(refVal);
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
    return ok;
}


std::string PrePaidBillingCreate::getCloudType() const
{
    return cloudType_;
}

void PrePaidBillingCreate::setCloudType(const std::string& value)
{
    cloudType_ = value;
    cloudTypeIsSet_ = true;
}

bool PrePaidBillingCreate::cloudTypeIsSet() const
{
    return cloudTypeIsSet_;
}

void PrePaidBillingCreate::unsetcloudType()
{
    cloudTypeIsSet_ = false;
}

std::string PrePaidBillingCreate::getConsistentLevel() const
{
    return consistentLevel_;
}

void PrePaidBillingCreate::setConsistentLevel(const std::string& value)
{
    consistentLevel_ = value;
    consistentLevelIsSet_ = true;
}

bool PrePaidBillingCreate::consistentLevelIsSet() const
{
    return consistentLevelIsSet_;
}

void PrePaidBillingCreate::unsetconsistentLevel()
{
    consistentLevelIsSet_ = false;
}

std::string PrePaidBillingCreate::getObjectType() const
{
    return objectType_;
}

void PrePaidBillingCreate::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool PrePaidBillingCreate::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void PrePaidBillingCreate::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

std::string PrePaidBillingCreate::getProtectType() const
{
    return protectType_;
}

void PrePaidBillingCreate::setProtectType(const std::string& value)
{
    protectType_ = value;
    protectTypeIsSet_ = true;
}

bool PrePaidBillingCreate::protectTypeIsSet() const
{
    return protectTypeIsSet_;
}

void PrePaidBillingCreate::unsetprotectType()
{
    protectTypeIsSet_ = false;
}

int32_t PrePaidBillingCreate::getSize() const
{
    return size_;
}

void PrePaidBillingCreate::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool PrePaidBillingCreate::sizeIsSet() const
{
    return sizeIsSet_;
}

void PrePaidBillingCreate::unsetsize()
{
    sizeIsSet_ = false;
}

std::string PrePaidBillingCreate::getChargingMode() const
{
    return chargingMode_;
}

void PrePaidBillingCreate::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool PrePaidBillingCreate::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void PrePaidBillingCreate::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

std::string PrePaidBillingCreate::getPeriodType() const
{
    return periodType_;
}

void PrePaidBillingCreate::setPeriodType(const std::string& value)
{
    periodType_ = value;
    periodTypeIsSet_ = true;
}

bool PrePaidBillingCreate::periodTypeIsSet() const
{
    return periodTypeIsSet_;
}

void PrePaidBillingCreate::unsetperiodType()
{
    periodTypeIsSet_ = false;
}

int32_t PrePaidBillingCreate::getPeriodNum() const
{
    return periodNum_;
}

void PrePaidBillingCreate::setPeriodNum(int32_t value)
{
    periodNum_ = value;
    periodNumIsSet_ = true;
}

bool PrePaidBillingCreate::periodNumIsSet() const
{
    return periodNumIsSet_;
}

void PrePaidBillingCreate::unsetperiodNum()
{
    periodNumIsSet_ = false;
}

bool PrePaidBillingCreate::isIsAutoRenew() const
{
    return isAutoRenew_;
}

void PrePaidBillingCreate::setIsAutoRenew(bool value)
{
    isAutoRenew_ = value;
    isAutoRenewIsSet_ = true;
}

bool PrePaidBillingCreate::isAutoRenewIsSet() const
{
    return isAutoRenewIsSet_;
}

void PrePaidBillingCreate::unsetisAutoRenew()
{
    isAutoRenewIsSet_ = false;
}

bool PrePaidBillingCreate::isIsAutoPay() const
{
    return isAutoPay_;
}

void PrePaidBillingCreate::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool PrePaidBillingCreate::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void PrePaidBillingCreate::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

std::string PrePaidBillingCreate::getConsoleUrl() const
{
    return consoleUrl_;
}

void PrePaidBillingCreate::setConsoleUrl(const std::string& value)
{
    consoleUrl_ = value;
    consoleUrlIsSet_ = true;
}

bool PrePaidBillingCreate::consoleUrlIsSet() const
{
    return consoleUrlIsSet_;
}

void PrePaidBillingCreate::unsetconsoleUrl()
{
    consoleUrlIsSet_ = false;
}

bool PrePaidBillingCreate::isIsMultiAz() const
{
    return isMultiAz_;
}

void PrePaidBillingCreate::setIsMultiAz(bool value)
{
    isMultiAz_ = value;
    isMultiAzIsSet_ = true;
}

bool PrePaidBillingCreate::isMultiAzIsSet() const
{
    return isMultiAzIsSet_;
}

void PrePaidBillingCreate::unsetisMultiAz()
{
    isMultiAzIsSet_ = false;
}

bool PrePaidBillingCreate::isIsDoubleAz() const
{
    return isDoubleAz_;
}

void PrePaidBillingCreate::setIsDoubleAz(bool value)
{
    isDoubleAz_ = value;
    isDoubleAzIsSet_ = true;
}

bool PrePaidBillingCreate::isDoubleAzIsSet() const
{
    return isDoubleAzIsSet_;
}

void PrePaidBillingCreate::unsetisDoubleAz()
{
    isDoubleAzIsSet_ = false;
}

std::string PrePaidBillingCreate::getPromotionInfo() const
{
    return promotionInfo_;
}

void PrePaidBillingCreate::setPromotionInfo(const std::string& value)
{
    promotionInfo_ = value;
    promotionInfoIsSet_ = true;
}

bool PrePaidBillingCreate::promotionInfoIsSet() const
{
    return promotionInfoIsSet_;
}

void PrePaidBillingCreate::unsetpromotionInfo()
{
    promotionInfoIsSet_ = false;
}

std::string PrePaidBillingCreate::getPurchaseMode() const
{
    return purchaseMode_;
}

void PrePaidBillingCreate::setPurchaseMode(const std::string& value)
{
    purchaseMode_ = value;
    purchaseModeIsSet_ = true;
}

bool PrePaidBillingCreate::purchaseModeIsSet() const
{
    return purchaseModeIsSet_;
}

void PrePaidBillingCreate::unsetpurchaseMode()
{
    purchaseModeIsSet_ = false;
}

std::string PrePaidBillingCreate::getOrderId() const
{
    return orderId_;
}

void PrePaidBillingCreate::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool PrePaidBillingCreate::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void PrePaidBillingCreate::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


