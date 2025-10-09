

#include "huaweicloud/gaussdb/v3/model/SetHtapQueryQueuesRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetHtapQueryQueuesRuleResponse::SetHtapQueryQueuesRuleResponse()
{
    status_ = "";
    statusIsSet_ = false;
    msg_ = "";
    msgIsSet_ = false;
}

SetHtapQueryQueuesRuleResponse::~SetHtapQueryQueuesRuleResponse() = default;

void SetHtapQueryQueuesRuleResponse::validate()
{
}

web::json::value SetHtapQueryQueuesRuleResponse::toJson() const
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
bool SetHtapQueryQueuesRuleResponse::fromJson(const web::json::value& val)
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


std::string SetHtapQueryQueuesRuleResponse::getStatus() const
{
    return status_;
}

void SetHtapQueryQueuesRuleResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetHtapQueryQueuesRuleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetHtapQueryQueuesRuleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SetHtapQueryQueuesRuleResponse::getMsg() const
{
    return msg_;
}

void SetHtapQueryQueuesRuleResponse::setMsg(const std::string& value)
{
    msg_ = value;
    msgIsSet_ = true;
}

bool SetHtapQueryQueuesRuleResponse::msgIsSet() const
{
    return msgIsSet_;
}

void SetHtapQueryQueuesRuleResponse::unsetmsg()
{
    msgIsSet_ = false;
}

}
}
}
}
}


