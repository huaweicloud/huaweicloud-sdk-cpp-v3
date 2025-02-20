

#include "huaweicloud/csms/v1/model/ShowUserDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ShowUserDetailResponse::ShowUserDetailResponse()
{
    userId_ = "";
    userIdIsSet_ = false;
    orgId_ = "";
    orgIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    mobile_ = "";
    mobileIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    pwdMustModify_ = false;
    pwdMustModifyIsSet_ = false;
    pwdChangeAt_ = "";
    pwdChangeAtIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    disabled_ = false;
    disabledIsSet_ = false;
    grade_ = 0;
    gradeIsSet_ = false;
    locked_ = "";
    lockedIsSet_ = false;
    extensionIsSet_ = false;
    userOrgRelationListIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

ShowUserDetailResponse::~ShowUserDetailResponse() = default;

void ShowUserDetailResponse::validate()
{
}

web::json::value ShowUserDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(orgIdIsSet_) {
        val[utility::conversions::to_string_t("org_id")] = ModelBase::toJson(orgId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(mobileIsSet_) {
        val[utility::conversions::to_string_t("mobile")] = ModelBase::toJson(mobile_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(pwdMustModifyIsSet_) {
        val[utility::conversions::to_string_t("pwd_must_modify")] = ModelBase::toJson(pwdMustModify_);
    }
    if(pwdChangeAtIsSet_) {
        val[utility::conversions::to_string_t("pwd_change_at")] = ModelBase::toJson(pwdChangeAt_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(disabledIsSet_) {
        val[utility::conversions::to_string_t("disabled")] = ModelBase::toJson(disabled_);
    }
    if(gradeIsSet_) {
        val[utility::conversions::to_string_t("grade")] = ModelBase::toJson(grade_);
    }
    if(lockedIsSet_) {
        val[utility::conversions::to_string_t("locked")] = ModelBase::toJson(locked_);
    }
    if(extensionIsSet_) {
        val[utility::conversions::to_string_t("extension")] = ModelBase::toJson(extension_);
    }
    if(userOrgRelationListIsSet_) {
        val[utility::conversions::to_string_t("user_org_relation_list")] = ModelBase::toJson(userOrgRelationList_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool ShowUserDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("org_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("org_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrgId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mobile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mobile"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMobile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pwd_must_modify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pwd_must_modify"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPwdMustModify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pwd_change_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pwd_change_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPwdChangeAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("grade"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grade"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrade(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("locked"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locked"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocked(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extension"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extension"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtension(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_org_relation_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_org_relation_list"));
        if(!fieldValue.is_null())
        {
            std::vector<UserOrgRelationListResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserOrgRelationList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    return ok;
}


std::string ShowUserDetailResponse::getUserId() const
{
    return userId_;
}

void ShowUserDetailResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ShowUserDetailResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void ShowUserDetailResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ShowUserDetailResponse::getOrgId() const
{
    return orgId_;
}

void ShowUserDetailResponse::setOrgId(const std::string& value)
{
    orgId_ = value;
    orgIdIsSet_ = true;
}

bool ShowUserDetailResponse::orgIdIsSet() const
{
    return orgIdIsSet_;
}

void ShowUserDetailResponse::unsetorgId()
{
    orgIdIsSet_ = false;
}

std::string ShowUserDetailResponse::getUserName() const
{
    return userName_;
}

void ShowUserDetailResponse::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ShowUserDetailResponse::userNameIsSet() const
{
    return userNameIsSet_;
}

void ShowUserDetailResponse::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ShowUserDetailResponse::getName() const
{
    return name_;
}

void ShowUserDetailResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowUserDetailResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowUserDetailResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowUserDetailResponse::getMobile() const
{
    return mobile_;
}

void ShowUserDetailResponse::setMobile(const std::string& value)
{
    mobile_ = value;
    mobileIsSet_ = true;
}

bool ShowUserDetailResponse::mobileIsSet() const
{
    return mobileIsSet_;
}

void ShowUserDetailResponse::unsetmobile()
{
    mobileIsSet_ = false;
}

std::string ShowUserDetailResponse::getEmail() const
{
    return email_;
}

void ShowUserDetailResponse::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool ShowUserDetailResponse::emailIsSet() const
{
    return emailIsSet_;
}

void ShowUserDetailResponse::unsetemail()
{
    emailIsSet_ = false;
}

bool ShowUserDetailResponse::isPwdMustModify() const
{
    return pwdMustModify_;
}

void ShowUserDetailResponse::setPwdMustModify(bool value)
{
    pwdMustModify_ = value;
    pwdMustModifyIsSet_ = true;
}

bool ShowUserDetailResponse::pwdMustModifyIsSet() const
{
    return pwdMustModifyIsSet_;
}

void ShowUserDetailResponse::unsetpwdMustModify()
{
    pwdMustModifyIsSet_ = false;
}

std::string ShowUserDetailResponse::getPwdChangeAt() const
{
    return pwdChangeAt_;
}

void ShowUserDetailResponse::setPwdChangeAt(const std::string& value)
{
    pwdChangeAt_ = value;
    pwdChangeAtIsSet_ = true;
}

bool ShowUserDetailResponse::pwdChangeAtIsSet() const
{
    return pwdChangeAtIsSet_;
}

void ShowUserDetailResponse::unsetpwdChangeAt()
{
    pwdChangeAtIsSet_ = false;
}

std::string ShowUserDetailResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowUserDetailResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowUserDetailResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowUserDetailResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowUserDetailResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowUserDetailResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowUserDetailResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowUserDetailResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool ShowUserDetailResponse::isDisabled() const
{
    return disabled_;
}

void ShowUserDetailResponse::setDisabled(bool value)
{
    disabled_ = value;
    disabledIsSet_ = true;
}

bool ShowUserDetailResponse::disabledIsSet() const
{
    return disabledIsSet_;
}

void ShowUserDetailResponse::unsetdisabled()
{
    disabledIsSet_ = false;
}

int32_t ShowUserDetailResponse::getGrade() const
{
    return grade_;
}

void ShowUserDetailResponse::setGrade(int32_t value)
{
    grade_ = value;
    gradeIsSet_ = true;
}

bool ShowUserDetailResponse::gradeIsSet() const
{
    return gradeIsSet_;
}

void ShowUserDetailResponse::unsetgrade()
{
    gradeIsSet_ = false;
}

std::string ShowUserDetailResponse::getLocked() const
{
    return locked_;
}

void ShowUserDetailResponse::setLocked(const std::string& value)
{
    locked_ = value;
    lockedIsSet_ = true;
}

bool ShowUserDetailResponse::lockedIsSet() const
{
    return lockedIsSet_;
}

void ShowUserDetailResponse::unsetlocked()
{
    lockedIsSet_ = false;
}

Object ShowUserDetailResponse::getExtension() const
{
    return extension_;
}

void ShowUserDetailResponse::setExtension(const Object& value)
{
    extension_ = value;
    extensionIsSet_ = true;
}

bool ShowUserDetailResponse::extensionIsSet() const
{
    return extensionIsSet_;
}

void ShowUserDetailResponse::unsetextension()
{
    extensionIsSet_ = false;
}

std::vector<UserOrgRelationListResult>& ShowUserDetailResponse::getUserOrgRelationList()
{
    return userOrgRelationList_;
}

void ShowUserDetailResponse::setUserOrgRelationList(const std::vector<UserOrgRelationListResult>& value)
{
    userOrgRelationList_ = value;
    userOrgRelationListIsSet_ = true;
}

bool ShowUserDetailResponse::userOrgRelationListIsSet() const
{
    return userOrgRelationListIsSet_;
}

void ShowUserDetailResponse::unsetuserOrgRelationList()
{
    userOrgRelationListIsSet_ = false;
}

std::string ShowUserDetailResponse::getDomainId() const
{
    return domainId_;
}

void ShowUserDetailResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowUserDetailResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowUserDetailResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


