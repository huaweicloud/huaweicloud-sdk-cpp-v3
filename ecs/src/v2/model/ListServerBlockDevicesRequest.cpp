

#include "huaweicloud/ecs/v2/model/ListServerBlockDevicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServerBlockDevicesRequest::ListServerBlockDevicesRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

ListServerBlockDevicesRequest::~ListServerBlockDevicesRequest() = default;

void ListServerBlockDevicesRequest::validate()
{
}

web::json::value ListServerBlockDevicesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool ListServerBlockDevicesRequest::fromJson(const web::json::value& val)
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


std::string ListServerBlockDevicesRequest::getServerId() const
{
    return serverId_;
}

void ListServerBlockDevicesRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ListServerBlockDevicesRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ListServerBlockDevicesRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


