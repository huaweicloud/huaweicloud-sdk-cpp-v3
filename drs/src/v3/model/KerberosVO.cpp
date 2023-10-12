

#include "huaweicloud/drs/v3/model/KerberosVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




KerberosVO::KerberosVO()
{
    krb5ConfFile_ = "";
    krb5ConfFileIsSet_ = false;
    keyTabFile_ = "";
    keyTabFileIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    userPrincipal_ = "";
    userPrincipalIsSet_ = false;
}

KerberosVO::~KerberosVO() = default;

void KerberosVO::validate()
{
}

web::json::value KerberosVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(krb5ConfFileIsSet_) {
        val[utility::conversions::to_string_t("krb5_conf_file")] = ModelBase::toJson(krb5ConfFile_);
    }
    if(keyTabFileIsSet_) {
        val[utility::conversions::to_string_t("key_tab_file")] = ModelBase::toJson(keyTabFile_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(userPrincipalIsSet_) {
        val[utility::conversions::to_string_t("user_principal")] = ModelBase::toJson(userPrincipal_);
    }

    return val;
}
bool KerberosVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("krb5_conf_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("krb5_conf_file"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKrb5ConfFile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_tab_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_tab_file"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyTabFile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_principal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_principal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserPrincipal(refVal);
        }
    }
    return ok;
}


std::string KerberosVO::getKrb5ConfFile() const
{
    return krb5ConfFile_;
}

void KerberosVO::setKrb5ConfFile(const std::string& value)
{
    krb5ConfFile_ = value;
    krb5ConfFileIsSet_ = true;
}

bool KerberosVO::krb5ConfFileIsSet() const
{
    return krb5ConfFileIsSet_;
}

void KerberosVO::unsetkrb5ConfFile()
{
    krb5ConfFileIsSet_ = false;
}

std::string KerberosVO::getKeyTabFile() const
{
    return keyTabFile_;
}

void KerberosVO::setKeyTabFile(const std::string& value)
{
    keyTabFile_ = value;
    keyTabFileIsSet_ = true;
}

bool KerberosVO::keyTabFileIsSet() const
{
    return keyTabFileIsSet_;
}

void KerberosVO::unsetkeyTabFile()
{
    keyTabFileIsSet_ = false;
}

std::string KerberosVO::getDomainName() const
{
    return domainName_;
}

void KerberosVO::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool KerberosVO::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void KerberosVO::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string KerberosVO::getUserPrincipal() const
{
    return userPrincipal_;
}

void KerberosVO::setUserPrincipal(const std::string& value)
{
    userPrincipal_ = value;
    userPrincipalIsSet_ = true;
}

bool KerberosVO::userPrincipalIsSet() const
{
    return userPrincipalIsSet_;
}

void KerberosVO::unsetuserPrincipal()
{
    userPrincipalIsSet_ = false;
}

}
}
}
}
}


