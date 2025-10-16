

#include "huaweicloud/rds/v3/model/ListSubscriberInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSubscriberInstancesResponse::ListSubscriberInstancesResponse()
{
    instancesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListSubscriberInstancesResponse::~ListSubscriberInstancesResponse() = default;

void ListSubscriberInstancesResponse::validate()
{
}

web::json::value ListSubscriberInstancesResponse::toJson() const
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
bool ListSubscriberInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ReplicationInstanceInfo> refVal;
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


std::vector<ReplicationInstanceInfo>& ListSubscriberInstancesResponse::getInstances()
{
    return instances_;
}

void ListSubscriberInstancesResponse::setInstances(const std::vector<ReplicationInstanceInfo>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListSubscriberInstancesResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListSubscriberInstancesResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListSubscriberInstancesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListSubscriberInstancesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListSubscriberInstancesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListSubscriberInstancesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


