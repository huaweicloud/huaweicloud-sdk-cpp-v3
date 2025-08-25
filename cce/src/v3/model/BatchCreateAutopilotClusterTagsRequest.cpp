

#include "huaweicloud/cce/v3/model/BatchCreateAutopilotClusterTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




BatchCreateAutopilotClusterTagsRequest::BatchCreateAutopilotClusterTagsRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateAutopilotClusterTagsRequest::~BatchCreateAutopilotClusterTagsRequest() = default;

void BatchCreateAutopilotClusterTagsRequest::validate()
{
}

web::json::value BatchCreateAutopilotClusterTagsRequest::toJson() const
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
bool BatchCreateAutopilotClusterTagsRequest::fromJson(const web::json::value& val)
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


std::string BatchCreateAutopilotClusterTagsRequest::getClusterId() const
{
    return clusterId_;
}

void BatchCreateAutopilotClusterTagsRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool BatchCreateAutopilotClusterTagsRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void BatchCreateAutopilotClusterTagsRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

BatchCreateClusterTagsRequestBody BatchCreateAutopilotClusterTagsRequest::getBody() const
{
    return body_;
}

void BatchCreateAutopilotClusterTagsRequest::setBody(const BatchCreateClusterTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateAutopilotClusterTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateAutopilotClusterTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


