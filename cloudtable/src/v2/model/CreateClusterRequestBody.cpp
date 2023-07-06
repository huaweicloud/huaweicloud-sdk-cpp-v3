

#include "huaweicloud/cloudtable/v2/model/CreateClusterRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




CreateClusterRequestBody::CreateClusterRequestBody()
{
    clusterIsSet_ = false;
}

CreateClusterRequestBody::~CreateClusterRequestBody() = default;

void CreateClusterRequestBody::validate()
{
}

web::json::value CreateClusterRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIsSet_) {
        val[utility::conversions::to_string_t("cluster")] = ModelBase::toJson(cluster_);
    }

    return val;
}

bool CreateClusterRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster"));
        if(!fieldValue.is_null())
        {
            Cluster refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCluster(refVal);
        }
    }
    return ok;
}

Cluster CreateClusterRequestBody::getCluster() const
{
    return cluster_;
}

void CreateClusterRequestBody::setCluster(const Cluster& value)
{
    cluster_ = value;
    clusterIsSet_ = true;
}

bool CreateClusterRequestBody::clusterIsSet() const
{
    return clusterIsSet_;
}

void CreateClusterRequestBody::unsetcluster()
{
    clusterIsSet_ = false;
}

}
}
}
}
}


