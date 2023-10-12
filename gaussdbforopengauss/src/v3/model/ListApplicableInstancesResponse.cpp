

#include "huaweicloud/gaussdbforopengauss/v3/model/ListApplicableInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListApplicableInstancesResponse::ListApplicableInstancesResponse()
{
    instancesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListApplicableInstancesResponse::~ListApplicableInstancesResponse() = default;

void ListApplicableInstancesResponse::validate()
{
}

web::json::value ListApplicableInstancesResponse::toJson() const
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
bool ListApplicableInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<InstancesListResult> refVal;
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


std::vector<InstancesListResult>& ListApplicableInstancesResponse::getInstances()
{
    return instances_;
}

void ListApplicableInstancesResponse::setInstances(const std::vector<InstancesListResult>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListApplicableInstancesResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListApplicableInstancesResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListApplicableInstancesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListApplicableInstancesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListApplicableInstancesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListApplicableInstancesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


