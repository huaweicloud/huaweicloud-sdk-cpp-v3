

#include "huaweicloud/cce/v3/model/NodePriority.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodePriority::NodePriority()
{
    nodeSelectorIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
}

NodePriority::~NodePriority() = default;

void NodePriority::validate()
{
}

web::json::value NodePriority::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeSelectorIsSet_) {
        val[utility::conversions::to_string_t("nodeSelector")] = ModelBase::toJson(nodeSelector_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }

    return val;
}
bool NodePriority::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodeSelector"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeSelector"));
        if(!fieldValue.is_null())
        {
            NodeSelector refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeSelector(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    return ok;
}


NodeSelector NodePriority::getNodeSelector() const
{
    return nodeSelector_;
}

void NodePriority::setNodeSelector(const NodeSelector& value)
{
    nodeSelector_ = value;
    nodeSelectorIsSet_ = true;
}

bool NodePriority::nodeSelectorIsSet() const
{
    return nodeSelectorIsSet_;
}

void NodePriority::unsetnodeSelector()
{
    nodeSelectorIsSet_ = false;
}

int32_t NodePriority::getPriority() const
{
    return priority_;
}

void NodePriority::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool NodePriority::priorityIsSet() const
{
    return priorityIsSet_;
}

void NodePriority::unsetpriority()
{
    priorityIsSet_ = false;
}

}
}
}
}
}


