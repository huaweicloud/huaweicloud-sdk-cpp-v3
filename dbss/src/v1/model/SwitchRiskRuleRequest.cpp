

#include "huaweicloud/dbss/v1/model/SwitchRiskRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SwitchRiskRuleRequest::SwitchRiskRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchRiskRuleRequest::~SwitchRiskRuleRequest() = default;

void SwitchRiskRuleRequest::validate()
{
}

web::json::value SwitchRiskRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SwitchRiskRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchSwitchesRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchRiskRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchRiskRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchRiskRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchRiskRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BatchSwitchesRequest SwitchRiskRuleRequest::getBody() const
{
    return body_;
}

void SwitchRiskRuleRequest::setBody(const BatchSwitchesRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchRiskRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchRiskRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


