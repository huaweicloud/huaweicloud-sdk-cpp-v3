

#include "huaweicloud/modelarts/v1/model/ShowClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowClusterRequest::ShowClusterRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ShowClusterRequest::~ShowClusterRequest() = default;

void ShowClusterRequest::validate()
{
}

web::json::value ShowClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ShowClusterRequest::fromJson(const web::json::value& val)
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


std::string ShowClusterRequest::getClusterId() const
{
    return clusterId_;
}

void ShowClusterRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowClusterRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowClusterRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


