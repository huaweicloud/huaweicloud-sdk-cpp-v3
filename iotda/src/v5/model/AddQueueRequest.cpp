

#include "huaweicloud/iotda/v5/model/AddQueueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddQueueRequest::AddQueueRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddQueueRequest::~AddQueueRequest() = default;

void AddQueueRequest::validate()
{
}

web::json::value AddQueueRequest::toJson() const
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
bool AddQueueRequest::fromJson(const web::json::value& val)
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
            QueueInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddQueueRequest::getInstanceId() const
{
    return instanceId_;
}

void AddQueueRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddQueueRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddQueueRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

QueueInfo AddQueueRequest::getBody() const
{
    return body_;
}

void AddQueueRequest::setBody(const QueueInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddQueueRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddQueueRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


