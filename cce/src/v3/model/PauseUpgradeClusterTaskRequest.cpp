

#include "huaweicloud/cce/v3/model/PauseUpgradeClusterTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PauseUpgradeClusterTaskRequest::PauseUpgradeClusterTaskRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
}

PauseUpgradeClusterTaskRequest::~PauseUpgradeClusterTaskRequest() = default;

void PauseUpgradeClusterTaskRequest::validate()
{
}

web::json::value PauseUpgradeClusterTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }

    return val;
}
bool PauseUpgradeClusterTaskRequest::fromJson(const web::json::value& val)
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


std::string PauseUpgradeClusterTaskRequest::getClusterId() const
{
    return clusterId_;
}

void PauseUpgradeClusterTaskRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool PauseUpgradeClusterTaskRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void PauseUpgradeClusterTaskRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

}
}
}
}
}


