

#include "huaweicloud/modelarts/v1/model/PoolStatistics_statistics.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolStatistics_statistics::PoolStatistics_statistics()
{
    statusIsSet_ = false;
}

PoolStatistics_statistics::~PoolStatistics_statistics() = default;

void PoolStatistics_statistics::validate()
{
}

web::json::value PoolStatistics_statistics::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool PoolStatistics_statistics::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            PoolStatistics_statistics_status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


PoolStatistics_statistics_status PoolStatistics_statistics::getStatus() const
{
    return status_;
}

void PoolStatistics_statistics::setStatus(const PoolStatistics_statistics_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PoolStatistics_statistics::statusIsSet() const
{
    return statusIsSet_;
}

void PoolStatistics_statistics::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


