

#include "huaweicloud/dbss/v1/model/SwitchRiskRuleNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SwitchRiskRuleNewRequest::SwitchRiskRuleNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchRiskRuleNewRequest::~SwitchRiskRuleNewRequest() = default;

void SwitchRiskRuleNewRequest::validate()
{
}

web::json::value SwitchRiskRuleNewRequest::toJson() const
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
bool SwitchRiskRuleNewRequest::fromJson(const web::json::value& val)
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


std::string SwitchRiskRuleNewRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchRiskRuleNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchRiskRuleNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchRiskRuleNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BatchSwitchesRequest SwitchRiskRuleNewRequest::getBody() const
{
    return body_;
}

void SwitchRiskRuleNewRequest::setBody(const BatchSwitchesRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchRiskRuleNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchRiskRuleNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


