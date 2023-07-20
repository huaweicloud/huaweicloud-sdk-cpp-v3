

#include "huaweicloud/gaussdb/v3/model/UpdateAuditLogRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateAuditLogRequest::UpdateAuditLogRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAuditLogRequest::~UpdateAuditLogRequest() = default;

void UpdateAuditLogRequest::validate()
{
}

web::json::value UpdateAuditLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateAuditLogRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
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
            OperateAuditLogRequestV3Body refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateAuditLogRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateAuditLogRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateAuditLogRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateAuditLogRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateAuditLogRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateAuditLogRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateAuditLogRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateAuditLogRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

OperateAuditLogRequestV3Body UpdateAuditLogRequest::getBody() const
{
    return body_;
}

void UpdateAuditLogRequest::setBody(const OperateAuditLogRequestV3Body& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAuditLogRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAuditLogRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


