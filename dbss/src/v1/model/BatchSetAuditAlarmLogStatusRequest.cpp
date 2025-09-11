

#include "huaweicloud/dbss/v1/model/BatchSetAuditAlarmLogStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BatchSetAuditAlarmLogStatusRequest::BatchSetAuditAlarmLogStatusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchSetAuditAlarmLogStatusRequest::~BatchSetAuditAlarmLogStatusRequest() = default;

void BatchSetAuditAlarmLogStatusRequest::validate()
{
}

web::json::value BatchSetAuditAlarmLogStatusRequest::toJson() const
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
bool BatchSetAuditAlarmLogStatusRequest::fromJson(const web::json::value& val)
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
            MarkAlarmLog refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchSetAuditAlarmLogStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void BatchSetAuditAlarmLogStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BatchSetAuditAlarmLogStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BatchSetAuditAlarmLogStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

MarkAlarmLog BatchSetAuditAlarmLogStatusRequest::getBody() const
{
    return body_;
}

void BatchSetAuditAlarmLogStatusRequest::setBody(const MarkAlarmLog& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchSetAuditAlarmLogStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchSetAuditAlarmLogStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


