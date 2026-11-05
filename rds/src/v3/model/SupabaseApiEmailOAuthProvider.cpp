

#include "huaweicloud/rds/v3/model/SupabaseApiEmailOAuthProvider.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseApiEmailOAuthProvider::SupabaseApiEmailOAuthProvider()
{
    enableEmailSignUp_ = false;
    enableEmailSignUpIsSet_ = false;
    enableEmailAutoConfirm_ = false;
    enableEmailAutoConfirmIsSet_ = false;
    smtpConfigIsSet_ = false;
}

SupabaseApiEmailOAuthProvider::~SupabaseApiEmailOAuthProvider() = default;

void SupabaseApiEmailOAuthProvider::validate()
{
}

web::json::value SupabaseApiEmailOAuthProvider::toJson() const
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
bool SupabaseApiEmailOAuthProvider::fromJson(const web::json::value& val)
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
            SupabaseApiSMTPServer refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmtpConfig(refVal);
        }
    }
    return ok;
}


bool SupabaseApiEmailOAuthProvider::isEnableEmailSignUp() const
{
    return enableEmailSignUp_;
}

void SupabaseApiEmailOAuthProvider::setEnableEmailSignUp(bool value)
{
    enableEmailSignUp_ = value;
    enableEmailSignUpIsSet_ = true;
}

bool SupabaseApiEmailOAuthProvider::enableEmailSignUpIsSet() const
{
    return enableEmailSignUpIsSet_;
}

void SupabaseApiEmailOAuthProvider::unsetenableEmailSignUp()
{
    enableEmailSignUpIsSet_ = false;
}

bool SupabaseApiEmailOAuthProvider::isEnableEmailAutoConfirm() const
{
    return enableEmailAutoConfirm_;
}

void SupabaseApiEmailOAuthProvider::setEnableEmailAutoConfirm(bool value)
{
    enableEmailAutoConfirm_ = value;
    enableEmailAutoConfirmIsSet_ = true;
}

bool SupabaseApiEmailOAuthProvider::enableEmailAutoConfirmIsSet() const
{
    return enableEmailAutoConfirmIsSet_;
}

void SupabaseApiEmailOAuthProvider::unsetenableEmailAutoConfirm()
{
    enableEmailAutoConfirmIsSet_ = false;
}

SupabaseApiSMTPServer SupabaseApiEmailOAuthProvider::getSmtpConfig() const
{
    return smtpConfig_;
}

void SupabaseApiEmailOAuthProvider::setSmtpConfig(const SupabaseApiSMTPServer& value)
{
    smtpConfig_ = value;
    smtpConfigIsSet_ = true;
}

bool SupabaseApiEmailOAuthProvider::smtpConfigIsSet() const
{
    return smtpConfigIsSet_;
}

void SupabaseApiEmailOAuthProvider::unsetsmtpConfig()
{
    smtpConfigIsSet_ = false;
}

}
}
}
}
}


