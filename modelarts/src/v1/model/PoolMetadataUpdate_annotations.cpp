

#include "huaweicloud/modelarts/v1/model/PoolMetadataUpdate_annotations.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolMetadataUpdate_annotations::PoolMetadataUpdate_annotations()
{
    osModelartsDescription_ = "";
    osModelartsDescriptionIsSet_ = false;
    osModelartsOrderId_ = "";
    osModelartsOrderIdIsSet_ = false;
    osModelartsPoolSchedulerQueueStrategy_ = "";
    osModelartsPoolSchedulerQueueStrategyIsSet_ = false;
    osModelartsPoolSchedulerQueueStrategyConfig_ = "";
    osModelartsPoolSchedulerQueueStrategyConfigIsSet_ = false;
}

PoolMetadataUpdate_annotations::~PoolMetadataUpdate_annotations() = default;

void PoolMetadataUpdate_annotations::validate()
{
}

web::json::value PoolMetadataUpdate_annotations::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osModelartsDescriptionIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/description")] = ModelBase::toJson(osModelartsDescription_);
    }
    if(osModelartsOrderIdIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/order.id")] = ModelBase::toJson(osModelartsOrderId_);
    }
    if(osModelartsPoolSchedulerQueueStrategyIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.pool/scheduler.queue.strategy")] = ModelBase::toJson(osModelartsPoolSchedulerQueueStrategy_);
    }
    if(osModelartsPoolSchedulerQueueStrategyConfigIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts.pool/scheduler.queue.strategy.config")] = ModelBase::toJson(osModelartsPoolSchedulerQueueStrategyConfig_);
    }

    return val;
}
bool PoolMetadataUpdate_annotations::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/order.id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/order.id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsOrderId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("os.modelarts.pool/scheduler.queue.strategy.config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts.pool/scheduler.queue.strategy.config"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsPoolSchedulerQueueStrategyConfig(refVal);
        }
    }
    return ok;
}


std::string PoolMetadataUpdate_annotations::getOsModelartsDescription() const
{
    return osModelartsDescription_;
}

void PoolMetadataUpdate_annotations::setOsModelartsDescription(const std::string& value)
{
    osModelartsDescription_ = value;
    osModelartsDescriptionIsSet_ = true;
}

bool PoolMetadataUpdate_annotations::osModelartsDescriptionIsSet() const
{
    return osModelartsDescriptionIsSet_;
}

void PoolMetadataUpdate_annotations::unsetosModelartsDescription()
{
    osModelartsDescriptionIsSet_ = false;
}

std::string PoolMetadataUpdate_annotations::getOsModelartsOrderId() const
{
    return osModelartsOrderId_;
}

void PoolMetadataUpdate_annotations::setOsModelartsOrderId(const std::string& value)
{
    osModelartsOrderId_ = value;
    osModelartsOrderIdIsSet_ = true;
}

bool PoolMetadataUpdate_annotations::osModelartsOrderIdIsSet() const
{
    return osModelartsOrderIdIsSet_;
}

void PoolMetadataUpdate_annotations::unsetosModelartsOrderId()
{
    osModelartsOrderIdIsSet_ = false;
}

std::string PoolMetadataUpdate_annotations::getOsModelartsPoolSchedulerQueueStrategy() const
{
    return osModelartsPoolSchedulerQueueStrategy_;
}

void PoolMetadataUpdate_annotations::setOsModelartsPoolSchedulerQueueStrategy(const std::string& value)
{
    osModelartsPoolSchedulerQueueStrategy_ = value;
    osModelartsPoolSchedulerQueueStrategyIsSet_ = true;
}

bool PoolMetadataUpdate_annotations::osModelartsPoolSchedulerQueueStrategyIsSet() const
{
    return osModelartsPoolSchedulerQueueStrategyIsSet_;
}

void PoolMetadataUpdate_annotations::unsetosModelartsPoolSchedulerQueueStrategy()
{
    osModelartsPoolSchedulerQueueStrategyIsSet_ = false;
}

std::string PoolMetadataUpdate_annotations::getOsModelartsPoolSchedulerQueueStrategyConfig() const
{
    return osModelartsPoolSchedulerQueueStrategyConfig_;
}

void PoolMetadataUpdate_annotations::setOsModelartsPoolSchedulerQueueStrategyConfig(const std::string& value)
{
    osModelartsPoolSchedulerQueueStrategyConfig_ = value;
    osModelartsPoolSchedulerQueueStrategyConfigIsSet_ = true;
}

bool PoolMetadataUpdate_annotations::osModelartsPoolSchedulerQueueStrategyConfigIsSet() const
{
    return osModelartsPoolSchedulerQueueStrategyConfigIsSet_;
}

void PoolMetadataUpdate_annotations::unsetosModelartsPoolSchedulerQueueStrategyConfig()
{
    osModelartsPoolSchedulerQueueStrategyConfigIsSet_ = false;
}

}
}
}
}
}


