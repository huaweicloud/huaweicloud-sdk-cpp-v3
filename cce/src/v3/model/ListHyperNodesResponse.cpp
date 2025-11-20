

#include "huaweicloud/cce/v3/model/ListHyperNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListHyperNodesResponse::ListHyperNodesResponse()
{
    hyperNodeListIsSet_ = false;
}

ListHyperNodesResponse::~ListHyperNodesResponse() = default;

void ListHyperNodesResponse::validate()
{
}

web::json::value ListHyperNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hyperNodeListIsSet_) {
        val[utility::conversions::to_string_t("hyperNodeList")] = ModelBase::toJson(hyperNodeList_);
    }

    return val;
}
bool ListHyperNodesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hyperNodeList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hyperNodeList"));
        if(!fieldValue.is_null())
        {
            std::vector<HyperNode> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHyperNodeList(refVal);
        }
    }
    return ok;
}


std::vector<HyperNode>& ListHyperNodesResponse::getHyperNodeList()
{
    return hyperNodeList_;
}

void ListHyperNodesResponse::setHyperNodeList(const std::vector<HyperNode>& value)
{
    hyperNodeList_ = value;
    hyperNodeListIsSet_ = true;
}

bool ListHyperNodesResponse::hyperNodeListIsSet() const
{
    return hyperNodeListIsSet_;
}

void ListHyperNodesResponse::unsethyperNodeList()
{
    hyperNodeListIsSet_ = false;
}

}
}
}
}
}


