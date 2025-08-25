

#include "huaweicloud/cce/v3/model/ShowClusterUpgradeInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowClusterUpgradeInfoRequest::ShowClusterUpgradeInfoRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

ShowClusterUpgradeInfoRequest::~ShowClusterUpgradeInfoRequest() = default;

void ShowClusterUpgradeInfoRequest::validate()
{
}

web::json::value ShowClusterUpgradeInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool ShowClusterUpgradeInfoRequest::fromJson(const web::json::value& val)
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


std::string ShowClusterUpgradeInfoRequest::getClusterId() const
{
    return clusterId_;
}

void ShowClusterUpgradeInfoRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowClusterUpgradeInfoRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowClusterUpgradeInfoRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


