

#include "huaweicloud/cce/v3/model/SyncNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




SyncNodeRequest::SyncNodeRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
}

SyncNodeRequest::~SyncNodeRequest() = default;

void SyncNodeRequest::validate()
{
}

web::json::value SyncNodeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }

    return val;
}
bool SyncNodeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    return ok;
}


std::string SyncNodeRequest::getClusterId() const
{
    return clusterId_;
}

void SyncNodeRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool SyncNodeRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void SyncNodeRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string SyncNodeRequest::getNodeId() const
{
    return nodeId_;
}

void SyncNodeRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool SyncNodeRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void SyncNodeRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

}
}
}
}
}


