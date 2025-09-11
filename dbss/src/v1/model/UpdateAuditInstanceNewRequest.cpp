

#include "huaweicloud/dbss/v1/model/UpdateAuditInstanceNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateAuditInstanceNewRequest::UpdateAuditInstanceNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAuditInstanceNewRequest::~UpdateAuditInstanceNewRequest() = default;

void UpdateAuditInstanceNewRequest::validate()
{
}

web::json::value UpdateAuditInstanceNewRequest::toJson() const
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
bool UpdateAuditInstanceNewRequest::fromJson(const web::json::value& val)
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
            UpdateAuditBean refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAuditInstanceNewRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateAuditInstanceNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateAuditInstanceNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateAuditInstanceNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateAuditBean UpdateAuditInstanceNewRequest::getBody() const
{
    return body_;
}

void UpdateAuditInstanceNewRequest::setBody(const UpdateAuditBean& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAuditInstanceNewRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAuditInstanceNewRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


