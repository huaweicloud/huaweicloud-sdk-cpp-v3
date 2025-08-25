

#include "huaweicloud/cpcs/v1/model/ShowClusterUriRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowClusterUriRequest::ShowClusterUriRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ShowClusterUriRequest::~ShowClusterUriRequest() = default;

void ShowClusterUriRequest::validate()
{
}

web::json::value ShowClusterUriRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ShowClusterUriRequest::fromJson(const web::json::value& val)
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


std::string ShowClusterUriRequest::getClusterId() const
{
    return clusterId_;
}

void ShowClusterUriRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowClusterUriRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowClusterUriRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


