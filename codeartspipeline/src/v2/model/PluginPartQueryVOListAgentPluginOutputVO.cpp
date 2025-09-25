

#include "huaweicloud/codeartspipeline/v2/model/PluginPartQueryVOListAgentPluginOutputVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PluginPartQueryVOListAgentPluginOutputVO::PluginPartQueryVOListAgentPluginOutputVO()
{
    pluginName_ = "";
    pluginNameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    dataIsSet_ = false;
}

PluginPartQueryVOListAgentPluginOutputVO::~PluginPartQueryVOListAgentPluginOutputVO() = default;

void PluginPartQueryVOListAgentPluginOutputVO::validate()
{
}

web::json::value PluginPartQueryVOListAgentPluginOutputVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool PluginPartQueryVOListAgentPluginOutputVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<PluginPartQueryVOListAgentPluginOutputVO_data> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::string PluginPartQueryVOListAgentPluginOutputVO::getPluginName() const
{
    return pluginName_;
}

void PluginPartQueryVOListAgentPluginOutputVO::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginOutputVO::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void PluginPartQueryVOListAgentPluginOutputVO::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginOutputVO::getDisplayName() const
{
    return displayName_;
}

void PluginPartQueryVOListAgentPluginOutputVO::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginOutputVO::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void PluginPartQueryVOListAgentPluginOutputVO::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::vector<PluginPartQueryVOListAgentPluginOutputVO_data>& PluginPartQueryVOListAgentPluginOutputVO::getData()
{
    return data_;
}

void PluginPartQueryVOListAgentPluginOutputVO::setData(const std::vector<PluginPartQueryVOListAgentPluginOutputVO_data>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginOutputVO::dataIsSet() const
{
    return dataIsSet_;
}

void PluginPartQueryVOListAgentPluginOutputVO::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


