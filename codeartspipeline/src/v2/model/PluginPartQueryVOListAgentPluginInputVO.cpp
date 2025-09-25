

#include "huaweicloud/codeartspipeline/v2/model/PluginPartQueryVOListAgentPluginInputVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PluginPartQueryVOListAgentPluginInputVO::PluginPartQueryVOListAgentPluginInputVO()
{
    pluginName_ = "";
    pluginNameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    dataIsSet_ = false;
}

PluginPartQueryVOListAgentPluginInputVO::~PluginPartQueryVOListAgentPluginInputVO() = default;

void PluginPartQueryVOListAgentPluginInputVO::validate()
{
}

web::json::value PluginPartQueryVOListAgentPluginInputVO::toJson() const
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
bool PluginPartQueryVOListAgentPluginInputVO::fromJson(const web::json::value& val)
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
            std::vector<PluginPartQueryVOListAgentPluginInputVO_data> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::string PluginPartQueryVOListAgentPluginInputVO::getPluginName() const
{
    return pluginName_;
}

void PluginPartQueryVOListAgentPluginInputVO::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginInputVO::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void PluginPartQueryVOListAgentPluginInputVO::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string PluginPartQueryVOListAgentPluginInputVO::getDisplayName() const
{
    return displayName_;
}

void PluginPartQueryVOListAgentPluginInputVO::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginInputVO::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void PluginPartQueryVOListAgentPluginInputVO::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::vector<PluginPartQueryVOListAgentPluginInputVO_data>& PluginPartQueryVOListAgentPluginInputVO::getData()
{
    return data_;
}

void PluginPartQueryVOListAgentPluginInputVO::setData(const std::vector<PluginPartQueryVOListAgentPluginInputVO_data>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool PluginPartQueryVOListAgentPluginInputVO::dataIsSet() const
{
    return dataIsSet_;
}

void PluginPartQueryVOListAgentPluginInputVO::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


