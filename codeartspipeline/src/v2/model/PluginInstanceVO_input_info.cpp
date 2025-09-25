

#include "huaweicloud/codeartspipeline/v2/model/PluginInstanceVO_input_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PluginInstanceVO_input_info::PluginInstanceVO_input_info()
{
    uniqueId_ = "";
    uniqueIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    defaultValue_ = "";
    defaultValueIsSet_ = false;
    pluginName_ = "";
    pluginNameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    validationIsSet_ = false;
    layoutContent_ = "";
    layoutContentIsSet_ = false;
}

PluginInstanceVO_input_info::~PluginInstanceVO_input_info() = default;

void PluginInstanceVO_input_info::validate()
{
}

web::json::value PluginInstanceVO_input_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uniqueIdIsSet_) {
        val[utility::conversions::to_string_t("unique_id")] = ModelBase::toJson(uniqueId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(defaultValueIsSet_) {
        val[utility::conversions::to_string_t("default_value")] = ModelBase::toJson(defaultValue_);
    }
    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(validationIsSet_) {
        val[utility::conversions::to_string_t("validation")] = ModelBase::toJson(validation_);
    }
    if(layoutContentIsSet_) {
        val[utility::conversions::to_string_t("layout_content")] = ModelBase::toJson(layoutContent_);
    }

    return val;
}
bool PluginInstanceVO_input_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("unique_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unique_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUniqueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultValue(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("validation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validation"));
        if(!fieldValue.is_null())
        {
            ExtensionValidation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("layout_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("layout_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLayoutContent(refVal);
        }
    }
    return ok;
}


std::string PluginInstanceVO_input_info::getUniqueId() const
{
    return uniqueId_;
}

void PluginInstanceVO_input_info::setUniqueId(const std::string& value)
{
    uniqueId_ = value;
    uniqueIdIsSet_ = true;
}

bool PluginInstanceVO_input_info::uniqueIdIsSet() const
{
    return uniqueIdIsSet_;
}

void PluginInstanceVO_input_info::unsetuniqueId()
{
    uniqueIdIsSet_ = false;
}

std::string PluginInstanceVO_input_info::getName() const
{
    return name_;
}

void PluginInstanceVO_input_info::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PluginInstanceVO_input_info::nameIsSet() const
{
    return nameIsSet_;
}

void PluginInstanceVO_input_info::unsetname()
{
    nameIsSet_ = false;
}

std::string PluginInstanceVO_input_info::getDefaultValue() const
{
    return defaultValue_;
}

void PluginInstanceVO_input_info::setDefaultValue(const std::string& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool PluginInstanceVO_input_info::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void PluginInstanceVO_input_info::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

std::string PluginInstanceVO_input_info::getPluginName() const
{
    return pluginName_;
}

void PluginInstanceVO_input_info::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool PluginInstanceVO_input_info::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void PluginInstanceVO_input_info::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string PluginInstanceVO_input_info::getVersion() const
{
    return version_;
}

void PluginInstanceVO_input_info::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool PluginInstanceVO_input_info::versionIsSet() const
{
    return versionIsSet_;
}

void PluginInstanceVO_input_info::unsetversion()
{
    versionIsSet_ = false;
}

std::string PluginInstanceVO_input_info::getType() const
{
    return type_;
}

void PluginInstanceVO_input_info::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PluginInstanceVO_input_info::typeIsSet() const
{
    return typeIsSet_;
}

void PluginInstanceVO_input_info::unsettype()
{
    typeIsSet_ = false;
}

std::string PluginInstanceVO_input_info::getWorkspaceId() const
{
    return workspaceId_;
}

void PluginInstanceVO_input_info::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool PluginInstanceVO_input_info::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void PluginInstanceVO_input_info::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

ExtensionValidation PluginInstanceVO_input_info::getValidation() const
{
    return validation_;
}

void PluginInstanceVO_input_info::setValidation(const ExtensionValidation& value)
{
    validation_ = value;
    validationIsSet_ = true;
}

bool PluginInstanceVO_input_info::validationIsSet() const
{
    return validationIsSet_;
}

void PluginInstanceVO_input_info::unsetvalidation()
{
    validationIsSet_ = false;
}

std::string PluginInstanceVO_input_info::getLayoutContent() const
{
    return layoutContent_;
}

void PluginInstanceVO_input_info::setLayoutContent(const std::string& value)
{
    layoutContent_ = value;
    layoutContentIsSet_ = true;
}

bool PluginInstanceVO_input_info::layoutContentIsSet() const
{
    return layoutContentIsSet_;
}

void PluginInstanceVO_input_info::unsetlayoutContent()
{
    layoutContentIsSet_ = false;
}

}
}
}
}
}


