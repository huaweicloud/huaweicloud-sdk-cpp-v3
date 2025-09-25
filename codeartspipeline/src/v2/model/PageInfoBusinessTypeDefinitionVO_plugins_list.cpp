

#include "huaweicloud/codeartspipeline/v2/model/PageInfoBusinessTypeDefinitionVO_plugins_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PageInfoBusinessTypeDefinitionVO_plugins_list::PageInfoBusinessTypeDefinitionVO_plugins_list()
{
    uniqueId_ = "";
    uniqueIdIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    pluginName_ = "";
    pluginNameIsSet_ = false;
    disabled_ = false;
    disabledIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    groupType_ = "";
    groupTypeIsSet_ = false;
    standard_ = false;
    standardIsSet_ = false;
    dbRecordName_ = "";
    dbRecordNameIsSet_ = false;
    pluginAttribution_ = "";
    pluginAttributionIsSet_ = false;
    pluginCompositionType_ = "";
    pluginCompositionTypeIsSet_ = false;
    runtimeAttribution_ = "";
    runtimeAttributionIsSet_ = false;
    allStepsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    versionAttribution_ = "";
    versionAttributionIsSet_ = false;
    iconUrl_ = "";
    iconUrlIsSet_ = false;
    multiStepEditable_ = 0;
    multiStepEditableIsSet_ = false;
    location_ = "";
    locationIsSet_ = false;
    publisherUniqueId_ = "";
    publisherUniqueIdIsSet_ = false;
    manifestVersion_ = "";
    manifestVersionIsSet_ = false;
}

PageInfoBusinessTypeDefinitionVO_plugins_list::~PageInfoBusinessTypeDefinitionVO_plugins_list() = default;

void PageInfoBusinessTypeDefinitionVO_plugins_list::validate()
{
}

web::json::value PageInfoBusinessTypeDefinitionVO_plugins_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uniqueIdIsSet_) {
        val[utility::conversions::to_string_t("unique_id")] = ModelBase::toJson(uniqueId_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(disabledIsSet_) {
        val[utility::conversions::to_string_t("disabled")] = ModelBase::toJson(disabled_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(groupTypeIsSet_) {
        val[utility::conversions::to_string_t("group_type")] = ModelBase::toJson(groupType_);
    }
    if(standardIsSet_) {
        val[utility::conversions::to_string_t("standard")] = ModelBase::toJson(standard_);
    }
    if(dbRecordNameIsSet_) {
        val[utility::conversions::to_string_t("db_record_name")] = ModelBase::toJson(dbRecordName_);
    }
    if(pluginAttributionIsSet_) {
        val[utility::conversions::to_string_t("plugin_attribution")] = ModelBase::toJson(pluginAttribution_);
    }
    if(pluginCompositionTypeIsSet_) {
        val[utility::conversions::to_string_t("plugin_composition_type")] = ModelBase::toJson(pluginCompositionType_);
    }
    if(runtimeAttributionIsSet_) {
        val[utility::conversions::to_string_t("runtime_attribution")] = ModelBase::toJson(runtimeAttribution_);
    }
    if(allStepsIsSet_) {
        val[utility::conversions::to_string_t("all_steps")] = ModelBase::toJson(allSteps_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(versionAttributionIsSet_) {
        val[utility::conversions::to_string_t("version_attribution")] = ModelBase::toJson(versionAttribution_);
    }
    if(iconUrlIsSet_) {
        val[utility::conversions::to_string_t("icon_url")] = ModelBase::toJson(iconUrl_);
    }
    if(multiStepEditableIsSet_) {
        val[utility::conversions::to_string_t("multi_step_editable")] = ModelBase::toJson(multiStepEditable_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(publisherUniqueIdIsSet_) {
        val[utility::conversions::to_string_t("publisher_unique_id")] = ModelBase::toJson(publisherUniqueId_);
    }
    if(manifestVersionIsSet_) {
        val[utility::conversions::to_string_t("manifest_version")] = ModelBase::toJson(manifestVersion_);
    }

    return val;
}
bool PageInfoBusinessTypeDefinitionVO_plugins_list::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("disabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("standard"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("standard"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStandard(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_record_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_record_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbRecordName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plugin_composition_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_composition_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginCompositionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime_attribution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime_attribution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntimeAttribution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("all_steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_steps"));
        if(!fieldValue.is_null())
        {
            std::vector<PageInfoBusinessTypeDefinitionVO_all_steps> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllSteps(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version_attribution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_attribution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionAttribution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("icon_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("icon_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIconUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multi_step_editable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multi_step_editable"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiStepEditable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publisher_unique_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publisher_unique_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublisherUniqueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manifest_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manifest_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManifestVersion(refVal);
        }
    }
    return ok;
}


std::string PageInfoBusinessTypeDefinitionVO_plugins_list::getUniqueId() const
{
    return uniqueId_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setUniqueId(const std::string& value)
{
    uniqueId_ = value;
    uniqueIdIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::uniqueIdIsSet() const
{
    return uniqueIdIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetuniqueId()
{
    uniqueIdIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_plugins_list::getDisplayName() const
{
    return displayName_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_plugins_list::getPluginName() const
{
    return pluginName_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::isDisabled() const
{
    return disabled_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setDisabled(bool value)
{
    disabled_ = value;
    disabledIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::disabledIsSet() const
{
    return disabledIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetdisabled()
{
    disabledIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_plugins_list::getGroupName() const
{
    return groupName_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_plugins_list::getGroupType() const
{
    return groupType_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::isStandard() const
{
    return standard_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setStandard(bool value)
{
    standard_ = value;
    standardIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::standardIsSet() const
{
    return standardIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetstandard()
{
    standardIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_plugins_list::getDbRecordName() const
{
    return dbRecordName_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setDbRecordName(const std::string& value)
{
    dbRecordName_ = value;
    dbRecordNameIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::dbRecordNameIsSet() const
{
    return dbRecordNameIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetdbRecordName()
{
    dbRecordNameIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_plugins_list::getPluginAttribution() const
{
    return pluginAttribution_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setPluginAttribution(const std::string& value)
{
    pluginAttribution_ = value;
    pluginAttributionIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::pluginAttributionIsSet() const
{
    return pluginAttributionIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetpluginAttribution()
{
    pluginAttributionIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_plugins_list::getPluginCompositionType() const
{
    return pluginCompositionType_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setPluginCompositionType(const std::string& value)
{
    pluginCompositionType_ = value;
    pluginCompositionTypeIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::pluginCompositionTypeIsSet() const
{
    return pluginCompositionTypeIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetpluginCompositionType()
{
    pluginCompositionTypeIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_plugins_list::getRuntimeAttribution() const
{
    return runtimeAttribution_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setRuntimeAttribution(const std::string& value)
{
    runtimeAttribution_ = value;
    runtimeAttributionIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::runtimeAttributionIsSet() const
{
    return runtimeAttributionIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetruntimeAttribution()
{
    runtimeAttributionIsSet_ = false;
}

std::vector<PageInfoBusinessTypeDefinitionVO_all_steps>& PageInfoBusinessTypeDefinitionVO_plugins_list::getAllSteps()
{
    return allSteps_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setAllSteps(const std::vector<PageInfoBusinessTypeDefinitionVO_all_steps>& value)
{
    allSteps_ = value;
    allStepsIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::allStepsIsSet() const
{
    return allStepsIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetallSteps()
{
    allStepsIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_plugins_list::getDescription() const
{
    return description_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_plugins_list::getVersionAttribution() const
{
    return versionAttribution_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setVersionAttribution(const std::string& value)
{
    versionAttribution_ = value;
    versionAttributionIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::versionAttributionIsSet() const
{
    return versionAttributionIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetversionAttribution()
{
    versionAttributionIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_plugins_list::getIconUrl() const
{
    return iconUrl_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setIconUrl(const std::string& value)
{
    iconUrl_ = value;
    iconUrlIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::iconUrlIsSet() const
{
    return iconUrlIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unseticonUrl()
{
    iconUrlIsSet_ = false;
}

int32_t PageInfoBusinessTypeDefinitionVO_plugins_list::getMultiStepEditable() const
{
    return multiStepEditable_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setMultiStepEditable(int32_t value)
{
    multiStepEditable_ = value;
    multiStepEditableIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::multiStepEditableIsSet() const
{
    return multiStepEditableIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetmultiStepEditable()
{
    multiStepEditableIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_plugins_list::getLocation() const
{
    return location_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setLocation(const std::string& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::locationIsSet() const
{
    return locationIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetlocation()
{
    locationIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_plugins_list::getPublisherUniqueId() const
{
    return publisherUniqueId_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setPublisherUniqueId(const std::string& value)
{
    publisherUniqueId_ = value;
    publisherUniqueIdIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::publisherUniqueIdIsSet() const
{
    return publisherUniqueIdIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetpublisherUniqueId()
{
    publisherUniqueIdIsSet_ = false;
}

std::string PageInfoBusinessTypeDefinitionVO_plugins_list::getManifestVersion() const
{
    return manifestVersion_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::setManifestVersion(const std::string& value)
{
    manifestVersion_ = value;
    manifestVersionIsSet_ = true;
}

bool PageInfoBusinessTypeDefinitionVO_plugins_list::manifestVersionIsSet() const
{
    return manifestVersionIsSet_;
}

void PageInfoBusinessTypeDefinitionVO_plugins_list::unsetmanifestVersion()
{
    manifestVersionIsSet_ = false;
}

}
}
}
}
}


