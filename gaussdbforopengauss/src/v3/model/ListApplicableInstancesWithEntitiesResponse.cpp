

#include "huaweicloud/gaussdbforopengauss/v3/model/ListApplicableInstancesWithEntitiesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListApplicableInstancesWithEntitiesResponse::ListApplicableInstancesWithEntitiesResponse()
{
    instancesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListApplicableInstancesWithEntitiesResponse::~ListApplicableInstancesWithEntitiesResponse() = default;

void ListApplicableInstancesWithEntitiesResponse::validate()
{
}

web::json::value ListApplicableInstancesWithEntitiesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListApplicableInstancesWithEntitiesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<InstancesListWithEntitiesResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
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


std::vector<InstancesListWithEntitiesResult>& ListApplicableInstancesWithEntitiesResponse::getInstances()
{
    return instances_;
}

void ListApplicableInstancesWithEntitiesResponse::setInstances(const std::vector<InstancesListWithEntitiesResult>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListApplicableInstancesWithEntitiesResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListApplicableInstancesWithEntitiesResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListApplicableInstancesWithEntitiesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListApplicableInstancesWithEntitiesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListApplicableInstancesWithEntitiesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListApplicableInstancesWithEntitiesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


