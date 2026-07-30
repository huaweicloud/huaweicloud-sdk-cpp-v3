

#include "huaweicloud/modelarts/v1/model/PoolMetaAnnotations.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolMetaAnnotations::PoolMetaAnnotations()
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
    osModelartsPromotionInfo_ = "";
    osModelartsPromotionInfoIsSet_ = false;
    osModelartsServiceConsoleUrl_ = "";
    osModelartsServiceConsoleUrlIsSet_ = false;
    osModelartsOrderId_ = "";
    osModelartsOrderIdIsSet_ = false;
    osModelartsFlavorResourceIds_ = "";
    osModelartsFlavorResourceIdsIsSet_ = false;
    osModelartsTmsTags_ = "";
    osModelartsTmsTagsIsSet_ = false;
    osModelartsPoolSchedulerQueueStrategy_ = "";
    osModelartsPoolSchedulerQueueStrategyIsSet_ = false;
    osModelartsPoolSubpoolsCount_ = "";
    osModelartsPoolSubpoolsCountIsSet_ = false;
    osModelartsTenantDomainName_ = "";
    osModelartsTenantDomainNameIsSet_ = false;
    osModelartsPoolScopeExternalDependencyTrain_ = "";
    osModelartsPoolScopeExternalDependencyTrainIsSet_ = false;
}

PoolMetaAnnotations::~PoolMetaAnnotations() = default;

void PoolMetaAnnotations::validate()
{
}

web::json::value PoolMetaAnnotations::toJson() const
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
    if(osModelartsPromotionInfoIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/promotion.info")] = ModelBase::toJson(osModelartsPromotionInfo_);
    }
    if(osModelartsServiceConsoleUrlIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/service.console.url")] = ModelBase::toJson(osModelartsServiceConsoleUrl_);
    }
    if(osModelartsOrderIdIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/order.id")] = ModelBase::toJson(osModelartsOrderId_);
    }
    if(osModelartsFlavorResourceIdsIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/flavor.resource.ids")] = ModelBase::toJson(osModelartsFlavorResourceIds_);
    }
    if(osModelartsTmsTagsIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/tms.tags")] = ModelBase::toJson(osModelartsTmsTags_);
    }
    if(osModelartsPoolSchedulerQueueStrategyIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.pool/scheduler.queue.strategy")] = ModelBase::toJson(osModelartsPoolSchedulerQueueStrategy_);
    }
    if(osModelartsPoolSubpoolsCountIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.pool/subpools.count")] = ModelBase::toJson(osModelartsPoolSubpoolsCount_);
    }
    if(osModelartsTenantDomainNameIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/tenant.domain.name")] = ModelBase::toJson(osModelartsTenantDomainName_);
    }
    if(osModelartsPoolScopeExternalDependencyTrainIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.pool/scope.external.dependency.train")] = ModelBase::toJson(osModelartsPoolScopeExternalDependencyTrain_);
    }

    return val;
}
bool PoolMetaAnnotations::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/flavor.resource.ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/flavor.resource.ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsFlavorResourceIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/tms.tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/tms.tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsTmsTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.pool/scheduler.queue.strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.pool/scheduler.queue.strategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsPoolSchedulerQueueStrategy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.pool/subpools.count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.pool/subpools.count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsPoolSubpoolsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/tenant.domain.name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/tenant.domain.name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsTenantDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.pool/scope.external.dependency.train"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.pool/scope.external.dependency.train"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsPoolScopeExternalDependencyTrain(refVal);
        }
    }
    return ok;
}


std::string PoolMetaAnnotations::getOsModelartsDescription() const
{
    return osModelartsDescription_;
}

void PoolMetaAnnotations::setOsModelartsDescription(const std::string& value)
{
    osModelartsDescription_ = value;
    osModelartsDescriptionIsSet_ = true;
}

bool PoolMetaAnnotations::osModelartsDescriptionIsSet() const
{
    return osModelartsDescriptionIsSet_;
}

void PoolMetaAnnotations::unsetosModelartsDescription()
{
    osModelartsDescriptionIsSet_ = false;
}

std::string PoolMetaAnnotations::getOsModelartsBillingMode() const
{
    return osModelartsBillingMode_;
}

void PoolMetaAnnotations::setOsModelartsBillingMode(const std::string& value)
{
    osModelartsBillingMode_ = value;
    osModelartsBillingModeIsSet_ = true;
}

bool PoolMetaAnnotations::osModelartsBillingModeIsSet() const
{
    return osModelartsBillingModeIsSet_;
}

void PoolMetaAnnotations::unsetosModelartsBillingMode()
{
    osModelartsBillingModeIsSet_ = false;
}

std::string PoolMetaAnnotations::getOsModelartsPeriodNum() const
{
    return osModelartsPeriodNum_;
}

void PoolMetaAnnotations::setOsModelartsPeriodNum(const std::string& value)
{
    osModelartsPeriodNum_ = value;
    osModelartsPeriodNumIsSet_ = true;
}

bool PoolMetaAnnotations::osModelartsPeriodNumIsSet() const
{
    return osModelartsPeriodNumIsSet_;
}

void PoolMetaAnnotations::unsetosModelartsPeriodNum()
{
    osModelartsPeriodNumIsSet_ = false;
}

std::string PoolMetaAnnotations::getOsModelartsPeriodType() const
{
    return osModelartsPeriodType_;
}

void PoolMetaAnnotations::setOsModelartsPeriodType(const std::string& value)
{
    osModelartsPeriodType_ = value;
    osModelartsPeriodTypeIsSet_ = true;
}

bool PoolMetaAnnotations::osModelartsPeriodTypeIsSet() const
{
    return osModelartsPeriodTypeIsSet_;
}

void PoolMetaAnnotations::unsetosModelartsPeriodType()
{
    osModelartsPeriodTypeIsSet_ = false;
}

std::string PoolMetaAnnotations::getOsModelartsAutoRenew() const
{
    return osModelartsAutoRenew_;
}

void PoolMetaAnnotations::setOsModelartsAutoRenew(const std::string& value)
{
    osModelartsAutoRenew_ = value;
    osModelartsAutoRenewIsSet_ = true;
}

bool PoolMetaAnnotations::osModelartsAutoRenewIsSet() const
{
    return osModelartsAutoRenewIsSet_;
}

void PoolMetaAnnotations::unsetosModelartsAutoRenew()
{
    osModelartsAutoRenewIsSet_ = false;
}

std::string PoolMetaAnnotations::getOsModelartsPromotionInfo() const
{
    return osModelartsPromotionInfo_;
}

void PoolMetaAnnotations::setOsModelartsPromotionInfo(const std::string& value)
{
    osModelartsPromotionInfo_ = value;
    osModelartsPromotionInfoIsSet_ = true;
}

bool PoolMetaAnnotations::osModelartsPromotionInfoIsSet() const
{
    return osModelartsPromotionInfoIsSet_;
}

void PoolMetaAnnotations::unsetosModelartsPromotionInfo()
{
    osModelartsPromotionInfoIsSet_ = false;
}

std::string PoolMetaAnnotations::getOsModelartsServiceConsoleUrl() const
{
    return osModelartsServiceConsoleUrl_;
}

void PoolMetaAnnotations::setOsModelartsServiceConsoleUrl(const std::string& value)
{
    osModelartsServiceConsoleUrl_ = value;
    osModelartsServiceConsoleUrlIsSet_ = true;
}

bool PoolMetaAnnotations::osModelartsServiceConsoleUrlIsSet() const
{
    return osModelartsServiceConsoleUrlIsSet_;
}

void PoolMetaAnnotations::unsetosModelartsServiceConsoleUrl()
{
    osModelartsServiceConsoleUrlIsSet_ = false;
}

std::string PoolMetaAnnotations::getOsModelartsOrderId() const
{
    return osModelartsOrderId_;
}

void PoolMetaAnnotations::setOsModelartsOrderId(const std::string& value)
{
    osModelartsOrderId_ = value;
    osModelartsOrderIdIsSet_ = true;
}

bool PoolMetaAnnotations::osModelartsOrderIdIsSet() const
{
    return osModelartsOrderIdIsSet_;
}

void PoolMetaAnnotations::unsetosModelartsOrderId()
{
    osModelartsOrderIdIsSet_ = false;
}

std::string PoolMetaAnnotations::getOsModelartsFlavorResourceIds() const
{
    return osModelartsFlavorResourceIds_;
}

void PoolMetaAnnotations::setOsModelartsFlavorResourceIds(const std::string& value)
{
    osModelartsFlavorResourceIds_ = value;
    osModelartsFlavorResourceIdsIsSet_ = true;
}

bool PoolMetaAnnotations::osModelartsFlavorResourceIdsIsSet() const
{
    return osModelartsFlavorResourceIdsIsSet_;
}

void PoolMetaAnnotations::unsetosModelartsFlavorResourceIds()
{
    osModelartsFlavorResourceIdsIsSet_ = false;
}

std::string PoolMetaAnnotations::getOsModelartsTmsTags() const
{
    return osModelartsTmsTags_;
}

void PoolMetaAnnotations::setOsModelartsTmsTags(const std::string& value)
{
    osModelartsTmsTags_ = value;
    osModelartsTmsTagsIsSet_ = true;
}

bool PoolMetaAnnotations::osModelartsTmsTagsIsSet() const
{
    return osModelartsTmsTagsIsSet_;
}

void PoolMetaAnnotations::unsetosModelartsTmsTags()
{
    osModelartsTmsTagsIsSet_ = false;
}

std::string PoolMetaAnnotations::getOsModelartsPoolSchedulerQueueStrategy() const
{
    return osModelartsPoolSchedulerQueueStrategy_;
}

void PoolMetaAnnotations::setOsModelartsPoolSchedulerQueueStrategy(const std::string& value)
{
    osModelartsPoolSchedulerQueueStrategy_ = value;
    osModelartsPoolSchedulerQueueStrategyIsSet_ = true;
}

bool PoolMetaAnnotations::osModelartsPoolSchedulerQueueStrategyIsSet() const
{
    return osModelartsPoolSchedulerQueueStrategyIsSet_;
}

void PoolMetaAnnotations::unsetosModelartsPoolSchedulerQueueStrategy()
{
    osModelartsPoolSchedulerQueueStrategyIsSet_ = false;
}

std::string PoolMetaAnnotations::getOsModelartsPoolSubpoolsCount() const
{
    return osModelartsPoolSubpoolsCount_;
}

void PoolMetaAnnotations::setOsModelartsPoolSubpoolsCount(const std::string& value)
{
    osModelartsPoolSubpoolsCount_ = value;
    osModelartsPoolSubpoolsCountIsSet_ = true;
}

bool PoolMetaAnnotations::osModelartsPoolSubpoolsCountIsSet() const
{
    return osModelartsPoolSubpoolsCountIsSet_;
}

void PoolMetaAnnotations::unsetosModelartsPoolSubpoolsCount()
{
    osModelartsPoolSubpoolsCountIsSet_ = false;
}

std::string PoolMetaAnnotations::getOsModelartsTenantDomainName() const
{
    return osModelartsTenantDomainName_;
}

void PoolMetaAnnotations::setOsModelartsTenantDomainName(const std::string& value)
{
    osModelartsTenantDomainName_ = value;
    osModelartsTenantDomainNameIsSet_ = true;
}

bool PoolMetaAnnotations::osModelartsTenantDomainNameIsSet() const
{
    return osModelartsTenantDomainNameIsSet_;
}

void PoolMetaAnnotations::unsetosModelartsTenantDomainName()
{
    osModelartsTenantDomainNameIsSet_ = false;
}

std::string PoolMetaAnnotations::getOsModelartsPoolScopeExternalDependencyTrain() const
{
    return osModelartsPoolScopeExternalDependencyTrain_;
}

void PoolMetaAnnotations::setOsModelartsPoolScopeExternalDependencyTrain(const std::string& value)
{
    osModelartsPoolScopeExternalDependencyTrain_ = value;
    osModelartsPoolScopeExternalDependencyTrainIsSet_ = true;
}

bool PoolMetaAnnotations::osModelartsPoolScopeExternalDependencyTrainIsSet() const
{
    return osModelartsPoolScopeExternalDependencyTrainIsSet_;
}

void PoolMetaAnnotations::unsetosModelartsPoolScopeExternalDependencyTrain()
{
    osModelartsPoolScopeExternalDependencyTrainIsSet_ = false;
}

}
}
}
}
}


