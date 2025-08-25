

#include "huaweicloud/cce/v3/model/BatchDeleteAutopilotClusterTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




BatchDeleteAutopilotClusterTagsRequest::BatchDeleteAutopilotClusterTagsRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteAutopilotClusterTagsRequest::~BatchDeleteAutopilotClusterTagsRequest() = default;

void BatchDeleteAutopilotClusterTagsRequest::validate()
{
}

web::json::value BatchDeleteAutopilotClusterTagsRequest::toJson() const
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
bool BatchDeleteAutopilotClusterTagsRequest::fromJson(const web::json::value& val)
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


std::string BatchDeleteAutopilotClusterTagsRequest::getClusterId() const
{
    return clusterId_;
}

void BatchDeleteAutopilotClusterTagsRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool BatchDeleteAutopilotClusterTagsRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void BatchDeleteAutopilotClusterTagsRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

BatchDeleteClusterTagsRequestBody BatchDeleteAutopilotClusterTagsRequest::getBody() const
{
    return body_;
}

void BatchDeleteAutopilotClusterTagsRequest::setBody(const BatchDeleteClusterTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteAutopilotClusterTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteAutopilotClusterTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


