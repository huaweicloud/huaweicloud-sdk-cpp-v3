

#include "huaweicloud/rds/v3/model/SupabaseApiSMTPServer.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseApiSMTPServer::SupabaseApiSMTPServer()
{
    smtpHost_ = "";
    smtpHostIsSet_ = false;
    smtpPort_ = 0;
    smtpPortIsSet_ = false;
    smtpUser_ = "";
    smtpUserIsSet_ = false;
    smtpAdminEmail_ = "";
    smtpAdminEmailIsSet_ = false;
    smtpSenderName_ = "";
    smtpSenderNameIsSet_ = false;
    smtpMaxFrequency_ = 0;
    smtpMaxFrequencyIsSet_ = false;
}

SupabaseApiSMTPServer::~SupabaseApiSMTPServer() = default;

void SupabaseApiSMTPServer::validate()
{
}

web::json::value SupabaseApiSMTPServer::toJson() const
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
bool SupabaseApiSMTPServer::fromJson(const web::json::value& val)
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


std::string SupabaseApiSMTPServer::getSmtpHost() const
{
    return smtpHost_;
}

void SupabaseApiSMTPServer::setSmtpHost(const std::string& value)
{
    smtpHost_ = value;
    smtpHostIsSet_ = true;
}

bool SupabaseApiSMTPServer::smtpHostIsSet() const
{
    return smtpHostIsSet_;
}

void SupabaseApiSMTPServer::unsetsmtpHost()
{
    smtpHostIsSet_ = false;
}

int32_t SupabaseApiSMTPServer::getSmtpPort() const
{
    return smtpPort_;
}

void SupabaseApiSMTPServer::setSmtpPort(int32_t value)
{
    smtpPort_ = value;
    smtpPortIsSet_ = true;
}

bool SupabaseApiSMTPServer::smtpPortIsSet() const
{
    return smtpPortIsSet_;
}

void SupabaseApiSMTPServer::unsetsmtpPort()
{
    smtpPortIsSet_ = false;
}

std::string SupabaseApiSMTPServer::getSmtpUser() const
{
    return smtpUser_;
}

void SupabaseApiSMTPServer::setSmtpUser(const std::string& value)
{
    smtpUser_ = value;
    smtpUserIsSet_ = true;
}

bool SupabaseApiSMTPServer::smtpUserIsSet() const
{
    return smtpUserIsSet_;
}

void SupabaseApiSMTPServer::unsetsmtpUser()
{
    smtpUserIsSet_ = false;
}

std::string SupabaseApiSMTPServer::getSmtpAdminEmail() const
{
    return smtpAdminEmail_;
}

void SupabaseApiSMTPServer::setSmtpAdminEmail(const std::string& value)
{
    smtpAdminEmail_ = value;
    smtpAdminEmailIsSet_ = true;
}

bool SupabaseApiSMTPServer::smtpAdminEmailIsSet() const
{
    return smtpAdminEmailIsSet_;
}

void SupabaseApiSMTPServer::unsetsmtpAdminEmail()
{
    smtpAdminEmailIsSet_ = false;
}

std::string SupabaseApiSMTPServer::getSmtpSenderName() const
{
    return smtpSenderName_;
}

void SupabaseApiSMTPServer::setSmtpSenderName(const std::string& value)
{
    smtpSenderName_ = value;
    smtpSenderNameIsSet_ = true;
}

bool SupabaseApiSMTPServer::smtpSenderNameIsSet() const
{
    return smtpSenderNameIsSet_;
}

void SupabaseApiSMTPServer::unsetsmtpSenderName()
{
    smtpSenderNameIsSet_ = false;
}

int32_t SupabaseApiSMTPServer::getSmtpMaxFrequency() const
{
    return smtpMaxFrequency_;
}

void SupabaseApiSMTPServer::setSmtpMaxFrequency(int32_t value)
{
    smtpMaxFrequency_ = value;
    smtpMaxFrequencyIsSet_ = true;
}

bool SupabaseApiSMTPServer::smtpMaxFrequencyIsSet() const
{
    return smtpMaxFrequencyIsSet_;
}

void SupabaseApiSMTPServer::unsetsmtpMaxFrequency()
{
    smtpMaxFrequencyIsSet_ = false;
}

}
}
}
}
}


