

#include "huaweicloud/cce/v3/model/CreateNodePoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateNodePoolRequest::CreateNodePoolRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateNodePoolRequest::~CreateNodePoolRequest() = default;

void CreateNodePoolRequest::validate()
{
}

web::json::value CreateNodePoolRequest::toJson() const
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
bool CreateNodePoolRequest::fromJson(const web::json::value& val)
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
            NodePool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateNodePoolRequest::getClusterId() const
{
    return clusterId_;
}

void CreateNodePoolRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateNodePoolRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateNodePoolRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

NodePool CreateNodePoolRequest::getBody() const
{
    return body_;
}

void CreateNodePoolRequest::setBody(const NodePool& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateNodePoolRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateNodePoolRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


