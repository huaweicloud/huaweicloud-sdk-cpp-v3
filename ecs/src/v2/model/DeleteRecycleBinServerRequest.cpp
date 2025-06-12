

#include "huaweicloud/ecs/v2/model/DeleteRecycleBinServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DeleteRecycleBinServerRequest::DeleteRecycleBinServerRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

DeleteRecycleBinServerRequest::~DeleteRecycleBinServerRequest() = default;

void DeleteRecycleBinServerRequest::validate()
{
}

web::json::value DeleteRecycleBinServerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool DeleteRecycleBinServerRequest::fromJson(const web::json::value& val)
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


std::string DeleteRecycleBinServerRequest::getServerId() const
{
    return serverId_;
}

void DeleteRecycleBinServerRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool DeleteRecycleBinServerRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void DeleteRecycleBinServerRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


