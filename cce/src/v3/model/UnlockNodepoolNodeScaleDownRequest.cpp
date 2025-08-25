

#include "huaweicloud/cce/v3/model/UnlockNodepoolNodeScaleDownRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UnlockNodepoolNodeScaleDownRequest::UnlockNodepoolNodeScaleDownRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

UnlockNodepoolNodeScaleDownRequest::~UnlockNodepoolNodeScaleDownRequest() = default;

void UnlockNodepoolNodeScaleDownRequest::validate()
{
}

web::json::value UnlockNodepoolNodeScaleDownRequest::toJson() const
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
bool UnlockNodepoolNodeScaleDownRequest::fromJson(const web::json::value& val)
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
            UnlockNodeScaledownRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UnlockNodepoolNodeScaleDownRequest::getClusterId() const
{
    return clusterId_;
}

void UnlockNodepoolNodeScaleDownRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UnlockNodepoolNodeScaleDownRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UnlockNodepoolNodeScaleDownRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

UnlockNodeScaledownRequestBody UnlockNodepoolNodeScaleDownRequest::getBody() const
{
    return body_;
}

void UnlockNodepoolNodeScaleDownRequest::setBody(const UnlockNodeScaledownRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UnlockNodepoolNodeScaleDownRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UnlockNodepoolNodeScaleDownRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


