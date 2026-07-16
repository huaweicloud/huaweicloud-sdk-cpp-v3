

#include "huaweicloud/cce/v3/model/AssumeAgencyForPodIdentityRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AssumeAgencyForPodIdentityRequest::AssumeAgencyForPodIdentityRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

AssumeAgencyForPodIdentityRequest::~AssumeAgencyForPodIdentityRequest() = default;

void AssumeAgencyForPodIdentityRequest::validate()
{
}

web::json::value AssumeAgencyForPodIdentityRequest::toJson() const
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
bool AssumeAgencyForPodIdentityRequest::fromJson(const web::json::value& val)
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
            AssumeAgencyForPodIdentityRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AssumeAgencyForPodIdentityRequest::getClusterId() const
{
    return clusterId_;
}

void AssumeAgencyForPodIdentityRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool AssumeAgencyForPodIdentityRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void AssumeAgencyForPodIdentityRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

AssumeAgencyForPodIdentityRequestBody AssumeAgencyForPodIdentityRequest::getBody() const
{
    return body_;
}

void AssumeAgencyForPodIdentityRequest::setBody(const AssumeAgencyForPodIdentityRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AssumeAgencyForPodIdentityRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AssumeAgencyForPodIdentityRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


