

#include "huaweicloud/cce/v3/model/RotateClusterCredentialsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




RotateClusterCredentialsRequest::RotateClusterCredentialsRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

RotateClusterCredentialsRequest::~RotateClusterCredentialsRequest() = default;

void RotateClusterCredentialsRequest::validate()
{
}

web::json::value RotateClusterCredentialsRequest::toJson() const
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
bool RotateClusterCredentialsRequest::fromJson(const web::json::value& val)
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
            RotateCredentialsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RotateClusterCredentialsRequest::getClusterId() const
{
    return clusterId_;
}

void RotateClusterCredentialsRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool RotateClusterCredentialsRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void RotateClusterCredentialsRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

RotateCredentialsRequestBody RotateClusterCredentialsRequest::getBody() const
{
    return body_;
}

void RotateClusterCredentialsRequest::setBody(const RotateCredentialsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RotateClusterCredentialsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RotateClusterCredentialsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


