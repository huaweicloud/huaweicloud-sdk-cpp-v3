

#include "huaweicloud/modelarts/v1/model/NodeconfigUpdate_spec_configs_transparent_hugepage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeconfigUpdate_spec_configs_transparent_hugepage::NodeconfigUpdate_spec_configs_transparent_hugepage()
{
    mode_ = "";
    modeIsSet_ = false;
}

NodeconfigUpdate_spec_configs_transparent_hugepage::~NodeconfigUpdate_spec_configs_transparent_hugepage() = default;

void NodeconfigUpdate_spec_configs_transparent_hugepage::validate()
{
}

web::json::value NodeconfigUpdate_spec_configs_transparent_hugepage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool NodeconfigUpdate_spec_configs_transparent_hugepage::fromJson(const web::json::value& val)
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


std::string NodeconfigUpdate_spec_configs_transparent_hugepage::getMode() const
{
    return mode_;
}

void NodeconfigUpdate_spec_configs_transparent_hugepage::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool NodeconfigUpdate_spec_configs_transparent_hugepage::modeIsSet() const
{
    return modeIsSet_;
}

void NodeconfigUpdate_spec_configs_transparent_hugepage::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


