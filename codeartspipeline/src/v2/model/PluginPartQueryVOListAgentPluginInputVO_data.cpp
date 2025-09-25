

#include "huaweicloud/codeartspipeline/v2/model/PluginPartQueryVOListAgentPluginInputVO_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PluginPartQueryVOListAgentPluginInputVO_data::PluginPartQueryVOListAgentPluginInputVO_data()
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
    extendPropIsSet_ = false;
    frontDataProp_ = "";
    frontDataPropIsSet_ = false;
    label_ = "";
    labelIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    required_ = "";
    requiredIsSet_ = false;
}

PluginPartQueryVOListAgentPluginInputVO_data::~PluginPartQueryVOListAgentPluginInputVO_data() = default;

void PluginPartQueryVOListAgentPluginInputVO_data::validate()
{
}

web::json::value PluginPartQueryVOListAgentPluginInputVO_data::toJson() const
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
    if(extendPropIsSet_) {
        val[utility::conversions::to_string_t("extend_prop")] = ModelBase::toJson(extendProp_);
    }
    if(frontDataPropIsSet_) {
        val[utility::conversions::to_string_t("front_data_prop")] = ModelBase::toJson(frontDataProp_);
    }
    if(labelIsSet_) {
        val[utility::conversions::to_string_t("label")] = ModelBase::toJson(label_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(requiredIsSet_) {
        val[utility::conversions::to_string_t("required")] = ModelBase::toJson(required_);
    }

    return val;
}
bool PluginPartQueryVOListAgentPluginInputVO_data::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("extend_prop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_prop"));
        if(!fieldValue.is_null())
        {
            ExtensionExtendProp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendProp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("front_data_prop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("front_data_prop"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrontDataProp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequired(refVal);
        }
    }
    return ok;
}


std::string PluginPartQueryVOListAgentPluginInputVO_data::getUniqueId() const
{
    return uniqueId_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::setUniqueId(const std::string& value)
{
    uniqueId_ = value;
    uniqueIdIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginInputVO_data::uniqueIdIsSet() const
{
    return uniqueIdIsSet_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::unsetuniqueId()
{
    uniqueIdIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginInputVO_data::getName() const
{
    return name_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginInputVO_data::nameIsSet() const
{
    return nameIsSet_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::unsetname()
{
    nameIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginInputVO_data::getDefaultValue() const
{
    return defaultValue_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::setDefaultValue(const std::string& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginInputVO_data::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginInputVO_data::getPluginName() const
{
    return pluginName_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginInputVO_data::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginInputVO_data::getVersion() const
{
    return version_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginInputVO_data::versionIsSet() const
{
    return versionIsSet_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::unsetversion()
{
    versionIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginInputVO_data::getType() const
{
    return type_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginInputVO_data::typeIsSet() const
{
    return typeIsSet_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::unsettype()
{
    typeIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginInputVO_data::getWorkspaceId() const
{
    return workspaceId_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginInputVO_data::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

ExtensionValidation PluginPartQueryVOListAgentPluginInputVO_data::getValidation() const
{
    return validation_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::setValidation(const ExtensionValidation& value)
{
    validation_ = value;
    validationIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginInputVO_data::validationIsSet() const
{
    return validationIsSet_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::unsetvalidation()
{
    validationIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginInputVO_data::getLayoutContent() const
{
    return layoutContent_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::setLayoutContent(const std::string& value)
{
    layoutContent_ = value;
    layoutContentIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginInputVO_data::layoutContentIsSet() const
{
    return layoutContentIsSet_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::unsetlayoutContent()
{
    layoutContentIsSet_ = false;
}

ExtensionExtendProp PluginPartQueryVOListAgentPluginInputVO_data::getExtendProp() const
{
    return extendProp_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::setExtendProp(const ExtensionExtendProp& value)
{
    extendProp_ = value;
    extendPropIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginInputVO_data::extendPropIsSet() const
{
    return extendPropIsSet_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::unsetextendProp()
{
    extendPropIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginInputVO_data::getFrontDataProp() const
{
    return frontDataProp_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::setFrontDataProp(const std::string& value)
{
    frontDataProp_ = value;
    frontDataPropIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginInputVO_data::frontDataPropIsSet() const
{
    return frontDataPropIsSet_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::unsetfrontDataProp()
{
    frontDataPropIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginInputVO_data::getLabel() const
{
    return label_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::setLabel(const std::string& value)
{
    label_ = value;
    labelIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginInputVO_data::labelIsSet() const
{
    return labelIsSet_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::unsetlabel()
{
    labelIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginInputVO_data::getDescription() const
{
    return description_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginInputVO_data::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginInputVO_data::getRequired() const
{
    return required_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::setRequired(const std::string& value)
{
    required_ = value;
    requiredIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginInputVO_data::requiredIsSet() const
{
    return requiredIsSet_;
}

void PluginPartQueryVOListAgentPluginInputVO_data::unsetrequired()
{
    requiredIsSet_ = false;
}

}
}
}
}
}


