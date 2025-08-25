

#include "huaweicloud/cce/v3/model/CreateNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateNodeRequest::CreateNodeRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    nodepoolScaleUp_ = "";
    nodepoolScaleUpIsSet_ = false;
    bodyIsSet_ = false;
}

CreateNodeRequest::~CreateNodeRequest() = default;

void CreateNodeRequest::validate()
{
}

web::json::value CreateNodeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(nodepoolScaleUpIsSet_) {
        val[utility::conversions::to_string_t("nodepoolScaleUp")] = ModelBase::toJson(nodepoolScaleUp_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateNodeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("nodepoolScaleUp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodepoolScaleUp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodepoolScaleUp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NodeCreateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateNodeRequest::getClusterId() const
{
    return clusterId_;
}

void CreateNodeRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateNodeRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateNodeRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string CreateNodeRequest::getNodepoolScaleUp() const
{
    return nodepoolScaleUp_;
}

void CreateNodeRequest::setNodepoolScaleUp(const std::string& value)
{
    nodepoolScaleUp_ = value;
    nodepoolScaleUpIsSet_ = true;
}

bool CreateNodeRequest::nodepoolScaleUpIsSet() const
{
    return nodepoolScaleUpIsSet_;
}

void CreateNodeRequest::unsetnodepoolScaleUp()
{
    nodepoolScaleUpIsSet_ = false;
}

NodeCreateRequest CreateNodeRequest::getBody() const
{
    return body_;
}

void CreateNodeRequest::setBody(const NodeCreateRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


