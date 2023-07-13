

#include "huaweicloud/cdn/v2/model/WebSocketSeek.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




WebSocketSeek::WebSocketSeek()
{
    status_ = "";
    statusIsSet_ = false;
    timeout_ = 0;
    timeoutIsSet_ = false;
}

WebSocketSeek::~WebSocketSeek() = default;

void WebSocketSeek::validate()
{
}

web::json::value WebSocketSeek::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(timeoutIsSet_) {
        val[utility::conversions::to_string_t("timeout")] = ModelBase::toJson(timeout_);
    }

    return val;
}

bool WebSocketSeek::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeout"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeout(refVal);
        }
    }
    return ok;
}

std::string WebSocketSeek::getStatus() const
{
    return status_;
}

void WebSocketSeek::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool WebSocketSeek::statusIsSet() const
{
    return statusIsSet_;
}

void WebSocketSeek::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t WebSocketSeek::getTimeout() const
{
    return timeout_;
}

void WebSocketSeek::setTimeout(int32_t value)
{
    timeout_ = value;
    timeoutIsSet_ = true;
}

bool WebSocketSeek::timeoutIsSet() const
{
    return timeoutIsSet_;
}

void WebSocketSeek::unsettimeout()
{
    timeoutIsSet_ = false;
}

}
}
}
}
}


