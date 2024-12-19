

#include "huaweicloud/gaussdbforopengauss/v3/model/ListRestorableInstancesDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListRestorableInstancesDetailsResponse::ListRestorableInstancesDetailsResponse()
{
    instancesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListRestorableInstancesDetailsResponse::~ListRestorableInstancesDetailsResponse() = default;

void ListRestorableInstancesDetailsResponse::validate()
{
}

web::json::value ListRestorableInstancesDetailsResponse::toJson() const
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
bool ListRestorableInstancesDetailsResponse::fromJson(const web::json::value& val)
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


std::vector<InstancesResult>& ListRestorableInstancesDetailsResponse::getInstances()
{
    return instances_;
}

void ListRestorableInstancesDetailsResponse::setInstances(const std::vector<InstancesResult>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListRestorableInstancesDetailsResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListRestorableInstancesDetailsResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListRestorableInstancesDetailsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListRestorableInstancesDetailsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListRestorableInstancesDetailsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListRestorableInstancesDetailsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


