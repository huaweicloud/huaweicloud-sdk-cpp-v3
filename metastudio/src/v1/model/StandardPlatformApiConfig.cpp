

#include "huaweicloud/metastudio/v1/model/StandardPlatformApiConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




StandardPlatformApiConfig::StandardPlatformApiConfig()
{
    apiType_ = "";
    apiTypeIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

StandardPlatformApiConfig::~StandardPlatformApiConfig() = default;

void StandardPlatformApiConfig::validate()
{
}

web::json::value StandardPlatformApiConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiTypeIsSet_) {
        val[utility::conversions::to_string_t("api_type")] = ModelBase::toJson(apiType_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool StandardPlatformApiConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("api_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("api_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    return ok;
}


std::string StandardPlatformApiConfig::getApiType() const
{
    return apiType_;
}

void StandardPlatformApiConfig::setApiType(const std::string& value)
{
    apiType_ = value;
    apiTypeIsSet_ = true;
}

bool StandardPlatformApiConfig::apiTypeIsSet() const
{
    return apiTypeIsSet_;
}

void StandardPlatformApiConfig::unsetapiType()
{
    apiTypeIsSet_ = false;
}

std::string StandardPlatformApiConfig::getUrl() const
{
    return url_;
}

void StandardPlatformApiConfig::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool StandardPlatformApiConfig::urlIsSet() const
{
    return urlIsSet_;
}

void StandardPlatformApiConfig::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


