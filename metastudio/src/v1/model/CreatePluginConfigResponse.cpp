

#include "huaweicloud/metastudio/v1/model/CreatePluginConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreatePluginConfigResponse::CreatePluginConfigResponse()
{
    pluginConfigId_ = "";
    pluginConfigIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreatePluginConfigResponse::~CreatePluginConfigResponse() = default;

void CreatePluginConfigResponse::validate()
{
}

web::json::value CreatePluginConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginConfigIdIsSet_) {
        val[utility::conversions::to_string_t("plugin_config_id")] = ModelBase::toJson(pluginConfigId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreatePluginConfigResponse::fromJson(const web::json::value& val)
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


std::string CreatePluginConfigResponse::getPluginConfigId() const
{
    return pluginConfigId_;
}

void CreatePluginConfigResponse::setPluginConfigId(const std::string& value)
{
    pluginConfigId_ = value;
    pluginConfigIdIsSet_ = true;
}

bool CreatePluginConfigResponse::pluginConfigIdIsSet() const
{
    return pluginConfigIdIsSet_;
}

void CreatePluginConfigResponse::unsetpluginConfigId()
{
    pluginConfigIdIsSet_ = false;
}

std::string CreatePluginConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreatePluginConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreatePluginConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreatePluginConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


