

#include "huaweicloud/cpcs/v1/model/DeleteCcspClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




DeleteCcspClusterRequest::DeleteCcspClusterRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

DeleteCcspClusterRequest::~DeleteCcspClusterRequest() = default;

void DeleteCcspClusterRequest::validate()
{
}

web::json::value DeleteCcspClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool DeleteCcspClusterRequest::fromJson(const web::json::value& val)
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


std::string DeleteCcspClusterRequest::getClusterId() const
{
    return clusterId_;
}

void DeleteCcspClusterRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool DeleteCcspClusterRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void DeleteCcspClusterRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


