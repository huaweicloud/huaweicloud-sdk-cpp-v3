

#include "huaweicloud/rds/v3/model/SwitchSupabaseApplicationSslRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SwitchSupabaseApplicationSslRequestBody::SwitchSupabaseApplicationSslRequestBody()
{
    enableSsl_ = false;
    enableSslIsSet_ = false;
    certId_ = "";
    certIdIsSet_ = false;
}

SwitchSupabaseApplicationSslRequestBody::~SwitchSupabaseApplicationSslRequestBody() = default;

void SwitchSupabaseApplicationSslRequestBody::validate()
{
}

web::json::value SwitchSupabaseApplicationSslRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableSslIsSet_) {
        val[utility::conversions::to_string_t("enable_ssl")] = ModelBase::toJson(enableSsl_);
    }
    if(certIdIsSet_) {
        val[utility::conversions::to_string_t("cert_id")] = ModelBase::toJson(certId_);
    }

    return val;
}
bool SwitchSupabaseApplicationSslRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable_ssl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_ssl"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSsl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cert_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertId(refVal);
        }
    }
    return ok;
}


bool SwitchSupabaseApplicationSslRequestBody::isEnableSsl() const
{
    return enableSsl_;
}

void SwitchSupabaseApplicationSslRequestBody::setEnableSsl(bool value)
{
    enableSsl_ = value;
    enableSslIsSet_ = true;
}

bool SwitchSupabaseApplicationSslRequestBody::enableSslIsSet() const
{
    return enableSslIsSet_;
}

void SwitchSupabaseApplicationSslRequestBody::unsetenableSsl()
{
    enableSslIsSet_ = false;
}

std::string SwitchSupabaseApplicationSslRequestBody::getCertId() const
{
    return certId_;
}

void SwitchSupabaseApplicationSslRequestBody::setCertId(const std::string& value)
{
    certId_ = value;
    certIdIsSet_ = true;
}

bool SwitchSupabaseApplicationSslRequestBody::certIdIsSet() const
{
    return certIdIsSet_;
}

void SwitchSupabaseApplicationSslRequestBody::unsetcertId()
{
    certIdIsSet_ = false;
}

}
}
}
}
}


