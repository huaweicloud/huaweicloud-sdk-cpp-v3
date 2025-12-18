

#include "huaweicloud/cce/v3/model/GetClusterLongAkskConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetClusterLongAkskConfigRequest::GetClusterLongAkskConfigRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

GetClusterLongAkskConfigRequest::~GetClusterLongAkskConfigRequest() = default;

void GetClusterLongAkskConfigRequest::validate()
{
}

web::json::value GetClusterLongAkskConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool GetClusterLongAkskConfigRequest::fromJson(const web::json::value& val)
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


std::string GetClusterLongAkskConfigRequest::getClusterId() const
{
    return clusterId_;
}

void GetClusterLongAkskConfigRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool GetClusterLongAkskConfigRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void GetClusterLongAkskConfigRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


