

#include "huaweicloud/cce/v3/model/UpdateClusterLongAkskConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateClusterLongAkskConfigRequest::UpdateClusterLongAkskConfigRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateClusterLongAkskConfigRequest::~UpdateClusterLongAkskConfigRequest() = default;

void UpdateClusterLongAkskConfigRequest::validate()
{
}

web::json::value UpdateClusterLongAkskConfigRequest::toJson() const
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
bool UpdateClusterLongAkskConfigRequest::fromJson(const web::json::value& val)
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
            UpdateClusterLongAKSKConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateClusterLongAkskConfigRequest::getClusterId() const
{
    return clusterId_;
}

void UpdateClusterLongAkskConfigRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdateClusterLongAkskConfigRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdateClusterLongAkskConfigRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

UpdateClusterLongAKSKConfigRequestBody UpdateClusterLongAkskConfigRequest::getBody() const
{
    return body_;
}

void UpdateClusterLongAkskConfigRequest::setBody(const UpdateClusterLongAKSKConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateClusterLongAkskConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateClusterLongAkskConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


