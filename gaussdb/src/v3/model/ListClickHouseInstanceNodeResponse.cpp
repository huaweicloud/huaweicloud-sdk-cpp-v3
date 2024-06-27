

#include "huaweicloud/gaussdb/v3/model/ListClickHouseInstanceNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListClickHouseInstanceNodeResponse::ListClickHouseInstanceNodeResponse()
{
    nodeListIsSet_ = false;
}

ListClickHouseInstanceNodeResponse::~ListClickHouseInstanceNodeResponse() = default;

void ListClickHouseInstanceNodeResponse::validate()
{
}

web::json::value ListClickHouseInstanceNodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeListIsSet_) {
        val[utility::conversions::to_string_t("node_list")] = ModelBase::toJson(nodeList_);
    }

    return val;
}
bool ListClickHouseInstanceNodeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ClickHouseNodeInfoResponseBody_node_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeList(refVal);
        }
    }
    return ok;
}


std::vector<ClickHouseNodeInfoResponseBody_node_list>& ListClickHouseInstanceNodeResponse::getNodeList()
{
    return nodeList_;
}

void ListClickHouseInstanceNodeResponse::setNodeList(const std::vector<ClickHouseNodeInfoResponseBody_node_list>& value)
{
    nodeList_ = value;
    nodeListIsSet_ = true;
}

bool ListClickHouseInstanceNodeResponse::nodeListIsSet() const
{
    return nodeListIsSet_;
}

void ListClickHouseInstanceNodeResponse::unsetnodeList()
{
    nodeListIsSet_ = false;
}

}
}
}
}
}


