

#include "huaweicloud/modelarts/v1/model/NodeconfigUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeconfigUpdate::NodeconfigUpdate()
{
    specIsSet_ = false;
}

NodeconfigUpdate::~NodeconfigUpdate() = default;

void NodeconfigUpdate::validate()
{
}

web::json::value NodeconfigUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool NodeconfigUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            NodeconfigUpdate_spec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


NodeconfigUpdate_spec NodeconfigUpdate::getSpec() const
{
    return spec_;
}

void NodeconfigUpdate::setSpec(const NodeconfigUpdate_spec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool NodeconfigUpdate::specIsSet() const
{
    return specIsSet_;
}

void NodeconfigUpdate::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


