

#include "huaweicloud/rds/v3/model/UpdateInstancesProxyPortRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateInstancesProxyPortRequestBody::UpdateInstancesProxyPortRequestBody()
{
    port_ = 0;
    portIsSet_ = false;
}

UpdateInstancesProxyPortRequestBody::~UpdateInstancesProxyPortRequestBody() = default;

void UpdateInstancesProxyPortRequestBody::validate()
{
}

web::json::value UpdateInstancesProxyPortRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}
bool UpdateInstancesProxyPortRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    return ok;
}


int32_t UpdateInstancesProxyPortRequestBody::getPort() const
{
    return port_;
}

void UpdateInstancesProxyPortRequestBody::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool UpdateInstancesProxyPortRequestBody::portIsSet() const
{
    return portIsSet_;
}

void UpdateInstancesProxyPortRequestBody::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


