

#include "huaweicloud/csms/v1/model/UsersDetailsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UsersDetailsResult::UsersDetailsResult()
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
    disabled_ = "";
    disabledIsSet_ = false;
    grade_ = "";
    gradeIsSet_ = false;
    locked_ = "";
    lockedIsSet_ = false;
    extension_ = "";
    extensionIsSet_ = false;
    userOrgRelationListIsSet_ = false;
}

UsersDetailsResult::~UsersDetailsResult() = default;

void UsersDetailsResult::validate()
{
}

web::json::value UsersDetailsResult::toJson() const
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

    return val;
}
bool UsersDetailsResult::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("grade"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grade"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
            std::string refVal;
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
    return ok;
}


std::string UsersDetailsResult::getUserId() const
{
    return userId_;
}

void UsersDetailsResult::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool UsersDetailsResult::userIdIsSet() const
{
    return userIdIsSet_;
}

void UsersDetailsResult::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string UsersDetailsResult::getOrgId() const
{
    return orgId_;
}

void UsersDetailsResult::setOrgId(const std::string& value)
{
    orgId_ = value;
    orgIdIsSet_ = true;
}

bool UsersDetailsResult::orgIdIsSet() const
{
    return orgIdIsSet_;
}

void UsersDetailsResult::unsetorgId()
{
    orgIdIsSet_ = false;
}

std::string UsersDetailsResult::getUserName() const
{
    return userName_;
}

void UsersDetailsResult::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool UsersDetailsResult::userNameIsSet() const
{
    return userNameIsSet_;
}

void UsersDetailsResult::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string UsersDetailsResult::getName() const
{
    return name_;
}

void UsersDetailsResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UsersDetailsResult::nameIsSet() const
{
    return nameIsSet_;
}

void UsersDetailsResult::unsetname()
{
    nameIsSet_ = false;
}

std::string UsersDetailsResult::getMobile() const
{
    return mobile_;
}

void UsersDetailsResult::setMobile(const std::string& value)
{
    mobile_ = value;
    mobileIsSet_ = true;
}

bool UsersDetailsResult::mobileIsSet() const
{
    return mobileIsSet_;
}

void UsersDetailsResult::unsetmobile()
{
    mobileIsSet_ = false;
}

std::string UsersDetailsResult::getEmail() const
{
    return email_;
}

void UsersDetailsResult::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool UsersDetailsResult::emailIsSet() const
{
    return emailIsSet_;
}

void UsersDetailsResult::unsetemail()
{
    emailIsSet_ = false;
}

bool UsersDetailsResult::isPwdMustModify() const
{
    return pwdMustModify_;
}

void UsersDetailsResult::setPwdMustModify(bool value)
{
    pwdMustModify_ = value;
    pwdMustModifyIsSet_ = true;
}

bool UsersDetailsResult::pwdMustModifyIsSet() const
{
    return pwdMustModifyIsSet_;
}

void UsersDetailsResult::unsetpwdMustModify()
{
    pwdMustModifyIsSet_ = false;
}

std::string UsersDetailsResult::getPwdChangeAt() const
{
    return pwdChangeAt_;
}

void UsersDetailsResult::setPwdChangeAt(const std::string& value)
{
    pwdChangeAt_ = value;
    pwdChangeAtIsSet_ = true;
}

bool UsersDetailsResult::pwdChangeAtIsSet() const
{
    return pwdChangeAtIsSet_;
}

void UsersDetailsResult::unsetpwdChangeAt()
{
    pwdChangeAtIsSet_ = false;
}

std::string UsersDetailsResult::getCreatedAt() const
{
    return createdAt_;
}

void UsersDetailsResult::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool UsersDetailsResult::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void UsersDetailsResult::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string UsersDetailsResult::getUpdatedAt() const
{
    return updatedAt_;
}

void UsersDetailsResult::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool UsersDetailsResult::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void UsersDetailsResult::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string UsersDetailsResult::getDisabled() const
{
    return disabled_;
}

void UsersDetailsResult::setDisabled(const std::string& value)
{
    disabled_ = value;
    disabledIsSet_ = true;
}

bool UsersDetailsResult::disabledIsSet() const
{
    return disabledIsSet_;
}

void UsersDetailsResult::unsetdisabled()
{
    disabledIsSet_ = false;
}

std::string UsersDetailsResult::getGrade() const
{
    return grade_;
}

void UsersDetailsResult::setGrade(const std::string& value)
{
    grade_ = value;
    gradeIsSet_ = true;
}

bool UsersDetailsResult::gradeIsSet() const
{
    return gradeIsSet_;
}

void UsersDetailsResult::unsetgrade()
{
    gradeIsSet_ = false;
}

std::string UsersDetailsResult::getLocked() const
{
    return locked_;
}

void UsersDetailsResult::setLocked(const std::string& value)
{
    locked_ = value;
    lockedIsSet_ = true;
}

bool UsersDetailsResult::lockedIsSet() const
{
    return lockedIsSet_;
}

void UsersDetailsResult::unsetlocked()
{
    lockedIsSet_ = false;
}

std::string UsersDetailsResult::getExtension() const
{
    return extension_;
}

void UsersDetailsResult::setExtension(const std::string& value)
{
    extension_ = value;
    extensionIsSet_ = true;
}

bool UsersDetailsResult::extensionIsSet() const
{
    return extensionIsSet_;
}

void UsersDetailsResult::unsetextension()
{
    extensionIsSet_ = false;
}

std::vector<UserOrgRelationListResult>& UsersDetailsResult::getUserOrgRelationList()
{
    return userOrgRelationList_;
}

void UsersDetailsResult::setUserOrgRelationList(const std::vector<UserOrgRelationListResult>& value)
{
    userOrgRelationList_ = value;
    userOrgRelationListIsSet_ = true;
}

bool UsersDetailsResult::userOrgRelationListIsSet() const
{
    return userOrgRelationListIsSet_;
}

void UsersDetailsResult::unsetuserOrgRelationList()
{
    userOrgRelationListIsSet_ = false;
}

}
}
}
}
}


