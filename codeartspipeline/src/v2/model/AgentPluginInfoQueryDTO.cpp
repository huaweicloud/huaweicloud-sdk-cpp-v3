

#include "huaweicloud/codeartspipeline/v2/model/AgentPluginInfoQueryDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




AgentPluginInfoQueryDTO::AgentPluginInfoQueryDTO()
{
    pluginName_ = "";
    pluginNameIsSet_ = false;
    regexName_ = "";
    regexNameIsSet_ = false;
    maintainer_ = "";
    maintainerIsSet_ = false;
    businessTypeIsSet_ = false;
    pluginAttribution_ = "";
    pluginAttributionIsSet_ = false;
}

AgentPluginInfoQueryDTO::~AgentPluginInfoQueryDTO() = default;

void AgentPluginInfoQueryDTO::validate()
{
}

web::json::value AgentPluginInfoQueryDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(regexNameIsSet_) {
        val[utility::conversions::to_string_t("regex_name")] = ModelBase::toJson(regexName_);
    }
    if(maintainerIsSet_) {
        val[utility::conversions::to_string_t("maintainer")] = ModelBase::toJson(maintainer_);
    }
    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }
    if(pluginAttributionIsSet_) {
        val[utility::conversions::to_string_t("plugin_attribution")] = ModelBase::toJson(pluginAttribution_);
    }

    return val;
}
bool AgentPluginInfoQueryDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("regex_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regex_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegexName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maintainer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maintainer"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaintainer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
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
    return ok;
}


std::string AgentPluginInfoQueryDTO::getPluginName() const
{
    return pluginName_;
}

void AgentPluginInfoQueryDTO::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool AgentPluginInfoQueryDTO::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void AgentPluginInfoQueryDTO::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string AgentPluginInfoQueryDTO::getRegexName() const
{
    return regexName_;
}

void AgentPluginInfoQueryDTO::setRegexName(const std::string& value)
{
    regexName_ = value;
    regexNameIsSet_ = true;
}

bool AgentPluginInfoQueryDTO::regexNameIsSet() const
{
    return regexNameIsSet_;
}

void AgentPluginInfoQueryDTO::unsetregexName()
{
    regexNameIsSet_ = false;
}

std::string AgentPluginInfoQueryDTO::getMaintainer() const
{
    return maintainer_;
}

void AgentPluginInfoQueryDTO::setMaintainer(const std::string& value)
{
    maintainer_ = value;
    maintainerIsSet_ = true;
}

bool AgentPluginInfoQueryDTO::maintainerIsSet() const
{
    return maintainerIsSet_;
}

void AgentPluginInfoQueryDTO::unsetmaintainer()
{
    maintainerIsSet_ = false;
}

std::vector<std::string>& AgentPluginInfoQueryDTO::getBusinessType()
{
    return businessType_;
}

void AgentPluginInfoQueryDTO::setBusinessType(const std::vector<std::string>& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool AgentPluginInfoQueryDTO::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void AgentPluginInfoQueryDTO::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string AgentPluginInfoQueryDTO::getPluginAttribution() const
{
    return pluginAttribution_;
}

void AgentPluginInfoQueryDTO::setPluginAttribution(const std::string& value)
{
    pluginAttribution_ = value;
    pluginAttributionIsSet_ = true;
}

bool AgentPluginInfoQueryDTO::pluginAttributionIsSet() const
{
    return pluginAttributionIsSet_;
}

void AgentPluginInfoQueryDTO::unsetpluginAttribution()
{
    pluginAttributionIsSet_ = false;
}

}
}
}
}
}


