

#include "huaweicloud/cce/v3/model/UpdateClusterEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateClusterEipRequest::UpdateClusterEipRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateClusterEipRequest::~UpdateClusterEipRequest() = default;

void UpdateClusterEipRequest::validate()
{
}

web::json::value UpdateClusterEipRequest::toJson() const
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
bool UpdateClusterEipRequest::fromJson(const web::json::value& val)
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
            MasterEIPRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateClusterEipRequest::getClusterId() const
{
    return clusterId_;
}

void UpdateClusterEipRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdateClusterEipRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdateClusterEipRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

MasterEIPRequest UpdateClusterEipRequest::getBody() const
{
    return body_;
}

void UpdateClusterEipRequest::setBody(const MasterEIPRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateClusterEipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateClusterEipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


