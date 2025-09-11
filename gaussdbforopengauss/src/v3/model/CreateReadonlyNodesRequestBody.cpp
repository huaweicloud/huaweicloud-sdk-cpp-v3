

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateReadonlyNodesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateReadonlyNodesRequestBody::CreateReadonlyNodesRequestBody()
{
    nodeDistributionIsSet_ = false;
}

CreateReadonlyNodesRequestBody::~CreateReadonlyNodesRequestBody() = default;

void CreateReadonlyNodesRequestBody::validate()
{
}

web::json::value CreateReadonlyNodesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeDistributionIsSet_) {
        val[utility::conversions::to_string_t("node_distribution")] = ModelBase::toJson(nodeDistribution_);
    }

    return val;
}
bool CreateReadonlyNodesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_distribution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_distribution"));
        if(!fieldValue.is_null())
        {
            std::vector<NodeDistributionOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeDistribution(refVal);
        }
    }
    return ok;
}


std::vector<NodeDistributionOption>& CreateReadonlyNodesRequestBody::getNodeDistribution()
{
    return nodeDistribution_;
}

void CreateReadonlyNodesRequestBody::setNodeDistribution(const std::vector<NodeDistributionOption>& value)
{
    nodeDistribution_ = value;
    nodeDistributionIsSet_ = true;
}

bool CreateReadonlyNodesRequestBody::nodeDistributionIsSet() const
{
    return nodeDistributionIsSet_;
}

void CreateReadonlyNodesRequestBody::unsetnodeDistribution()
{
    nodeDistributionIsSet_ = false;
}

}
}
}
}
}


