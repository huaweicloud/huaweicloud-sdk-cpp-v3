

#include "huaweicloud/modelarts/v1/model/BatchLockPoolNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchLockPoolNodesResponse::BatchLockPoolNodesResponse()
{
    nodesIsSet_ = false;
}

BatchLockPoolNodesResponse::~BatchLockPoolNodesResponse() = default;

void BatchLockPoolNodesResponse::validate()
{
}

web::json::value BatchLockPoolNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }

    return val;
}
bool BatchLockPoolNodesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<NodesResultMsg> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    return ok;
}


std::vector<NodesResultMsg>& BatchLockPoolNodesResponse::getNodes()
{
    return nodes_;
}

void BatchLockPoolNodesResponse::setNodes(const std::vector<NodesResultMsg>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool BatchLockPoolNodesResponse::nodesIsSet() const
{
    return nodesIsSet_;
}

void BatchLockPoolNodesResponse::unsetnodes()
{
    nodesIsSet_ = false;
}

}
}
}
}
}


