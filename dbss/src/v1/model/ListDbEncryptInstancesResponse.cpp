

#include "huaweicloud/dbss/v1/model/ListDbEncryptInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListDbEncryptInstancesResponse::ListDbEncryptInstancesResponse()
{
    clustersIsSet_ = false;
}

ListDbEncryptInstancesResponse::~ListDbEncryptInstancesResponse() = default;

void ListDbEncryptInstancesResponse::validate()
{
}

web::json::value ListDbEncryptInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clustersIsSet_) {
        val[utility::conversions::to_string_t("clusters")] = ModelBase::toJson(clusters_);
    }

    return val;
}
bool ListDbEncryptInstancesResponse::fromJson(const web::json::value& val)
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


std::vector<Cluster>& ListDbEncryptInstancesResponse::getClusters()
{
    return clusters_;
}

void ListDbEncryptInstancesResponse::setClusters(const std::vector<Cluster>& value)
{
    clusters_ = value;
    clustersIsSet_ = true;
}

bool ListDbEncryptInstancesResponse::clustersIsSet() const
{
    return clustersIsSet_;
}

void ListDbEncryptInstancesResponse::unsetclusters()
{
    clustersIsSet_ = false;
}

}
}
}
}
}


