

#include "huaweicloud/rds/v3/model/SupabaseEmailOAuthProviderReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseEmailOAuthProviderReq::SupabaseEmailOAuthProviderReq()
{
    enableEmailSignUp_ = false;
    enableEmailSignUpIsSet_ = false;
    enableEmailAutoConfirm_ = false;
    enableEmailAutoConfirmIsSet_ = false;
    smtpConfigIsSet_ = false;
}

SupabaseEmailOAuthProviderReq::~SupabaseEmailOAuthProviderReq() = default;

void SupabaseEmailOAuthProviderReq::validate()
{
}

web::json::value SupabaseEmailOAuthProviderReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableEmailSignUpIsSet_) {
        val[utility::conversions::to_string_t("enable_email_sign_up")] = ModelBase::toJson(enableEmailSignUp_);
    }
    if(enableEmailAutoConfirmIsSet_) {
        val[utility::conversions::to_string_t("enable_email_auto_confirm")] = ModelBase::toJson(enableEmailAutoConfirm_);
    }
    if(smtpConfigIsSet_) {
        val[utility::conversions::to_string_t("smtp_config")] = ModelBase::toJson(smtpConfig_);
    }

    return val;
}
bool SupabaseEmailOAuthProviderReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable_email_sign_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_email_sign_up"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableEmailSignUp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_email_auto_confirm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_email_auto_confirm"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableEmailAutoConfirm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smtp_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smtp_config"));
        if(!fieldValue.is_null())
        {
            SupabaseSMTPServerReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmtpConfig(refVal);
        }
    }
    return ok;
}


bool SupabaseEmailOAuthProviderReq::isEnableEmailSignUp() const
{
    return enableEmailSignUp_;
}

void SupabaseEmailOAuthProviderReq::setEnableEmailSignUp(bool value)
{
    enableEmailSignUp_ = value;
    enableEmailSignUpIsSet_ = true;
}

bool SupabaseEmailOAuthProviderReq::enableEmailSignUpIsSet() const
{
    return enableEmailSignUpIsSet_;
}

void SupabaseEmailOAuthProviderReq::unsetenableEmailSignUp()
{
    enableEmailSignUpIsSet_ = false;
}

bool SupabaseEmailOAuthProviderReq::isEnableEmailAutoConfirm() const
{
    return enableEmailAutoConfirm_;
}

void SupabaseEmailOAuthProviderReq::setEnableEmailAutoConfirm(bool value)
{
    enableEmailAutoConfirm_ = value;
    enableEmailAutoConfirmIsSet_ = true;
}

bool SupabaseEmailOAuthProviderReq::enableEmailAutoConfirmIsSet() const
{
    return enableEmailAutoConfirmIsSet_;
}

void SupabaseEmailOAuthProviderReq::unsetenableEmailAutoConfirm()
{
    enableEmailAutoConfirmIsSet_ = false;
}

SupabaseSMTPServerReq SupabaseEmailOAuthProviderReq::getSmtpConfig() const
{
    return smtpConfig_;
}

void SupabaseEmailOAuthProviderReq::setSmtpConfig(const SupabaseSMTPServerReq& value)
{
    smtpConfig_ = value;
    smtpConfigIsSet_ = true;
}

bool SupabaseEmailOAuthProviderReq::smtpConfigIsSet() const
{
    return smtpConfigIsSet_;
}

void SupabaseEmailOAuthProviderReq::unsetsmtpConfig()
{
    smtpConfigIsSet_ = false;
}

}
}
}
}
}


