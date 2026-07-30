

#include "huaweicloud/modelarts/v1/model/BatchBindPoolNodesReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchBindPoolNodesReq::BatchBindPoolNodesReq()
{
    nodesIsSet_ = false;
    drain_ = false;
    drainIsSet_ = false;
}

BatchBindPoolNodesReq::~BatchBindPoolNodesReq() = default;

void BatchBindPoolNodesReq::validate()
{
}

web::json::value BatchBindPoolNodesReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }
    if(drainIsSet_) {
        val[utility::conversions::to_string_t("drain")] = ModelBase::toJson(drain_);
    }

    return val;
}
bool BatchBindPoolNodesReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<BindNodeItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drain"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrain(refVal);
        }
    }
    return ok;
}


std::vector<BindNodeItem>& BatchBindPoolNodesReq::getNodes()
{
    return nodes_;
}

void BatchBindPoolNodesReq::setNodes(const std::vector<BindNodeItem>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool BatchBindPoolNodesReq::nodesIsSet() const
{
    return nodesIsSet_;
}

void BatchBindPoolNodesReq::unsetnodes()
{
    nodesIsSet_ = false;
}

bool BatchBindPoolNodesReq::isDrain() const
{
    return drain_;
}

void BatchBindPoolNodesReq::setDrain(bool value)
{
    drain_ = value;
    drainIsSet_ = true;
}

bool BatchBindPoolNodesReq::drainIsSet() const
{
    return drainIsSet_;
}

void BatchBindPoolNodesReq::unsetdrain()
{
    drainIsSet_ = false;
}

}
}
}
}
}


