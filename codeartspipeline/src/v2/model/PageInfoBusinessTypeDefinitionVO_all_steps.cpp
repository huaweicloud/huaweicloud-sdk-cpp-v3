

#include "huaweicloud/codeartspipeline/v2/model/PageInfoBusinessTypeDefinitionVO_all_steps.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PageInfoBusinessTypeDefinitionVO_all_steps::PageInfoBusinessTypeDefinitionVO_all_steps()
{
    pluginName_ = "";
    pluginNameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

PageInfoBusinessTypeDefinitionVO_all_steps::~PageInfoBusinessTypeDefinitionVO_all_steps() = default;

void PageInfoBusinessTypeDefinitionVO_all_steps::validate()
{
}

web::json::value PageInfoBusinessTypeDefinitionVO_all_steps::toJson() const
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

    return val;
}
bool PageInfoBusinessTypeDefinitionVO_all_steps::fromJson(const web::json::value& val)
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
    return ok;
}


std::string PageInfoBusinessTypeDefinitionVO_all_steps::getPluginName() const
{
    return pluginName_;
}

void PageInfoBusinessTypeDefinitionVO_all_steps::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_all_steps::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_all_steps::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_all_steps::getDisplayName() const
{
    return displayName_;
}

void PageInfoBusinessTypeDefinitionVO_all_steps::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_all_steps::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_all_steps::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_all_steps::getVersion() const
{
    return version_;
}

void PageInfoBusinessTypeDefinitionVO_all_steps::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_all_steps::versionIsSet() const
{
    return versionIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_all_steps::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


