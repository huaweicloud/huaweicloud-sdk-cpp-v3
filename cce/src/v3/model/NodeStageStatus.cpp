

#include "huaweicloud/cce/v3/model/NodeStageStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeStageStatus::NodeStageStatus()
{
    nodeInfoIsSet_ = false;
    itemsStatusIsSet_ = false;
}

NodeStageStatus::~NodeStageStatus() = default;

void NodeStageStatus::validate()
{
}

web::json::value NodeStageStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeInfoIsSet_) {
        val[utility::conversions::to_string_t("nodeInfo")] = ModelBase::toJson(nodeInfo_);
    }
    if(itemsStatusIsSet_) {
        val[utility::conversions::to_string_t("itemsStatus")] = ModelBase::toJson(itemsStatus_);
    }

    return val;
}
bool NodeStageStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodeInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeInfo"));
        if(!fieldValue.is_null())
        {
            NodeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("itemsStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("itemsStatus"));
        if(!fieldValue.is_null())
        {
            std::vector<PreCheckItemStatus> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemsStatus(refVal);
        }
    }
    return ok;
}


NodeInfo NodeStageStatus::getNodeInfo() const
{
    return nodeInfo_;
}

void NodeStageStatus::setNodeInfo(const NodeInfo& value)
{
    nodeInfo_ = value;
    nodeInfoIsSet_ = true;
}

bool NodeStageStatus::nodeInfoIsSet() const
{
    return nodeInfoIsSet_;
}

void NodeStageStatus::unsetnodeInfo()
{
    nodeInfoIsSet_ = false;
}

std::vector<PreCheckItemStatus>& NodeStageStatus::getItemsStatus()
{
    return itemsStatus_;
}

void NodeStageStatus::setItemsStatus(const std::vector<PreCheckItemStatus>& value)
{
    itemsStatus_ = value;
    itemsStatusIsSet_ = true;
}

bool NodeStageStatus::itemsStatusIsSet() const
{
    return itemsStatusIsSet_;
}

void NodeStageStatus::unsetitemsStatus()
{
    itemsStatusIsSet_ = false;
}

}
}
}
}
}


