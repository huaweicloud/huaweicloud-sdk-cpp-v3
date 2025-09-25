

#include "huaweicloud/codeartspipeline/v2/model/PluginBasicDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PluginBasicDTO::PluginBasicDTO()
{
    uniqueId_ = "";
    uniqueIdIsSet_ = false;
    iconUrl_ = "";
    iconUrlIsSet_ = false;
    runtimeAttribution_ = "";
    runtimeAttributionIsSet_ = false;
    pluginName_ = "";
    pluginNameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
    businessTypeDisplayName_ = "";
    businessTypeDisplayNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    isPrivate_ = 0;
    isPrivateIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    maintainers_ = "";
    maintainersIsSet_ = false;
    pluginCompositionType_ = "";
    pluginCompositionTypeIsSet_ = false;
}

PluginBasicDTO::~PluginBasicDTO() = default;

void PluginBasicDTO::validate()
{
}

web::json::value PluginBasicDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uniqueIdIsSet_) {
        val[utility::conversions::to_string_t("unique_id")] = ModelBase::toJson(uniqueId_);
    }
    if(iconUrlIsSet_) {
        val[utility::conversions::to_string_t("icon_url")] = ModelBase::toJson(iconUrl_);
    }
    if(runtimeAttributionIsSet_) {
        val[utility::conversions::to_string_t("runtime_attribution")] = ModelBase::toJson(runtimeAttribution_);
    }
    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }
    if(businessTypeDisplayNameIsSet_) {
        val[utility::conversions::to_string_t("business_type_display_name")] = ModelBase::toJson(businessTypeDisplayName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(isPrivateIsSet_) {
        val[utility::conversions::to_string_t("is_private")] = ModelBase::toJson(isPrivate_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(maintainersIsSet_) {
        val[utility::conversions::to_string_t("maintainers")] = ModelBase::toJson(maintainers_);
    }
    if(pluginCompositionTypeIsSet_) {
        val[utility::conversions::to_string_t("plugin_composition_type")] = ModelBase::toJson(pluginCompositionType_);
    }

    return val;
}
bool PluginBasicDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("icon_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("icon_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIconUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_type_display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type_display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessTypeDisplayName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_private"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_private"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPrivate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maintainers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maintainers"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaintainers(refVal);
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
    return ok;
}


std::string PluginBasicDTO::getUniqueId() const
{
    return uniqueId_;
}

void PluginBasicDTO::setUniqueId(const std::string& value)
{
    uniqueId_ = value;
    uniqueIdIsSet_ = true;
}

bool PluginBasicDTO::uniqueIdIsSet() const
{
    return uniqueIdIsSet_;
}

void PluginBasicDTO::unsetuniqueId()
{
    uniqueIdIsSet_ = false;
}

std::string PluginBasicDTO::getIconUrl() const
{
    return iconUrl_;
}

void PluginBasicDTO::setIconUrl(const std::string& value)
{
    iconUrl_ = value;
    iconUrlIsSet_ = true;
}

bool PluginBasicDTO::iconUrlIsSet() const
{
    return iconUrlIsSet_;
}

void PluginBasicDTO::unseticonUrl()
{
    iconUrlIsSet_ = false;
}

std::string PluginBasicDTO::getRuntimeAttribution() const
{
    return runtimeAttribution_;
}

void PluginBasicDTO::setRuntimeAttribution(const std::string& value)
{
    runtimeAttribution_ = value;
    runtimeAttributionIsSet_ = true;
}

bool PluginBasicDTO::runtimeAttributionIsSet() const
{
    return runtimeAttributionIsSet_;
}

void PluginBasicDTO::unsetruntimeAttribution()
{
    runtimeAttributionIsSet_ = false;
}

std::string PluginBasicDTO::getPluginName() const
{
    return pluginName_;
}

void PluginBasicDTO::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool PluginBasicDTO::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void PluginBasicDTO::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string PluginBasicDTO::getDisplayName() const
{
    return displayName_;
}

void PluginBasicDTO::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool PluginBasicDTO::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void PluginBasicDTO::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string PluginBasicDTO::getBusinessType() const
{
    return businessType_;
}

void PluginBasicDTO::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool PluginBasicDTO::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void PluginBasicDTO::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string PluginBasicDTO::getBusinessTypeDisplayName() const
{
    return businessTypeDisplayName_;
}

void PluginBasicDTO::setBusinessTypeDisplayName(const std::string& value)
{
    businessTypeDisplayName_ = value;
    businessTypeDisplayNameIsSet_ = true;
}

bool PluginBasicDTO::businessTypeDisplayNameIsSet() const
{
    return businessTypeDisplayNameIsSet_;
}

void PluginBasicDTO::unsetbusinessTypeDisplayName()
{
    businessTypeDisplayNameIsSet_ = false;
}

std::string PluginBasicDTO::getDescription() const
{
    return description_;
}

void PluginBasicDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PluginBasicDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PluginBasicDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t PluginBasicDTO::getIsPrivate() const
{
    return isPrivate_;
}

void PluginBasicDTO::setIsPrivate(int32_t value)
{
    isPrivate_ = value;
    isPrivateIsSet_ = true;
}

bool PluginBasicDTO::isPrivateIsSet() const
{
    return isPrivateIsSet_;
}

void PluginBasicDTO::unsetisPrivate()
{
    isPrivateIsSet_ = false;
}

std::string PluginBasicDTO::getRegion() const
{
    return region_;
}

void PluginBasicDTO::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool PluginBasicDTO::regionIsSet() const
{
    return regionIsSet_;
}

void PluginBasicDTO::unsetregion()
{
    regionIsSet_ = false;
}

std::string PluginBasicDTO::getMaintainers() const
{
    return maintainers_;
}

void PluginBasicDTO::setMaintainers(const std::string& value)
{
    maintainers_ = value;
    maintainersIsSet_ = true;
}

bool PluginBasicDTO::maintainersIsSet() const
{
    return maintainersIsSet_;
}

void PluginBasicDTO::unsetmaintainers()
{
    maintainersIsSet_ = false;
}

std::string PluginBasicDTO::getPluginCompositionType() const
{
    return pluginCompositionType_;
}

void PluginBasicDTO::setPluginCompositionType(const std::string& value)
{
    pluginCompositionType_ = value;
    pluginCompositionTypeIsSet_ = true;
}

bool PluginBasicDTO::pluginCompositionTypeIsSet() const
{
    return pluginCompositionTypeIsSet_;
}

void PluginBasicDTO::unsetpluginCompositionType()
{
    pluginCompositionTypeIsSet_ = false;
}

}
}
}
}
}


