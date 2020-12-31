

#include "huaweicloud/ecs/model/ListServerInterfacesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServerInterfacesRequest::ListServerInterfacesRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

ListServerInterfacesRequest::~ListServerInterfacesRequest() = default;

void ListServerInterfacesRequest::validate()
{
}

web::json::value ListServerInterfacesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}

bool ListServerInterfacesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    return ok;
}


std::string ListServerInterfacesRequest::getServerId() const
{
    return serverId_;
}

void ListServerInterfacesRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ListServerInterfacesRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ListServerInterfacesRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


