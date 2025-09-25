

#include "huaweicloud/codeartspipeline/v2/model/PluginPartQueryDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PluginPartQueryDTO::PluginPartQueryDTO()
{
    pluginName_ = "";
    pluginNameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    pluginAttribution_ = "";
    pluginAttributionIsSet_ = false;
    versionAttribution_ = "";
    versionAttributionIsSet_ = false;
}

PluginPartQueryDTO::~PluginPartQueryDTO() = default;

void PluginPartQueryDTO::validate()
{
}

web::json::value PluginPartQueryDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(pluginAttributionIsSet_) {
        val[utility::conversions::to_string_t("plugin_attribution")] = ModelBase::toJson(pluginAttribution_);
    }
    if(versionAttributionIsSet_) {
        val[utility::conversions::to_string_t("version_attribution")] = ModelBase::toJson(versionAttribution_);
    }

    return val;
}
bool PluginPartQueryDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plugin_attribution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_attribution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginAttribution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_attribution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_attribution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionAttribution(refVal);
        }
    }
    return ok;
}


std::string PluginPartQueryDTO::getPluginName() const
{
    return pluginName_;
}

void PluginPartQueryDTO::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool PluginPartQueryDTO::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void PluginPartQueryDTO::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string PluginPartQueryDTO::getDisplayName() const
{
    return displayName_;
}

void PluginPartQueryDTO::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool PluginPartQueryDTO::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void PluginPartQueryDTO::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string PluginPartQueryDTO::getVersion() const
{
    return version_;
}

void PluginPartQueryDTO::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool PluginPartQueryDTO::versionIsSet() const
{
    return versionIsSet_;
}

void PluginPartQueryDTO::unsetversion()
{
    versionIsSet_ = false;
}

std::string PluginPartQueryDTO::getPluginAttribution() const
{
    return pluginAttribution_;
}

void PluginPartQueryDTO::setPluginAttribution(const std::string& value)
{
    pluginAttribution_ = value;
    pluginAttributionIsSet_ = true;
}

bool PluginPartQueryDTO::pluginAttributionIsSet() const
{
    return pluginAttributionIsSet_;
}

void PluginPartQueryDTO::unsetpluginAttribution()
{
    pluginAttributionIsSet_ = false;
}

std::string PluginPartQueryDTO::getVersionAttribution() const
{
    return versionAttribution_;
}

void PluginPartQueryDTO::setVersionAttribution(const std::string& value)
{
    versionAttribution_ = value;
    versionAttributionIsSet_ = true;
}

bool PluginPartQueryDTO::versionAttributionIsSet() const
{
    return versionAttributionIsSet_;
}

void PluginPartQueryDTO::unsetversionAttribution()
{
    versionAttributionIsSet_ = false;
}

}
}
}
}
}


