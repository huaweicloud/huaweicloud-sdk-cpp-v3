

#include "huaweicloud/ga/v1/model/ListenerAccessControlType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {



ListenerAccessControlType::ListenerAccessControlType()
{
}

ListenerAccessControlType::~ListenerAccessControlType()
{
}

void ListenerAccessControlType::validate()
{
}

web::json::value ListenerAccessControlType::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eListenerAccessControlType::ListenerAccessControlType_BLACK) val = web::json::value::string(U("BLACK"));
    if (value_ == eListenerAccessControlType::ListenerAccessControlType_WHITE) val = web::json::value::string(U("WHITE"));

    return val;
}

bool ListenerAccessControlType::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("BLACK")) value_ = eListenerAccessControlType::ListenerAccessControlType_BLACK;
    if (s == utility::conversions::to_string_t("WHITE")) value_ = eListenerAccessControlType::ListenerAccessControlType_WHITE;
    return true;
}

ListenerAccessControlType::eListenerAccessControlType ListenerAccessControlType::getValue() const
{
   return value_;
}

void ListenerAccessControlType::setValue(ListenerAccessControlType::eListenerAccessControlType const value)
{
   value_ = value;
}


}
}
}
}
}


