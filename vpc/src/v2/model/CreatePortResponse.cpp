

#include "huaweicloud/vpc/v2/model/CreatePortResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreatePortResponse::CreatePortResponse()
{
    portIsSet_ = false;
}

CreatePortResponse::~CreatePortResponse() = default;

void CreatePortResponse::validate()
{
}

web::json::value CreatePortResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}
bool CreatePortResponse::fromJson(const web::json::value& val)
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


Port CreatePortResponse::getPort() const
{
    return port_;
}

void CreatePortResponse::setPort(const Port& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool CreatePortResponse::portIsSet() const
{
    return portIsSet_;
}

void CreatePortResponse::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


