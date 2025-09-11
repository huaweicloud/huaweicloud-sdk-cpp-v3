

#include "huaweicloud/dbss/v1/model/ListAuditAlarmLogNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditAlarmLogNewRequest::ListAuditAlarmLogNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListAuditAlarmLogNewRequest::~ListAuditAlarmLogNewRequest() = default;

void ListAuditAlarmLogNewRequest::validate()
{
}

web::json::value ListAuditAlarmLogNewRequest::toJson() const
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
bool ListAuditAlarmLogNewRequest::fromJson(const web::json::value& val)
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


std::string ListAuditAlarmLogNewRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditAlarmLogNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditAlarmLogNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditAlarmLogNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AlarmLogRequest ListAuditAlarmLogNewRequest::getBody() const
{
    return body_;
}

void ListAuditAlarmLogNewRequest::setBody(const AlarmLogRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAuditAlarmLogNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAuditAlarmLogNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


