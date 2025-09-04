

#include "huaweicloud/iotda/v5/model/ListDeviceByDeviceCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceByDeviceCertificateRequest::ListDeviceByDeviceCertificateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    certificateId_ = "";
    certificateIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListDeviceByDeviceCertificateRequest::~ListDeviceByDeviceCertificateRequest() = default;

void ListDeviceByDeviceCertificateRequest::validate()
{
}

web::json::value ListDeviceByDeviceCertificateRequest::toJson() const
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
bool ListDeviceByDeviceCertificateRequest::fromJson(const web::json::value& val)
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
            ListDeviceRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListDeviceByDeviceCertificateRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDeviceByDeviceCertificateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDeviceByDeviceCertificateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDeviceByDeviceCertificateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDeviceByDeviceCertificateRequest::getCertificateId() const
{
    return certificateId_;
}

void ListDeviceByDeviceCertificateRequest::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool ListDeviceByDeviceCertificateRequest::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void ListDeviceByDeviceCertificateRequest::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

ListDeviceRequest ListDeviceByDeviceCertificateRequest::getBody() const
{
    return body_;
}

void ListDeviceByDeviceCertificateRequest::setBody(const ListDeviceRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListDeviceByDeviceCertificateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListDeviceByDeviceCertificateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


