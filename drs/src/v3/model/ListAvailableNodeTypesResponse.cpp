

#include "huaweicloud/drs/v3/model/ListAvailableNodeTypesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListAvailableNodeTypesResponse::ListAvailableNodeTypesResponse()
{
    nodeTypesIsSet_ = false;
}

ListAvailableNodeTypesResponse::~ListAvailableNodeTypesResponse() = default;

void ListAvailableNodeTypesResponse::validate()
{
}

web::json::value ListAvailableNodeTypesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeTypesIsSet_) {
        val[utility::conversions::to_string_t("node_types")] = ModelBase::toJson(nodeTypes_);
    }

    return val;
}
bool ListAvailableNodeTypesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_types"));
        if(!fieldValue.is_null())
        {
            std::vector<QuerySupportNodeTypeBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeTypes(refVal);
        }
    }
    return ok;
}


std::vector<QuerySupportNodeTypeBean>& ListAvailableNodeTypesResponse::getNodeTypes()
{
    return nodeTypes_;
}

void ListAvailableNodeTypesResponse::setNodeTypes(const std::vector<QuerySupportNodeTypeBean>& value)
{
    nodeTypes_ = value;
    nodeTypesIsSet_ = true;
}

bool ListAvailableNodeTypesResponse::nodeTypesIsSet() const
{
    return nodeTypesIsSet_;
}

void ListAvailableNodeTypesResponse::unsetnodeTypes()
{
    nodeTypesIsSet_ = false;
}

}
}
}
}
}


