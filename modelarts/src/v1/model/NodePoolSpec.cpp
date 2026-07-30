

#include "huaweicloud/modelarts/v1/model/NodePoolSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodePoolSpec::NodePoolSpec()
{
    resourcesIsSet_ = false;
}

NodePoolSpec::~NodePoolSpec() = default;

void NodePoolSpec::validate()
{
}

web::json::value NodePoolSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool NodePoolSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            PoolResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


PoolResource NodePoolSpec::getResources() const
{
    return resources_;
}

void NodePoolSpec::setResources(const PoolResource& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool NodePoolSpec::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void NodePoolSpec::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


