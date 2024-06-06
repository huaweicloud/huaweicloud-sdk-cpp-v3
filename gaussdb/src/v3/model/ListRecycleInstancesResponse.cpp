

#include "huaweicloud/gaussdb/v3/model/ListRecycleInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListRecycleInstancesResponse::ListRecycleInstancesResponse()
{
    totalCount_ = "";
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<RecycleInstanceV3> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


std::string ListRecycleInstancesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListRecycleInstancesResponse::setTotalCount(const std::string& value)
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

std::vector<RecycleInstanceV3>& ListRecycleInstancesResponse::getInstances()
{
    return instances_;
}

void ListRecycleInstancesResponse::setInstances(const std::vector<RecycleInstanceV3>& value)
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


