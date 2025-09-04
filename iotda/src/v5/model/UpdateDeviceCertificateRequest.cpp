

#include "huaweicloud/iotda/v5/model/UpdateDeviceCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceCertificateRequest::UpdateDeviceCertificateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    certificateId_ = "";
    certificateIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDeviceCertificateRequest::~UpdateDeviceCertificateRequest() = default;

void UpdateDeviceCertificateRequest::validate()
{
}

web::json::value UpdateDeviceCertificateRequest::toJson() const
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
bool UpdateDeviceCertificateRequest::fromJson(const web::json::value& val)
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
            UpdateDeviceCertificate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDeviceCertificateRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDeviceCertificateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDeviceCertificateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDeviceCertificateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateDeviceCertificateRequest::getCertificateId() const
{
    return certificateId_;
}

void UpdateDeviceCertificateRequest::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool UpdateDeviceCertificateRequest::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void UpdateDeviceCertificateRequest::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

UpdateDeviceCertificate UpdateDeviceCertificateRequest::getBody() const
{
    return body_;
}

void UpdateDeviceCertificateRequest::setBody(const UpdateDeviceCertificate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDeviceCertificateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDeviceCertificateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


