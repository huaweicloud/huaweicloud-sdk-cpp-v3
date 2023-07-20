

#include "huaweicloud/gaussdbforopengauss/v3/model/ListInstancesDetailsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListInstancesDetailsResponse::ListInstancesDetailsResponse()
{
    instancesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListInstancesDetailsResponse::~ListInstancesDetailsResponse() = default;

void ListInstancesDetailsResponse::validate()
{
}

web::json::value ListInstancesDetailsResponse::toJson() const
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

bool ListInstancesDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ListInstanceResult> refVal;
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

std::vector<ListInstanceResult>& ListInstancesDetailsResponse::getInstances()
{
    return instances_;
}

void ListInstancesDetailsResponse::setInstances(const std::vector<ListInstanceResult>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListInstancesDetailsResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListInstancesDetailsResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListInstancesDetailsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInstancesDetailsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInstancesDetailsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInstancesDetailsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


