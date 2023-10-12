

#include "huaweicloud/vpc/v2/model/NeutronCreatePortRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreatePortRequestBody::NeutronCreatePortRequestBody()
{
    portIsSet_ = false;
}

NeutronCreatePortRequestBody::~NeutronCreatePortRequestBody() = default;

void NeutronCreatePortRequestBody::validate()
{
}

web::json::value NeutronCreatePortRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}
bool NeutronCreatePortRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            NeutronCreatePortOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    return ok;
}


NeutronCreatePortOption NeutronCreatePortRequestBody::getPort() const
{
    return port_;
}

void NeutronCreatePortRequestBody::setPort(const NeutronCreatePortOption& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool NeutronCreatePortRequestBody::portIsSet() const
{
    return portIsSet_;
}

void NeutronCreatePortRequestBody::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


