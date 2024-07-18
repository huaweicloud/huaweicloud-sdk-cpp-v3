

#include "huaweicloud/cts/v3/model/UserInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




UserInfo::UserInfo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    domainIsSet_ = false;
    accountId_ = "";
    accountIdIsSet_ = false;
    accessKeyId_ = "";
    accessKeyIdIsSet_ = false;
    principalUrn_ = "";
    principalUrnIsSet_ = false;
    principalId_ = "";
    principalIdIsSet_ = false;
    principalIsRootUser_ = "";
    principalIsRootUserIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    invokedByIsSet_ = false;
    sessionContextIsSet_ = false;
}

UserInfo::~UserInfo() = default;

void UserInfo::validate()
{
}

web::json::value UserInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(accessKeyIdIsSet_) {
        val[utility::conversions::to_string_t("access_key_id")] = ModelBase::toJson(accessKeyId_);
    }
    if(principalUrnIsSet_) {
        val[utility::conversions::to_string_t("principal_urn")] = ModelBase::toJson(principalUrn_);
    }
    if(principalIdIsSet_) {
        val[utility::conversions::to_string_t("principal_id")] = ModelBase::toJson(principalId_);
    }
    if(principalIsRootUserIsSet_) {
        val[utility::conversions::to_string_t("principal_is_root_user")] = ModelBase::toJson(principalIsRootUser_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(invokedByIsSet_) {
        val[utility::conversions::to_string_t("invoked_by")] = ModelBase::toJson(invokedBy_);
    }
    if(sessionContextIsSet_) {
        val[utility::conversions::to_string_t("session_context")] = ModelBase::toJson(sessionContext_);
    }

    return val;
}
bool UserInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            BaseUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("principal_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipalUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("principal_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipalId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("principal_is_root_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal_is_root_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipalIsRootUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("invoked_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("invoked_by"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInvokedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_context"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_context"));
        if(!fieldValue.is_null())
        {
            SessionContext refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionContext(refVal);
        }
    }
    return ok;
}


std::string UserInfo::getId() const
{
    return id_;
}

void UserInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UserInfo::idIsSet() const
{
    return idIsSet_;
}

void UserInfo::unsetid()
{
    idIsSet_ = false;
}

std::string UserInfo::getName() const
{
    return name_;
}

void UserInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UserInfo::nameIsSet() const
{
    return nameIsSet_;
}

void UserInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string UserInfo::getUserName() const
{
    return userName_;
}

void UserInfo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool UserInfo::userNameIsSet() const
{
    return userNameIsSet_;
}

void UserInfo::unsetuserName()
{
    userNameIsSet_ = false;
}

BaseUser UserInfo::getDomain() const
{
    return domain_;
}

void UserInfo::setDomain(const BaseUser& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool UserInfo::domainIsSet() const
{
    return domainIsSet_;
}

void UserInfo::unsetdomain()
{
    domainIsSet_ = false;
}

std::string UserInfo::getAccountId() const
{
    return accountId_;
}

void UserInfo::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool UserInfo::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void UserInfo::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string UserInfo::getAccessKeyId() const
{
    return accessKeyId_;
}

void UserInfo::setAccessKeyId(const std::string& value)
{
    accessKeyId_ = value;
    accessKeyIdIsSet_ = true;
}

bool UserInfo::accessKeyIdIsSet() const
{
    return accessKeyIdIsSet_;
}

void UserInfo::unsetaccessKeyId()
{
    accessKeyIdIsSet_ = false;
}

std::string UserInfo::getPrincipalUrn() const
{
    return principalUrn_;
}

void UserInfo::setPrincipalUrn(const std::string& value)
{
    principalUrn_ = value;
    principalUrnIsSet_ = true;
}

bool UserInfo::principalUrnIsSet() const
{
    return principalUrnIsSet_;
}

void UserInfo::unsetprincipalUrn()
{
    principalUrnIsSet_ = false;
}

std::string UserInfo::getPrincipalId() const
{
    return principalId_;
}

void UserInfo::setPrincipalId(const std::string& value)
{
    principalId_ = value;
    principalIdIsSet_ = true;
}

bool UserInfo::principalIdIsSet() const
{
    return principalIdIsSet_;
}

void UserInfo::unsetprincipalId()
{
    principalIdIsSet_ = false;
}

std::string UserInfo::getPrincipalIsRootUser() const
{
    return principalIsRootUser_;
}

void UserInfo::setPrincipalIsRootUser(const std::string& value)
{
    principalIsRootUser_ = value;
    principalIsRootUserIsSet_ = true;
}

bool UserInfo::principalIsRootUserIsSet() const
{
    return principalIsRootUserIsSet_;
}

void UserInfo::unsetprincipalIsRootUser()
{
    principalIsRootUserIsSet_ = false;
}

std::string UserInfo::getType() const
{
    return type_;
}

void UserInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UserInfo::typeIsSet() const
{
    return typeIsSet_;
}

void UserInfo::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::string>& UserInfo::getInvokedBy()
{
    return invokedBy_;
}

void UserInfo::setInvokedBy(const std::vector<std::string>& value)
{
    invokedBy_ = value;
    invokedByIsSet_ = true;
}

bool UserInfo::invokedByIsSet() const
{
    return invokedByIsSet_;
}

void UserInfo::unsetinvokedBy()
{
    invokedByIsSet_ = false;
}

SessionContext UserInfo::getSessionContext() const
{
    return sessionContext_;
}

void UserInfo::setSessionContext(const SessionContext& value)
{
    sessionContext_ = value;
    sessionContextIsSet_ = true;
}

bool UserInfo::sessionContextIsSet() const
{
    return sessionContextIsSet_;
}

void UserInfo::unsetsessionContext()
{
    sessionContextIsSet_ = false;
}

}
}
}
}
}


