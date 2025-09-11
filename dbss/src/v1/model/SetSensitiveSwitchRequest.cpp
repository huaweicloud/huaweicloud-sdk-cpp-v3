

#include "huaweicloud/dbss/v1/model/SetSensitiveSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetSensitiveSwitchRequest::SetSensitiveSwitchRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetSensitiveSwitchRequest::~SetSensitiveSwitchRequest() = default;

void SetSensitiveSwitchRequest::validate()
{
}

web::json::value SetSensitiveSwitchRequest::toJson() const
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
bool SetSensitiveSwitchRequest::fromJson(const web::json::value& val)
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
            SwitchStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetSensitiveSwitchRequest::getInstanceId() const
{
    return instanceId_;
}

void SetSensitiveSwitchRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetSensitiveSwitchRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetSensitiveSwitchRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SwitchStatus SetSensitiveSwitchRequest::getBody() const
{
    return body_;
}

void SetSensitiveSwitchRequest::setBody(const SwitchStatus& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetSensitiveSwitchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetSensitiveSwitchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


