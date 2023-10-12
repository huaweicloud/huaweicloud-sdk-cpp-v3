

#include "huaweicloud/ecs/v2/model/NovaShowServerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaShowServerResponse::NovaShowServerResponse()
{
    serverIsSet_ = false;
}

NovaShowServerResponse::~NovaShowServerResponse() = default;

void NovaShowServerResponse::validate()
{
}

web::json::value NovaShowServerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIsSet_) {
        val[utility::conversions::to_string_t("server")] = ModelBase::toJson(server_);
    }

    return val;
}
bool NovaShowServerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server"));
        if(!fieldValue.is_null())
        {
            NovaServer refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServer(refVal);
        }
    }
    return ok;
}


NovaServer NovaShowServerResponse::getServer() const
{
    return server_;
}

void NovaShowServerResponse::setServer(const NovaServer& value)
{
    server_ = value;
    serverIsSet_ = true;
}

bool NovaShowServerResponse::serverIsSet() const
{
    return serverIsSet_;
}

void NovaShowServerResponse::unsetserver()
{
    serverIsSet_ = false;
}

}
}
}
}
}


