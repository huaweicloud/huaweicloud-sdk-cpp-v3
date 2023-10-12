

#include "huaweicloud/gaussdb/v3/model/UpdateProxyPortRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateProxyPortRequestBody::UpdateProxyPortRequestBody()
{
    port_ = 0;
    portIsSet_ = false;
}

UpdateProxyPortRequestBody::~UpdateProxyPortRequestBody() = default;

void UpdateProxyPortRequestBody::validate()
{
}

web::json::value UpdateProxyPortRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}
bool UpdateProxyPortRequestBody::fromJson(const web::json::value& val)
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


int32_t UpdateProxyPortRequestBody::getPort() const
{
    return port_;
}

void UpdateProxyPortRequestBody::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool UpdateProxyPortRequestBody::portIsSet() const
{
    return portIsSet_;
}

void UpdateProxyPortRequestBody::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


