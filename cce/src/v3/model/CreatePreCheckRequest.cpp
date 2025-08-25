

#include "huaweicloud/cce/v3/model/CreatePreCheckRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreatePreCheckRequest::CreatePreCheckRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePreCheckRequest::~CreatePreCheckRequest() = default;

void CreatePreCheckRequest::validate()
{
}

web::json::value CreatePreCheckRequest::toJson() const
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
bool CreatePreCheckRequest::fromJson(const web::json::value& val)
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
            PrecheckClusterRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePreCheckRequest::getClusterId() const
{
    return clusterId_;
}

void CreatePreCheckRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreatePreCheckRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreatePreCheckRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

PrecheckClusterRequestBody CreatePreCheckRequest::getBody() const
{
    return body_;
}

void CreatePreCheckRequest::setBody(const PrecheckClusterRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePreCheckRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePreCheckRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


