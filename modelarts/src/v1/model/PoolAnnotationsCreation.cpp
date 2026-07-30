

#include "huaweicloud/modelarts/v1/model/PoolAnnotationsCreation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolAnnotationsCreation::PoolAnnotationsCreation()
{
    osModelartsDescription_ = "";
    osModelartsDescriptionIsSet_ = false;
    osModelartsBillingMode_ = "";
    osModelartsBillingModeIsSet_ = false;
    osModelartsPeriodNum_ = "";
    osModelartsPeriodNumIsSet_ = false;
    osModelartsPeriodType_ = "";
    osModelartsPeriodTypeIsSet_ = false;
    osModelartsAutoRenew_ = "";
    osModelartsAutoRenewIsSet_ = false;
    osModelartsAutoPay_ = "";
    osModelartsAutoPayIsSet_ = false;
    osModelartsPromotionInfo_ = "";
    osModelartsPromotionInfoIsSet_ = false;
    osModelartsServiceConsoleUrl_ = "";
    osModelartsServiceConsoleUrlIsSet_ = false;
    osModelartsOrderId_ = "";
    osModelartsOrderIdIsSet_ = false;
}

PoolAnnotationsCreation::~PoolAnnotationsCreation() = default;

void PoolAnnotationsCreation::validate()
{
}

web::json::value PoolAnnotationsCreation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osModelartsDescriptionIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/description")] = ModelBase::toJson(osModelartsDescription_);
    }
    if(osModelartsBillingModeIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/billing.mode")] = ModelBase::toJson(osModelartsBillingMode_);
    }
    if(osModelartsPeriodNumIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/period.num")] = ModelBase::toJson(osModelartsPeriodNum_);
    }
    if(osModelartsPeriodTypeIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/period.type")] = ModelBase::toJson(osModelartsPeriodType_);
    }
    if(osModelartsAutoRenewIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/auto.renew")] = ModelBase::toJson(osModelartsAutoRenew_);
    }
    if(osModelartsAutoPayIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/auto.pay")] = ModelBase::toJson(osModelartsAutoPay_);
    }
    if(osModelartsPromotionInfoIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/promotion.info")] = ModelBase::toJson(osModelartsPromotionInfo_);
    }
    if(osModelartsServiceConsoleUrlIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/service.console.url")] = ModelBase::toJson(osModelartsServiceConsoleUrl_);
    }
    if(osModelartsOrderIdIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/order.id")] = ModelBase::toJson(osModelartsOrderId_);
    }

    return val;
}
bool PoolAnnotationsCreation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/billing.mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/billing.mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsBillingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/period.num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/period.num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsPeriodNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/period.type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/period.type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsPeriodType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/auto.renew"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/auto.renew"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsAutoRenew(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/auto.pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/auto.pay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsAutoPay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/promotion.info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/promotion.info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsPromotionInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/service.console.url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/service.console.url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsServiceConsoleUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/order.id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/order.id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsOrderId(refVal);
        }
    }
    return ok;
}


std::string PoolAnnotationsCreation::getOsModelartsDescription() const
{
    return osModelartsDescription_;
}

void PoolAnnotationsCreation::setOsModelartsDescription(const std::string& value)
{
    osModelartsDescription_ = value;
    osModelartsDescriptionIsSet_ = true;
}

bool PoolAnnotationsCreation::osModelartsDescriptionIsSet() const
{
    return osModelartsDescriptionIsSet_;
}

void PoolAnnotationsCreation::unsetosModelartsDescription()
{
    osModelartsDescriptionIsSet_ = false;
}

std::string PoolAnnotationsCreation::getOsModelartsBillingMode() const
{
    return osModelartsBillingMode_;
}

void PoolAnnotationsCreation::setOsModelartsBillingMode(const std::string& value)
{
    osModelartsBillingMode_ = value;
    osModelartsBillingModeIsSet_ = true;
}

bool PoolAnnotationsCreation::osModelartsBillingModeIsSet() const
{
    return osModelartsBillingModeIsSet_;
}

void PoolAnnotationsCreation::unsetosModelartsBillingMode()
{
    osModelartsBillingModeIsSet_ = false;
}

std::string PoolAnnotationsCreation::getOsModelartsPeriodNum() const
{
    return osModelartsPeriodNum_;
}

void PoolAnnotationsCreation::setOsModelartsPeriodNum(const std::string& value)
{
    osModelartsPeriodNum_ = value;
    osModelartsPeriodNumIsSet_ = true;
}

bool PoolAnnotationsCreation::osModelartsPeriodNumIsSet() const
{
    return osModelartsPeriodNumIsSet_;
}

void PoolAnnotationsCreation::unsetosModelartsPeriodNum()
{
    osModelartsPeriodNumIsSet_ = false;
}

std::string PoolAnnotationsCreation::getOsModelartsPeriodType() const
{
    return osModelartsPeriodType_;
}

void PoolAnnotationsCreation::setOsModelartsPeriodType(const std::string& value)
{
    osModelartsPeriodType_ = value;
    osModelartsPeriodTypeIsSet_ = true;
}

bool PoolAnnotationsCreation::osModelartsPeriodTypeIsSet() const
{
    return osModelartsPeriodTypeIsSet_;
}

void PoolAnnotationsCreation::unsetosModelartsPeriodType()
{
    osModelartsPeriodTypeIsSet_ = false;
}

std::string PoolAnnotationsCreation::getOsModelartsAutoRenew() const
{
    return osModelartsAutoRenew_;
}

void PoolAnnotationsCreation::setOsModelartsAutoRenew(const std::string& value)
{
    osModelartsAutoRenew_ = value;
    osModelartsAutoRenewIsSet_ = true;
}

bool PoolAnnotationsCreation::osModelartsAutoRenewIsSet() const
{
    return osModelartsAutoRenewIsSet_;
}

void PoolAnnotationsCreation::unsetosModelartsAutoRenew()
{
    osModelartsAutoRenewIsSet_ = false;
}

std::string PoolAnnotationsCreation::getOsModelartsAutoPay() const
{
    return osModelartsAutoPay_;
}

void PoolAnnotationsCreation::setOsModelartsAutoPay(const std::string& value)
{
    osModelartsAutoPay_ = value;
    osModelartsAutoPayIsSet_ = true;
}

bool PoolAnnotationsCreation::osModelartsAutoPayIsSet() const
{
    return osModelartsAutoPayIsSet_;
}

void PoolAnnotationsCreation::unsetosModelartsAutoPay()
{
    osModelartsAutoPayIsSet_ = false;
}

std::string PoolAnnotationsCreation::getOsModelartsPromotionInfo() const
{
    return osModelartsPromotionInfo_;
}

void PoolAnnotationsCreation::setOsModelartsPromotionInfo(const std::string& value)
{
    osModelartsPromotionInfo_ = value;
    osModelartsPromotionInfoIsSet_ = true;
}

bool PoolAnnotationsCreation::osModelartsPromotionInfoIsSet() const
{
    return osModelartsPromotionInfoIsSet_;
}

void PoolAnnotationsCreation::unsetosModelartsPromotionInfo()
{
    osModelartsPromotionInfoIsSet_ = false;
}

std::string PoolAnnotationsCreation::getOsModelartsServiceConsoleUrl() const
{
    return osModelartsServiceConsoleUrl_;
}

void PoolAnnotationsCreation::setOsModelartsServiceConsoleUrl(const std::string& value)
{
    osModelartsServiceConsoleUrl_ = value;
    osModelartsServiceConsoleUrlIsSet_ = true;
}

bool PoolAnnotationsCreation::osModelartsServiceConsoleUrlIsSet() const
{
    return osModelartsServiceConsoleUrlIsSet_;
}

void PoolAnnotationsCreation::unsetosModelartsServiceConsoleUrl()
{
    osModelartsServiceConsoleUrlIsSet_ = false;
}

std::string PoolAnnotationsCreation::getOsModelartsOrderId() const
{
    return osModelartsOrderId_;
}

void PoolAnnotationsCreation::setOsModelartsOrderId(const std::string& value)
{
    osModelartsOrderId_ = value;
    osModelartsOrderIdIsSet_ = true;
}

bool PoolAnnotationsCreation::osModelartsOrderIdIsSet() const
{
    return osModelartsOrderIdIsSet_;
}

void PoolAnnotationsCreation::unsetosModelartsOrderId()
{
    osModelartsOrderIdIsSet_ = false;
}

}
}
}
}
}


