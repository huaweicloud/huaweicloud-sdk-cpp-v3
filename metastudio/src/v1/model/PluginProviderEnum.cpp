

#include "huaweicloud/metastudio/v1/model/PluginProviderEnum.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



PluginProviderEnum::PluginProviderEnum()
{
}

PluginProviderEnum::~PluginProviderEnum()
{
}

void PluginProviderEnum::validate()
{
}

web::json::value PluginProviderEnum::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == ePluginProviderEnum::PluginProviderEnum_AMAP_WEATHER) val = web::json::value::string(U("AMAP_WEATHER"));
    if (value_ == ePluginProviderEnum::PluginProviderEnum_BOCHA) val = web::json::value::string(U("BOCHA"));

    return val;
}

bool PluginProviderEnum::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("AMAP_WEATHER")) value_ = ePluginProviderEnum::PluginProviderEnum_AMAP_WEATHER;
    if (s == utility::conversions::to_string_t("BOCHA")) value_ = ePluginProviderEnum::PluginProviderEnum_BOCHA;
    return true;
}

PluginProviderEnum::ePluginProviderEnum PluginProviderEnum::getValue() const
{
   return value_;
}

void PluginProviderEnum::setValue(PluginProviderEnum::ePluginProviderEnum const value)
{
   value_ = value;
}


}
}
}
}
}


