

#include "huaweicloud/metastudio/v1/model/AuditResult_admin_audit_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AuditResult_admin_audit_result::AuditResult_admin_audit_result()
{
    message_ = "";
    messageIsSet_ = false;
    attachmentName_ = "";
    attachmentNameIsSet_ = false;
    attachmentUrl_ = "";
    attachmentUrlIsSet_ = false;
    auditTime_ = 0L;
    auditTimeIsSet_ = false;
}

AuditResult_admin_audit_result::~AuditResult_admin_audit_result() = default;

void AuditResult_admin_audit_result::validate()
{
}

web::json::value AuditResult_admin_audit_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(attachmentNameIsSet_) {
        val[utility::conversions::to_string_t("attachment_name")] = ModelBase::toJson(attachmentName_);
    }
    if(attachmentUrlIsSet_) {
        val[utility::conversions::to_string_t("attachment_url")] = ModelBase::toJson(attachmentUrl_);
    }
    if(auditTimeIsSet_) {
        val[utility::conversions::to_string_t("audit_time")] = ModelBase::toJson(auditTime_);
    }

    return val;
}
bool AuditResult_admin_audit_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachment_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachment_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachmentName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachment_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachment_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachmentUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audit_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audit_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditTime(refVal);
        }
    }
    return ok;
}


std::string AuditResult_admin_audit_result::getMessage() const
{
    return message_;
}

void AuditResult_admin_audit_result::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool AuditResult_admin_audit_result::messageIsSet() const
{
    return messageIsSet_;
}

void AuditResult_admin_audit_result::unsetmessage()
{
    messageIsSet_ = false;
}

std::string AuditResult_admin_audit_result::getAttachmentName() const
{
    return attachmentName_;
}

void AuditResult_admin_audit_result::setAttachmentName(const std::string& value)
{
    attachmentName_ = value;
    attachmentNameIsSet_ = true;
}

bool AuditResult_admin_audit_result::attachmentNameIsSet() const
{
    return attachmentNameIsSet_;
}

void AuditResult_admin_audit_result::unsetattachmentName()
{
    attachmentNameIsSet_ = false;
}

std::string AuditResult_admin_audit_result::getAttachmentUrl() const
{
    return attachmentUrl_;
}

void AuditResult_admin_audit_result::setAttachmentUrl(const std::string& value)
{
    attachmentUrl_ = value;
    attachmentUrlIsSet_ = true;
}

bool AuditResult_admin_audit_result::attachmentUrlIsSet() const
{
    return attachmentUrlIsSet_;
}

void AuditResult_admin_audit_result::unsetattachmentUrl()
{
    attachmentUrlIsSet_ = false;
}

int64_t AuditResult_admin_audit_result::getAuditTime() const
{
    return auditTime_;
}

void AuditResult_admin_audit_result::setAuditTime(int64_t value)
{
    auditTime_ = value;
    auditTimeIsSet_ = true;
}

bool AuditResult_admin_audit_result::auditTimeIsSet() const
{
    return auditTimeIsSet_;
}

void AuditResult_admin_audit_result::unsetauditTime()
{
    auditTimeIsSet_ = false;
}

}
}
}
}
}


