

#include "huaweicloud/metastudio/v1/model/ShowPluginConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowPluginConfigResponse::ShowPluginConfigResponse()
{
    pluginConfigId_ = "";
    pluginConfigIdIsSet_ = false;
    pluginProviderIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowPluginConfigResponse::~ShowPluginConfigResponse() = default;

void ShowPluginConfigResponse::validate()
{
}

web::json::value ShowPluginConfigResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowPluginConfigResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowPluginConfigResponse::getPluginConfigId() const
{
    return pluginConfigId_;
}

void ShowPluginConfigResponse::setPluginConfigId(const std::string& value)
{
    pluginConfigId_ = value;
    pluginConfigIdIsSet_ = true;
}

bool ShowPluginConfigResponse::pluginConfigIdIsSet() const
{
    return pluginConfigIdIsSet_;
}

void ShowPluginConfigResponse::unsetpluginConfigId()
{
    pluginConfigIdIsSet_ = false;
}

PluginProviderEnum ShowPluginConfigResponse::getPluginProvider() const
{
    return pluginProvider_;
}

void ShowPluginConfigResponse::setPluginProvider(const PluginProviderEnum& value)
{
    pluginProvider_ = value;
    pluginProviderIsSet_ = true;
}

bool ShowPluginConfigResponse::pluginProviderIsSet() const
{
    return pluginProviderIsSet_;
}

void ShowPluginConfigResponse::unsetpluginProvider()
{
    pluginProviderIsSet_ = false;
}

std::string ShowPluginConfigResponse::getCreateTime() const
{
    return createTime_;
}

void ShowPluginConfigResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowPluginConfigResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowPluginConfigResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowPluginConfigResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowPluginConfigResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowPluginConfigResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowPluginConfigResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowPluginConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowPluginConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowPluginConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowPluginConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


