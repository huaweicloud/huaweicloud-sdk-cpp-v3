

#include "huaweicloud/cce/v3/model/ShowClusterConfigurationDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowClusterConfigurationDetailsRequest::ShowClusterConfigurationDetailsRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ShowClusterConfigurationDetailsRequest::~ShowClusterConfigurationDetailsRequest() = default;

void ShowClusterConfigurationDetailsRequest::validate()
{
}

web::json::value ShowClusterConfigurationDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ShowClusterConfigurationDetailsRequest::fromJson(const web::json::value& val)
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


std::string ShowClusterConfigurationDetailsRequest::getClusterId() const
{
    return clusterId_;
}

void ShowClusterConfigurationDetailsRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowClusterConfigurationDetailsRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowClusterConfigurationDetailsRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


