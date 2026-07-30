

#include "huaweicloud/modelarts/v1/model/ListHyperClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListHyperClusterResponse::ListHyperClusterResponse()
{
    hyperClustersIsSet_ = false;
}

ListHyperClusterResponse::~ListHyperClusterResponse() = default;

void ListHyperClusterResponse::validate()
{
}

web::json::value ListHyperClusterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hyperClustersIsSet_) {
        val[utility::conversions::to_string_t("hyper_clusters")] = ModelBase::toJson(hyperClusters_);
    }

    return val;
}
bool ListHyperClusterResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hyper_clusters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hyper_clusters"));
        if(!fieldValue.is_null())
        {
            std::vector<HyperCluster> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHyperClusters(refVal);
        }
    }
    return ok;
}


std::vector<HyperCluster>& ListHyperClusterResponse::getHyperClusters()
{
    return hyperClusters_;
}

void ListHyperClusterResponse::setHyperClusters(const std::vector<HyperCluster>& value)
{
    hyperClusters_ = value;
    hyperClustersIsSet_ = true;
}

bool ListHyperClusterResponse::hyperClustersIsSet() const
{
    return hyperClustersIsSet_;
}

void ListHyperClusterResponse::unsethyperClusters()
{
    hyperClustersIsSet_ = false;
}

}
}
}
}
}


