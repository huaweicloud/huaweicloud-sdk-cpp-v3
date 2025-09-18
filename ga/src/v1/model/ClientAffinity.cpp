

#include "huaweicloud/ga/v1/model/ClientAffinity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {



ClientAffinity::ClientAffinity()
{
}

ClientAffinity::~ClientAffinity()
{
}

void ClientAffinity::validate()
{
}

web::json::value ClientAffinity::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eClientAffinity::ClientAffinity_SOURCE_IP) val = web::json::value::string(U("SOURCE_IP"));
    if (value_ == eClientAffinity::ClientAffinity_NONE) val = web::json::value::string(U("NONE"));

    return val;
}

bool ClientAffinity::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("SOURCE_IP")) value_ = eClientAffinity::ClientAffinity_SOURCE_IP;
    if (s == utility::conversions::to_string_t("NONE")) value_ = eClientAffinity::ClientAffinity_NONE;
    return true;
}

ClientAffinity::eClientAffinity ClientAffinity::getValue() const
{
   return value_;
}

void ClientAffinity::setValue(ClientAffinity::eClientAffinity const value)
{
   value_ = value;
}


}
}
}
}
}


