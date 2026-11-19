

#include "huaweicloud/gaussdbforopengauss/v3/model/InstallPluginRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstallPluginRequestBody::InstallPluginRequestBody()
{
    pluginName_ = "";
    pluginNameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    port_ = "";
    portIsSet_ = false;
    obsUrl_ = "";
    obsUrlIsSet_ = false;
}

InstallPluginRequestBody::~InstallPluginRequestBody() = default;

void InstallPluginRequestBody::validate()
{
}

web::json::value InstallPluginRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(obsUrlIsSet_) {
        val[utility::conversions::to_string_t("obs_url")] = ModelBase::toJson(obsUrl_);
    }

    return val;
}
bool InstallPluginRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("obs_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsUrl(refVal);
        }
    }
    return ok;
}


std::string InstallPluginRequestBody::getPluginName() const
{
    return pluginName_;
}

void InstallPluginRequestBody::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool InstallPluginRequestBody::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void InstallPluginRequestBody::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string InstallPluginRequestBody::getVersion() const
{
    return version_;
}

void InstallPluginRequestBody::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool InstallPluginRequestBody::versionIsSet() const
{
    return versionIsSet_;
}

void InstallPluginRequestBody::unsetversion()
{
    versionIsSet_ = false;
}

std::string InstallPluginRequestBody::getPort() const
{
    return port_;
}

void InstallPluginRequestBody::setPort(const std::string& value)
{
    port_ = value;
    portIsSet_ = true;
}

bool InstallPluginRequestBody::portIsSet() const
{
    return portIsSet_;
}

void InstallPluginRequestBody::unsetport()
{
    portIsSet_ = false;
}

std::string InstallPluginRequestBody::getObsUrl() const
{
    return obsUrl_;
}

void InstallPluginRequestBody::setObsUrl(const std::string& value)
{
    obsUrl_ = value;
    obsUrlIsSet_ = true;
}

bool InstallPluginRequestBody::obsUrlIsSet() const
{
    return obsUrlIsSet_;
}

void InstallPluginRequestBody::unsetobsUrl()
{
    obsUrlIsSet_ = false;
}

}
}
}
}
}


