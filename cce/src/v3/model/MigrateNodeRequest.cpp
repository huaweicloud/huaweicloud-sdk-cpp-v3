

#include "huaweicloud/cce/v3/model/MigrateNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MigrateNodeRequest::MigrateNodeRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    targetClusterId_ = "";
    targetClusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

MigrateNodeRequest::~MigrateNodeRequest() = default;

void MigrateNodeRequest::validate()
{
}

web::json::value MigrateNodeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(targetClusterIdIsSet_) {
        val[utility::conversions::to_string_t("target_cluster_id")] = ModelBase::toJson(targetClusterId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool MigrateNodeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("target_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            MigrateNodesTask refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string MigrateNodeRequest::getClusterId() const
{
    return clusterId_;
}

void MigrateNodeRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool MigrateNodeRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void MigrateNodeRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string MigrateNodeRequest::getTargetClusterId() const
{
    return targetClusterId_;
}

void MigrateNodeRequest::setTargetClusterId(const std::string& value)
{
    targetClusterId_ = value;
    targetClusterIdIsSet_ = true;
}

bool MigrateNodeRequest::targetClusterIdIsSet() const
{
    return targetClusterIdIsSet_;
}

void MigrateNodeRequest::unsettargetClusterId()
{
    targetClusterIdIsSet_ = false;
}

MigrateNodesTask MigrateNodeRequest::getBody() const
{
    return body_;
}

void MigrateNodeRequest::setBody(const MigrateNodesTask& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool MigrateNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void MigrateNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


