

#include "huaweicloud/cce/v3/model/BatchCreateClusterTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




BatchCreateClusterTagsRequest::BatchCreateClusterTagsRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateClusterTagsRequest::~BatchCreateClusterTagsRequest() = default;

void BatchCreateClusterTagsRequest::validate()
{
}

web::json::value BatchCreateClusterTagsRequest::toJson() const
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
bool BatchCreateClusterTagsRequest::fromJson(const web::json::value& val)
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
            BatchCreateClusterTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateClusterTagsRequest::getClusterId() const
{
    return clusterId_;
}

void BatchCreateClusterTagsRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool BatchCreateClusterTagsRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void BatchCreateClusterTagsRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

BatchCreateClusterTagsRequestBody BatchCreateClusterTagsRequest::getBody() const
{
    return body_;
}

void BatchCreateClusterTagsRequest::setBody(const BatchCreateClusterTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateClusterTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateClusterTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


