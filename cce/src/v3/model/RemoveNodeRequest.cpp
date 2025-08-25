

#include "huaweicloud/cce/v3/model/RemoveNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




RemoveNodeRequest::RemoveNodeRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

RemoveNodeRequest::~RemoveNodeRequest() = default;

void RemoveNodeRequest::validate()
{
}

web::json::value RemoveNodeRequest::toJson() const
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
bool RemoveNodeRequest::fromJson(const web::json::value& val)
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
            RemoveNodesTask refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RemoveNodeRequest::getClusterId() const
{
    return clusterId_;
}

void RemoveNodeRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool RemoveNodeRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void RemoveNodeRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

RemoveNodesTask RemoveNodeRequest::getBody() const
{
    return body_;
}

void RemoveNodeRequest::setBody(const RemoveNodesTask& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RemoveNodeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RemoveNodeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


