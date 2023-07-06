

#include "huaweicloud/ecs/v2/model/RegisterServerMonitorRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




RegisterServerMonitorRequestBody::RegisterServerMonitorRequestBody()
{
    monitorMetrics_ = "";
    monitorMetricsIsSet_ = false;
}

RegisterServerMonitorRequestBody::~RegisterServerMonitorRequestBody() = default;

void RegisterServerMonitorRequestBody::validate()
{
}

web::json::value RegisterServerMonitorRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(monitorMetricsIsSet_) {
        val[utility::conversions::to_string_t("monitorMetrics")] = ModelBase::toJson(monitorMetrics_);
    }

    return val;
}

bool RegisterServerMonitorRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("monitorMetrics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("monitorMetrics"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMonitorMetrics(refVal);
        }
    }
    return ok;
}

std::string RegisterServerMonitorRequestBody::getMonitorMetrics() const
{
    return monitorMetrics_;
}

void RegisterServerMonitorRequestBody::setMonitorMetrics(const std::string& value)
{
    monitorMetrics_ = value;
    monitorMetricsIsSet_ = true;
}

bool RegisterServerMonitorRequestBody::monitorMetricsIsSet() const
{
    return monitorMetricsIsSet_;
}

void RegisterServerMonitorRequestBody::unsetmonitorMetrics()
{
    monitorMetricsIsSet_ = false;
}

}
}
}
}
}


