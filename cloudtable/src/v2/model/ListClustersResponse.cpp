

#include "huaweicloud/cloudtable/v2/model/ListClustersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




ListClustersResponse::ListClustersResponse()
{
    clustersIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ListClustersResponse::~ListClustersResponse() = default;

void ListClustersResponse::validate()
{
}

web::json::value ListClustersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clustersIsSet_) {
        val[utility::conversions::to_string_t("clusters")] = ModelBase::toJson(clusters_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListClustersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clusters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusters"));
        if(!fieldValue.is_null())
        {
            std::vector<ClusterDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::vector<ClusterDetail>& ListClustersResponse::getClusters()
{
    return clusters_;
}

void ListClustersResponse::setClusters(const std::vector<ClusterDetail>& value)
{
    clusters_ = value;
    clustersIsSet_ = true;
}

bool ListClustersResponse::clustersIsSet() const
{
    return clustersIsSet_;
}

void ListClustersResponse::unsetclusters()
{
    clustersIsSet_ = false;
}

int32_t ListClustersResponse::getCount() const
{
    return count_;
}

void ListClustersResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListClustersResponse::countIsSet() const
{
    return countIsSet_;
}

void ListClustersResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


