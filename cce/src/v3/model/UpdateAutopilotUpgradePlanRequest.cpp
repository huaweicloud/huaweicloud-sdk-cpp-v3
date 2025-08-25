

#include "huaweicloud/cce/v3/model/UpdateAutopilotUpgradePlanRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpdateAutopilotUpgradePlanRequest::UpdateAutopilotUpgradePlanRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    upgradePlanId_ = "";
    upgradePlanIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAutopilotUpgradePlanRequest::~UpdateAutopilotUpgradePlanRequest() = default;

void UpdateAutopilotUpgradePlanRequest::validate()
{
}

web::json::value UpdateAutopilotUpgradePlanRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(upgradePlanIdIsSet_) {
        val[utility::conversions::to_string_t("upgrade_plan_id")] = ModelBase::toJson(upgradePlanId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAutopilotUpgradePlanRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("upgrade_plan_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_plan_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradePlanId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DelayUpgradePlanRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAutopilotUpgradePlanRequest::getClusterId() const
{
    return clusterId_;
}

void UpdateAutopilotUpgradePlanRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdateAutopilotUpgradePlanRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdateAutopilotUpgradePlanRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string UpdateAutopilotUpgradePlanRequest::getUpgradePlanId() const
{
    return upgradePlanId_;
}

void UpdateAutopilotUpgradePlanRequest::setUpgradePlanId(const std::string& value)
{
    upgradePlanId_ = value;
    upgradePlanIdIsSet_ = true;
}

bool UpdateAutopilotUpgradePlanRequest::upgradePlanIdIsSet() const
{
    return upgradePlanIdIsSet_;
}

void UpdateAutopilotUpgradePlanRequest::unsetupgradePlanId()
{
    upgradePlanIdIsSet_ = false;
}

DelayUpgradePlanRequestBody UpdateAutopilotUpgradePlanRequest::getBody() const
{
    return body_;
}

void UpdateAutopilotUpgradePlanRequest::setBody(const DelayUpgradePlanRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAutopilotUpgradePlanRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAutopilotUpgradePlanRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


