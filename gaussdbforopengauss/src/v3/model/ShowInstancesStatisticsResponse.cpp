

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowInstancesStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowInstancesStatisticsResponse::ShowInstancesStatisticsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    instancesStatisticsIsSet_ = false;
}

ShowInstancesStatisticsResponse::~ShowInstancesStatisticsResponse() = default;

void ShowInstancesStatisticsResponse::validate()
{
}

web::json::value ShowInstancesStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(instancesStatisticsIsSet_) {
        val[utility::conversions::to_string_t("instances_statistics")] = ModelBase::toJson(instancesStatistics_);
    }

    return val;
}
bool ShowInstancesStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instances_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances_statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<InstancesStatisticsResponseBody_instances_statistics> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstancesStatistics(refVal);
        }
    }
    return ok;
}


int32_t ShowInstancesStatisticsResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowInstancesStatisticsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowInstancesStatisticsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowInstancesStatisticsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<InstancesStatisticsResponseBody_instances_statistics>& ShowInstancesStatisticsResponse::getInstancesStatistics()
{
    return instancesStatistics_;
}

void ShowInstancesStatisticsResponse::setInstancesStatistics(const std::vector<InstancesStatisticsResponseBody_instances_statistics>& value)
{
    instancesStatistics_ = value;
    instancesStatisticsIsSet_ = true;
}

bool ShowInstancesStatisticsResponse::instancesStatisticsIsSet() const
{
    return instancesStatisticsIsSet_;
}

void ShowInstancesStatisticsResponse::unsetinstancesStatistics()
{
    instancesStatisticsIsSet_ = false;
}

}
}
}
}
}


