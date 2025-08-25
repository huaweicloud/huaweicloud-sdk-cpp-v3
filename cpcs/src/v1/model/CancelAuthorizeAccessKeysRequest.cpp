

#include "huaweicloud/cpcs/v1/model/CancelAuthorizeAccessKeysRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




CancelAuthorizeAccessKeysRequest::CancelAuthorizeAccessKeysRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

CancelAuthorizeAccessKeysRequest::~CancelAuthorizeAccessKeysRequest() = default;

void CancelAuthorizeAccessKeysRequest::validate()
{
}

web::json::value CancelAuthorizeAccessKeysRequest::toJson() const
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
bool CancelAuthorizeAccessKeysRequest::fromJson(const web::json::value& val)
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
            DeAuthorizeAccessKeysRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CancelAuthorizeAccessKeysRequest::getClusterId() const
{
    return clusterId_;
}

void CancelAuthorizeAccessKeysRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CancelAuthorizeAccessKeysRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CancelAuthorizeAccessKeysRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

DeAuthorizeAccessKeysRequestBody CancelAuthorizeAccessKeysRequest::getBody() const
{
    return body_;
}

void CancelAuthorizeAccessKeysRequest::setBody(const DeAuthorizeAccessKeysRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CancelAuthorizeAccessKeysRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CancelAuthorizeAccessKeysRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


