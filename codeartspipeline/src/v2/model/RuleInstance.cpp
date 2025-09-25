

#include "huaweicloud/codeartspipeline/v2/model/RuleInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RuleInstance::RuleInstance()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    pluginId_ = "";
    pluginIdIsSet_ = false;
    pluginName_ = "";
    pluginNameIsSet_ = false;
    pluginVersion_ = "";
    pluginVersionIsSet_ = false;
    isValid_ = false;
    isValidIsSet_ = false;
    editable_ = false;
    editableIsSet_ = false;
    contentIsSet_ = false;
    parentIsSet_ = false;
}

RuleInstance::~RuleInstance() = default;

void RuleInstance::validate()
{
}

web::json::value RuleInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(pluginIdIsSet_) {
        val[utility::conversions::to_string_t("plugin_id")] = ModelBase::toJson(pluginId_);
    }
    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(pluginVersionIsSet_) {
        val[utility::conversions::to_string_t("plugin_version")] = ModelBase::toJson(pluginVersion_);
    }
    if(isValidIsSet_) {
        val[utility::conversions::to_string_t("is_valid")] = ModelBase::toJson(isValid_);
    }
    if(editableIsSet_) {
        val[utility::conversions::to_string_t("editable")] = ModelBase::toJson(editable_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(parentIsSet_) {
        val[utility::conversions::to_string_t("parent")] = ModelBase::toJson(parent_);
    }

    return val;
}
bool RuleInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plugin_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plugin_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_valid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_valid"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsValid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("editable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("editable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEditable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleInstanceContent> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent"));
        if(!fieldValue.is_null())
        {
            RuleSet refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParent(refVal);
        }
    }
    return ok;
}


std::string RuleInstance::getId() const
{
    return id_;
}

void RuleInstance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RuleInstance::idIsSet() const
{
    return idIsSet_;
}

void RuleInstance::unsetid()
{
    idIsSet_ = false;
}

std::string RuleInstance::getType() const
{
    return type_;
}

void RuleInstance::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RuleInstance::typeIsSet() const
{
    return typeIsSet_;
}

void RuleInstance::unsettype()
{
    typeIsSet_ = false;
}

std::string RuleInstance::getName() const
{
    return name_;
}

void RuleInstance::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RuleInstance::nameIsSet() const
{
    return nameIsSet_;
}

void RuleInstance::unsetname()
{
    nameIsSet_ = false;
}

std::string RuleInstance::getVersion() const
{
    return version_;
}

void RuleInstance::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool RuleInstance::versionIsSet() const
{
    return versionIsSet_;
}

void RuleInstance::unsetversion()
{
    versionIsSet_ = false;
}

std::string RuleInstance::getPluginId() const
{
    return pluginId_;
}

void RuleInstance::setPluginId(const std::string& value)
{
    pluginId_ = value;
    pluginIdIsSet_ = true;
}

bool RuleInstance::pluginIdIsSet() const
{
    return pluginIdIsSet_;
}

void RuleInstance::unsetpluginId()
{
    pluginIdIsSet_ = false;
}

std::string RuleInstance::getPluginName() const
{
    return pluginName_;
}

void RuleInstance::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool RuleInstance::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void RuleInstance::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string RuleInstance::getPluginVersion() const
{
    return pluginVersion_;
}

void RuleInstance::setPluginVersion(const std::string& value)
{
    pluginVersion_ = value;
    pluginVersionIsSet_ = true;
}

bool RuleInstance::pluginVersionIsSet() const
{
    return pluginVersionIsSet_;
}

void RuleInstance::unsetpluginVersion()
{
    pluginVersionIsSet_ = false;
}

bool RuleInstance::isIsValid() const
{
    return isValid_;
}

void RuleInstance::setIsValid(bool value)
{
    isValid_ = value;
    isValidIsSet_ = true;
}

bool RuleInstance::isValidIsSet() const
{
    return isValidIsSet_;
}

void RuleInstance::unsetisValid()
{
    isValidIsSet_ = false;
}

bool RuleInstance::isEditable() const
{
    return editable_;
}

void RuleInstance::setEditable(bool value)
{
    editable_ = value;
    editableIsSet_ = true;
}

bool RuleInstance::editableIsSet() const
{
    return editableIsSet_;
}

void RuleInstance::unseteditable()
{
    editableIsSet_ = false;
}

std::vector<RuleInstanceContent>& RuleInstance::getContent()
{
    return content_;
}

void RuleInstance::setContent(const std::vector<RuleInstanceContent>& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool RuleInstance::contentIsSet() const
{
    return contentIsSet_;
}

void RuleInstance::unsetcontent()
{
    contentIsSet_ = false;
}

RuleSet RuleInstance::getParent() const
{
    return parent_;
}

void RuleInstance::setParent(const RuleSet& value)
{
    parent_ = value;
    parentIsSet_ = true;
}

bool RuleInstance::parentIsSet() const
{
    return parentIsSet_;
}

void RuleInstance::unsetparent()
{
    parentIsSet_ = false;
}

}
}
}
}
}


