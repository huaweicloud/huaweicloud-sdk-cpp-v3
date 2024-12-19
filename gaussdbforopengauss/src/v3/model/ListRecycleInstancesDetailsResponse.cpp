

#include "huaweicloud/gaussdbforopengauss/v3/model/ListRecycleInstancesDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListRecycleInstancesDetailsResponse::ListRecycleInstancesDetailsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    instancesIsSet_ = false;
}

ListRecycleInstancesDetailsResponse::~ListRecycleInstancesDetailsResponse() = default;

void ListRecycleInstancesDetailsResponse::validate()
{
}

web::json::value ListRecycleInstancesDetailsResponse::toJson() const
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
bool ListRecycleInstancesDetailsResponse::fromJson(const web::json::value& val)
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
            std::vector<RecycleInstancesDetailResultV1> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


int32_t ListRecycleInstancesDetailsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListRecycleInstancesDetailsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListRecycleInstancesDetailsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListRecycleInstancesDetailsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<RecycleInstancesDetailResultV1>& ListRecycleInstancesDetailsResponse::getInstances()
{
    return instances_;
}

void ListRecycleInstancesDetailsResponse::setInstances(const std::vector<RecycleInstancesDetailResultV1>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListRecycleInstancesDetailsResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListRecycleInstancesDetailsResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


