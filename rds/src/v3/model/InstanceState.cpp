

#include "huaweicloud/rds/v3/model/InstanceState.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




InstanceState::InstanceState()
{
    status_ = "";
    statusIsSet_ = false;
    waitRestartForParams_ = false;
    waitRestartForParamsIsSet_ = false;
}

InstanceState::~InstanceState() = default;

void InstanceState::validate()
{
}

web::json::value InstanceState::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(waitRestartForParamsIsSet_) {
        val[utility::conversions::to_string_t("wait_restart_for_params")] = ModelBase::toJson(waitRestartForParams_);
    }

    return val;
}

bool InstanceState::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wait_restart_for_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wait_restart_for_params"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitRestartForParams(refVal);
        }
    }
    return ok;
}

std::string InstanceState::getStatus() const
{
    return status_;
}

void InstanceState::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InstanceState::statusIsSet() const
{
    return statusIsSet_;
}

void InstanceState::unsetstatus()
{
    statusIsSet_ = false;
}

bool InstanceState::isWaitRestartForParams() const
{
    return waitRestartForParams_;
}

void InstanceState::setWaitRestartForParams(bool value)
{
    waitRestartForParams_ = value;
    waitRestartForParamsIsSet_ = true;
}

bool InstanceState::waitRestartForParamsIsSet() const
{
    return waitRestartForParamsIsSet_;
}

void InstanceState::unsetwaitRestartForParams()
{
    waitRestartForParamsIsSet_ = false;
}

}
}
}
}
}


