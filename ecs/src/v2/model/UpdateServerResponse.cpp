

#include "huaweicloud/ecs/v2/model/UpdateServerResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateServerResponse::UpdateServerResponse()
{
    serverIsSet_ = false;
}

UpdateServerResponse::~UpdateServerResponse() = default;

void UpdateServerResponse::validate()
{
}

web::json::value UpdateServerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIsSet_) {
        val[utility::conversions::to_string_t("server")] = ModelBase::toJson(server_);
    }

    return val;
}

bool UpdateServerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server"));
        if(!fieldValue.is_null())
        {
            UpdateServerResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServer(refVal);
        }
    }
    return ok;
}

UpdateServerResult UpdateServerResponse::getServer() const
{
    return server_;
}

void UpdateServerResponse::setServer(const UpdateServerResult& value)
{
    server_ = value;
    serverIsSet_ = true;
}

bool UpdateServerResponse::serverIsSet() const
{
    return serverIsSet_;
}

void UpdateServerResponse::unsetserver()
{
    serverIsSet_ = false;
}

}
}
}
}
}


