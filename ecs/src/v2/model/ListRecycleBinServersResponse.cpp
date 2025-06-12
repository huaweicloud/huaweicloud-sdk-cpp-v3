

#include "huaweicloud/ecs/v2/model/ListRecycleBinServersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListRecycleBinServersResponse::ListRecycleBinServersResponse()
{
    serversIsSet_ = false;
}

ListRecycleBinServersResponse::~ListRecycleBinServersResponse() = default;

void ListRecycleBinServersResponse::validate()
{
}

web::json::value ListRecycleBinServersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serversIsSet_) {
        val[utility::conversions::to_string_t("servers")] = ModelBase::toJson(servers_);
    }

    return val;
}
bool ListRecycleBinServersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("servers"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServers(refVal);
        }
    }
    return ok;
}


std::vector<ServerDetail>& ListRecycleBinServersResponse::getServers()
{
    return servers_;
}

void ListRecycleBinServersResponse::setServers(const std::vector<ServerDetail>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool ListRecycleBinServersResponse::serversIsSet() const
{
    return serversIsSet_;
}

void ListRecycleBinServersResponse::unsetservers()
{
    serversIsSet_ = false;
}

}
}
}
}
}


