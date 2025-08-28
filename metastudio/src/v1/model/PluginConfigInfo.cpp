

#include "huaweicloud/metastudio/v1/model/PluginConfigInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




PluginConfigInfo::PluginConfigInfo()
{
    pluginConfigId_ = "";
    pluginConfigIdIsSet_ = false;
    pluginProviderIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

PluginConfigInfo::~PluginConfigInfo() = default;

void PluginConfigInfo::validate()
{
}

web::json::value PluginConfigInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginConfigIdIsSet_) {
        val[utility::conversions::to_string_t("plugin_config_id")] = ModelBase::toJson(pluginConfigId_);
    }
    if(pluginProviderIsSet_) {
        val[utility::conversions::to_string_t("plugin_provider")] = ModelBase::toJson(pluginProvider_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool PluginConfigInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("plugin_config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginConfigId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plugin_provider"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_provider"));
        if(!fieldValue.is_null())
        {
            PluginProviderEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginProvider(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string PluginConfigInfo::getPluginConfigId() const
{
    return pluginConfigId_;
}

void PluginConfigInfo::setPluginConfigId(const std::string& value)
{
    pluginConfigId_ = value;
    pluginConfigIdIsSet_ = true;
}

bool PluginConfigInfo::pluginConfigIdIsSet() const
{
    return pluginConfigIdIsSet_;
}

void PluginConfigInfo::unsetpluginConfigId()
{
    pluginConfigIdIsSet_ = false;
}

PluginProviderEnum PluginConfigInfo::getPluginProvider() const
{
    return pluginProvider_;
}

void PluginConfigInfo::setPluginProvider(const PluginProviderEnum& value)
{
    pluginProvider_ = value;
    pluginProviderIsSet_ = true;
}

bool PluginConfigInfo::pluginProviderIsSet() const
{
    return pluginProviderIsSet_;
}

void PluginConfigInfo::unsetpluginProvider()
{
    pluginProviderIsSet_ = false;
}

std::string PluginConfigInfo::getCreateTime() const
{
    return createTime_;
}

void PluginConfigInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool PluginConfigInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void PluginConfigInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string PluginConfigInfo::getUpdateTime() const
{
    return updateTime_;
}

void PluginConfigInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool PluginConfigInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void PluginConfigInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


