

#include "huaweicloud/vpc/v2/model/ShowPortResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowPortResponse::ShowPortResponse()
{
    portIsSet_ = false;
}

ShowPortResponse::~ShowPortResponse() = default;

void ShowPortResponse::validate()
{
}

web::json::value ShowPortResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}

bool ShowPortResponse::fromJson(const web::json::value& val)
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


Port ShowPortResponse::getPort() const
{
    return port_;
}

void ShowPortResponse::setPort(const Port& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ShowPortResponse::portIsSet() const
{
    return portIsSet_;
}

void ShowPortResponse::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


