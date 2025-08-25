

#include "huaweicloud/cce/v3/model/CreateUpgradeWorkFlowRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreateUpgradeWorkFlowRequest::CreateUpgradeWorkFlowRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateUpgradeWorkFlowRequest::~CreateUpgradeWorkFlowRequest() = default;

void CreateUpgradeWorkFlowRequest::validate()
{
}

web::json::value CreateUpgradeWorkFlowRequest::toJson() const
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
bool CreateUpgradeWorkFlowRequest::fromJson(const web::json::value& val)
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
            CreateUpgradeWorkFlowRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateUpgradeWorkFlowRequest::getClusterId() const
{
    return clusterId_;
}

void CreateUpgradeWorkFlowRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateUpgradeWorkFlowRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateUpgradeWorkFlowRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

CreateUpgradeWorkFlowRequestBody CreateUpgradeWorkFlowRequest::getBody() const
{
    return body_;
}

void CreateUpgradeWorkFlowRequest::setBody(const CreateUpgradeWorkFlowRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateUpgradeWorkFlowRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateUpgradeWorkFlowRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


