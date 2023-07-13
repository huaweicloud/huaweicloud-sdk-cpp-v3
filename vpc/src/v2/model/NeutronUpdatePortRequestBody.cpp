

#include "huaweicloud/vpc/v2/model/NeutronUpdatePortRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdatePortRequestBody::NeutronUpdatePortRequestBody()
{
    portIsSet_ = false;
}

NeutronUpdatePortRequestBody::~NeutronUpdatePortRequestBody() = default;

void NeutronUpdatePortRequestBody::validate()
{
}

web::json::value NeutronUpdatePortRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}

bool NeutronUpdatePortRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            NeutronUpdatePortOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    return ok;
}

NeutronUpdatePortOption NeutronUpdatePortRequestBody::getPort() const
{
    return port_;
}

void NeutronUpdatePortRequestBody::setPort(const NeutronUpdatePortOption& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool NeutronUpdatePortRequestBody::portIsSet() const
{
    return portIsSet_;
}

void NeutronUpdatePortRequestBody::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


