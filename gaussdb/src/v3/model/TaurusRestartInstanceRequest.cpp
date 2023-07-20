

#include "huaweicloud/gaussdb/v3/model/TaurusRestartInstanceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TaurusRestartInstanceRequest::TaurusRestartInstanceRequest()
{
    delay_ = false;
    delayIsSet_ = false;
}

TaurusRestartInstanceRequest::~TaurusRestartInstanceRequest() = default;

void TaurusRestartInstanceRequest::validate()
{
}

web::json::value TaurusRestartInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }

    return val;
}

bool TaurusRestartInstanceRequest::fromJson(const web::json::value& val)
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

bool TaurusRestartInstanceRequest::isDelay() const
{
    return delay_;
}

void TaurusRestartInstanceRequest::setDelay(bool value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool TaurusRestartInstanceRequest::delayIsSet() const
{
    return delayIsSet_;
}

void TaurusRestartInstanceRequest::unsetdelay()
{
    delayIsSet_ = false;
}

}
}
}
}
}


