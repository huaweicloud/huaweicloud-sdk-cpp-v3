

#include "huaweicloud/gaussdbfornosql/v3/model/ShowSecondLevelMonitoringStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowSecondLevelMonitoringStatusRequest::ShowSecondLevelMonitoringStatusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowSecondLevelMonitoringStatusRequest::~ShowSecondLevelMonitoringStatusRequest() = default;

void ShowSecondLevelMonitoringStatusRequest::validate()
{
}

web::json::value ShowSecondLevelMonitoringStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowSecondLevelMonitoringStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string ShowSecondLevelMonitoringStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSecondLevelMonitoringStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSecondLevelMonitoringStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSecondLevelMonitoringStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


