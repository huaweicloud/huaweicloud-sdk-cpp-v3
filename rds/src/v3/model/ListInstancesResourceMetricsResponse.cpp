

#include "huaweicloud/rds/v3/model/ListInstancesResourceMetricsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstancesResourceMetricsResponse::ListInstancesResourceMetricsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    resourceMonitoringInfosIsSet_ = false;
}

ListInstancesResourceMetricsResponse::~ListInstancesResourceMetricsResponse() = default;

void ListInstancesResourceMetricsResponse::validate()
{
}

web::json::value ListInstancesResourceMetricsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(resourceMonitoringInfosIsSet_) {
        val[utility::conversions::to_string_t("resource_monitoring_infos")] = ModelBase::toJson(resourceMonitoringInfos_);
    }

    return val;
}

bool ListInstancesResourceMetricsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_monitoring_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_monitoring_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceMonitoringInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceMonitoringInfos(refVal);
        }
    }
    return ok;
}

int32_t ListInstancesResourceMetricsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInstancesResourceMetricsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInstancesResourceMetricsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInstancesResourceMetricsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ResourceMonitoringInfo>& ListInstancesResourceMetricsResponse::getResourceMonitoringInfos()
{
    return resourceMonitoringInfos_;
}

void ListInstancesResourceMetricsResponse::setResourceMonitoringInfos(const std::vector<ResourceMonitoringInfo>& value)
{
    resourceMonitoringInfos_ = value;
    resourceMonitoringInfosIsSet_ = true;
}

bool ListInstancesResourceMetricsResponse::resourceMonitoringInfosIsSet() const
{
    return resourceMonitoringInfosIsSet_;
}

void ListInstancesResourceMetricsResponse::unsetresourceMonitoringInfos()
{
    resourceMonitoringInfosIsSet_ = false;
}

}
}
}
}
}


