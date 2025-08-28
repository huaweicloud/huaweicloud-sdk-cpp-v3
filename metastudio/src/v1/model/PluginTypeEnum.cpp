

#include "huaweicloud/metastudio/v1/model/PluginTypeEnum.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



PluginTypeEnum::PluginTypeEnum()
{
}

PluginTypeEnum::~PluginTypeEnum()
{
}

void PluginTypeEnum::validate()
{
}

web::json::value PluginTypeEnum::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == ePluginTypeEnum::PluginTypeEnum_WEATHER_QUERY) val = web::json::value::string(U("WEATHER_QUERY"));
    if (value_ == ePluginTypeEnum::PluginTypeEnum_WEB_SEARCH) val = web::json::value::string(U("WEB_SEARCH"));

    return val;
}

bool PluginTypeEnum::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("WEATHER_QUERY")) value_ = ePluginTypeEnum::PluginTypeEnum_WEATHER_QUERY;
    if (s == utility::conversions::to_string_t("WEB_SEARCH")) value_ = ePluginTypeEnum::PluginTypeEnum_WEB_SEARCH;
    return true;
}

PluginTypeEnum::ePluginTypeEnum PluginTypeEnum::getValue() const
{
   return value_;
}

void PluginTypeEnum::setValue(PluginTypeEnum::ePluginTypeEnum const value)
{
   value_ = value;
}


}
}
}
}
}


