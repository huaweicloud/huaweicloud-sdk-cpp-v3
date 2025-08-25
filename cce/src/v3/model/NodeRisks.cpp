

#include "huaweicloud/cce/v3/model/NodeRisks.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeRisks::NodeRisks()
{
    nodeID_ = "";
    nodeIDIsSet_ = false;
}

NodeRisks::~NodeRisks() = default;

void NodeRisks::validate()
{
}

web::json::value NodeRisks::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIDIsSet_) {
        val[utility::conversions::to_string_t("NodeID")] = ModelBase::toJson(nodeID_);
    }

    return val;
}
bool NodeRisks::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("NodeID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("NodeID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeID(refVal);
        }
    }
    return ok;
}


std::string NodeRisks::getNodeID() const
{
    return nodeID_;
}

void NodeRisks::setNodeID(const std::string& value)
{
    nodeID_ = value;
    nodeIDIsSet_ = true;
}

bool NodeRisks::nodeIDIsSet() const
{
    return nodeIDIsSet_;
}

void NodeRisks::unsetnodeID()
{
    nodeIDIsSet_ = false;
}

}
}
}
}
}


