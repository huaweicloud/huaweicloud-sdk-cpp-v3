

#include "huaweicloud/rds/v3/model/ListInstancesConfigurationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstancesConfigurationsResponse::ListInstancesConfigurationsResponse()
{
    entitiesIsSet_ = false;
    instanceCountLimit_ = 0;
    instanceCountLimitIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListInstancesConfigurationsResponse::~ListInstancesConfigurationsResponse() = default;

void ListInstancesConfigurationsResponse::validate()
{
}

web::json::value ListInstancesConfigurationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(entitiesIsSet_) {
        val[utility::conversions::to_string_t("entities")] = ModelBase::toJson(entities_);
    }
    if(instanceCountLimitIsSet_) {
        val[utility::conversions::to_string_t("instance_count_limit")] = ModelBase::toJson(instanceCountLimit_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListInstancesConfigurationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("entities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entities"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplicableInstanceInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntities(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_count_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_count_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceCountLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<ApplicableInstanceInfo>& ListInstancesConfigurationsResponse::getEntities()
{
    return entities_;
}

void ListInstancesConfigurationsResponse::setEntities(const std::vector<ApplicableInstanceInfo>& value)
{
    entities_ = value;
    entitiesIsSet_ = true;
}

bool ListInstancesConfigurationsResponse::entitiesIsSet() const
{
    return entitiesIsSet_;
}

void ListInstancesConfigurationsResponse::unsetentities()
{
    entitiesIsSet_ = false;
}

int32_t ListInstancesConfigurationsResponse::getInstanceCountLimit() const
{
    return instanceCountLimit_;
}

void ListInstancesConfigurationsResponse::setInstanceCountLimit(int32_t value)
{
    instanceCountLimit_ = value;
    instanceCountLimitIsSet_ = true;
}

bool ListInstancesConfigurationsResponse::instanceCountLimitIsSet() const
{
    return instanceCountLimitIsSet_;
}

void ListInstancesConfigurationsResponse::unsetinstanceCountLimit()
{
    instanceCountLimitIsSet_ = false;
}

int32_t ListInstancesConfigurationsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInstancesConfigurationsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInstancesConfigurationsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInstancesConfigurationsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


