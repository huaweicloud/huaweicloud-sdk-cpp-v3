

#include "huaweicloud/cce/v3/model/AwakeClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AwakeClusterRequest::AwakeClusterRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

AwakeClusterRequest::~AwakeClusterRequest() = default;

void AwakeClusterRequest::validate()
{
}

web::json::value AwakeClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool AwakeClusterRequest::fromJson(const web::json::value& val)
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


std::string AwakeClusterRequest::getClusterId() const
{
    return clusterId_;
}

void AwakeClusterRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool AwakeClusterRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void AwakeClusterRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


