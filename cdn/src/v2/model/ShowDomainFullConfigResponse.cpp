

#include "huaweicloud/cdn/v2/model/ShowDomainFullConfigResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowDomainFullConfigResponse::ShowDomainFullConfigResponse()
{
    configsIsSet_ = false;
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

}
}
}
}
}


