

#include "huaweicloud/dbss/v1/model/SetAlarmTopicConfigInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetAlarmTopicConfigInfoRequest::SetAlarmTopicConfigInfoRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetAlarmTopicConfigInfoRequest::~SetAlarmTopicConfigInfoRequest() = default;

void SetAlarmTopicConfigInfoRequest::validate()
{
}

web::json::value SetAlarmTopicConfigInfoRequest::toJson() const
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
bool SetAlarmTopicConfigInfoRequest::fromJson(const web::json::value& val)
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


std::string SetAlarmTopicConfigInfoRequest::getInstanceId() const
{
    return instanceId_;
}

void SetAlarmTopicConfigInfoRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetAlarmTopicConfigInfoRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetAlarmTopicConfigInfoRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ConfigAlarmTopicRequest SetAlarmTopicConfigInfoRequest::getBody() const
{
    return body_;
}

void SetAlarmTopicConfigInfoRequest::setBody(const ConfigAlarmTopicRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetAlarmTopicConfigInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetAlarmTopicConfigInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


