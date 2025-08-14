

#include "huaweicloud/iotda/v5/model/BroadcastMessageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




BroadcastMessageRequest::BroadcastMessageRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BroadcastMessageRequest::~BroadcastMessageRequest() = default;

void BroadcastMessageRequest::validate()
{
}

web::json::value BroadcastMessageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BroadcastMessageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
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
            DeviceBroadcastRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BroadcastMessageRequest::getInstanceId() const
{
    return instanceId_;
}

void BroadcastMessageRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BroadcastMessageRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BroadcastMessageRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeviceBroadcastRequest BroadcastMessageRequest::getBody() const
{
    return body_;
}

void BroadcastMessageRequest::setBody(const DeviceBroadcastRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BroadcastMessageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BroadcastMessageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


