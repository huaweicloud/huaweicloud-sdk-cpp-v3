

#include "huaweicloud/dbss/v1/model/SetSensitiveMaskRuleSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetSensitiveMaskRuleSwitchRequest::SetSensitiveMaskRuleSwitchRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetSensitiveMaskRuleSwitchRequest::~SetSensitiveMaskRuleSwitchRequest() = default;

void SetSensitiveMaskRuleSwitchRequest::validate()
{
}

web::json::value SetSensitiveMaskRuleSwitchRequest::toJson() const
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
bool SetSensitiveMaskRuleSwitchRequest::fromJson(const web::json::value& val)
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
            BatchSwitchesRequestNew refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetSensitiveMaskRuleSwitchRequest::getInstanceId() const
{
    return instanceId_;
}

void SetSensitiveMaskRuleSwitchRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetSensitiveMaskRuleSwitchRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetSensitiveMaskRuleSwitchRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BatchSwitchesRequestNew SetSensitiveMaskRuleSwitchRequest::getBody() const
{
    return body_;
}

void SetSensitiveMaskRuleSwitchRequest::setBody(const BatchSwitchesRequestNew& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetSensitiveMaskRuleSwitchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetSensitiveMaskRuleSwitchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


