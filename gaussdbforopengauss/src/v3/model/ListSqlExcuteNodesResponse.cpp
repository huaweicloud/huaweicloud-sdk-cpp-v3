

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSqlExcuteNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSqlExcuteNodesResponse::ListSqlExcuteNodesResponse()
{
    nodesIsSet_ = false;
}

ListSqlExcuteNodesResponse::~ListSqlExcuteNodesResponse() = default;

void ListSqlExcuteNodesResponse::validate()
{
}

web::json::value ListSqlExcuteNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }

    return val;
}
bool ListSqlExcuteNodesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<ExcuteSQLNodeInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    return ok;
}


std::vector<ExcuteSQLNodeInfoResult>& ListSqlExcuteNodesResponse::getNodes()
{
    return nodes_;
}

void ListSqlExcuteNodesResponse::setNodes(const std::vector<ExcuteSQLNodeInfoResult>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool ListSqlExcuteNodesResponse::nodesIsSet() const
{
    return nodesIsSet_;
}

void ListSqlExcuteNodesResponse::unsetnodes()
{
    nodesIsSet_ = false;
}

}
}
}
}
}


