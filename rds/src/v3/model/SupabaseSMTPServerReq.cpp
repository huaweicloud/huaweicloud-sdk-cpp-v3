

#include "huaweicloud/rds/v3/model/SupabaseSMTPServerReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseSMTPServerReq::SupabaseSMTPServerReq()
{
    smtpHost_ = "";
    smtpHostIsSet_ = false;
    smtpPort_ = 0;
    smtpPortIsSet_ = false;
    smtpUser_ = "";
    smtpUserIsSet_ = false;
    smtpPwd_ = "";
    smtpPwdIsSet_ = false;
    smtpAdminEmail_ = "";
    smtpAdminEmailIsSet_ = false;
    smtpSenderName_ = "";
    smtpSenderNameIsSet_ = false;
    smtpMaxFrequency_ = 0;
    smtpMaxFrequencyIsSet_ = false;
}

SupabaseSMTPServerReq::~SupabaseSMTPServerReq() = default;

void SupabaseSMTPServerReq::validate()
{
}

web::json::value SupabaseSMTPServerReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(smtpHostIsSet_) {
        val[utility::conversions::to_string_t("smtp_host")] = ModelBase::toJson(smtpHost_);
    }
    if(smtpPortIsSet_) {
        val[utility::conversions::to_string_t("smtp_port")] = ModelBase::toJson(smtpPort_);
    }
    if(smtpUserIsSet_) {
        val[utility::conversions::to_string_t("smtp_user")] = ModelBase::toJson(smtpUser_);
    }
    if(smtpPwdIsSet_) {
        val[utility::conversions::to_string_t("smtp_pwd")] = ModelBase::toJson(smtpPwd_);
    }
    if(smtpAdminEmailIsSet_) {
        val[utility::conversions::to_string_t("smtp_admin_email")] = ModelBase::toJson(smtpAdminEmail_);
    }
    if(smtpSenderNameIsSet_) {
        val[utility::conversions::to_string_t("smtp_sender_name")] = ModelBase::toJson(smtpSenderName_);
    }
    if(smtpMaxFrequencyIsSet_) {
        val[utility::conversions::to_string_t("smtp_max_frequency")] = ModelBase::toJson(smtpMaxFrequency_);
    }

    return val;
}
bool SupabaseSMTPServerReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("smtp_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smtp_host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmtpHost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smtp_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smtp_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmtpPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smtp_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smtp_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmtpUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smtp_pwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smtp_pwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmtpPwd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smtp_admin_email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smtp_admin_email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmtpAdminEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smtp_sender_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smtp_sender_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmtpSenderName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("smtp_max_frequency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("smtp_max_frequency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSmtpMaxFrequency(refVal);
        }
    }
    return ok;
}


std::string SupabaseSMTPServerReq::getSmtpHost() const
{
    return smtpHost_;
}

void SupabaseSMTPServerReq::setSmtpHost(const std::string& value)
{
    smtpHost_ = value;
    smtpHostIsSet_ = true;
}

bool SupabaseSMTPServerReq::smtpHostIsSet() const
{
    return smtpHostIsSet_;
}

void SupabaseSMTPServerReq::unsetsmtpHost()
{
    smtpHostIsSet_ = false;
}

int32_t SupabaseSMTPServerReq::getSmtpPort() const
{
    return smtpPort_;
}

void SupabaseSMTPServerReq::setSmtpPort(int32_t value)
{
    smtpPort_ = value;
    smtpPortIsSet_ = true;
}

bool SupabaseSMTPServerReq::smtpPortIsSet() const
{
    return smtpPortIsSet_;
}

void SupabaseSMTPServerReq::unsetsmtpPort()
{
    smtpPortIsSet_ = false;
}

std::string SupabaseSMTPServerReq::getSmtpUser() const
{
    return smtpUser_;
}

void SupabaseSMTPServerReq::setSmtpUser(const std::string& value)
{
    smtpUser_ = value;
    smtpUserIsSet_ = true;
}

bool SupabaseSMTPServerReq::smtpUserIsSet() const
{
    return smtpUserIsSet_;
}

void SupabaseSMTPServerReq::unsetsmtpUser()
{
    smtpUserIsSet_ = false;
}

std::string SupabaseSMTPServerReq::getSmtpPwd() const
{
    return smtpPwd_;
}

void SupabaseSMTPServerReq::setSmtpPwd(const std::string& value)
{
    smtpPwd_ = value;
    smtpPwdIsSet_ = true;
}

bool SupabaseSMTPServerReq::smtpPwdIsSet() const
{
    return smtpPwdIsSet_;
}

void SupabaseSMTPServerReq::unsetsmtpPwd()
{
    smtpPwdIsSet_ = false;
}

std::string SupabaseSMTPServerReq::getSmtpAdminEmail() const
{
    return smtpAdminEmail_;
}

void SupabaseSMTPServerReq::setSmtpAdminEmail(const std::string& value)
{
    smtpAdminEmail_ = value;
    smtpAdminEmailIsSet_ = true;
}

bool SupabaseSMTPServerReq::smtpAdminEmailIsSet() const
{
    return smtpAdminEmailIsSet_;
}

void SupabaseSMTPServerReq::unsetsmtpAdminEmail()
{
    smtpAdminEmailIsSet_ = false;
}

std::string SupabaseSMTPServerReq::getSmtpSenderName() const
{
    return smtpSenderName_;
}

void SupabaseSMTPServerReq::setSmtpSenderName(const std::string& value)
{
    smtpSenderName_ = value;
    smtpSenderNameIsSet_ = true;
}

bool SupabaseSMTPServerReq::smtpSenderNameIsSet() const
{
    return smtpSenderNameIsSet_;
}

void SupabaseSMTPServerReq::unsetsmtpSenderName()
{
    smtpSenderNameIsSet_ = false;
}

int32_t SupabaseSMTPServerReq::getSmtpMaxFrequency() const
{
    return smtpMaxFrequency_;
}

void SupabaseSMTPServerReq::setSmtpMaxFrequency(int32_t value)
{
    smtpMaxFrequency_ = value;
    smtpMaxFrequencyIsSet_ = true;
}

bool SupabaseSMTPServerReq::smtpMaxFrequencyIsSet() const
{
    return smtpMaxFrequencyIsSet_;
}

void SupabaseSMTPServerReq::unsetsmtpMaxFrequency()
{
    smtpMaxFrequencyIsSet_ = false;
}

}
}
}
}
}


