

#include "huaweicloud/modelarts/v1/model/NodeResizeParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeResizeParams::NodeResizeParams()
{
    nodePool_ = "";
    nodePoolIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    creatingStepIsSet_ = false;
}

NodeResizeParams::~NodeResizeParams() = default;

void NodeResizeParams::validate()
{
}

web::json::value NodeResizeParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodePoolIsSet_) {
        val[utility::conversions::to_string_t("nodePool")] = ModelBase::toJson(nodePool_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(creatingStepIsSet_) {
        val[utility::conversions::to_string_t("creatingStep")] = ModelBase::toJson(creatingStep_);
    }

    return val;
}
bool NodeResizeParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodePool"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodePool"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodePool(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creatingStep"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creatingStep"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatingStep(refVal);
        }
    }
    return ok;
}


std::string NodeResizeParams::getNodePool() const
{
    return nodePool_;
}

void NodeResizeParams::setNodePool(const std::string& value)
{
    nodePool_ = value;
    nodePoolIsSet_ = true;
}

bool NodeResizeParams::nodePoolIsSet() const
{
    return nodePoolIsSet_;
}

void NodeResizeParams::unsetnodePool()
{
    nodePoolIsSet_ = false;
}

std::string NodeResizeParams::getFlavor() const
{
    return flavor_;
}

void NodeResizeParams::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool NodeResizeParams::flavorIsSet() const
{
    return flavorIsSet_;
}

void NodeResizeParams::unsetflavor()
{
    flavorIsSet_ = false;
}

Object NodeResizeParams::getCreatingStep() const
{
    return creatingStep_;
}

void NodeResizeParams::setCreatingStep(const Object& value)
{
    creatingStep_ = value;
    creatingStepIsSet_ = true;
}

bool NodeResizeParams::creatingStepIsSet() const
{
    return creatingStepIsSet_;
}

void NodeResizeParams::unsetcreatingStep()
{
    creatingStepIsSet_ = false;
}

}
}
}
}
}


