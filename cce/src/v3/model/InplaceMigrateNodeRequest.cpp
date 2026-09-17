

#include "huaweicloud/cce/v3/model/InplaceMigrateNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




InplaceMigrateNodeRequest::InplaceMigrateNodeRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    targetClusterId_ = "";
    targetClusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

InplaceMigrateNodeRequest::~InplaceMigrateNodeRequest() = default;

void InplaceMigrateNodeRequest::validate()
{
}

web::json::value InplaceMigrateNodeRequest::toJson() const
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
bool InplaceMigrateNodeRequest::fromJson(const web::json::value& val)
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
            InPlaceMigrate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string InplaceMigrateNodeRequest::getClusterId() const
{
    return clusterId_;
}

void InplaceMigrateNodeRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool InplaceMigrateNodeRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void InplaceMigrateNodeRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string InplaceMigrateNodeRequest::getTargetClusterId() const
{
    return targetClusterId_;
}

void InplaceMigrateNodeRequest::setTargetClusterId(const std::string& value)
{
    targetClusterId_ = value;
    targetClusterIdIsSet_ = true;
}

bool InplaceMigrateNodeRequest::targetClusterIdIsSet() const
{
    return targetClusterIdIsSet_;
}

void InplaceMigrateNodeRequest::unsettargetClusterId()
{
    targetClusterIdIsSet_ = false;
}

InPlaceMigrate InplaceMigrateNodeRequest::getBody() const
{
    return body_;
}

void InplaceMigrateNodeRequest::setBody(const InPlaceMigrate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool InplaceMigrateNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void InplaceMigrateNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


