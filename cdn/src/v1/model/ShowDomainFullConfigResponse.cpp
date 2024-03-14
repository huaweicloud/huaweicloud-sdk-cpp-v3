

#include "huaweicloud/cdn/v1/model/ShowDomainFullConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowDomainFullConfigResponse::ShowDomainFullConfigResponse()
{
    configsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowDomainFullConfigResponse::~ShowDomainFullConfigResponse() = default;

void ShowDomainFullConfigResponse::validate()
{
}

web::json::value ShowDomainFullConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configsIsSet_) {
        val[utility::conversions::to_string_t("configs")] = ModelBase::toJson(configs_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowDomainFullConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configs"));
        if(!fieldValue.is_null())
        {
            ConfigsGetBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigs(refVal);
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


ConfigsGetBody ShowDomainFullConfigResponse::getConfigs() const
{
    return configs_;
}

void ShowDomainFullConfigResponse::setConfigs(const ConfigsGetBody& value)
{
    configs_ = value;
    configsIsSet_ = true;
}

bool ShowDomainFullConfigResponse::configsIsSet() const
{
    return configsIsSet_;
}

void ShowDomainFullConfigResponse::unsetconfigs()
{
    configsIsSet_ = false;
}

std::string ShowDomainFullConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowDomainFullConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowDomainFullConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowDomainFullConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


