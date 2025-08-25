

#include "huaweicloud/cpcs/v1/model/ShowCcspClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowCcspClusterRequest::ShowCcspClusterRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ShowCcspClusterRequest::~ShowCcspClusterRequest() = default;

void ShowCcspClusterRequest::validate()
{
}

web::json::value ShowCcspClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ShowCcspClusterRequest::fromJson(const web::json::value& val)
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


std::string ShowCcspClusterRequest::getClusterId() const
{
    return clusterId_;
}

void ShowCcspClusterRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowCcspClusterRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowCcspClusterRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


