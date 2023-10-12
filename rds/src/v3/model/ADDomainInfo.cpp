

#include "huaweicloud/rds/v3/model/ADDomainInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ADDomainInfo::ADDomainInfo()
{
    domainAdminAccountName_ = "";
    domainAdminAccountNameIsSet_ = false;
    domainAdminPwd_ = "";
    domainAdminPwdIsSet_ = false;
}

ADDomainInfo::~ADDomainInfo() = default;

void ADDomainInfo::validate()
{
}

web::json::value ADDomainInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainAdminAccountNameIsSet_) {
        val[utility::conversions::to_string_t("domain_admin_account_name")] = ModelBase::toJson(domainAdminAccountName_);
    }
    if(domainAdminPwdIsSet_) {
        val[utility::conversions::to_string_t("domain_admin_pwd")] = ModelBase::toJson(domainAdminPwd_);
    }

    return val;
}
bool ADDomainInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_admin_account_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_admin_account_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainAdminAccountName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_admin_pwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_admin_pwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainAdminPwd(refVal);
        }
    }
    return ok;
}


std::string ADDomainInfo::getDomainAdminAccountName() const
{
    return domainAdminAccountName_;
}

void ADDomainInfo::setDomainAdminAccountName(const std::string& value)
{
    domainAdminAccountName_ = value;
    domainAdminAccountNameIsSet_ = true;
}

bool ADDomainInfo::domainAdminAccountNameIsSet() const
{
    return domainAdminAccountNameIsSet_;
}

void ADDomainInfo::unsetdomainAdminAccountName()
{
    domainAdminAccountNameIsSet_ = false;
}

std::string ADDomainInfo::getDomainAdminPwd() const
{
    return domainAdminPwd_;
}

void ADDomainInfo::setDomainAdminPwd(const std::string& value)
{
    domainAdminPwd_ = value;
    domainAdminPwdIsSet_ = true;
}

bool ADDomainInfo::domainAdminPwdIsSet() const
{
    return domainAdminPwdIsSet_;
}

void ADDomainInfo::unsetdomainAdminPwd()
{
    domainAdminPwdIsSet_ = false;
}

}
}
}
}
}


