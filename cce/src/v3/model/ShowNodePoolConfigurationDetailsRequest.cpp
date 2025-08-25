

#include "huaweicloud/cce/v3/model/ShowNodePoolConfigurationDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowNodePoolConfigurationDetailsRequest::ShowNodePoolConfigurationDetailsRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    nodepoolId_ = "";
    nodepoolIdIsSet_ = false;
}

ShowNodePoolConfigurationDetailsRequest::~ShowNodePoolConfigurationDetailsRequest() = default;

void ShowNodePoolConfigurationDetailsRequest::validate()
{
}

web::json::value ShowNodePoolConfigurationDetailsRequest::toJson() const
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
bool ShowNodePoolConfigurationDetailsRequest::fromJson(const web::json::value& val)
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


std::string ShowNodePoolConfigurationDetailsRequest::getClusterId() const
{
    return clusterId_;
}

void ShowNodePoolConfigurationDetailsRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowNodePoolConfigurationDetailsRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowNodePoolConfigurationDetailsRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowNodePoolConfigurationDetailsRequest::getNodepoolId() const
{
    return nodepoolId_;
}

void ShowNodePoolConfigurationDetailsRequest::setNodepoolId(const std::string& value)
{
    nodepoolId_ = value;
    nodepoolIdIsSet_ = true;
}

bool ShowNodePoolConfigurationDetailsRequest::nodepoolIdIsSet() const
{
    return nodepoolIdIsSet_;
}

void ShowNodePoolConfigurationDetailsRequest::unsetnodepoolId()
{
    nodepoolIdIsSet_ = false;
}

}
}
}
}
}


