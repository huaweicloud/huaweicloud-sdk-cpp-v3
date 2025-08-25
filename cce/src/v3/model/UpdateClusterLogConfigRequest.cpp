

#include "huaweicloud/cce/v3/model/UpdateClusterLogConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateClusterLogConfigRequest::UpdateClusterLogConfigRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateClusterLogConfigRequest::~UpdateClusterLogConfigRequest() = default;

void UpdateClusterLogConfigRequest::validate()
{
}

web::json::value UpdateClusterLogConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateClusterLogConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ClusterLogConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateClusterLogConfigRequest::getClusterId() const
{
    return clusterId_;
}

void UpdateClusterLogConfigRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdateClusterLogConfigRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdateClusterLogConfigRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

ClusterLogConfig UpdateClusterLogConfigRequest::getBody() const
{
    return body_;
}

void UpdateClusterLogConfigRequest::setBody(const ClusterLogConfig& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateClusterLogConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateClusterLogConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


