

#include "huaweicloud/metastudio/v1/model/PluginSourceEnum.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {



PluginSourceEnum::PluginSourceEnum()
{
}

PluginSourceEnum::~PluginSourceEnum()
{
}

void PluginSourceEnum::validate()
{
}

web::json::value PluginSourceEnum::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (value_ == ePluginSourceEnum::PluginSourceEnum_PLUGIN_CONFIG) val = web::json::value::string(U("PLUGIN_CONFIG"));
    if (value_ == ePluginSourceEnum::PluginSourceEnum_DEFAULT) val = web::json::value::string(U("DEFAULT"));

    return val;
}

bool PluginSourceEnum::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("PLUGIN_CONFIG")) value_ = ePluginSourceEnum::PluginSourceEnum_PLUGIN_CONFIG;
    if (s == utility::conversions::to_string_t("DEFAULT")) value_ = ePluginSourceEnum::PluginSourceEnum_DEFAULT;
    return true;
}

PluginSourceEnum::ePluginSourceEnum PluginSourceEnum::getValue() const
{
   return value_;
}

void PluginSourceEnum::setValue(PluginSourceEnum::ePluginSourceEnum const value)
{
   value_ = value;
}


}
}
}
}
}


