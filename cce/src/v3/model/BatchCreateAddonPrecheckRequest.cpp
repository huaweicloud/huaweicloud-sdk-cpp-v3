

#include "huaweicloud/cce/v3/model/BatchCreateAddonPrecheckRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




BatchCreateAddonPrecheckRequest::BatchCreateAddonPrecheckRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateAddonPrecheckRequest::~BatchCreateAddonPrecheckRequest() = default;

void BatchCreateAddonPrecheckRequest::validate()
{
}

web::json::value BatchCreateAddonPrecheckRequest::toJson() const
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
bool BatchCreateAddonPrecheckRequest::fromJson(const web::json::value& val)
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
            AddonCheckRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateAddonPrecheckRequest::getClusterId() const
{
    return clusterId_;
}

void BatchCreateAddonPrecheckRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool BatchCreateAddonPrecheckRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void BatchCreateAddonPrecheckRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

AddonCheckRequest BatchCreateAddonPrecheckRequest::getBody() const
{
    return body_;
}

void BatchCreateAddonPrecheckRequest::setBody(const AddonCheckRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateAddonPrecheckRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateAddonPrecheckRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


