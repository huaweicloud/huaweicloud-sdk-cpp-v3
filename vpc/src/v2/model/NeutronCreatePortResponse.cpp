

#include "huaweicloud/vpc/v2/model/NeutronCreatePortResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreatePortResponse::NeutronCreatePortResponse()
{
    portIsSet_ = false;
}

NeutronCreatePortResponse::~NeutronCreatePortResponse() = default;

void NeutronCreatePortResponse::validate()
{
}

web::json::value NeutronCreatePortResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}

bool NeutronCreatePortResponse::fromJson(const web::json::value& val)
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

NeutronPort NeutronCreatePortResponse::getPort() const
{
    return port_;
}

void NeutronCreatePortResponse::setPort(const NeutronPort& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool NeutronCreatePortResponse::portIsSet() const
{
    return portIsSet_;
}

void NeutronCreatePortResponse::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


