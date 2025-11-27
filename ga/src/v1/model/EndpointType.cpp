

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
    if (value_ == eEndpointType::EndpointType_ECS) val = web::json::value::string(U("ECS"));
    if (value_ == eEndpointType::EndpointType_ELB) val = web::json::value::string(U("ELB"));
    if (value_ == eEndpointType::EndpointType_CUSTOM_IP) val = web::json::value::string(U("CUSTOM_IP"));
    if (value_ == eEndpointType::EndpointType_CUSTOM_DOMAIN_NAME) val = web::json::value::string(U("CUSTOM_DOMAIN_NAME"));
    if (value_ == eEndpointType::EndpointType_CUSTOM_EIP) val = web::json::value::string(U("CUSTOM_EIP"));

    return val;
}

bool EndpointType::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("EIP")) value_ = eEndpointType::EndpointType_EIP;
    if (s == utility::conversions::to_string_t("ECS")) value_ = eEndpointType::EndpointType_ECS;
    if (s == utility::conversions::to_string_t("ELB")) value_ = eEndpointType::EndpointType_ELB;
    if (s == utility::conversions::to_string_t("CUSTOM_IP")) value_ = eEndpointType::EndpointType_CUSTOM_IP;
    if (s == utility::conversions::to_string_t("CUSTOM_DOMAIN_NAME")) value_ = eEndpointType::EndpointType_CUSTOM_DOMAIN_NAME;
    if (s == utility::conversions::to_string_t("CUSTOM_EIP")) value_ = eEndpointType::EndpointType_CUSTOM_EIP;
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


