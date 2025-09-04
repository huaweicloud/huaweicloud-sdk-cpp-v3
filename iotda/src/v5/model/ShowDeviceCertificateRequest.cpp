

#include "huaweicloud/iotda/v5/model/ShowDeviceCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDeviceCertificateRequest::ShowDeviceCertificateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    certificateId_ = "";
    certificateIdIsSet_ = false;
}

ShowDeviceCertificateRequest::~ShowDeviceCertificateRequest() = default;

void ShowDeviceCertificateRequest::validate()
{
}

web::json::value ShowDeviceCertificateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(certificateIdIsSet_) {
        val[utility::conversions::to_string_t("certificate_id")] = ModelBase::toJson(certificateId_);
    }

    return val;
}
bool ShowDeviceCertificateRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowDeviceCertificateRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDeviceCertificateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDeviceCertificateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDeviceCertificateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDeviceCertificateRequest::getCertificateId() const
{
    return certificateId_;
}

void ShowDeviceCertificateRequest::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool ShowDeviceCertificateRequest::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void ShowDeviceCertificateRequest::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

}
}
}
}
}


