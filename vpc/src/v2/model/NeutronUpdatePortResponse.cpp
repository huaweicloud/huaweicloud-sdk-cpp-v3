

#include "huaweicloud/vpc/v2/model/NeutronUpdatePortResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdatePortResponse::NeutronUpdatePortResponse()
{
    portIsSet_ = false;
}

NeutronUpdatePortResponse::~NeutronUpdatePortResponse() = default;

void NeutronUpdatePortResponse::validate()
{
}

web::json::value NeutronUpdatePortResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}

bool NeutronUpdatePortResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            NeutronPort refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    return ok;
}

NeutronPort NeutronUpdatePortResponse::getPort() const
{
    return port_;
}

void NeutronUpdatePortResponse::setPort(const NeutronPort& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool NeutronUpdatePortResponse::portIsSet() const
{
    return portIsSet_;
}

void NeutronUpdatePortResponse::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


