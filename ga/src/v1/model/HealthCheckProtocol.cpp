

#include "huaweicloud/ga/v1/model/HealthCheckProtocol.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {



HealthCheckProtocol::HealthCheckProtocol()
{
}

HealthCheckProtocol::~HealthCheckProtocol()
{
}

void HealthCheckProtocol::validate()
{
}

web::json::value HealthCheckProtocol::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eHealthCheckProtocol::HealthCheckProtocol_TCP) val = web::json::value::string(U("TCP"));

    return val;
}

bool HealthCheckProtocol::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("TCP")) value_ = eHealthCheckProtocol::HealthCheckProtocol_TCP;
    return true;
}

HealthCheckProtocol::eHealthCheckProtocol HealthCheckProtocol::getValue() const
{
   return value_;
}

void HealthCheckProtocol::setValue(HealthCheckProtocol::eHealthCheckProtocol const value)
{
   value_ = value;
}


}
}
}
}
}


