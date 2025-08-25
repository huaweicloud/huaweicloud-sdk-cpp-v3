

#include "huaweicloud/cce/v3/model/ResetNode.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ResetNode::ResetNode()
{
    nodeID_ = "";
    nodeIDIsSet_ = false;
    specIsSet_ = false;
}

ResetNode::~ResetNode() = default;

void ResetNode::validate()
{
}

web::json::value ResetNode::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIDIsSet_) {
        val[utility::conversions::to_string_t("nodeID")] = ModelBase::toJson(nodeID_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool ResetNode::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodeID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            ReinstallNodeSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string ResetNode::getNodeID() const
{
    return nodeID_;
}

void ResetNode::setNodeID(const std::string& value)
{
    nodeID_ = value;
    nodeIDIsSet_ = true;
}

bool ResetNode::nodeIDIsSet() const
{
    return nodeIDIsSet_;
}

void ResetNode::unsetnodeID()
{
    nodeIDIsSet_ = false;
}

ReinstallNodeSpec ResetNode::getSpec() const
{
    return spec_;
}

void ResetNode::setSpec(const ReinstallNodeSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ResetNode::specIsSet() const
{
    return specIsSet_;
}

void ResetNode::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


