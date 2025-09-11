

#include "huaweicloud/dbss/v1/model/SetAuditInstanceTimeZoneRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetAuditInstanceTimeZoneRequest::SetAuditInstanceTimeZoneRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetAuditInstanceTimeZoneRequest::~SetAuditInstanceTimeZoneRequest() = default;

void SetAuditInstanceTimeZoneRequest::validate()
{
}

web::json::value SetAuditInstanceTimeZoneRequest::toJson() const
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
bool SetAuditInstanceTimeZoneRequest::fromJson(const web::json::value& val)
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
            TimezoneRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetAuditInstanceTimeZoneRequest::getInstanceId() const
{
    return instanceId_;
}

void SetAuditInstanceTimeZoneRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetAuditInstanceTimeZoneRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetAuditInstanceTimeZoneRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

TimezoneRequest SetAuditInstanceTimeZoneRequest::getBody() const
{
    return body_;
}

void SetAuditInstanceTimeZoneRequest::setBody(const TimezoneRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetAuditInstanceTimeZoneRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetAuditInstanceTimeZoneRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


