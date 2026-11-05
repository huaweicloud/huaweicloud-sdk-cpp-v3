

#include "huaweicloud/modelarts/v1/model/NodeconfigSpec_configs_cpu_manager.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeconfigSpec_configs_cpu_manager::NodeconfigSpec_configs_cpu_manager()
{
    mode_ = "";
    modeIsSet_ = false;
}

NodeconfigSpec_configs_cpu_manager::~NodeconfigSpec_configs_cpu_manager() = default;

void NodeconfigSpec_configs_cpu_manager::validate()
{
}

web::json::value NodeconfigSpec_configs_cpu_manager::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool NodeconfigSpec_configs_cpu_manager::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string NodeconfigSpec_configs_cpu_manager::getMode() const
{
    return mode_;
}

void NodeconfigSpec_configs_cpu_manager::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool NodeconfigSpec_configs_cpu_manager::modeIsSet() const
{
    return modeIsSet_;
}

void NodeconfigSpec_configs_cpu_manager::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


