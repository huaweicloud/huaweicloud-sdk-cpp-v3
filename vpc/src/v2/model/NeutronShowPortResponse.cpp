

#include "huaweicloud/vpc/v2/model/NeutronShowPortResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronShowPortResponse::NeutronShowPortResponse()
{
    portIsSet_ = false;
}

NeutronShowPortResponse::~NeutronShowPortResponse() = default;

void NeutronShowPortResponse::validate()
{
}

web::json::value NeutronShowPortResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}

bool NeutronShowPortResponse::fromJson(const web::json::value& val)
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

NeutronPort NeutronShowPortResponse::getPort() const
{
    return port_;
}

void NeutronShowPortResponse::setPort(const NeutronPort& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool NeutronShowPortResponse::portIsSet() const
{
    return portIsSet_;
}

void NeutronShowPortResponse::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


