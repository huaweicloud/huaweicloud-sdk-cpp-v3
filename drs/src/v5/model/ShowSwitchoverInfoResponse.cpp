

#include "huaweicloud/drs/v5/model/ShowSwitchoverInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowSwitchoverInfoResponse::ShowSwitchoverInfoResponse()
{
    lastSwitchoverTime_ = "";
    lastSwitchoverTimeIsSet_ = false;
    incrementCheckPoint_ = "";
    incrementCheckPointIsSet_ = false;
    targetSafePoint_ = "";
    targetSafePointIsSet_ = false;
}

ShowSwitchoverInfoResponse::~ShowSwitchoverInfoResponse() = default;

void ShowSwitchoverInfoResponse::validate()
{
}

web::json::value ShowSwitchoverInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lastSwitchoverTimeIsSet_) {
        val[utility::conversions::to_string_t("last_switchover_time")] = ModelBase::toJson(lastSwitchoverTime_);
    }
    if(incrementCheckPointIsSet_) {
        val[utility::conversions::to_string_t("increment_check_point")] = ModelBase::toJson(incrementCheckPoint_);
    }
    if(targetSafePointIsSet_) {
        val[utility::conversions::to_string_t("target_safe_point")] = ModelBase::toJson(targetSafePoint_);
    }

    return val;
}
bool ShowSwitchoverInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("last_switchover_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_switchover_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastSwitchoverTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("increment_check_point"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("increment_check_point"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncrementCheckPoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_safe_point"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_safe_point"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetSafePoint(refVal);
        }
    }
    return ok;
}


std::string ShowSwitchoverInfoResponse::getLastSwitchoverTime() const
{
    return lastSwitchoverTime_;
}

void ShowSwitchoverInfoResponse::setLastSwitchoverTime(const std::string& value)
{
    lastSwitchoverTime_ = value;
    lastSwitchoverTimeIsSet_ = true;
}

bool ShowSwitchoverInfoResponse::lastSwitchoverTimeIsSet() const
{
    return lastSwitchoverTimeIsSet_;
}

void ShowSwitchoverInfoResponse::unsetlastSwitchoverTime()
{
    lastSwitchoverTimeIsSet_ = false;
}

std::string ShowSwitchoverInfoResponse::getIncrementCheckPoint() const
{
    return incrementCheckPoint_;
}

void ShowSwitchoverInfoResponse::setIncrementCheckPoint(const std::string& value)
{
    incrementCheckPoint_ = value;
    incrementCheckPointIsSet_ = true;
}

bool ShowSwitchoverInfoResponse::incrementCheckPointIsSet() const
{
    return incrementCheckPointIsSet_;
}

void ShowSwitchoverInfoResponse::unsetincrementCheckPoint()
{
    incrementCheckPointIsSet_ = false;
}

std::string ShowSwitchoverInfoResponse::getTargetSafePoint() const
{
    return targetSafePoint_;
}

void ShowSwitchoverInfoResponse::setTargetSafePoint(const std::string& value)
{
    targetSafePoint_ = value;
    targetSafePointIsSet_ = true;
}

bool ShowSwitchoverInfoResponse::targetSafePointIsSet() const
{
    return targetSafePointIsSet_;
}

void ShowSwitchoverInfoResponse::unsettargetSafePoint()
{
    targetSafePointIsSet_ = false;
}

}
}
}
}
}


