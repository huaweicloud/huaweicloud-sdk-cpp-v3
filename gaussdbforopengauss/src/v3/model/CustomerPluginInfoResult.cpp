

#include "huaweicloud/gaussdbforopengauss/v3/model/CustomerPluginInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CustomerPluginInfoResult::CustomerPluginInfoResult()
{
    pluginName_ = "";
    pluginNameIsSet_ = false;
    installed_ = false;
    installedIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    pluginVersion_ = "";
    pluginVersionIsSet_ = false;
}

CustomerPluginInfoResult::~CustomerPluginInfoResult() = default;

void CustomerPluginInfoResult::validate()
{
}

web::json::value CustomerPluginInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(installedIsSet_) {
        val[utility::conversions::to_string_t("installed")] = ModelBase::toJson(installed_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(pluginVersionIsSet_) {
        val[utility::conversions::to_string_t("plugin_version")] = ModelBase::toJson(pluginVersion_);
    }

    return val;
}
bool CustomerPluginInfoResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("installed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("installed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstalled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plugin_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginVersion(refVal);
        }
    }
    return ok;
}


std::string CustomerPluginInfoResult::getPluginName() const
{
    return pluginName_;
}

void CustomerPluginInfoResult::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool CustomerPluginInfoResult::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void CustomerPluginInfoResult::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

bool CustomerPluginInfoResult::isInstalled() const
{
    return installed_;
}

void CustomerPluginInfoResult::setInstalled(bool value)
{
    installed_ = value;
    installedIsSet_ = true;
}

bool CustomerPluginInfoResult::installedIsSet() const
{
    return installedIsSet_;
}

void CustomerPluginInfoResult::unsetinstalled()
{
    installedIsSet_ = false;
}

std::string CustomerPluginInfoResult::getPort() const
{
    return port_;
}

void CustomerPluginInfoResult::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool CustomerPluginInfoResult::portIsSet() const
{
    return portIsSet_;
}

void CustomerPluginInfoResult::unsetport()
{
    portIsSet_ = false;
}

std::string CustomerPluginInfoResult::getPluginVersion() const
{
    return pluginVersion_;
}

void CustomerPluginInfoResult::setPluginVersion(const std::string& value)
{
    pluginVersion_ = value;
    pluginVersionIsSet_ = true;
}

bool CustomerPluginInfoResult::pluginVersionIsSet() const
{
    return pluginVersionIsSet_;
}

void CustomerPluginInfoResult::unsetpluginVersion()
{
    pluginVersionIsSet_ = false;
}

}
}
}
}
}


