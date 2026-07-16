

#include "huaweicloud/cce/v3/model/RotateNodeCertRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




RotateNodeCertRequest::RotateNodeCertRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

RotateNodeCertRequest::~RotateNodeCertRequest() = default;

void RotateNodeCertRequest::validate()
{
}

web::json::value RotateNodeCertRequest::toJson() const
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
bool RotateNodeCertRequest::fromJson(const web::json::value& val)
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
            RotateCertNodeList refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RotateNodeCertRequest::getClusterId() const
{
    return clusterId_;
}

void RotateNodeCertRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool RotateNodeCertRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void RotateNodeCertRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

RotateCertNodeList RotateNodeCertRequest::getBody() const
{
    return body_;
}

void RotateNodeCertRequest::setBody(const RotateCertNodeList& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RotateNodeCertRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RotateNodeCertRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


