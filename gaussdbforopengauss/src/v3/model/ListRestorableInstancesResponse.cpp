

#include "huaweicloud/gaussdbforopengauss/v3/model/ListRestorableInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListRestorableInstancesResponse::ListRestorableInstancesResponse()
{
    instancesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListRestorableInstancesResponse::~ListRestorableInstancesResponse() = default;

void ListRestorableInstancesResponse::validate()
{
}

web::json::value ListRestorableInstancesResponse::toJson() const
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
bool ListRestorableInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<InstancesResult> refVal;
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


std::vector<InstancesResult>& ListRestorableInstancesResponse::getInstances()
{
    return instances_;
}

void ListRestorableInstancesResponse::setInstances(const std::vector<InstancesResult>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListRestorableInstancesResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListRestorableInstancesResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListRestorableInstancesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListRestorableInstancesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListRestorableInstancesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListRestorableInstancesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


