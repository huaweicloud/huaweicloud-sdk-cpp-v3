

#include "huaweicloud/dds/v3/model/ListRecycleInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListRecycleInstancesResponse::ListRecycleInstancesResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    instancesIsSet_ = false;
}

ListRecycleInstancesResponse::~ListRecycleInstancesResponse() = default;

void ListRecycleInstancesResponse::validate()
{
}

web::json::value ListRecycleInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool ListRecycleInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<RecycleInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


int32_t ListRecycleInstancesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListRecycleInstancesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListRecycleInstancesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListRecycleInstancesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<RecycleInstance>& ListRecycleInstancesResponse::getInstances()
{
    return instances_;
}

void ListRecycleInstancesResponse::setInstances(const std::vector<RecycleInstance>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListRecycleInstancesResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListRecycleInstancesResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


