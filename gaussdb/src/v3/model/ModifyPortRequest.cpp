

#include "huaweicloud/gaussdb/v3/model/ModifyPortRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyPortRequest::ModifyPortRequest()
{
    port_ = 0;
    portIsSet_ = false;
}

ModifyPortRequest::~ModifyPortRequest() = default;

void ModifyPortRequest::validate()
{
}

web::json::value ModifyPortRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}
bool ModifyPortRequest::fromJson(const web::json::value& val)
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


int32_t ModifyPortRequest::getPort() const
{
    return port_;
}

void ModifyPortRequest::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ModifyPortRequest::portIsSet() const
{
    return portIsSet_;
}

void ModifyPortRequest::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


