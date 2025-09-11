

#include "huaweicloud/gaussdbforopengauss/v3/model/InstancesStatisticsResponseBody_instances_statistics.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstancesStatisticsResponseBody_instances_statistics::InstancesStatisticsResponseBody_instances_statistics()
{
    status_ = "";
    statusIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

InstancesStatisticsResponseBody_instances_statistics::~InstancesStatisticsResponseBody_instances_statistics() = default;

void InstancesStatisticsResponseBody_instances_statistics::validate()
{
}

web::json::value InstancesStatisticsResponseBody_instances_statistics::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool InstancesStatisticsResponseBody_instances_statistics::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::string InstancesStatisticsResponseBody_instances_statistics::getStatus() const
{
    return status_;
}

void InstancesStatisticsResponseBody_instances_statistics::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InstancesStatisticsResponseBody_instances_statistics::statusIsSet() const
{
    return statusIsSet_;
}

void InstancesStatisticsResponseBody_instances_statistics::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t InstancesStatisticsResponseBody_instances_statistics::getCount() const
{
    return count_;
}

void InstancesStatisticsResponseBody_instances_statistics::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool InstancesStatisticsResponseBody_instances_statistics::countIsSet() const
{
    return countIsSet_;
}

void InstancesStatisticsResponseBody_instances_statistics::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


