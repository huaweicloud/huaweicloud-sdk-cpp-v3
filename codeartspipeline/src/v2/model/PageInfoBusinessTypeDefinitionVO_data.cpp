

#include "huaweicloud/codeartspipeline/v2/model/PageInfoBusinessTypeDefinitionVO_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PageInfoBusinessTypeDefinitionVO_data::PageInfoBusinessTypeDefinitionVO_data()
{
    businessType_ = "";
    businessTypeIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    uniqueId_ = "";
    uniqueIdIsSet_ = false;
    editable_ = false;
    editableIsSet_ = false;
    removable_ = false;
    removableIsSet_ = false;
    cloneable_ = false;
    cloneableIsSet_ = false;
    disabled_ = false;
    disabledIsSet_ = false;
    addablesIsSet_ = false;
    conditionsIsSet_ = false;
    pluginsListIsSet_ = false;
}

PageInfoBusinessTypeDefinitionVO_data::~PageInfoBusinessTypeDefinitionVO_data() = default;

void PageInfoBusinessTypeDefinitionVO_data::validate()
{
}

web::json::value PageInfoBusinessTypeDefinitionVO_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(uniqueIdIsSet_) {
        val[utility::conversions::to_string_t("unique_id")] = ModelBase::toJson(uniqueId_);
    }
    if(editableIsSet_) {
        val[utility::conversions::to_string_t("editable")] = ModelBase::toJson(editable_);
    }
    if(removableIsSet_) {
        val[utility::conversions::to_string_t("removable")] = ModelBase::toJson(removable_);
    }
    if(cloneableIsSet_) {
        val[utility::conversions::to_string_t("cloneable")] = ModelBase::toJson(cloneable_);
    }
    if(disabledIsSet_) {
        val[utility::conversions::to_string_t("disabled")] = ModelBase::toJson(disabled_);
    }
    if(addablesIsSet_) {
        val[utility::conversions::to_string_t("addables")] = ModelBase::toJson(addables_);
    }
    if(conditionsIsSet_) {
        val[utility::conversions::to_string_t("conditions")] = ModelBase::toJson(conditions_);
    }
    if(pluginsListIsSet_) {
        val[utility::conversions::to_string_t("plugins_list")] = ModelBase::toJson(pluginsList_);
    }

    return val;
}
bool PageInfoBusinessTypeDefinitionVO_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("unique_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unique_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUniqueId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("removable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("removable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemovable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloneable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloneable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloneable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addables"));
        if(!fieldValue.is_null())
        {
            std::vector<std::map<std::string, bool>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conditions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plugins_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugins_list"));
        if(!fieldValue.is_null())
        {
            std::vector<PageInfoBusinessTypeDefinitionVO_plugins_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginsList(refVal);
        }
    }
    return ok;
}


std::string PageInfoBusinessTypeDefinitionVO_data::getBusinessType() const
{
    return businessType_;
}

void PageInfoBusinessTypeDefinitionVO_data::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_data::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_data::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_data::getDisplayName() const
{
    return displayName_;
}

void PageInfoBusinessTypeDefinitionVO_data::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_data::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_data::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_data::getUniqueId() const
{
    return uniqueId_;
}

void PageInfoBusinessTypeDefinitionVO_data::setUniqueId(const std::string& value)
{
    uniqueId_ = value;
    uniqueIdIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_data::uniqueIdIsSet() const
{
    return uniqueIdIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_data::unsetuniqueId()
{
    uniqueIdIsSet_ = false;
}

bool PageInfoBusinessTypeDefinitionVO_data::isEditable() const
{
    return editable_;
}

void PageInfoBusinessTypeDefinitionVO_data::setEditable(bool value)
{
    editable_ = value;
    editableIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_data::editableIsSet() const
{
    return editableIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_data::unseteditable()
{
    editableIsSet_ = false;
}

bool PageInfoBusinessTypeDefinitionVO_data::isRemovable() const
{
    return removable_;
}

void PageInfoBusinessTypeDefinitionVO_data::setRemovable(bool value)
{
    removable_ = value;
    removableIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_data::removableIsSet() const
{
    return removableIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_data::unsetremovable()
{
    removableIsSet_ = false;
}

bool PageInfoBusinessTypeDefinitionVO_data::isCloneable() const
{
    return cloneable_;
}

void PageInfoBusinessTypeDefinitionVO_data::setCloneable(bool value)
{
    cloneable_ = value;
    cloneableIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_data::cloneableIsSet() const
{
    return cloneableIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_data::unsetcloneable()
{
    cloneableIsSet_ = false;
}

bool PageInfoBusinessTypeDefinitionVO_data::isDisabled() const
{
    return disabled_;
}

void PageInfoBusinessTypeDefinitionVO_data::setDisabled(bool value)
{
    disabled_ = value;
    disabledIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_data::disabledIsSet() const
{
    return disabledIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_data::unsetdisabled()
{
    disabledIsSet_ = false;
}

std::vector<std::map<std::string, bool>>& PageInfoBusinessTypeDefinitionVO_data::getAddables()
{
    return addables_;
}

void PageInfoBusinessTypeDefinitionVO_data::setAddables(const std::vector<std::map<std::string, bool>>& value)
{
    addables_ = value;
    addablesIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_data::addablesIsSet() const
{
    return addablesIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_data::unsetaddables()
{
    addablesIsSet_ = false;
}

std::vector<std::string>& PageInfoBusinessTypeDefinitionVO_data::getConditions()
{
    return conditions_;
}

void PageInfoBusinessTypeDefinitionVO_data::setConditions(const std::vector<std::string>& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_data::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_data::unsetconditions()
{
    conditionsIsSet_ = false;
}

std::vector<PageInfoBusinessTypeDefinitionVO_plugins_list>& PageInfoBusinessTypeDefinitionVO_data::getPluginsList()
{
    return pluginsList_;
}

void PageInfoBusinessTypeDefinitionVO_data::setPluginsList(const std::vector<PageInfoBusinessTypeDefinitionVO_plugins_list>& value)
{
    pluginsList_ = value;
    pluginsListIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_data::pluginsListIsSet() const
{
    return pluginsListIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_data::unsetpluginsList()
{
    pluginsListIsSet_ = false;
}

}
}
}
}
}


