

#include "huaweicloud/cce/v3/model/NodeCheckStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeCheckStatus::NodeCheckStatus()
{
    phase_ = "";
    phaseIsSet_ = false;
    nodeStageStatusIsSet_ = false;
}

NodeCheckStatus::~NodeCheckStatus() = default;

void NodeCheckStatus::validate()
{
}

web::json::value NodeCheckStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(nodeStageStatusIsSet_) {
        val[utility::conversions::to_string_t("nodeStageStatus")] = ModelBase::toJson(nodeStageStatus_);
    }

    return val;
}
bool NodeCheckStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeStageStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeStageStatus"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeStageStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeStageStatus(refVal);
        }
    }
    return ok;
}


std::string NodeCheckStatus::getPhase() const
{
    return phase_;
}

void NodeCheckStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool NodeCheckStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void NodeCheckStatus::unsetphase()
{
    phaseIsSet_ = false;
}

std::vector<NodeStageStatus>& NodeCheckStatus::getNodeStageStatus()
{
    return nodeStageStatus_;
}

void NodeCheckStatus::setNodeStageStatus(const std::vector<NodeStageStatus>& value)
{
    nodeStageStatus_ = value;
    nodeStageStatusIsSet_ = true;
}

bool NodeCheckStatus::nodeStageStatusIsSet() const
{
    return nodeStageStatusIsSet_;
}

void NodeCheckStatus::unsetnodeStageStatus()
{
    nodeStageStatusIsSet_ = false;
}

}
}
}
}
}


