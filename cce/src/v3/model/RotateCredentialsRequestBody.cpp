

#include "huaweicloud/cce/v3/model/RotateCredentialsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




RotateCredentialsRequestBody::RotateCredentialsRequestBody()
{
    component_ = "";
    componentIsSet_ = false;
    certificateExpirationTime_ = 0;
    certificateExpirationTimeIsSet_ = false;
    certContentIsSet_ = false;
}

RotateCredentialsRequestBody::~RotateCredentialsRequestBody() = default;

void RotateCredentialsRequestBody::validate()
{
}

web::json::value RotateCredentialsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(componentIsSet_) {
        val[utility::conversions::to_string_t("component")] = ModelBase::toJson(component_);
    }
    if(certificateExpirationTimeIsSet_) {
        val[utility::conversions::to_string_t("certificateExpirationTime")] = ModelBase::toJson(certificateExpirationTime_);
    }
    if(certContentIsSet_) {
        val[utility::conversions::to_string_t("certContent")] = ModelBase::toJson(certContent_);
    }

    return val;
}
bool RotateCredentialsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("component"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificateExpirationTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificateExpirationTime"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateExpirationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certContent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certContent"));
        if(!fieldValue.is_null())
        {
            AuthenticatingProxy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertContent(refVal);
        }
    }
    return ok;
}


std::string RotateCredentialsRequestBody::getComponent() const
{
    return component_;
}

void RotateCredentialsRequestBody::setComponent(const std::string& value)
{
    component_ = value;
    componentIsSet_ = true;
}

bool RotateCredentialsRequestBody::componentIsSet() const
{
    return componentIsSet_;
}

void RotateCredentialsRequestBody::unsetcomponent()
{
    componentIsSet_ = false;
}

int32_t RotateCredentialsRequestBody::getCertificateExpirationTime() const
{
    return certificateExpirationTime_;
}

void RotateCredentialsRequestBody::setCertificateExpirationTime(int32_t value)
{
    certificateExpirationTime_ = value;
    certificateExpirationTimeIsSet_ = true;
}

bool RotateCredentialsRequestBody::certificateExpirationTimeIsSet() const
{
    return certificateExpirationTimeIsSet_;
}

void RotateCredentialsRequestBody::unsetcertificateExpirationTime()
{
    certificateExpirationTimeIsSet_ = false;
}

AuthenticatingProxy RotateCredentialsRequestBody::getCertContent() const
{
    return certContent_;
}

void RotateCredentialsRequestBody::setCertContent(const AuthenticatingProxy& value)
{
    certContent_ = value;
    certContentIsSet_ = true;
}

bool RotateCredentialsRequestBody::certContentIsSet() const
{
    return certContentIsSet_;
}

void RotateCredentialsRequestBody::unsetcertContent()
{
    certContentIsSet_ = false;
}

}
}
}
}
}


