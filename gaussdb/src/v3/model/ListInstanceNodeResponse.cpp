

#include "huaweicloud/gaussdb/v3/model/ListInstanceNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListInstanceNodeResponse::ListInstanceNodeResponse()
{
    nodeListIsSet_ = false;
}

ListInstanceNodeResponse::~ListInstanceNodeResponse() = default;

void ListInstanceNodeResponse::validate()
{
}

web::json::value ListInstanceNodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeListIsSet_) {
        val[utility::conversions::to_string_t("node_list")] = ModelBase::toJson(nodeList_);
    }

    return val;
}
bool ListInstanceNodeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_list"));
        if(!fieldValue.is_null())
        {
            std::vector<HtapNodeInfoResponseBody_node_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeList(refVal);
        }
    }
    return ok;
}


std::vector<HtapNodeInfoResponseBody_node_list>& ListInstanceNodeResponse::getNodeList()
{
    return nodeList_;
}

void ListInstanceNodeResponse::setNodeList(const std::vector<HtapNodeInfoResponseBody_node_list>& value)
{
    nodeList_ = value;
    nodeListIsSet_ = true;
}

bool ListInstanceNodeResponse::nodeListIsSet() const
{
    return nodeListIsSet_;
}

void ListInstanceNodeResponse::unsetnodeList()
{
    nodeListIsSet_ = false;
}

}
}
}
}
}


