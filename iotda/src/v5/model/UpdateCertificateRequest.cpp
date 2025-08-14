

#include "huaweicloud/iotda/v5/model/UpdateCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateCertificateRequest::UpdateCertificateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    certificateId_ = "";
    certificateIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateCertificateRequest::~UpdateCertificateRequest() = default;

void UpdateCertificateRequest::validate()
{
}

web::json::value UpdateCertificateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(certificateIdIsSet_) {
        val[utility::conversions::to_string_t("certificate_id")] = ModelBase::toJson(certificateId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateCertificateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateCertificateDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateCertificateRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateCertificateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateCertificateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateCertificateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateCertificateRequest::getCertificateId() const
{
    return certificateId_;
}

void UpdateCertificateRequest::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool UpdateCertificateRequest::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void UpdateCertificateRequest::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

UpdateCertificateDTO UpdateCertificateRequest::getBody() const
{
    return body_;
}

void UpdateCertificateRequest::setBody(const UpdateCertificateDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateCertificateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateCertificateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


