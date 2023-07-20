

#include "huaweicloud/gaussdb/v3/model/RestartNodeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestartNodeRequest::RestartNodeRequest()
{
    delay_ = false;
    delayIsSet_ = false;
}

RestartNodeRequest::~RestartNodeRequest() = default;

void RestartNodeRequest::validate()
{
}

web::json::value RestartNodeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }

    return val;
}

bool RestartNodeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

bool RestartNodeRequest::isDelay() const
{
    return delay_;
}

void RestartNodeRequest::setDelay(bool value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool RestartNodeRequest::delayIsSet() const
{
    return delayIsSet_;
}

void RestartNodeRequest::unsetdelay()
{
    delayIsSet_ = false;
}

}
}
}
}
}


