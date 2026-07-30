

#include "huaweicloud/modelarts/v1/model/BatchUnlockPoolNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchUnlockPoolNodesResponse::BatchUnlockPoolNodesResponse()
{
    nodesIsSet_ = false;
}

BatchUnlockPoolNodesResponse::~BatchUnlockPoolNodesResponse() = default;

void BatchUnlockPoolNodesResponse::validate()
{
}

web::json::value BatchUnlockPoolNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }

    return val;
}
bool BatchUnlockPoolNodesResponse::fromJson(const web::json::value& val)
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


std::vector<NodesResultMsg>& BatchUnlockPoolNodesResponse::getNodes()
{
    return nodes_;
}

void BatchUnlockPoolNodesResponse::setNodes(const std::vector<NodesResultMsg>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool BatchUnlockPoolNodesResponse::nodesIsSet() const
{
    return nodesIsSet_;
}

void BatchUnlockPoolNodesResponse::unsetnodes()
{
    nodesIsSet_ = false;
}

}
}
}
}
}


