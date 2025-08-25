

#include "huaweicloud/cce/v3/model/NodeTemplate_runtimeConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeTemplate_runtimeConfig::NodeTemplate_runtimeConfig()
{
    runtimeIsSet_ = false;
}

NodeTemplate_runtimeConfig::~NodeTemplate_runtimeConfig() = default;

void NodeTemplate_runtimeConfig::validate()
{
}

web::json::value NodeTemplate_runtimeConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }

    return val;
}
bool NodeTemplate_runtimeConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            NodeTemplate_runtimeConfig_runtime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
        }
    }
    return ok;
}


NodeTemplate_runtimeConfig_runtime NodeTemplate_runtimeConfig::getRuntime() const
{
    return runtime_;
}

void NodeTemplate_runtimeConfig::setRuntime(const NodeTemplate_runtimeConfig_runtime& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool NodeTemplate_runtimeConfig::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void NodeTemplate_runtimeConfig::unsetruntime()
{
    runtimeIsSet_ = false;
}

}
}
}
}
}


