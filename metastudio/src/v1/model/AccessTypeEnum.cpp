

#include "huaweicloud/metastudio/v1/model/AccessTypeEnum.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



AccessTypeEnum::AccessTypeEnum()
{
}

AccessTypeEnum::~AccessTypeEnum()
{
}

void AccessTypeEnum::validate()
{
}

web::json::value AccessTypeEnum::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == eAccessTypeEnum::AccessTypeEnum_MEITUAN_OFFICIAL) val = web::json::value::string(U("MEITUAN_OFFICIAL"));
    if (value_ == eAccessTypeEnum::AccessTypeEnum_MSS_STANDARD) val = web::json::value::string(U("MSS_STANDARD"));

    return val;
}

bool AccessTypeEnum::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("MEITUAN_OFFICIAL")) value_ = eAccessTypeEnum::AccessTypeEnum_MEITUAN_OFFICIAL;
    if (s == utility::conversions::to_string_t("MSS_STANDARD")) value_ = eAccessTypeEnum::AccessTypeEnum_MSS_STANDARD;
    return true;
}

AccessTypeEnum::eAccessTypeEnum AccessTypeEnum::getValue() const
{
   return value_;
}

void AccessTypeEnum::setValue(AccessTypeEnum::eAccessTypeEnum const value)
{
   value_ = value;
}


}
}
}
}
}


