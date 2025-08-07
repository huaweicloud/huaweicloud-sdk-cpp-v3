

#include "huaweicloud/rds/v3/model/RestartConfiguration.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestartConfiguration::RestartConfiguration()
{
    restartServer_ = false;
    restartServerIsSet_ = false;
    forcible_ = false;
    forcibleIsSet_ = false;
    delay_ = false;
    delayIsSet_ = false;
}

RestartConfiguration::~RestartConfiguration() = default;

void RestartConfiguration::validate()
{
}

web::json::value RestartConfiguration::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restartServerIsSet_) {
        val[utility::conversions::to_string_t("restart_server")] = ModelBase::toJson(restartServer_);
    }
    if(forcibleIsSet_) {
        val[utility::conversions::to_string_t("forcible")] = ModelBase::toJson(forcible_);
    }
    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }

    return val;
}
bool RestartConfiguration::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restart_server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restart_server"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestartServer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forcible"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forcible"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForcible(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    return ok;
}


bool RestartConfiguration::isRestartServer() const
{
    return restartServer_;
}

void RestartConfiguration::setRestartServer(bool value)
{
    restartServer_ = value;
    restartServerIsSet_ = true;
}

bool RestartConfiguration::restartServerIsSet() const
{
    return restartServerIsSet_;
}

void RestartConfiguration::unsetrestartServer()
{
    restartServerIsSet_ = false;
}

bool RestartConfiguration::isForcible() const
{
    return forcible_;
}

void RestartConfiguration::setForcible(bool value)
{
    forcible_ = value;
    forcibleIsSet_ = true;
}

bool RestartConfiguration::forcibleIsSet() const
{
    return forcibleIsSet_;
}

void RestartConfiguration::unsetforcible()
{
    forcibleIsSet_ = false;
}

bool RestartConfiguration::isDelay() const
{
    return delay_;
}

void RestartConfiguration::setDelay(bool value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool RestartConfiguration::delayIsSet() const
{
    return delayIsSet_;
}

void RestartConfiguration::unsetdelay()
{
    delayIsSet_ = false;
}

}
}
}
}
}


