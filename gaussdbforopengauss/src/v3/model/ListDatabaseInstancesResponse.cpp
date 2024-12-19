

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatabaseInstancesResponse::ListDatabaseInstancesResponse()
{
    instancesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListDatabaseInstancesResponse::~ListDatabaseInstancesResponse() = default;

void ListDatabaseInstancesResponse::validate()
{
}

web::json::value ListDatabaseInstancesResponse::toJson() const
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
bool ListDatabaseInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ListInstancesResult> refVal;
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


std::vector<ListInstancesResult>& ListDatabaseInstancesResponse::getInstances()
{
    return instances_;
}

void ListDatabaseInstancesResponse::setInstances(const std::vector<ListInstancesResult>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListDatabaseInstancesResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListDatabaseInstancesResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListDatabaseInstancesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDatabaseInstancesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDatabaseInstancesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDatabaseInstancesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


