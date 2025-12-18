

#include "huaweicloud/cce/v3/model/ShowAutopilotClusterConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotClusterConfigResponse::ShowAutopilotClusterConfigResponse()
{
    ttlInDays_ = 0;
    ttlInDaysIsSet_ = false;
    logConfigsIsSet_ = false;
}

ShowAutopilotClusterConfigResponse::~ShowAutopilotClusterConfigResponse() = default;

void ShowAutopilotClusterConfigResponse::validate()
{
}

web::json::value ShowAutopilotClusterConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ttlInDaysIsSet_) {
        val[utility::conversions::to_string_t("ttl_in_days")] = ModelBase::toJson(ttlInDays_);
    }
    if(logConfigsIsSet_) {
        val[utility::conversions::to_string_t("log_configs")] = ModelBase::toJson(logConfigs_);
    }

    return val;
}
bool ShowAutopilotClusterConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ttl_in_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl_in_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtlInDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<AutopilotClusterLogConfig_log_configs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogConfigs(refVal);
        }
    }
    return ok;
}


int32_t ShowAutopilotClusterConfigResponse::getTtlInDays() const
{
    return ttlInDays_;
}

void ShowAutopilotClusterConfigResponse::setTtlInDays(int32_t value)
{
    ttlInDays_ = value;
    ttlInDaysIsSet_ = true;
}

bool ShowAutopilotClusterConfigResponse::ttlInDaysIsSet() const
{
    return ttlInDaysIsSet_;
}

void ShowAutopilotClusterConfigResponse::unsetttlInDays()
{
    ttlInDaysIsSet_ = false;
}

std::vector<AutopilotClusterLogConfig_log_configs>& ShowAutopilotClusterConfigResponse::getLogConfigs()
{
    return logConfigs_;
}

void ShowAutopilotClusterConfigResponse::setLogConfigs(const std::vector<AutopilotClusterLogConfig_log_configs>& value)
{
    logConfigs_ = value;
    logConfigsIsSet_ = true;
}

bool ShowAutopilotClusterConfigResponse::logConfigsIsSet() const
{
    return logConfigsIsSet_;
}

void ShowAutopilotClusterConfigResponse::unsetlogConfigs()
{
    logConfigsIsSet_ = false;
}

}
}
}
}
}


