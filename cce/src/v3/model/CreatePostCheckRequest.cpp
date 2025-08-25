

#include "huaweicloud/cce/v3/model/CreatePostCheckRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreatePostCheckRequest::CreatePostCheckRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePostCheckRequest::~CreatePostCheckRequest() = default;

void CreatePostCheckRequest::validate()
{
}

web::json::value CreatePostCheckRequest::toJson() const
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
bool CreatePostCheckRequest::fromJson(const web::json::value& val)
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
            PostcheckClusterRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePostCheckRequest::getClusterId() const
{
    return clusterId_;
}

void CreatePostCheckRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreatePostCheckRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreatePostCheckRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

PostcheckClusterRequestBody CreatePostCheckRequest::getBody() const
{
    return body_;
}

void CreatePostCheckRequest::setBody(const PostcheckClusterRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePostCheckRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePostCheckRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


