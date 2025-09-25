

#include "huaweicloud/codeartspipeline/v2/model/PluginDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PluginDTO::PluginDTO()
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
    manifestVersion_ = "";
    manifestVersionIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    versionDescription_ = "";
    versionDescriptionIsSet_ = false;
    executionInfoIsSet_ = false;
    outputInfoIsSet_ = false;
    inputInfoIsSet_ = false;
}

PluginDTO::~PluginDTO() = default;

void PluginDTO::validate()
{
}

web::json::value PluginDTO::toJson() const
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
    if(manifestVersionIsSet_) {
        val[utility::conversions::to_string_t("manifest_version")] = ModelBase::toJson(manifestVersion_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(versionDescriptionIsSet_) {
        val[utility::conversions::to_string_t("version_description")] = ModelBase::toJson(versionDescription_);
    }
    if(executionInfoIsSet_) {
        val[utility::conversions::to_string_t("execution_info")] = ModelBase::toJson(executionInfo_);
    }
    if(outputInfoIsSet_) {
        val[utility::conversions::to_string_t("output_info")] = ModelBase::toJson(outputInfo_);
    }
    if(inputInfoIsSet_) {
        val[utility::conversions::to_string_t("input_info")] = ModelBase::toJson(inputInfo_);
    }

    return val;
}
bool PluginDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("manifest_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manifest_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManifestVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_info"));
        if(!fieldValue.is_null())
        {
            PluginDTO_execution_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_info"));
        if(!fieldValue.is_null())
        {
            std::vector<PluginDTO_output_info> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input_info"));
        if(!fieldValue.is_null())
        {
            std::vector<PluginDTO_input_info> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputInfo(refVal);
        }
    }
    return ok;
}


std::string PluginDTO::getUniqueId() const
{
    return uniqueId_;
}

void PluginDTO::setUniqueId(const std::string& value)
{
    uniqueId_ = value;
    uniqueIdIsSet_ = true;
}

bool PluginDTO::uniqueIdIsSet() const
{
    return uniqueIdIsSet_;
}

void PluginDTO::unsetuniqueId()
{
    uniqueIdIsSet_ = false;
}

std::string PluginDTO::getIconUrl() const
{
    return iconUrl_;
}

void PluginDTO::setIconUrl(const std::string& value)
{
    iconUrl_ = value;
    iconUrlIsSet_ = true;
}

bool PluginDTO::iconUrlIsSet() const
{
    return iconUrlIsSet_;
}

void PluginDTO::unseticonUrl()
{
    iconUrlIsSet_ = false;
}

std::string PluginDTO::getRuntimeAttribution() const
{
    return runtimeAttribution_;
}

void PluginDTO::setRuntimeAttribution(const std::string& value)
{
    runtimeAttribution_ = value;
    runtimeAttributionIsSet_ = true;
}

bool PluginDTO::runtimeAttributionIsSet() const
{
    return runtimeAttributionIsSet_;
}

void PluginDTO::unsetruntimeAttribution()
{
    runtimeAttributionIsSet_ = false;
}

std::string PluginDTO::getPluginName() const
{
    return pluginName_;
}

void PluginDTO::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool PluginDTO::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void PluginDTO::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string PluginDTO::getDisplayName() const
{
    return displayName_;
}

void PluginDTO::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool PluginDTO::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void PluginDTO::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string PluginDTO::getBusinessType() const
{
    return businessType_;
}

void PluginDTO::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool PluginDTO::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void PluginDTO::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string PluginDTO::getBusinessTypeDisplayName() const
{
    return businessTypeDisplayName_;
}

void PluginDTO::setBusinessTypeDisplayName(const std::string& value)
{
    businessTypeDisplayName_ = value;
    businessTypeDisplayNameIsSet_ = true;
}

bool PluginDTO::businessTypeDisplayNameIsSet() const
{
    return businessTypeDisplayNameIsSet_;
}

void PluginDTO::unsetbusinessTypeDisplayName()
{
    businessTypeDisplayNameIsSet_ = false;
}

std::string PluginDTO::getDescription() const
{
    return description_;
}

void PluginDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PluginDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PluginDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t PluginDTO::getIsPrivate() const
{
    return isPrivate_;
}

void PluginDTO::setIsPrivate(int32_t value)
{
    isPrivate_ = value;
    isPrivateIsSet_ = true;
}

bool PluginDTO::isPrivateIsSet() const
{
    return isPrivateIsSet_;
}

void PluginDTO::unsetisPrivate()
{
    isPrivateIsSet_ = false;
}

std::string PluginDTO::getRegion() const
{
    return region_;
}

void PluginDTO::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool PluginDTO::regionIsSet() const
{
    return regionIsSet_;
}

void PluginDTO::unsetregion()
{
    regionIsSet_ = false;
}

std::string PluginDTO::getMaintainers() const
{
    return maintainers_;
}

void PluginDTO::setMaintainers(const std::string& value)
{
    maintainers_ = value;
    maintainersIsSet_ = true;
}

bool PluginDTO::maintainersIsSet() const
{
    return maintainersIsSet_;
}

void PluginDTO::unsetmaintainers()
{
    maintainersIsSet_ = false;
}

std::string PluginDTO::getPluginCompositionType() const
{
    return pluginCompositionType_;
}

void PluginDTO::setPluginCompositionType(const std::string& value)
{
    pluginCompositionType_ = value;
    pluginCompositionTypeIsSet_ = true;
}

bool PluginDTO::pluginCompositionTypeIsSet() const
{
    return pluginCompositionTypeIsSet_;
}

void PluginDTO::unsetpluginCompositionType()
{
    pluginCompositionTypeIsSet_ = false;
}

std::string PluginDTO::getManifestVersion() const
{
    return manifestVersion_;
}

void PluginDTO::setManifestVersion(const std::string& value)
{
    manifestVersion_ = value;
    manifestVersionIsSet_ = true;
}

bool PluginDTO::manifestVersionIsSet() const
{
    return manifestVersionIsSet_;
}

void PluginDTO::unsetmanifestVersion()
{
    manifestVersionIsSet_ = false;
}

std::string PluginDTO::getVersion() const
{
    return version_;
}

void PluginDTO::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool PluginDTO::versionIsSet() const
{
    return versionIsSet_;
}

void PluginDTO::unsetversion()
{
    versionIsSet_ = false;
}

std::string PluginDTO::getVersionDescription() const
{
    return versionDescription_;
}

void PluginDTO::setVersionDescription(const std::string& value)
{
    versionDescription_ = value;
    versionDescriptionIsSet_ = true;
}

bool PluginDTO::versionDescriptionIsSet() const
{
    return versionDescriptionIsSet_;
}

void PluginDTO::unsetversionDescription()
{
    versionDescriptionIsSet_ = false;
}

PluginDTO_execution_info PluginDTO::getExecutionInfo() const
{
    return executionInfo_;
}

void PluginDTO::setExecutionInfo(const PluginDTO_execution_info& value)
{
    executionInfo_ = value;
    executionInfoIsSet_ = true;
}

bool PluginDTO::executionInfoIsSet() const
{
    return executionInfoIsSet_;
}

void PluginDTO::unsetexecutionInfo()
{
    executionInfoIsSet_ = false;
}

std::vector<PluginDTO_output_info>& PluginDTO::getOutputInfo()
{
    return outputInfo_;
}

void PluginDTO::setOutputInfo(const std::vector<PluginDTO_output_info>& value)
{
    outputInfo_ = value;
    outputInfoIsSet_ = true;
}

bool PluginDTO::outputInfoIsSet() const
{
    return outputInfoIsSet_;
}

void PluginDTO::unsetoutputInfo()
{
    outputInfoIsSet_ = false;
}

std::vector<PluginDTO_input_info>& PluginDTO::getInputInfo()
{
    return inputInfo_;
}

void PluginDTO::setInputInfo(const std::vector<PluginDTO_input_info>& value)
{
    inputInfo_ = value;
    inputInfoIsSet_ = true;
}

bool PluginDTO::inputInfoIsSet() const
{
    return inputInfoIsSet_;
}

void PluginDTO::unsetinputInfo()
{
    inputInfoIsSet_ = false;
}

}
}
}
}
}


