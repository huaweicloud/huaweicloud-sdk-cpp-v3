

#include "huaweicloud/dds/v3/model/ListInstancesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListInstancesResponse::ListInstancesResponse()
{
    instancesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListInstancesResponse::~ListInstancesResponse() = default;

void ListInstancesResponse::validate()
{
}

web::json::value ListInstancesResponse::toJson() const
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

bool ListInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryInstanceResponse> refVal;
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

std::vector<QueryInstanceResponse>& ListInstancesResponse::getInstances()
{
    return instances_;
}

void ListInstancesResponse::setInstances(const std::vector<QueryInstanceResponse>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListInstancesResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListInstancesResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListInstancesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInstancesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInstancesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInstancesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


