

#include "huaweicloud/ecs/v2/model/ShowRecycleBinServerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowRecycleBinServerResponse::ShowRecycleBinServerResponse()
{
    serverIsSet_ = false;
}

ShowRecycleBinServerResponse::~ShowRecycleBinServerResponse() = default;

void ShowRecycleBinServerResponse::validate()
{
}

web::json::value ShowRecycleBinServerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIsSet_) {
        val[utility::conversions::to_string_t("server")] = ModelBase::toJson(server_);
    }

    return val;
}
bool ShowRecycleBinServerResponse::fromJson(const web::json::value& val)
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


ServerDetail ShowRecycleBinServerResponse::getServer() const
{
    return server_;
}

void ShowRecycleBinServerResponse::setServer(const ServerDetail& value)
{
    server_ = value;
    serverIsSet_ = true;
}

bool ShowRecycleBinServerResponse::serverIsSet() const
{
    return serverIsSet_;
}

void ShowRecycleBinServerResponse::unsetserver()
{
    serverIsSet_ = false;
}

}
}
}
}
}


