

#include "huaweicloud/rds/v3/model/RotateAuditLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RotateAuditLogRequest::RotateAuditLogRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

RotateAuditLogRequest::~RotateAuditLogRequest() = default;

void RotateAuditLogRequest::validate()
{
}

web::json::value RotateAuditLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RotateAuditLogRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RotateAuditLogRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RotateAuditLogRequest::getInstanceId() const
{
    return instanceId_;
}

void RotateAuditLogRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RotateAuditLogRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RotateAuditLogRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RotateAuditLogRequest::getXLanguage() const
{
    return xLanguage_;
}

void RotateAuditLogRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RotateAuditLogRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RotateAuditLogRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

RotateAuditLogRequestBody RotateAuditLogRequest::getBody() const
{
    return body_;
}

void RotateAuditLogRequest::setBody(const RotateAuditLogRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RotateAuditLogRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RotateAuditLogRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


