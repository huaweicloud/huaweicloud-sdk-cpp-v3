

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
    maxConnections_ = 0;
    maxConnectionsIsSet_ = false;
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
    if(maxConnectionsIsSet_) {
        val[utility::conversions::to_string_t("max_connections")] = ModelBase::toJson(maxConnections_);
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
    if(val.has_field(utility::conversions::to_string_t("max_connections"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_connections"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxConnections(refVal);
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

int32_t TaurusRestartInstanceRequest::getMaxConnections() const
{
    return maxConnections_;
}

void TaurusRestartInstanceRequest::setMaxConnections(int32_t value)
{
    maxConnections_ = value;
    maxConnectionsIsSet_ = true;
}

bool TaurusRestartInstanceRequest::maxConnectionsIsSet() const
{
    return maxConnectionsIsSet_;
}

void TaurusRestartInstanceRequest::unsetmaxConnections()
{
    maxConnectionsIsSet_ = false;
}

}
}
}
}
}


