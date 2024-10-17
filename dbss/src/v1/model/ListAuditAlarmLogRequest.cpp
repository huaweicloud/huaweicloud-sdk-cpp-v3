

#include "huaweicloud/dbss/v1/model/ListAuditAlarmLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditAlarmLogRequest::ListAuditAlarmLogRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListAuditAlarmLogRequest::~ListAuditAlarmLogRequest() = default;

void ListAuditAlarmLogRequest::validate()
{
}

web::json::value ListAuditAlarmLogRequest::toJson() const
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
bool ListAuditAlarmLogRequest::fromJson(const web::json::value& val)
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
            AlarmLogRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListAuditAlarmLogRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditAlarmLogRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditAlarmLogRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditAlarmLogRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AlarmLogRequest ListAuditAlarmLogRequest::getBody() const
{
    return body_;
}

void ListAuditAlarmLogRequest::setBody(const AlarmLogRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAuditAlarmLogRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAuditAlarmLogRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


