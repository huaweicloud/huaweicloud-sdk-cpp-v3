

#include "huaweicloud/gaussdbforopengauss/v3/model/ListKeyViewExecuteNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListKeyViewExecuteNodeResponse::ListKeyViewExecuteNodeResponse()
{
    nodesIsSet_ = false;
}

ListKeyViewExecuteNodeResponse::~ListKeyViewExecuteNodeResponse() = default;

void ListKeyViewExecuteNodeResponse::validate()
{
}

web::json::value ListKeyViewExecuteNodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }

    return val;
}
bool ListKeyViewExecuteNodeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<OpsKeyViewExecuteNodeResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    return ok;
}


std::vector<OpsKeyViewExecuteNodeResult>& ListKeyViewExecuteNodeResponse::getNodes()
{
    return nodes_;
}

void ListKeyViewExecuteNodeResponse::setNodes(const std::vector<OpsKeyViewExecuteNodeResult>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool ListKeyViewExecuteNodeResponse::nodesIsSet() const
{
    return nodesIsSet_;
}

void ListKeyViewExecuteNodeResponse::unsetnodes()
{
    nodesIsSet_ = false;
}

}
}
}
}
}


