

#include "huaweicloud/gaussdbforopengauss/v3/model/MySQLCompatibilityResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




MySQLCompatibilityResult::MySQLCompatibilityResult()
{
    port_ = "";
    portIsSet_ = false;
}

MySQLCompatibilityResult::~MySQLCompatibilityResult() = default;

void MySQLCompatibilityResult::validate()
{
}

web::json::value MySQLCompatibilityResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}
bool MySQLCompatibilityResult::fromJson(const web::json::value& val)
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


std::string MySQLCompatibilityResult::getPort() const
{
    return port_;
}

void MySQLCompatibilityResult::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool MySQLCompatibilityResult::portIsSet() const
{
    return portIsSet_;
}

void MySQLCompatibilityResult::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


