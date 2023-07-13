

#include "huaweicloud/cdn/v1/model/ModifyDomainConfigRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ModifyDomainConfigRequestBody::ModifyDomainConfigRequestBody()
{
    configsIsSet_ = false;
}

ModifyDomainConfigRequestBody::~ModifyDomainConfigRequestBody() = default;

void ModifyDomainConfigRequestBody::validate()
{
}

web::json::value ModifyDomainConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configsIsSet_) {
        val[utility::conversions::to_string_t("configs")] = ModelBase::toJson(configs_);
    }

    return val;
}

bool ModifyDomainConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configs"));
        if(!fieldValue.is_null())
        {
            Configs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigs(refVal);
        }
    }
    return ok;
}

Configs ModifyDomainConfigRequestBody::getConfigs() const
{
    return configs_;
}

void ModifyDomainConfigRequestBody::setConfigs(const Configs& value)
{
    configs_ = value;
    configsIsSet_ = true;
}

bool ModifyDomainConfigRequestBody::configsIsSet() const
{
    return configsIsSet_;
}

void ModifyDomainConfigRequestBody::unsetconfigs()
{
    configsIsSet_ = false;
}

}
}
}
}
}


