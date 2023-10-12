

#include "huaweicloud/gaussdbfornosql/v3/model/ModifyPortRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ModifyPortRequestBody::ModifyPortRequestBody()
{
    port_ = 0;
    portIsSet_ = false;
}

ModifyPortRequestBody::~ModifyPortRequestBody() = default;

void ModifyPortRequestBody::validate()
{
}

web::json::value ModifyPortRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}
bool ModifyPortRequestBody::fromJson(const web::json::value& val)
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


int32_t ModifyPortRequestBody::getPort() const
{
    return port_;
}

void ModifyPortRequestBody::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ModifyPortRequestBody::portIsSet() const
{
    return portIsSet_;
}

void ModifyPortRequestBody::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


