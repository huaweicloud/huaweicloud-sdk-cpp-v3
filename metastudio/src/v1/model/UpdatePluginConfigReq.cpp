

#include "huaweicloud/metastudio/v1/model/UpdatePluginConfigReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdatePluginConfigReq::UpdatePluginConfigReq()
{
    apiKey_ = "";
    apiKeyIsSet_ = false;
}

UpdatePluginConfigReq::~UpdatePluginConfigReq() = default;

void UpdatePluginConfigReq::validate()
{
}

web::json::value UpdatePluginConfigReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiKeyIsSet_) {
        val[utility::conversions::to_string_t("api_key")] = ModelBase::toJson(apiKey_);
    }

    return val;
}
bool UpdatePluginConfigReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string UpdatePluginConfigReq::getApiKey() const
{
    return apiKey_;
}

void UpdatePluginConfigReq::setApiKey(const std::string& value)
{
    apiKey_ = value;
    apiKeyIsSet_ = true;
}

bool UpdatePluginConfigReq::apiKeyIsSet() const
{
    return apiKeyIsSet_;
}

void UpdatePluginConfigReq::unsetapiKey()
{
    apiKeyIsSet_ = false;
}

}
}
}
}
}


