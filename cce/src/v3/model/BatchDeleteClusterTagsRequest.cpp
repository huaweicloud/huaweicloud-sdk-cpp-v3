

#include "huaweicloud/cce/v3/model/BatchDeleteClusterTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




BatchDeleteClusterTagsRequest::BatchDeleteClusterTagsRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteClusterTagsRequest::~BatchDeleteClusterTagsRequest() = default;

void BatchDeleteClusterTagsRequest::validate()
{
}

web::json::value BatchDeleteClusterTagsRequest::toJson() const
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
bool BatchDeleteClusterTagsRequest::fromJson(const web::json::value& val)
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
            BatchDeleteClusterTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteClusterTagsRequest::getClusterId() const
{
    return clusterId_;
}

void BatchDeleteClusterTagsRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool BatchDeleteClusterTagsRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void BatchDeleteClusterTagsRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

BatchDeleteClusterTagsRequestBody BatchDeleteClusterTagsRequest::getBody() const
{
    return body_;
}

void BatchDeleteClusterTagsRequest::setBody(const BatchDeleteClusterTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteClusterTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteClusterTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


