

#include "huaweicloud/gaussdbforopengauss/v3/model/StartMySQLCompatibilityRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




StartMySQLCompatibilityRequestBody::StartMySQLCompatibilityRequestBody()
{
    port_ = "";
    portIsSet_ = false;
}

StartMySQLCompatibilityRequestBody::~StartMySQLCompatibilityRequestBody() = default;

void StartMySQLCompatibilityRequestBody::validate()
{
}

web::json::value StartMySQLCompatibilityRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}
bool StartMySQLCompatibilityRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    return ok;
}


std::string StartMySQLCompatibilityRequestBody::getPort() const
{
    return port_;
}

void StartMySQLCompatibilityRequestBody::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool StartMySQLCompatibilityRequestBody::portIsSet() const
{
    return portIsSet_;
}

void StartMySQLCompatibilityRequestBody::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


