

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifyInstancePortRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifyInstancePortRequestBody::ModifyInstancePortRequestBody()
{
    port_ = 0;
    portIsSet_ = false;
}

ModifyInstancePortRequestBody::~ModifyInstancePortRequestBody() = default;

void ModifyInstancePortRequestBody::validate()
{
}

web::json::value ModifyInstancePortRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}
bool ModifyInstancePortRequestBody::fromJson(const web::json::value& val)
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


int32_t ModifyInstancePortRequestBody::getPort() const
{
    return port_;
}

void ModifyInstancePortRequestBody::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ModifyInstancePortRequestBody::portIsSet() const
{
    return portIsSet_;
}

void ModifyInstancePortRequestBody::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


