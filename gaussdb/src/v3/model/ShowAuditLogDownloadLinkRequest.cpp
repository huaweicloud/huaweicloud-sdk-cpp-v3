

#include "huaweicloud/gaussdb/v3/model/ShowAuditLogDownloadLinkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowAuditLogDownloadLinkRequest::ShowAuditLogDownloadLinkRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowAuditLogDownloadLinkRequest::~ShowAuditLogDownloadLinkRequest() = default;

void ShowAuditLogDownloadLinkRequest::validate()
{
}

web::json::value ShowAuditLogDownloadLinkRequest::toJson() const
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
bool ShowAuditLogDownloadLinkRequest::fromJson(const web::json::value& val)
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
            AuditLogDownloadLinkRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowAuditLogDownloadLinkRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAuditLogDownloadLinkRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAuditLogDownloadLinkRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAuditLogDownloadLinkRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowAuditLogDownloadLinkRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAuditLogDownloadLinkRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAuditLogDownloadLinkRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAuditLogDownloadLinkRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AuditLogDownloadLinkRequestBody ShowAuditLogDownloadLinkRequest::getBody() const
{
    return body_;
}

void ShowAuditLogDownloadLinkRequest::setBody(const AuditLogDownloadLinkRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowAuditLogDownloadLinkRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowAuditLogDownloadLinkRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


