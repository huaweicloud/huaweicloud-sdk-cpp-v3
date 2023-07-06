

#include "huaweicloud/ecs/v2/model/UpdateServerRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateServerRequestBody::UpdateServerRequestBody()
{
    serverIsSet_ = false;
}

UpdateServerRequestBody::~UpdateServerRequestBody() = default;

void UpdateServerRequestBody::validate()
{
}

web::json::value UpdateServerRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIsSet_) {
        val[utility::conversions::to_string_t("server")] = ModelBase::toJson(server_);
    }

    return val;
}

bool UpdateServerRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server"));
        if(!fieldValue.is_null())
        {
            UpdateServerOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServer(refVal);
        }
    }
    return ok;
}

UpdateServerOption UpdateServerRequestBody::getServer() const
{
    return server_;
}

void UpdateServerRequestBody::setServer(const UpdateServerOption& value)
{
    server_ = value;
    serverIsSet_ = true;
}

bool UpdateServerRequestBody::serverIsSet() const
{
    return serverIsSet_;
}

void UpdateServerRequestBody::unsetserver()
{
    serverIsSet_ = false;
}

}
}
}
}
}


