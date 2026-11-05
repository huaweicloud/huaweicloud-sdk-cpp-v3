

#include "huaweicloud/modelarts/v1/model/NodeconfigUpdate_spec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeconfigUpdate_spec::NodeconfigUpdate_spec()
{
    configsIsSet_ = false;
}

NodeconfigUpdate_spec::~NodeconfigUpdate_spec() = default;

void NodeconfigUpdate_spec::validate()
{
}

web::json::value NodeconfigUpdate_spec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configsIsSet_) {
        val[utility::conversions::to_string_t("configs")] = ModelBase::toJson(configs_);
    }

    return val;
}
bool NodeconfigUpdate_spec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configs"));
        if(!fieldValue.is_null())
        {
            NodeconfigUpdate_spec_configs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigs(refVal);
        }
    }
    return ok;
}


NodeconfigUpdate_spec_configs NodeconfigUpdate_spec::getConfigs() const
{
    return configs_;
}

void NodeconfigUpdate_spec::setConfigs(const NodeconfigUpdate_spec_configs& value)
{
    configs_ = value;
    configsIsSet_ = true;
}

bool NodeconfigUpdate_spec::configsIsSet() const
{
    return configsIsSet_;
}

void NodeconfigUpdate_spec::unsetconfigs()
{
    configsIsSet_ = false;
}

}
}
}
}
}


