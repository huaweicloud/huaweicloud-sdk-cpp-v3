

#include "huaweicloud/gaussdbforopengauss/v3/model/ListPluginInfoListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListPluginInfoListResponse::ListPluginInfoListResponse()
{
    pluginName_ = "";
    pluginNameIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    pluginVersion_ = "";
    pluginVersionIsSet_ = false;
    installed_ = "";
    installedIsSet_ = false;
}

ListPluginInfoListResponse::~ListPluginInfoListResponse() = default;

void ListPluginInfoListResponse::validate()
{
}

web::json::value ListPluginInfoListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(pluginVersionIsSet_) {
        val[utility::conversions::to_string_t("plugin_version")] = ModelBase::toJson(pluginVersion_);
    }
    if(installedIsSet_) {
        val[utility::conversions::to_string_t("installed")] = ModelBase::toJson(installed_);
    }

    return val;
}
bool ListPluginInfoListResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("installed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("installed"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstalled(refVal);
        }
    }
    return ok;
}


std::string ListPluginInfoListResponse::getPluginName() const
{
    return pluginName_;
}

void ListPluginInfoListResponse::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool ListPluginInfoListResponse::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void ListPluginInfoListResponse::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string ListPluginInfoListResponse::getPort() const
{
    return port_;
}

void ListPluginInfoListResponse::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool ListPluginInfoListResponse::portIsSet() const
{
    return portIsSet_;
}

void ListPluginInfoListResponse::unsetport()
{
    portIsSet_ = false;
}

std::string ListPluginInfoListResponse::getPluginVersion() const
{
    return pluginVersion_;
}

void ListPluginInfoListResponse::setPluginVersion(const std::string& value)
{
    pluginVersion_ = value;
    pluginVersionIsSet_ = true;
}

bool ListPluginInfoListResponse::pluginVersionIsSet() const
{
    return pluginVersionIsSet_;
}

void ListPluginInfoListResponse::unsetpluginVersion()
{
    pluginVersionIsSet_ = false;
}

std::string ListPluginInfoListResponse::getInstalled() const
{
    return installed_;
}

void ListPluginInfoListResponse::setInstalled(const std::string& value)
{
    installed_ = value;
    installedIsSet_ = true;
}

bool ListPluginInfoListResponse::installedIsSet() const
{
    return installedIsSet_;
}

void ListPluginInfoListResponse::unsetinstalled()
{
    installedIsSet_ = false;
}

}
}
}
}
}


