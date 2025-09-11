

#include "huaweicloud/dbss/v1/model/SetAlarmTopicConfigInfoNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetAlarmTopicConfigInfoNewRequest::SetAlarmTopicConfigInfoNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetAlarmTopicConfigInfoNewRequest::~SetAlarmTopicConfigInfoNewRequest() = default;

void SetAlarmTopicConfigInfoNewRequest::validate()
{
}

web::json::value SetAlarmTopicConfigInfoNewRequest::toJson() const
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
bool SetAlarmTopicConfigInfoNewRequest::fromJson(const web::json::value& val)
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
            ConfigAlarmTopicRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetAlarmTopicConfigInfoNewRequest::getInstanceId() const
{
    return instanceId_;
}

void SetAlarmTopicConfigInfoNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetAlarmTopicConfigInfoNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetAlarmTopicConfigInfoNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ConfigAlarmTopicRequest SetAlarmTopicConfigInfoNewRequest::getBody() const
{
    return body_;
}

void SetAlarmTopicConfigInfoNewRequest::setBody(const ConfigAlarmTopicRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetAlarmTopicConfigInfoNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetAlarmTopicConfigInfoNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


