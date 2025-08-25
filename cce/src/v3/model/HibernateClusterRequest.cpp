

#include "huaweicloud/cce/v3/model/HibernateClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




HibernateClusterRequest::HibernateClusterRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

HibernateClusterRequest::~HibernateClusterRequest() = default;

void HibernateClusterRequest::validate()
{
}

web::json::value HibernateClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool HibernateClusterRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    return ok;
}


std::string HibernateClusterRequest::getClusterId() const
{
    return clusterId_;
}

void HibernateClusterRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool HibernateClusterRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void HibernateClusterRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


