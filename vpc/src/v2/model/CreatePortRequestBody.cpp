

#include "huaweicloud/vpc/v2/model/CreatePortRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreatePortRequestBody::CreatePortRequestBody()
{
    portIsSet_ = false;
}

CreatePortRequestBody::~CreatePortRequestBody() = default;

void CreatePortRequestBody::validate()
{
}

web::json::value CreatePortRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}
bool CreatePortRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            CreatePortOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    return ok;
}


CreatePortOption CreatePortRequestBody::getPort() const
{
    return port_;
}

void CreatePortRequestBody::setPort(const CreatePortOption& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool CreatePortRequestBody::portIsSet() const
{
    return portIsSet_;
}

void CreatePortRequestBody::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


