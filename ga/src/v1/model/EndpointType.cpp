

#include "huaweicloud/ga/v1/model/EndpointType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {



EndpointType::EndpointType()
{
}

EndpointType::~EndpointType()
{
}

void EndpointType::validate()
{
}

web::json::value EndpointType::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eEndpointType::EndpointType_EIP) val = web::json::value::string(U("EIP"));

    return val;
}

bool EndpointType::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("EIP")) value_ = eEndpointType::EndpointType_EIP;
    return true;
}

EndpointType::eEndpointType EndpointType::getValue() const
{
   return value_;
}

void EndpointType::setValue(EndpointType::eEndpointType const value)
{
   value_ = value;
}


}
}
}
}
}


