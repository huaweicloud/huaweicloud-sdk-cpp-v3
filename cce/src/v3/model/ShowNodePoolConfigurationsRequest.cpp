

#include "huaweicloud/cce/v3/model/ShowNodePoolConfigurationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowNodePoolConfigurationsRequest::ShowNodePoolConfigurationsRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    nodepoolId_ = "";
    nodepoolIdIsSet_ = false;
}

ShowNodePoolConfigurationsRequest::~ShowNodePoolConfigurationsRequest() = default;

void ShowNodePoolConfigurationsRequest::validate()
{
}

web::json::value ShowNodePoolConfigurationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(nodepoolIdIsSet_) {
        val[utility::conversions::to_string_t("nodepool_id")] = ModelBase::toJson(nodepoolId_);
    }

    return val;
}
bool ShowNodePoolConfigurationsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("nodepool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodepool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodepoolId(refVal);
        }
    }
    return ok;
}


std::string ShowNodePoolConfigurationsRequest::getClusterId() const
{
    return clusterId_;
}

void ShowNodePoolConfigurationsRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowNodePoolConfigurationsRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowNodePoolConfigurationsRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowNodePoolConfigurationsRequest::getNodepoolId() const
{
    return nodepoolId_;
}

void ShowNodePoolConfigurationsRequest::setNodepoolId(const std::string& value)
{
    nodepoolId_ = value;
    nodepoolIdIsSet_ = true;
}

bool ShowNodePoolConfigurationsRequest::nodepoolIdIsSet() const
{
    return nodepoolIdIsSet_;
}

void ShowNodePoolConfigurationsRequest::unsetnodepoolId()
{
    nodepoolIdIsSet_ = false;
}

}
}
}
}
}


