

#include "huaweicloud/dbss/v1/model/UpdateAuditInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateAuditInstanceRequest::UpdateAuditInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAuditInstanceRequest::~UpdateAuditInstanceRequest() = default;

void UpdateAuditInstanceRequest::validate()
{
}

web::json::value UpdateAuditInstanceRequest::toJson() const
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
bool UpdateAuditInstanceRequest::fromJson(const web::json::value& val)
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


std::string UpdateAuditInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateAuditInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateAuditInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateAuditInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateAuditBean UpdateAuditInstanceRequest::getBody() const
{
    return body_;
}

void UpdateAuditInstanceRequest::setBody(const UpdateAuditBean& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAuditInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAuditInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


