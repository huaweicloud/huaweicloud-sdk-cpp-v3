

#include "huaweicloud/codeartspipeline/v2/model/FullStagePluginsRelationVO_full_stage_plugins_item_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




FullStagePluginsRelationVO_full_stage_plugins_item_list::FullStagePluginsRelationVO_full_stage_plugins_item_list()
{
    pluginsListIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
    uniqueId_ = "";
    uniqueIdIsSet_ = false;
    conditionsIsSet_ = false;
    addablesIsSet_ = false;
    editable_ = false;
    editableIsSet_ = false;
    removable_ = false;
    removableIsSet_ = false;
    cloneable_ = false;
    cloneableIsSet_ = false;
    disabled_ = false;
    disabledIsSet_ = false;
}

FullStagePluginsRelationVO_full_stage_plugins_item_list::~FullStagePluginsRelationVO_full_stage_plugins_item_list() = default;

void FullStagePluginsRelationVO_full_stage_plugins_item_list::validate()
{
}

web::json::value FullStagePluginsRelationVO_full_stage_plugins_item_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginsListIsSet_) {
        val[utility::conversions::to_string_t("plugins_list")] = ModelBase::toJson(pluginsList_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }
    if(uniqueIdIsSet_) {
        val[utility::conversions::to_string_t("unique_id")] = ModelBase::toJson(uniqueId_);
    }
    if(conditionsIsSet_) {
        val[utility::conversions::to_string_t("conditions")] = ModelBase::toJson(conditions_);
    }
    if(addablesIsSet_) {
        val[utility::conversions::to_string_t("addables")] = ModelBase::toJson(addables_);
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

    return val;
}
bool FullStagePluginsRelationVO_full_stage_plugins_item_list::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("plugins_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugins_list"));
        if(!fieldValue.is_null())
        {
            std::vector<FullStagePluginsRelationVO_plugins_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginsList(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conditions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addables"));
        if(!fieldValue.is_null())
        {
            std::vector<FullStagePluginsRelationVO_addables> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddables(refVal);
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
    return ok;
}


std::vector<FullStagePluginsRelationVO_plugins_list>& FullStagePluginsRelationVO_full_stage_plugins_item_list::getPluginsList()
{
    return pluginsList_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::setPluginsList(const std::vector<FullStagePluginsRelationVO_plugins_list>& value)
{
    pluginsList_ = value;
    pluginsListIsSet_ = true;
}

bool FullStagePluginsRelationVO_full_stage_plugins_item_list::pluginsListIsSet() const
{
    return pluginsListIsSet_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::unsetpluginsList()
{
    pluginsListIsSet_ = false;
}

std::string FullStagePluginsRelationVO_full_stage_plugins_item_list::getDisplayName() const
{
    return displayName_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool FullStagePluginsRelationVO_full_stage_plugins_item_list::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string FullStagePluginsRelationVO_full_stage_plugins_item_list::getBusinessType() const
{
    return businessType_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool FullStagePluginsRelationVO_full_stage_plugins_item_list::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string FullStagePluginsRelationVO_full_stage_plugins_item_list::getUniqueId() const
{
    return uniqueId_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::setUniqueId(const std::string& value)
{
    uniqueId_ = value;
    uniqueIdIsSet_ = true;
}

bool FullStagePluginsRelationVO_full_stage_plugins_item_list::uniqueIdIsSet() const
{
    return uniqueIdIsSet_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::unsetuniqueId()
{
    uniqueIdIsSet_ = false;
}

std::vector<std::string>& FullStagePluginsRelationVO_full_stage_plugins_item_list::getConditions()
{
    return conditions_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::setConditions(const std::vector<std::string>& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool FullStagePluginsRelationVO_full_stage_plugins_item_list::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::unsetconditions()
{
    conditionsIsSet_ = false;
}

std::vector<FullStagePluginsRelationVO_addables>& FullStagePluginsRelationVO_full_stage_plugins_item_list::getAddables()
{
    return addables_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::setAddables(const std::vector<FullStagePluginsRelationVO_addables>& value)
{
    addables_ = value;
    addablesIsSet_ = true;
}

bool FullStagePluginsRelationVO_full_stage_plugins_item_list::addablesIsSet() const
{
    return addablesIsSet_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::unsetaddables()
{
    addablesIsSet_ = false;
}

bool FullStagePluginsRelationVO_full_stage_plugins_item_list::isEditable() const
{
    return editable_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::setEditable(bool value)
{
    editable_ = value;
    editableIsSet_ = true;
}

bool FullStagePluginsRelationVO_full_stage_plugins_item_list::editableIsSet() const
{
    return editableIsSet_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::unseteditable()
{
    editableIsSet_ = false;
}

bool FullStagePluginsRelationVO_full_stage_plugins_item_list::isRemovable() const
{
    return removable_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::setRemovable(bool value)
{
    removable_ = value;
    removableIsSet_ = true;
}

bool FullStagePluginsRelationVO_full_stage_plugins_item_list::removableIsSet() const
{
    return removableIsSet_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::unsetremovable()
{
    removableIsSet_ = false;
}

bool FullStagePluginsRelationVO_full_stage_plugins_item_list::isCloneable() const
{
    return cloneable_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::setCloneable(bool value)
{
    cloneable_ = value;
    cloneableIsSet_ = true;
}

bool FullStagePluginsRelationVO_full_stage_plugins_item_list::cloneableIsSet() const
{
    return cloneableIsSet_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::unsetcloneable()
{
    cloneableIsSet_ = false;
}

bool FullStagePluginsRelationVO_full_stage_plugins_item_list::isDisabled() const
{
    return disabled_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::setDisabled(bool value)
{
    disabled_ = value;
    disabledIsSet_ = true;
}

bool FullStagePluginsRelationVO_full_stage_plugins_item_list::disabledIsSet() const
{
    return disabledIsSet_;
}

void FullStagePluginsRelationVO_full_stage_plugins_item_list::unsetdisabled()
{
    disabledIsSet_ = false;
}

}
}
}
}
}


