

#include "huaweicloud/codeartspipeline/v2/model/PluginPartQueryVOListAgentPluginOutputVO_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PluginPartQueryVOListAgentPluginOutputVO_data::PluginPartQueryVOListAgentPluginOutputVO_data()
{
    uniqueId_ = "";
    uniqueIdIsSet_ = false;
    pluginName_ = "";
    pluginNameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    outputKey_ = "";
    outputKeyIsSet_ = false;
    outputValue_ = "";
    outputValueIsSet_ = false;
}

PluginPartQueryVOListAgentPluginOutputVO_data::~PluginPartQueryVOListAgentPluginOutputVO_data() = default;

void PluginPartQueryVOListAgentPluginOutputVO_data::validate()
{
}

web::json::value PluginPartQueryVOListAgentPluginOutputVO_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uniqueIdIsSet_) {
        val[utility::conversions::to_string_t("unique_id")] = ModelBase::toJson(uniqueId_);
    }
    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(outputKeyIsSet_) {
        val[utility::conversions::to_string_t("output_key")] = ModelBase::toJson(outputKey_);
    }
    if(outputValueIsSet_) {
        val[utility::conversions::to_string_t("output_value")] = ModelBase::toJson(outputValue_);
    }

    return val;
}
bool PluginPartQueryVOListAgentPluginOutputVO_data::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputValue(refVal);
        }
    }
    return ok;
}


std::string PluginPartQueryVOListAgentPluginOutputVO_data::getUniqueId() const
{
    return uniqueId_;
}

void PluginPartQueryVOListAgentPluginOutputVO_data::setUniqueId(const std::string& value)
{
    uniqueId_ = value;
    uniqueIdIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginOutputVO_data::uniqueIdIsSet() const
{
    return uniqueIdIsSet_;
}

void PluginPartQueryVOListAgentPluginOutputVO_data::unsetuniqueId()
{
    uniqueIdIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginOutputVO_data::getPluginName() const
{
    return pluginName_;
}

void PluginPartQueryVOListAgentPluginOutputVO_data::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginOutputVO_data::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void PluginPartQueryVOListAgentPluginOutputVO_data::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginOutputVO_data::getVersion() const
{
    return version_;
}

void PluginPartQueryVOListAgentPluginOutputVO_data::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginOutputVO_data::versionIsSet() const
{
    return versionIsSet_;
}

void PluginPartQueryVOListAgentPluginOutputVO_data::unsetversion()
{
    versionIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginOutputVO_data::getWorkspaceId() const
{
    return workspaceId_;
}

void PluginPartQueryVOListAgentPluginOutputVO_data::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginOutputVO_data::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void PluginPartQueryVOListAgentPluginOutputVO_data::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginOutputVO_data::getOutputKey() const
{
    return outputKey_;
}

void PluginPartQueryVOListAgentPluginOutputVO_data::setOutputKey(const std::string& value)
{
    outputKey_ = value;
    outputKeyIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginOutputVO_data::outputKeyIsSet() const
{
    return outputKeyIsSet_;
}

void PluginPartQueryVOListAgentPluginOutputVO_data::unsetoutputKey()
{
    outputKeyIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginOutputVO_data::getOutputValue() const
{
    return outputValue_;
}

void PluginPartQueryVOListAgentPluginOutputVO_data::setOutputValue(const std::string& value)
{
    outputValue_ = value;
    outputValueIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginOutputVO_data::outputValueIsSet() const
{
    return outputValueIsSet_;
}

void PluginPartQueryVOListAgentPluginOutputVO_data::unsetoutputValue()
{
    outputValueIsSet_ = false;
}

}
}
}
}
}


