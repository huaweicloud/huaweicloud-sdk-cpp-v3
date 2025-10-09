

#include "huaweicloud/gaussdb/v3/model/UpdateHtapQueryQueuesControlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateHtapQueryQueuesControlResponse::UpdateHtapQueryQueuesControlResponse()
{
    status_ = "";
    statusIsSet_ = false;
    msg_ = "";
    msgIsSet_ = false;
}

UpdateHtapQueryQueuesControlResponse::~UpdateHtapQueryQueuesControlResponse() = default;

void UpdateHtapQueryQueuesControlResponse::validate()
{
}

web::json::value UpdateHtapQueryQueuesControlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(msgIsSet_) {
        val[utility::conversions::to_string_t("msg")] = ModelBase::toJson(msg_);
    }

    return val;
}
bool UpdateHtapQueryQueuesControlResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMsg(refVal);
        }
    }
    return ok;
}


std::string UpdateHtapQueryQueuesControlResponse::getStatus() const
{
    return status_;
}

void UpdateHtapQueryQueuesControlResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateHtapQueryQueuesControlResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateHtapQueryQueuesControlResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateHtapQueryQueuesControlResponse::getMsg() const
{
    return msg_;
}

void UpdateHtapQueryQueuesControlResponse::setMsg(const std::string& value)
{
    msg_ = value;
    msgIsSet_ = true;
}

bool UpdateHtapQueryQueuesControlResponse::msgIsSet() const
{
    return msgIsSet_;
}

void UpdateHtapQueryQueuesControlResponse::unsetmsg()
{
    msgIsSet_ = false;
}

}
}
}
}
}


