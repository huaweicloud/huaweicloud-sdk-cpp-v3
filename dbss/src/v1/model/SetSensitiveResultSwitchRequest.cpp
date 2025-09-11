

#include "huaweicloud/dbss/v1/model/SetSensitiveResultSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetSensitiveResultSwitchRequest::SetSensitiveResultSwitchRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetSensitiveResultSwitchRequest::~SetSensitiveResultSwitchRequest() = default;

void SetSensitiveResultSwitchRequest::validate()
{
}

web::json::value SetSensitiveResultSwitchRequest::toJson() const
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
bool SetSensitiveResultSwitchRequest::fromJson(const web::json::value& val)
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


std::string SetSensitiveResultSwitchRequest::getInstanceId() const
{
    return instanceId_;
}

void SetSensitiveResultSwitchRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetSensitiveResultSwitchRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetSensitiveResultSwitchRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SwitchStatus SetSensitiveResultSwitchRequest::getBody() const
{
    return body_;
}

void SetSensitiveResultSwitchRequest::setBody(const SwitchStatus& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetSensitiveResultSwitchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetSensitiveResultSwitchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


