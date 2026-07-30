

#include "huaweicloud/modelarts/v1/model/NodeconfigSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeconfigSpec::NodeconfigSpec()
{
    configsIsSet_ = false;
}

NodeconfigSpec::~NodeconfigSpec() = default;

void NodeconfigSpec::validate()
{
}

web::json::value NodeconfigSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configsIsSet_) {
        val[utility::conversions::to_string_t("configs")] = ModelBase::toJson(configs_);
    }

    return val;
}
bool NodeconfigSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configs"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigs(refVal);
        }
    }
    return ok;
}


Object NodeconfigSpec::getConfigs() const
{
    return configs_;
}

void NodeconfigSpec::setConfigs(const Object& value)
{
    configs_ = value;
    configsIsSet_ = true;
}

bool NodeconfigSpec::configsIsSet() const
{
    return configsIsSet_;
}

void NodeconfigSpec::unsetconfigs()
{
    configsIsSet_ = false;
}

}
}
}
}
}


