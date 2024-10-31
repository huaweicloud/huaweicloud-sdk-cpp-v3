

#include "huaweicloud/gaussdbforopengauss/v3/model/UpdateMySQLCompatibilityRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpdateMySQLCompatibilityRequestBody::UpdateMySQLCompatibilityRequestBody()
{
    port_ = "";
    portIsSet_ = false;
}

UpdateMySQLCompatibilityRequestBody::~UpdateMySQLCompatibilityRequestBody() = default;

void UpdateMySQLCompatibilityRequestBody::validate()
{
}

web::json::value UpdateMySQLCompatibilityRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}
bool UpdateMySQLCompatibilityRequestBody::fromJson(const web::json::value& val)
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


std::string UpdateMySQLCompatibilityRequestBody::getPort() const
{
    return port_;
}

void UpdateMySQLCompatibilityRequestBody::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool UpdateMySQLCompatibilityRequestBody::portIsSet() const
{
    return portIsSet_;
}

void UpdateMySQLCompatibilityRequestBody::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


