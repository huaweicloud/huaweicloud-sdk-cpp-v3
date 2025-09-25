

#include "huaweicloud/gaussdbforopengauss/v3/model/ListReadonlyNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListReadonlyNodesResponse::ListReadonlyNodesResponse()
{
    nodesIsSet_ = false;
    maxReadonlyNodeNum_ = 0;
    maxReadonlyNodeNumIsSet_ = false;
}

ListReadonlyNodesResponse::~ListReadonlyNodesResponse() = default;

void ListReadonlyNodesResponse::validate()
{
}

web::json::value ListReadonlyNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }
    if(maxReadonlyNodeNumIsSet_) {
        val[utility::conversions::to_string_t("max_readonly_node_num")] = ModelBase::toJson(maxReadonlyNodeNum_);
    }

    return val;
}
bool ListReadonlyNodesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<ListReadonlyNodesResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_readonly_node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_readonly_node_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxReadonlyNodeNum(refVal);
        }
    }
    return ok;
}


std::vector<ListReadonlyNodesResult>& ListReadonlyNodesResponse::getNodes()
{
    return nodes_;
}

void ListReadonlyNodesResponse::setNodes(const std::vector<ListReadonlyNodesResult>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool ListReadonlyNodesResponse::nodesIsSet() const
{
    return nodesIsSet_;
}

void ListReadonlyNodesResponse::unsetnodes()
{
    nodesIsSet_ = false;
}

int32_t ListReadonlyNodesResponse::getMaxReadonlyNodeNum() const
{
    return maxReadonlyNodeNum_;
}

void ListReadonlyNodesResponse::setMaxReadonlyNodeNum(int32_t value)
{
    maxReadonlyNodeNum_ = value;
    maxReadonlyNodeNumIsSet_ = true;
}

bool ListReadonlyNodesResponse::maxReadonlyNodeNumIsSet() const
{
    return maxReadonlyNodeNumIsSet_;
}

void ListReadonlyNodesResponse::unsetmaxReadonlyNodeNum()
{
    maxReadonlyNodeNumIsSet_ = false;
}

}
}
}
}
}


