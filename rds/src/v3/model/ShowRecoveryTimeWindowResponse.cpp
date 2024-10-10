

#include "huaweicloud/rds/v3/model/ShowRecoveryTimeWindowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowRecoveryTimeWindowResponse::ShowRecoveryTimeWindowResponse()
{
    recoveryMinTime_ = "";
    recoveryMinTimeIsSet_ = false;
    recoveryMaxTime_ = "";
    recoveryMaxTimeIsSet_ = false;
}

ShowRecoveryTimeWindowResponse::~ShowRecoveryTimeWindowResponse() = default;

void ShowRecoveryTimeWindowResponse::validate()
{
}

web::json::value ShowRecoveryTimeWindowResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recoveryMinTimeIsSet_) {
        val[utility::conversions::to_string_t("recovery_min_time")] = ModelBase::toJson(recoveryMinTime_);
    }
    if(recoveryMaxTimeIsSet_) {
        val[utility::conversions::to_string_t("recovery_max_time")] = ModelBase::toJson(recoveryMaxTime_);
    }

    return val;
}
bool ShowRecoveryTimeWindowResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("recovery_min_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recovery_min_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecoveryMinTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recovery_max_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recovery_max_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecoveryMaxTime(refVal);
        }
    }
    return ok;
}


std::string ShowRecoveryTimeWindowResponse::getRecoveryMinTime() const
{
    return recoveryMinTime_;
}

void ShowRecoveryTimeWindowResponse::setRecoveryMinTime(const std::string& value)
{
    recoveryMinTime_ = value;
    recoveryMinTimeIsSet_ = true;
}

bool ShowRecoveryTimeWindowResponse::recoveryMinTimeIsSet() const
{
    return recoveryMinTimeIsSet_;
}

void ShowRecoveryTimeWindowResponse::unsetrecoveryMinTime()
{
    recoveryMinTimeIsSet_ = false;
}

std::string ShowRecoveryTimeWindowResponse::getRecoveryMaxTime() const
{
    return recoveryMaxTime_;
}

void ShowRecoveryTimeWindowResponse::setRecoveryMaxTime(const std::string& value)
{
    recoveryMaxTime_ = value;
    recoveryMaxTimeIsSet_ = true;
}

bool ShowRecoveryTimeWindowResponse::recoveryMaxTimeIsSet() const
{
    return recoveryMaxTimeIsSet_;
}

void ShowRecoveryTimeWindowResponse::unsetrecoveryMaxTime()
{
    recoveryMaxTimeIsSet_ = false;
}

}
}
}
}
}


