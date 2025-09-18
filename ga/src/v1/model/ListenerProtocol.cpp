

#include "huaweicloud/ga/v1/model/ListenerProtocol.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {



ListenerProtocol::ListenerProtocol()
{
}

ListenerProtocol::~ListenerProtocol()
{
}

void ListenerProtocol::validate()
{
}

web::json::value ListenerProtocol::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eListenerProtocol::ListenerProtocol_TCP) val = web::json::value::string(U("TCP"));
    if (value_ == eListenerProtocol::ListenerProtocol_UDP) val = web::json::value::string(U("UDP"));

    return val;
}

bool ListenerProtocol::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("TCP")) value_ = eListenerProtocol::ListenerProtocol_TCP;
    if (s == utility::conversions::to_string_t("UDP")) value_ = eListenerProtocol::ListenerProtocol_UDP;
    return true;
}

ListenerProtocol::eListenerProtocol ListenerProtocol::getValue() const
{
   return value_;
}

void ListenerProtocol::setValue(ListenerProtocol::eListenerProtocol const value)
{
   value_ = value;
}


}
}
}
}
}


