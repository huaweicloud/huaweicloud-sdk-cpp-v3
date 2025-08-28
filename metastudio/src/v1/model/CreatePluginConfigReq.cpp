

#include "huaweicloud/metastudio/v1/model/CreatePluginConfigReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreatePluginConfigReq::CreatePluginConfigReq()
{
    pluginProviderIsSet_ = false;
    apiKey_ = "";
    apiKeyIsSet_ = false;
}

CreatePluginConfigReq::~CreatePluginConfigReq() = default;

void CreatePluginConfigReq::validate()
{
}

web::json::value CreatePluginConfigReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginProviderIsSet_) {
        val[utility::conversions::to_string_t("plugin_provider")] = ModelBase::toJson(pluginProvider_);
    }
    if(apiKeyIsSet_) {
        val[utility::conversions::to_string_t("api_key")] = ModelBase::toJson(apiKey_);
    }

    return val;
}
bool CreatePluginConfigReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("plugin_provider"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_provider"));
        if(!fieldValue.is_null())
        {
            PluginProviderEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginProvider(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("api_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("api_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiKey(refVal);
        }
    }
    return ok;
}


PluginProviderEnum CreatePluginConfigReq::getPluginProvider() const
{
    return pluginProvider_;
}

void CreatePluginConfigReq::setPluginProvider(const PluginProviderEnum& value)
{
    pluginProvider_ = value;
    pluginProviderIsSet_ = true;
}

bool CreatePluginConfigReq::pluginProviderIsSet() const
{
    return pluginProviderIsSet_;
}

void CreatePluginConfigReq::unsetpluginProvider()
{
    pluginProviderIsSet_ = false;
}

std::string CreatePluginConfigReq::getApiKey() const
{
    return apiKey_;
}

void CreatePluginConfigReq::setApiKey(const std::string& value)
{
    apiKey_ = value;
    apiKeyIsSet_ = true;
}

bool CreatePluginConfigReq::apiKeyIsSet() const
{
    return apiKeyIsSet_;
}

void CreatePluginConfigReq::unsetapiKey()
{
    apiKeyIsSet_ = false;
}

}
}
}
}
}


