

#include "huaweicloud/gaussdb/v3/model/ListConfigurationsInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListConfigurationsInstancesResponse::ListConfigurationsInstancesResponse()
{
    instancesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListConfigurationsInstancesResponse::~ListConfigurationsInstancesResponse() = default;

void ListConfigurationsInstancesResponse::validate()
{
}

web::json::value ListConfigurationsInstancesResponse::toJson() const
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
bool ListConfigurationsInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplicableInstances> refVal;
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


std::vector<ApplicableInstances>& ListConfigurationsInstancesResponse::getInstances()
{
    return instances_;
}

void ListConfigurationsInstancesResponse::setInstances(const std::vector<ApplicableInstances>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListConfigurationsInstancesResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListConfigurationsInstancesResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListConfigurationsInstancesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListConfigurationsInstancesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListConfigurationsInstancesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListConfigurationsInstancesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


