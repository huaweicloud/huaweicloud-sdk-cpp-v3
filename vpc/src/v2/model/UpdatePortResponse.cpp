

#include "huaweicloud/vpc/v2/model/UpdatePortResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdatePortResponse::UpdatePortResponse()
{
    portIsSet_ = false;
}

UpdatePortResponse::~UpdatePortResponse() = default;

void UpdatePortResponse::validate()
{
}

web::json::value UpdatePortResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}
bool UpdatePortResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            Port refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    return ok;
}


Port UpdatePortResponse::getPort() const
{
    return port_;
}

void UpdatePortResponse::setPort(const Port& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool UpdatePortResponse::portIsSet() const
{
    return portIsSet_;
}

void UpdatePortResponse::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


