

#include "huaweicloud/modelarts/v1/model/PatchNodePoolAnnotations.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PatchNodePoolAnnotations::PatchNodePoolAnnotations()
{
    osModelartsBillingMode_ = "";
    osModelartsBillingModeIsSet_ = false;
    osModelartsPeriodNum_ = "";
    osModelartsPeriodNumIsSet_ = false;
    osModelartsPeriodType_ = "";
    osModelartsPeriodTypeIsSet_ = false;
    osModelartsAutoRenew_ = "";
    osModelartsAutoRenewIsSet_ = false;
    osModelartsPromotionInfo_ = "";
    osModelartsPromotionInfoIsSet_ = false;
    osModelartsServiceConsoleUrl_ = "";
    osModelartsServiceConsoleUrlIsSet_ = false;
    osModelartsOrderId_ = "";
    osModelartsOrderIdIsSet_ = false;
}

PatchNodePoolAnnotations::~PatchNodePoolAnnotations() = default;

void PatchNodePoolAnnotations::validate()
{
}

web::json::value PatchNodePoolAnnotations::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool PatchNodePoolAnnotations::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string PatchNodePoolAnnotations::getOsModelartsBillingMode() const
{
    return osModelartsBillingMode_;
}

void PatchNodePoolAnnotations::setOsModelartsBillingMode(const std::string& value)
{
    osModelartsBillingMode_ = value;
    osModelartsBillingModeIsSet_ = true;
}

bool PatchNodePoolAnnotations::osModelartsBillingModeIsSet() const
{
    return osModelartsBillingModeIsSet_;
}

void PatchNodePoolAnnotations::unsetosModelartsBillingMode()
{
    osModelartsBillingModeIsSet_ = false;
}

std::string PatchNodePoolAnnotations::getOsModelartsPeriodNum() const
{
    return osModelartsPeriodNum_;
}

void PatchNodePoolAnnotations::setOsModelartsPeriodNum(const std::string& value)
{
    osModelartsPeriodNum_ = value;
    osModelartsPeriodNumIsSet_ = true;
}

bool PatchNodePoolAnnotations::osModelartsPeriodNumIsSet() const
{
    return osModelartsPeriodNumIsSet_;
}

void PatchNodePoolAnnotations::unsetosModelartsPeriodNum()
{
    osModelartsPeriodNumIsSet_ = false;
}

std::string PatchNodePoolAnnotations::getOsModelartsPeriodType() const
{
    return osModelartsPeriodType_;
}

void PatchNodePoolAnnotations::setOsModelartsPeriodType(const std::string& value)
{
    osModelartsPeriodType_ = value;
    osModelartsPeriodTypeIsSet_ = true;
}

bool PatchNodePoolAnnotations::osModelartsPeriodTypeIsSet() const
{
    return osModelartsPeriodTypeIsSet_;
}

void PatchNodePoolAnnotations::unsetosModelartsPeriodType()
{
    osModelartsPeriodTypeIsSet_ = false;
}

std::string PatchNodePoolAnnotations::getOsModelartsAutoRenew() const
{
    return osModelartsAutoRenew_;
}

void PatchNodePoolAnnotations::setOsModelartsAutoRenew(const std::string& value)
{
    osModelartsAutoRenew_ = value;
    osModelartsAutoRenewIsSet_ = true;
}

bool PatchNodePoolAnnotations::osModelartsAutoRenewIsSet() const
{
    return osModelartsAutoRenewIsSet_;
}

void PatchNodePoolAnnotations::unsetosModelartsAutoRenew()
{
    osModelartsAutoRenewIsSet_ = false;
}

std::string PatchNodePoolAnnotations::getOsModelartsPromotionInfo() const
{
    return osModelartsPromotionInfo_;
}

void PatchNodePoolAnnotations::setOsModelartsPromotionInfo(const std::string& value)
{
    osModelartsPromotionInfo_ = value;
    osModelartsPromotionInfoIsSet_ = true;
}

bool PatchNodePoolAnnotations::osModelartsPromotionInfoIsSet() const
{
    return osModelartsPromotionInfoIsSet_;
}

void PatchNodePoolAnnotations::unsetosModelartsPromotionInfo()
{
    osModelartsPromotionInfoIsSet_ = false;
}

std::string PatchNodePoolAnnotations::getOsModelartsServiceConsoleUrl() const
{
    return osModelartsServiceConsoleUrl_;
}

void PatchNodePoolAnnotations::setOsModelartsServiceConsoleUrl(const std::string& value)
{
    osModelartsServiceConsoleUrl_ = value;
    osModelartsServiceConsoleUrlIsSet_ = true;
}

bool PatchNodePoolAnnotations::osModelartsServiceConsoleUrlIsSet() const
{
    return osModelartsServiceConsoleUrlIsSet_;
}

void PatchNodePoolAnnotations::unsetosModelartsServiceConsoleUrl()
{
    osModelartsServiceConsoleUrlIsSet_ = false;
}

std::string PatchNodePoolAnnotations::getOsModelartsOrderId() const
{
    return osModelartsOrderId_;
}

void PatchNodePoolAnnotations::setOsModelartsOrderId(const std::string& value)
{
    osModelartsOrderId_ = value;
    osModelartsOrderIdIsSet_ = true;
}

bool PatchNodePoolAnnotations::osModelartsOrderIdIsSet() const
{
    return osModelartsOrderIdIsSet_;
}

void PatchNodePoolAnnotations::unsetosModelartsOrderId()
{
    osModelartsOrderIdIsSet_ = false;
}

}
}
}
}
}


