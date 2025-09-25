

#include "huaweicloud/codeartspipeline/v2/model/ShowPluginVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPluginVersionResponse::ShowPluginVersionResponse()
{
    pluginName_ = "";
    pluginNameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    opUser_ = "";
    opUserIsSet_ = false;
    opTime_ = "";
    opTimeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    uniqueId_ = "";
    uniqueIdIsSet_ = false;
    versionDescription_ = "";
    versionDescriptionIsSet_ = false;
    versionAttribution_ = "";
    versionAttributionIsSet_ = false;
    pluginCompositionType_ = "";
    pluginCompositionTypeIsSet_ = false;
    pluginAttribution_ = "";
    pluginAttributionIsSet_ = false;
    inputInfoIsSet_ = false;
    pluginExecutionIsSet_ = false;
    runtimeAttribution_ = "";
    runtimeAttributionIsSet_ = false;
}

ShowPluginVersionResponse::~ShowPluginVersionResponse() = default;

void ShowPluginVersionResponse::validate()
{
}

web::json::value ShowPluginVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(opUserIsSet_) {
        val[utility::conversions::to_string_t("op_user")] = ModelBase::toJson(opUser_);
    }
    if(opTimeIsSet_) {
        val[utility::conversions::to_string_t("op_time")] = ModelBase::toJson(opTime_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(uniqueIdIsSet_) {
        val[utility::conversions::to_string_t("unique_id")] = ModelBase::toJson(uniqueId_);
    }
    if(versionDescriptionIsSet_) {
        val[utility::conversions::to_string_t("version_description")] = ModelBase::toJson(versionDescription_);
    }
    if(versionAttributionIsSet_) {
        val[utility::conversions::to_string_t("version_attribution")] = ModelBase::toJson(versionAttribution_);
    }
    if(pluginCompositionTypeIsSet_) {
        val[utility::conversions::to_string_t("plugin_composition_type")] = ModelBase::toJson(pluginCompositionType_);
    }
    if(pluginAttributionIsSet_) {
        val[utility::conversions::to_string_t("plugin_attribution")] = ModelBase::toJson(pluginAttribution_);
    }
    if(inputInfoIsSet_) {
        val[utility::conversions::to_string_t("input_info")] = ModelBase::toJson(inputInfo_);
    }
    if(pluginExecutionIsSet_) {
        val[utility::conversions::to_string_t("plugin_execution")] = ModelBase::toJson(pluginExecution_);
    }
    if(runtimeAttributionIsSet_) {
        val[utility::conversions::to_string_t("runtime_attribution")] = ModelBase::toJson(runtimeAttribution_);
    }

    return val;
}
bool ShowPluginVersionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("op_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("op_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("op_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("op_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("unique_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unique_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUniqueId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version_attribution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_attribution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionAttribution(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plugin_attribution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_attribution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginAttribution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input_info"));
        if(!fieldValue.is_null())
        {
            std::vector<PluginInstanceVO_input_info> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plugin_execution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_execution"));
        if(!fieldValue.is_null())
        {
            PluginExecutionVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginExecution(refVal);
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
    return ok;
}


std::string ShowPluginVersionResponse::getPluginName() const
{
    return pluginName_;
}

void ShowPluginVersionResponse::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool ShowPluginVersionResponse::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void ShowPluginVersionResponse::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string ShowPluginVersionResponse::getDisplayName() const
{
    return displayName_;
}

void ShowPluginVersionResponse::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool ShowPluginVersionResponse::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void ShowPluginVersionResponse::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string ShowPluginVersionResponse::getOpUser() const
{
    return opUser_;
}

void ShowPluginVersionResponse::setOpUser(const std::string& value)
{
    opUser_ = value;
    opUserIsSet_ = true;
}

bool ShowPluginVersionResponse::opUserIsSet() const
{
    return opUserIsSet_;
}

void ShowPluginVersionResponse::unsetopUser()
{
    opUserIsSet_ = false;
}

std::string ShowPluginVersionResponse::getOpTime() const
{
    return opTime_;
}

void ShowPluginVersionResponse::setOpTime(const std::string& value)
{
    opTime_ = value;
    opTimeIsSet_ = true;
}

bool ShowPluginVersionResponse::opTimeIsSet() const
{
    return opTimeIsSet_;
}

void ShowPluginVersionResponse::unsetopTime()
{
    opTimeIsSet_ = false;
}

std::string ShowPluginVersionResponse::getVersion() const
{
    return version_;
}

void ShowPluginVersionResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowPluginVersionResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowPluginVersionResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string ShowPluginVersionResponse::getUniqueId() const
{
    return uniqueId_;
}

void ShowPluginVersionResponse::setUniqueId(const std::string& value)
{
    uniqueId_ = value;
    uniqueIdIsSet_ = true;
}

bool ShowPluginVersionResponse::uniqueIdIsSet() const
{
    return uniqueIdIsSet_;
}

void ShowPluginVersionResponse::unsetuniqueId()
{
    uniqueIdIsSet_ = false;
}

std::string ShowPluginVersionResponse::getVersionDescription() const
{
    return versionDescription_;
}

void ShowPluginVersionResponse::setVersionDescription(const std::string& value)
{
    versionDescription_ = value;
    versionDescriptionIsSet_ = true;
}

bool ShowPluginVersionResponse::versionDescriptionIsSet() const
{
    return versionDescriptionIsSet_;
}

void ShowPluginVersionResponse::unsetversionDescription()
{
    versionDescriptionIsSet_ = false;
}

std::string ShowPluginVersionResponse::getVersionAttribution() const
{
    return versionAttribution_;
}

void ShowPluginVersionResponse::setVersionAttribution(const std::string& value)
{
    versionAttribution_ = value;
    versionAttributionIsSet_ = true;
}

bool ShowPluginVersionResponse::versionAttributionIsSet() const
{
    return versionAttributionIsSet_;
}

void ShowPluginVersionResponse::unsetversionAttribution()
{
    versionAttributionIsSet_ = false;
}

std::string ShowPluginVersionResponse::getPluginCompositionType() const
{
    return pluginCompositionType_;
}

void ShowPluginVersionResponse::setPluginCompositionType(const std::string& value)
{
    pluginCompositionType_ = value;
    pluginCompositionTypeIsSet_ = true;
}

bool ShowPluginVersionResponse::pluginCompositionTypeIsSet() const
{
    return pluginCompositionTypeIsSet_;
}

void ShowPluginVersionResponse::unsetpluginCompositionType()
{
    pluginCompositionTypeIsSet_ = false;
}

std::string ShowPluginVersionResponse::getPluginAttribution() const
{
    return pluginAttribution_;
}

void ShowPluginVersionResponse::setPluginAttribution(const std::string& value)
{
    pluginAttribution_ = value;
    pluginAttributionIsSet_ = true;
}

bool ShowPluginVersionResponse::pluginAttributionIsSet() const
{
    return pluginAttributionIsSet_;
}

void ShowPluginVersionResponse::unsetpluginAttribution()
{
    pluginAttributionIsSet_ = false;
}

std::vector<PluginInstanceVO_input_info>& ShowPluginVersionResponse::getInputInfo()
{
    return inputInfo_;
}

void ShowPluginVersionResponse::setInputInfo(const std::vector<PluginInstanceVO_input_info>& value)
{
    inputInfo_ = value;
    inputInfoIsSet_ = true;
}

bool ShowPluginVersionResponse::inputInfoIsSet() const
{
    return inputInfoIsSet_;
}

void ShowPluginVersionResponse::unsetinputInfo()
{
    inputInfoIsSet_ = false;
}

PluginExecutionVO ShowPluginVersionResponse::getPluginExecution() const
{
    return pluginExecution_;
}

void ShowPluginVersionResponse::setPluginExecution(const PluginExecutionVO& value)
{
    pluginExecution_ = value;
    pluginExecutionIsSet_ = true;
}

bool ShowPluginVersionResponse::pluginExecutionIsSet() const
{
    return pluginExecutionIsSet_;
}

void ShowPluginVersionResponse::unsetpluginExecution()
{
    pluginExecutionIsSet_ = false;
}

std::string ShowPluginVersionResponse::getRuntimeAttribution() const
{
    return runtimeAttribution_;
}

void ShowPluginVersionResponse::setRuntimeAttribution(const std::string& value)
{
    runtimeAttribution_ = value;
    runtimeAttributionIsSet_ = true;
}

bool ShowPluginVersionResponse::runtimeAttributionIsSet() const
{
    return runtimeAttributionIsSet_;
}

void ShowPluginVersionResponse::unsetruntimeAttribution()
{
    runtimeAttributionIsSet_ = false;
}

}
}
}
}
}


