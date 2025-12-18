

#include "huaweicloud/cce/v3/model/MigrateNodesToNodePool.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MigrateNodesToNodePool::MigrateNodesToNodePool()
{
    nodeID_ = "";
    nodeIDIsSet_ = false;
}

MigrateNodesToNodePool::~MigrateNodesToNodePool() = default;

void MigrateNodesToNodePool::validate()
{
}

web::json::value MigrateNodesToNodePool::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIDIsSet_) {
        val[utility::conversions::to_string_t("nodeID")] = ModelBase::toJson(nodeID_);
    }

    return val;
}
bool MigrateNodesToNodePool::fromJson(const web::json::value& val)
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


std::string MigrateNodesToNodePool::getNodeID() const
{
    return nodeID_;
}

void MigrateNodesToNodePool::setNodeID(const std::string& value)
{
    nodeID_ = value;
    nodeIDIsSet_ = true;
}

bool MigrateNodesToNodePool::nodeIDIsSet() const
{
    return nodeIDIsSet_;
}

void MigrateNodesToNodePool::unsetnodeID()
{
    nodeIDIsSet_ = false;
}

}
}
}
}
}


