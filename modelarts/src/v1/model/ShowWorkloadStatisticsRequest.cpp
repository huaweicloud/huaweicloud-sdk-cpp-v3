

#include "huaweicloud/modelarts/v1/model/ShowWorkloadStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkloadStatisticsRequest::ShowWorkloadStatisticsRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
}

ShowWorkloadStatisticsRequest::~ShowWorkloadStatisticsRequest() = default;

void ShowWorkloadStatisticsRequest::validate()
{
}

web::json::value ShowWorkloadStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }

    return val;
}
bool ShowWorkloadStatisticsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolName(refVal);
        }
    }
    return ok;
}


std::string ShowWorkloadStatisticsRequest::getPoolName() const
{
    return poolName_;
}

void ShowWorkloadStatisticsRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool ShowWorkloadStatisticsRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void ShowWorkloadStatisticsRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

}
}
}
}
}


