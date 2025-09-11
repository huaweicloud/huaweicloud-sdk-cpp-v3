

#include "huaweicloud/dbss/v1/model/ListInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListInstancesResponse::ListInstancesResponse()
{
    clustersIsSet_ = false;
}

ListInstancesResponse::~ListInstancesResponse() = default;

void ListInstancesResponse::validate()
{
}

web::json::value ListInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clustersIsSet_) {
        val[utility::conversions::to_string_t("clusters")] = ModelBase::toJson(clusters_);
    }

    return val;
}
bool ListInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clusters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusters"));
        if(!fieldValue.is_null())
        {
            std::vector<Cluster> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusters(refVal);
        }
    }
    return ok;
}


std::vector<Cluster>& ListInstancesResponse::getClusters()
{
    return clusters_;
}

void ListInstancesResponse::setClusters(const std::vector<Cluster>& value)
{
    clusters_ = value;
    clustersIsSet_ = true;
}

bool ListInstancesResponse::clustersIsSet() const
{
    return clustersIsSet_;
}

void ListInstancesResponse::unsetclusters()
{
    clustersIsSet_ = false;
}

}
}
}
}
}


