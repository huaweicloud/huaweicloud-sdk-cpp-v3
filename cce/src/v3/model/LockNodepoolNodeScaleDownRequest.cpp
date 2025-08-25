

#include "huaweicloud/cce/v3/model/LockNodepoolNodeScaleDownRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




LockNodepoolNodeScaleDownRequest::LockNodepoolNodeScaleDownRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

LockNodepoolNodeScaleDownRequest::~LockNodepoolNodeScaleDownRequest() = default;

void LockNodepoolNodeScaleDownRequest::validate()
{
}

web::json::value LockNodepoolNodeScaleDownRequest::toJson() const
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
bool LockNodepoolNodeScaleDownRequest::fromJson(const web::json::value& val)
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
            LockNodeScaledownRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string LockNodepoolNodeScaleDownRequest::getClusterId() const
{
    return clusterId_;
}

void LockNodepoolNodeScaleDownRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool LockNodepoolNodeScaleDownRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void LockNodepoolNodeScaleDownRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

LockNodeScaledownRequestBody LockNodepoolNodeScaleDownRequest::getBody() const
{
    return body_;
}

void LockNodepoolNodeScaleDownRequest::setBody(const LockNodeScaledownRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool LockNodepoolNodeScaleDownRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void LockNodepoolNodeScaleDownRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


