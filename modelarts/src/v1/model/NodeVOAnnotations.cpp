

#include "huaweicloud/modelarts/v1/model/NodeVOAnnotations.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeVOAnnotations::NodeVOAnnotations()
{
    osModelartsNpuTopologyPlacement_ = "";
    osModelartsNpuTopologyPlacementIsSet_ = false;
}

NodeVOAnnotations::~NodeVOAnnotations() = default;

void NodeVOAnnotations::validate()
{
}

web::json::value NodeVOAnnotations::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osModelartsNpuTopologyPlacementIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/npu-topology-placement")] = ModelBase::toJson(osModelartsNpuTopologyPlacement_);
    }

    return val;
}
bool NodeVOAnnotations::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/npu-topology-placement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/npu-topology-placement"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsNpuTopologyPlacement(refVal);
        }
    }
    return ok;
}


std::string NodeVOAnnotations::getOsModelartsNpuTopologyPlacement() const
{
    return osModelartsNpuTopologyPlacement_;
}

void NodeVOAnnotations::setOsModelartsNpuTopologyPlacement(const std::string& value)
{
    osModelartsNpuTopologyPlacement_ = value;
    osModelartsNpuTopologyPlacementIsSet_ = true;
}

bool NodeVOAnnotations::osModelartsNpuTopologyPlacementIsSet() const
{
    return osModelartsNpuTopologyPlacementIsSet_;
}

void NodeVOAnnotations::unsetosModelartsNpuTopologyPlacement()
{
    osModelartsNpuTopologyPlacementIsSet_ = false;
}

}
}
}
}
}


