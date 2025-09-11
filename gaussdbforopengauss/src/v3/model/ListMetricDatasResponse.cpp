

#include "huaweicloud/gaussdbforopengauss/v3/model/ListMetricDatasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListMetricDatasResponse::ListMetricDatasResponse()
{
    instancesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListMetricDatasResponse::~ListMetricDatasResponse() = default;

void ListMetricDatasResponse::validate()
{
}

web::json::value ListMetricDatasResponse::toJson() const
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
bool ListMetricDatasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<InstancesMetricResult> refVal;
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


std::vector<InstancesMetricResult>& ListMetricDatasResponse::getInstances()
{
    return instances_;
}

void ListMetricDatasResponse::setInstances(const std::vector<InstancesMetricResult>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListMetricDatasResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListMetricDatasResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ListMetricDatasResponse::getTotalCount() const
{
    return totalCount_;
}

void ListMetricDatasResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListMetricDatasResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListMetricDatasResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


