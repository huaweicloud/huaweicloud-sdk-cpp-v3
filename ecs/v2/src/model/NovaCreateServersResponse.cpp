

#include "huaweicloud/ecs/model/NovaCreateServersResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaCreateServersResponse::NovaCreateServersResponse()
{
    serverIsSet_ = false;
}

NovaCreateServersResponse::~NovaCreateServersResponse() = default;

void NovaCreateServersResponse::validate()
{
}

web::json::value NovaCreateServersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIsSet_) {
        val[utility::conversions::to_string_t("server")] = ModelBase::toJson(server_);
    }

    return val;
}

bool NovaCreateServersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server"));
        if(!fieldValue.is_null())
        {
            NovaCreateServersResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServer(refVal);
        }
    }
    return ok;
}


NovaCreateServersResult NovaCreateServersResponse::getServer() const
{
    return server_;
}

void NovaCreateServersResponse::setServer(const NovaCreateServersResult& value)
{
    server_ = value;
    serverIsSet_ = true;
}

bool NovaCreateServersResponse::serverIsSet() const
{
    return serverIsSet_;
}

void NovaCreateServersResponse::unsetserver()
{
    serverIsSet_ = false;
}

}
}
}
}
}


