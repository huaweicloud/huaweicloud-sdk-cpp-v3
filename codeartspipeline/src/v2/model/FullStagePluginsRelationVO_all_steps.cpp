

#include "huaweicloud/codeartspipeline/v2/model/FullStagePluginsRelationVO_all_steps.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




FullStagePluginsRelationVO_all_steps::FullStagePluginsRelationVO_all_steps()
{
    pluginName_ = "";
    pluginNameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

FullStagePluginsRelationVO_all_steps::~FullStagePluginsRelationVO_all_steps() = default;

void FullStagePluginsRelationVO_all_steps::validate()
{
}

web::json::value FullStagePluginsRelationVO_all_steps::toJson() const
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
bool FullStagePluginsRelationVO_all_steps::fromJson(const web::json::value& val)
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


std::string FullStagePluginsRelationVO_all_steps::getPluginName() const
{
    return pluginName_;
}

void FullStagePluginsRelationVO_all_steps::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool FullStagePluginsRelationVO_all_steps::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void FullStagePluginsRelationVO_all_steps::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string FullStagePluginsRelationVO_all_steps::getDisplayName() const
{
    return displayName_;
}

void FullStagePluginsRelationVO_all_steps::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool FullStagePluginsRelationVO_all_steps::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void FullStagePluginsRelationVO_all_steps::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string FullStagePluginsRelationVO_all_steps::getVersion() const
{
    return version_;
}

void FullStagePluginsRelationVO_all_steps::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool FullStagePluginsRelationVO_all_steps::versionIsSet() const
{
    return versionIsSet_;
}

void FullStagePluginsRelationVO_all_steps::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


