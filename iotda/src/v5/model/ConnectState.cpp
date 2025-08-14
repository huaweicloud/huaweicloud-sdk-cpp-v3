

#include "huaweicloud/iotda/v5/model/ConnectState.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ConnectState::ConnectState()
{
    lastUpdateTime_ = "";
    lastUpdateTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ConnectState::~ConnectState() = default;

void ConnectState::validate()
{
}

web::json::value ConnectState::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lastUpdateTimeIsSet_) {
        val[utility::conversions::to_string_t("last_update_time")] = ModelBase::toJson(lastUpdateTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ConnectState::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("last_update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ConnectState::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void ConnectState::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool ConnectState::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void ConnectState::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

std::string ConnectState::getStatus() const
{
    return status_;
}

void ConnectState::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ConnectState::statusIsSet() const
{
    return statusIsSet_;
}

void ConnectState::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


