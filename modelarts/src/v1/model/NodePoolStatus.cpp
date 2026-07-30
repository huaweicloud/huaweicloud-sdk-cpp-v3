

#include "huaweicloud/modelarts/v1/model/NodePoolStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodePoolStatus::NodePoolStatus()
{
    resourcesIsSet_ = false;
}

NodePoolStatus::~NodePoolStatus() = default;

void NodePoolStatus::validate()
{
}

web::json::value NodePoolStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool NodePoolStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            NodePoolStatus_resources refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


NodePoolStatus_resources NodePoolStatus::getResources() const
{
    return resources_;
}

void NodePoolStatus::setResources(const NodePoolStatus_resources& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool NodePoolStatus::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void NodePoolStatus::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


