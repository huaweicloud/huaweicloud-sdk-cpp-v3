

#include "huaweicloud/modelarts/v1/model/NodeconfigUpdate_spec_configs_cpu_manager.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeconfigUpdate_spec_configs_cpu_manager::NodeconfigUpdate_spec_configs_cpu_manager()
{
    mode_ = "";
    modeIsSet_ = false;
}

NodeconfigUpdate_spec_configs_cpu_manager::~NodeconfigUpdate_spec_configs_cpu_manager() = default;

void NodeconfigUpdate_spec_configs_cpu_manager::validate()
{
}

web::json::value NodeconfigUpdate_spec_configs_cpu_manager::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool NodeconfigUpdate_spec_configs_cpu_manager::fromJson(const web::json::value& val)
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


std::string NodeconfigUpdate_spec_configs_cpu_manager::getMode() const
{
    return mode_;
}

void NodeconfigUpdate_spec_configs_cpu_manager::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool NodeconfigUpdate_spec_configs_cpu_manager::modeIsSet() const
{
    return modeIsSet_;
}

void NodeconfigUpdate_spec_configs_cpu_manager::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


