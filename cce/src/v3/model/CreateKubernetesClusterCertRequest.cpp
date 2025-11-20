

#include "huaweicloud/cce/v3/model/CreateKubernetesClusterCertRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateKubernetesClusterCertRequest::CreateKubernetesClusterCertRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateKubernetesClusterCertRequest::~CreateKubernetesClusterCertRequest() = default;

void CreateKubernetesClusterCertRequest::validate()
{
}

web::json::value CreateKubernetesClusterCertRequest::toJson() const
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
bool CreateKubernetesClusterCertRequest::fromJson(const web::json::value& val)
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
            ClusterCertDuration refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateKubernetesClusterCertRequest::getClusterId() const
{
    return clusterId_;
}

void CreateKubernetesClusterCertRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateKubernetesClusterCertRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateKubernetesClusterCertRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

ClusterCertDuration CreateKubernetesClusterCertRequest::getBody() const
{
    return body_;
}

void CreateKubernetesClusterCertRequest::setBody(const ClusterCertDuration& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateKubernetesClusterCertRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateKubernetesClusterCertRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


