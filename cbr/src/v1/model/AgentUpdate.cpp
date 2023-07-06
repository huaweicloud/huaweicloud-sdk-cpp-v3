

#include "huaweicloud/cbr/v1/model/AgentUpdate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




AgentUpdate::AgentUpdate()
{
    status_ = "";
    statusIsSet_ = false;
}

AgentUpdate::~AgentUpdate() = default;

void AgentUpdate::validate()
{
}

web::json::value AgentUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}

bool AgentUpdate::fromJson(const web::json::value& val)
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
    return ok;
}

std::string AgentUpdate::getStatus() const
{
    return status_;
}

void AgentUpdate::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AgentUpdate::statusIsSet() const
{
    return statusIsSet_;
}

void AgentUpdate::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


