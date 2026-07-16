

#include "huaweicloud/cce/v3/model/RotateCertNode.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




RotateCertNode::RotateCertNode()
{
    nodeID_ = "";
    nodeIDIsSet_ = false;
}

RotateCertNode::~RotateCertNode() = default;

void RotateCertNode::validate()
{
}

web::json::value RotateCertNode::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIDIsSet_) {
        val[utility::conversions::to_string_t("nodeID")] = ModelBase::toJson(nodeID_);
    }

    return val;
}
bool RotateCertNode::fromJson(const web::json::value& val)
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
    return ok;
}


std::string RotateCertNode::getNodeID() const
{
    return nodeID_;
}

void RotateCertNode::setNodeID(const std::string& value)
{
    nodeID_ = value;
    nodeIDIsSet_ = true;
}

bool RotateCertNode::nodeIDIsSet() const
{
    return nodeIDIsSet_;
}

void RotateCertNode::unsetnodeID()
{
    nodeIDIsSet_ = false;
}

}
}
}
}
}


