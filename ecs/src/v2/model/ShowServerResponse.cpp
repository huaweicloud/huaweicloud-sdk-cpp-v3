

#include "huaweicloud/ecs/v2/model/ShowServerResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerResponse::ShowServerResponse()
{
    serverIsSet_ = false;
}

ShowServerResponse::~ShowServerResponse() = default;

void ShowServerResponse::validate()
{
}

web::json::value ShowServerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIsSet_) {
        val[utility::conversions::to_string_t("server")] = ModelBase::toJson(server_);
    }

    return val;
}

bool ShowServerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server"));
        if(!fieldValue.is_null())
        {
            ServerDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServer(refVal);
        }
    }
    return ok;
}

ServerDetail ShowServerResponse::getServer() const
{
    return server_;
}

void ShowServerResponse::setServer(const ServerDetail& value)
{
    server_ = value;
    serverIsSet_ = true;
}

bool ShowServerResponse::serverIsSet() const
{
    return serverIsSet_;
}

void ShowServerResponse::unsetserver()
{
    serverIsSet_ = false;
}

}
}
}
}
}


