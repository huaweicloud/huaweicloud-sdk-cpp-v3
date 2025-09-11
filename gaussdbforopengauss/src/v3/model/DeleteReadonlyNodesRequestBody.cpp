

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteReadonlyNodesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteReadonlyNodesRequestBody::DeleteReadonlyNodesRequestBody()
{
    nodeIdsIsSet_ = false;
}

DeleteReadonlyNodesRequestBody::~DeleteReadonlyNodesRequestBody() = default;

void DeleteReadonlyNodesRequestBody::validate()
{
}

web::json::value DeleteReadonlyNodesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdsIsSet_) {
        val[utility::conversions::to_string_t("node_ids")] = ModelBase::toJson(nodeIds_);
    }

    return val;
}
bool DeleteReadonlyNodesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeleteReadonlyNodesRequestBody::getNodeIds()
{
    return nodeIds_;
}

void DeleteReadonlyNodesRequestBody::setNodeIds(const std::vector<std::string>& value)
{
    nodeIds_ = value;
    nodeIdsIsSet_ = true;
}

bool DeleteReadonlyNodesRequestBody::nodeIdsIsSet() const
{
    return nodeIdsIsSet_;
}

void DeleteReadonlyNodesRequestBody::unsetnodeIds()
{
    nodeIdsIsSet_ = false;
}

}
}
}
}
}


