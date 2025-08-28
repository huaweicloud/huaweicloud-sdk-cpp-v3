

#include "huaweicloud/metastudio/v1/model/RolePluginConfigInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




RolePluginConfigInfo::RolePluginConfigInfo()
{
    pluginTypeIsSet_ = false;
    pluginSourceIsSet_ = false;
    pluginConfigId_ = "";
    pluginConfigIdIsSet_ = false;
}

RolePluginConfigInfo::~RolePluginConfigInfo() = default;

void RolePluginConfigInfo::validate()
{
}

web::json::value RolePluginConfigInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginTypeIsSet_) {
        val[utility::conversions::to_string_t("plugin_type")] = ModelBase::toJson(pluginType_);
    }
    if(pluginSourceIsSet_) {
        val[utility::conversions::to_string_t("plugin_source")] = ModelBase::toJson(pluginSource_);
    }
    if(pluginConfigIdIsSet_) {
        val[utility::conversions::to_string_t("plugin_config_id")] = ModelBase::toJson(pluginConfigId_);
    }

    return val;
}
bool RolePluginConfigInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("plugin_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_type"));
        if(!fieldValue.is_null())
        {
            PluginTypeEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plugin_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_source"));
        if(!fieldValue.is_null())
        {
            PluginSourceEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plugin_config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginConfigId(refVal);
        }
    }
    return ok;
}


PluginTypeEnum RolePluginConfigInfo::getPluginType() const
{
    return pluginType_;
}

void RolePluginConfigInfo::setPluginType(const PluginTypeEnum& value)
{
    pluginType_ = value;
    pluginTypeIsSet_ = true;
}

bool RolePluginConfigInfo::pluginTypeIsSet() const
{
    return pluginTypeIsSet_;
}

void RolePluginConfigInfo::unsetpluginType()
{
    pluginTypeIsSet_ = false;
}

PluginSourceEnum RolePluginConfigInfo::getPluginSource() const
{
    return pluginSource_;
}

void RolePluginConfigInfo::setPluginSource(const PluginSourceEnum& value)
{
    pluginSource_ = value;
    pluginSourceIsSet_ = true;
}

bool RolePluginConfigInfo::pluginSourceIsSet() const
{
    return pluginSourceIsSet_;
}

void RolePluginConfigInfo::unsetpluginSource()
{
    pluginSourceIsSet_ = false;
}

std::string RolePluginConfigInfo::getPluginConfigId() const
{
    return pluginConfigId_;
}

void RolePluginConfigInfo::setPluginConfigId(const std::string& value)
{
    pluginConfigId_ = value;
    pluginConfigIdIsSet_ = true;
}

bool RolePluginConfigInfo::pluginConfigIdIsSet() const
{
    return pluginConfigIdIsSet_;
}

void RolePluginConfigInfo::unsetpluginConfigId()
{
    pluginConfigIdIsSet_ = false;
}

}
}
}
}
}


