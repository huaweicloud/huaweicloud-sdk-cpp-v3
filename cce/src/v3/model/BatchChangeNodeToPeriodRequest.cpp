

#include "huaweicloud/cce/v3/model/BatchChangeNodeToPeriodRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




BatchChangeNodeToPeriodRequest::BatchChangeNodeToPeriodRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchChangeNodeToPeriodRequest::~BatchChangeNodeToPeriodRequest() = default;

void BatchChangeNodeToPeriodRequest::validate()
{
}

web::json::value BatchChangeNodeToPeriodRequest::toJson() const
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
bool BatchChangeNodeToPeriodRequest::fromJson(const web::json::value& val)
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
            BatchChangeNodeToPeriodReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchChangeNodeToPeriodRequest::getClusterId() const
{
    return clusterId_;
}

void BatchChangeNodeToPeriodRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool BatchChangeNodeToPeriodRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void BatchChangeNodeToPeriodRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

BatchChangeNodeToPeriodReqBody BatchChangeNodeToPeriodRequest::getBody() const
{
    return body_;
}

void BatchChangeNodeToPeriodRequest::setBody(const BatchChangeNodeToPeriodReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchChangeNodeToPeriodRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchChangeNodeToPeriodRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


