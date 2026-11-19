

#include "huaweicloud/gaussdbforopengauss/v3/model/UninstallPluginRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UninstallPluginRequestBody::UninstallPluginRequestBody()
{
    pluginName_ = "";
    pluginNameIsSet_ = false;
}

UninstallPluginRequestBody::~UninstallPluginRequestBody() = default;

void UninstallPluginRequestBody::validate()
{
}

web::json::value UninstallPluginRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }

    return val;
}
bool UninstallPluginRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("plugin_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginName(refVal);
        }
    }
    return ok;
}


std::string UninstallPluginRequestBody::getPluginName() const
{
    return pluginName_;
}

void UninstallPluginRequestBody::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool UninstallPluginRequestBody::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void UninstallPluginRequestBody::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

}
}
}
}
}


