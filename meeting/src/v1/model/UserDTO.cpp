

#include "huaweicloud/meeting/v1/model/UserDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UserDTO::UserDTO()
{
    id_ = "";
    idIsSet_ = false;
    statusCode_ = 0;
    statusCodeIsSet_ = false;
    account_ = "";
    accountIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    englishName_ = "";
    englishNameIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    isHardTerminal_ = false;
    isHardTerminalIsSet_ = false;
    vmrId_ = "";
    vmrIdIsSet_ = false;
    signature_ = "";
    signatureIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    hidePhone_ = false;
    hidePhoneIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    deptCodesIsSet_ = false;
}

UserDTO::~UserDTO() = default;

void UserDTO::validate()
{
}

web::json::value UserDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusCodeIsSet_) {
        val[utility::conversions::to_string_t("statusCode")] = ModelBase::toJson(statusCode_);
    }
    if(accountIsSet_) {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(account_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(englishNameIsSet_) {
        val[utility::conversions::to_string_t("englishName")] = ModelBase::toJson(englishName_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("updateTime")] = ModelBase::toJson(updateTime_);
    }
    if(isHardTerminalIsSet_) {
        val[utility::conversions::to_string_t("isHardTerminal")] = ModelBase::toJson(isHardTerminal_);
    }
    if(vmrIdIsSet_) {
        val[utility::conversions::to_string_t("vmrId")] = ModelBase::toJson(vmrId_);
    }
    if(signatureIsSet_) {
        val[utility::conversions::to_string_t("signature")] = ModelBase::toJson(signature_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(hidePhoneIsSet_) {
        val[utility::conversions::to_string_t("hidePhone")] = ModelBase::toJson(hidePhone_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(deptCodesIsSet_) {
        val[utility::conversions::to_string_t("deptCodes")] = ModelBase::toJson(deptCodes_);
    }

    return val;
}
bool UserDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("statusCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statusCode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("englishName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("englishName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnglishName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isHardTerminal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isHardTerminal"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsHardTerminal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("signature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hidePhone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hidePhone"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHidePhone(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deptCodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptCodes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptCodes(refVal);
        }
    }
    return ok;
}


std::string UserDTO::getId() const
{
    return id_;
}

void UserDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UserDTO::idIsSet() const
{
    return idIsSet_;
}

void UserDTO::unsetid()
{
    idIsSet_ = false;
}

int32_t UserDTO::getStatusCode() const
{
    return statusCode_;
}

void UserDTO::setStatusCode(int32_t value)
{
    statusCode_ = value;
    statusCodeIsSet_ = true;
}

bool UserDTO::statusCodeIsSet() const
{
    return statusCodeIsSet_;
}

void UserDTO::unsetstatusCode()
{
    statusCodeIsSet_ = false;
}

std::string UserDTO::getAccount() const
{
    return account_;
}

void UserDTO::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool UserDTO::accountIsSet() const
{
    return accountIsSet_;
}

void UserDTO::unsetaccount()
{
    accountIsSet_ = false;
}

std::string UserDTO::getName() const
{
    return name_;
}

void UserDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UserDTO::nameIsSet() const
{
    return nameIsSet_;
}

void UserDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string UserDTO::getEnglishName() const
{
    return englishName_;
}

void UserDTO::setEnglishName(const std::string& value)
{
    englishName_ = value;
    englishNameIsSet_ = true;
}

bool UserDTO::englishNameIsSet() const
{
    return englishNameIsSet_;
}

void UserDTO::unsetenglishName()
{
    englishNameIsSet_ = false;
}

std::string UserDTO::getEmail() const
{
    return email_;
}

void UserDTO::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool UserDTO::emailIsSet() const
{
    return emailIsSet_;
}

void UserDTO::unsetemail()
{
    emailIsSet_ = false;
}

std::string UserDTO::getPhone() const
{
    return phone_;
}

void UserDTO::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool UserDTO::phoneIsSet() const
{
    return phoneIsSet_;
}

void UserDTO::unsetphone()
{
    phoneIsSet_ = false;
}

std::string UserDTO::getDeptName() const
{
    return deptName_;
}

void UserDTO::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool UserDTO::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void UserDTO::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string UserDTO::getNumber() const
{
    return number_;
}

void UserDTO::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool UserDTO::numberIsSet() const
{
    return numberIsSet_;
}

void UserDTO::unsetnumber()
{
    numberIsSet_ = false;
}

int64_t UserDTO::getUpdateTime() const
{
    return updateTime_;
}

void UserDTO::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UserDTO::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UserDTO::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

bool UserDTO::isIsHardTerminal() const
{
    return isHardTerminal_;
}

void UserDTO::setIsHardTerminal(bool value)
{
    isHardTerminal_ = value;
    isHardTerminalIsSet_ = true;
}

bool UserDTO::isHardTerminalIsSet() const
{
    return isHardTerminalIsSet_;
}

void UserDTO::unsetisHardTerminal()
{
    isHardTerminalIsSet_ = false;
}

std::string UserDTO::getVmrId() const
{
    return vmrId_;
}

void UserDTO::setVmrId(const std::string& value)
{
    vmrId_ = value;
    vmrIdIsSet_ = true;
}

bool UserDTO::vmrIdIsSet() const
{
    return vmrIdIsSet_;
}

void UserDTO::unsetvmrId()
{
    vmrIdIsSet_ = false;
}

std::string UserDTO::getSignature() const
{
    return signature_;
}

void UserDTO::setSignature(const std::string& value)
{
    signature_ = value;
    signatureIsSet_ = true;
}

bool UserDTO::signatureIsSet() const
{
    return signatureIsSet_;
}

void UserDTO::unsetsignature()
{
    signatureIsSet_ = false;
}

std::string UserDTO::getTitle() const
{
    return title_;
}

void UserDTO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool UserDTO::titleIsSet() const
{
    return titleIsSet_;
}

void UserDTO::unsettitle()
{
    titleIsSet_ = false;
}

std::string UserDTO::getDescription() const
{
    return description_;
}

void UserDTO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UserDTO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UserDTO::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool UserDTO::isHidePhone() const
{
    return hidePhone_;
}

void UserDTO::setHidePhone(bool value)
{
    hidePhone_ = value;
    hidePhoneIsSet_ = true;
}

bool UserDTO::hidePhoneIsSet() const
{
    return hidePhoneIsSet_;
}

void UserDTO::unsethidePhone()
{
    hidePhoneIsSet_ = false;
}

std::string UserDTO::getType() const
{
    return type_;
}

void UserDTO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UserDTO::typeIsSet() const
{
    return typeIsSet_;
}

void UserDTO::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::string>& UserDTO::getDeptCodes()
{
    return deptCodes_;
}

void UserDTO::setDeptCodes(const std::vector<std::string>& value)
{
    deptCodes_ = value;
    deptCodesIsSet_ = true;
}

bool UserDTO::deptCodesIsSet() const
{
    return deptCodesIsSet_;
}

void UserDTO::unsetdeptCodes()
{
    deptCodesIsSet_ = false;
}

}
}
}
}
}


