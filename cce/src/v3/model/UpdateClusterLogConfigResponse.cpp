

#include "huaweicloud/cce/v3/model/UpdateClusterLogConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateClusterLogConfigResponse::UpdateClusterLogConfigResponse()
{
    ttlInDays_ = 0;
    ttlInDaysIsSet_ = false;
    logConfigsIsSet_ = false;
}

UpdateClusterLogConfigResponse::~UpdateClusterLogConfigResponse() = default;

void UpdateClusterLogConfigResponse::validate()
{
}

web::json::value UpdateClusterLogConfigResponse::toJson() const
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
bool UpdateClusterLogConfigResponse::fromJson(const web::json::value& val)
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
            std::vector<ClusterLogConfig_log_configs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogConfigs(refVal);
        }
    }
    return ok;
}


int32_t UpdateClusterLogConfigResponse::getTtlInDays() const
{
    return ttlInDays_;
}

void UpdateClusterLogConfigResponse::setTtlInDays(int32_t value)
{
    ttlInDays_ = value;
    ttlInDaysIsSet_ = true;
}

bool UpdateClusterLogConfigResponse::ttlInDaysIsSet() const
{
    return ttlInDaysIsSet_;
}

void UpdateClusterLogConfigResponse::unsetttlInDays()
{
    ttlInDaysIsSet_ = false;
}

std::vector<ClusterLogConfig_log_configs>& UpdateClusterLogConfigResponse::getLogConfigs()
{
    return logConfigs_;
}

void UpdateClusterLogConfigResponse::setLogConfigs(const std::vector<ClusterLogConfig_log_configs>& value)
{
    logConfigs_ = value;
    logConfigsIsSet_ = true;
}

bool UpdateClusterLogConfigResponse::logConfigsIsSet() const
{
    return logConfigsIsSet_;
}

void UpdateClusterLogConfigResponse::unsetlogConfigs()
{
    logConfigsIsSet_ = false;
}

}
}
}
}
}


