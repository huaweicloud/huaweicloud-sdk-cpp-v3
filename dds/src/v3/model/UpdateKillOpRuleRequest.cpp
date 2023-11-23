

#include "huaweicloud/dds/v3/model/UpdateKillOpRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateKillOpRuleRequest::UpdateKillOpRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateKillOpRuleRequest::~UpdateKillOpRuleRequest() = default;

void UpdateKillOpRuleRequest::validate()
{
}

web::json::value UpdateKillOpRuleRequest::toJson() const
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
bool UpdateKillOpRuleRequest::fromJson(const web::json::value& val)
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
            UpdateKillOpRuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateKillOpRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateKillOpRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateKillOpRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateKillOpRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateKillOpRuleRequestBody UpdateKillOpRuleRequest::getBody() const
{
    return body_;
}

void UpdateKillOpRuleRequest::setBody(const UpdateKillOpRuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateKillOpRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateKillOpRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


