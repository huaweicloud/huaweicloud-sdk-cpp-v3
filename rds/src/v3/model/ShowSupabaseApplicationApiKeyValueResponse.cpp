

#include "huaweicloud/rds/v3/model/ShowSupabaseApplicationApiKeyValueResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowSupabaseApplicationApiKeyValueResponse::ShowSupabaseApplicationApiKeyValueResponse()
{
    apiKey_ = "";
    apiKeyIsSet_ = false;
}

ShowSupabaseApplicationApiKeyValueResponse::~ShowSupabaseApplicationApiKeyValueResponse() = default;

void ShowSupabaseApplicationApiKeyValueResponse::validate()
{
}

web::json::value ShowSupabaseApplicationApiKeyValueResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiKeyIsSet_) {
        val[utility::conversions::to_string_t("api_key")] = ModelBase::toJson(apiKey_);
    }

    return val;
}
bool ShowSupabaseApplicationApiKeyValueResponse::fromJson(const web::json::value& val)
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


std::string ShowSupabaseApplicationApiKeyValueResponse::getApiKey() const
{
    return apiKey_;
}

void ShowSupabaseApplicationApiKeyValueResponse::setApiKey(const std::string& value)
{
    apiKey_ = value;
    apiKeyIsSet_ = true;
}

bool ShowSupabaseApplicationApiKeyValueResponse::apiKeyIsSet() const
{
    return apiKeyIsSet_;
}

void ShowSupabaseApplicationApiKeyValueResponse::unsetapiKey()
{
    apiKeyIsSet_ = false;
}

}
}
}
}
}


