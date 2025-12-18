

#include "huaweicloud/meeting/v1/model/AddUserDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddUserDTO::AddUserDTO()
{
    name_ = "";
    nameIsSet_ = false;
    englishName_ = "";
    englishNameIsSet_ = false;
    account_ = "";
    accountIsSet_ = false;
    thirdAccount_ = "";
    thirdAccountIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
    pwd_ = "";
    pwdIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    deptCode_ = "";
    deptCodeIsSet_ = false;
    signature_ = "";
    signatureIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    desc_ = "";
    descIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    functionIsSet_ = false;
    sendNotify_ = "";
    sendNotifyIsSet_ = false;
    sortLevel_ = 0;
    sortLevelIsSet_ = false;
    hidePhone_ = false;
    hidePhoneIsSet_ = false;
}

AddUserDTO::~AddUserDTO() = default;

void AddUserDTO::validate()
{
}

web::json::value AddUserDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(englishNameIsSet_) {
        val[utility::conversions::to_string_t("englishName")] = ModelBase::toJson(englishName_);
    }
    if(accountIsSet_) {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(account_);
    }
    if(thirdAccountIsSet_) {
        val[utility::conversions::to_string_t("thirdAccount")] = ModelBase::toJson(thirdAccount_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }
    if(pwdIsSet_) {
        val[utility::conversions::to_string_t("pwd")] = ModelBase::toJson(pwd_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("deptCode")] = ModelBase::toJson(deptCode_);
    }
    if(signatureIsSet_) {
        val[utility::conversions::to_string_t("signature")] = ModelBase::toJson(signature_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descIsSet_) {
        val[utility::conversions::to_string_t("desc")] = ModelBase::toJson(desc_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(functionIsSet_) {
        val[utility::conversions::to_string_t("function")] = ModelBase::toJson(function_);
    }
    if(sendNotifyIsSet_) {
        val[utility::conversions::to_string_t("sendNotify")] = ModelBase::toJson(sendNotify_);
    }
    if(sortLevelIsSet_) {
        val[utility::conversions::to_string_t("sortLevel")] = ModelBase::toJson(sortLevel_);
    }
    if(hidePhoneIsSet_) {
        val[utility::conversions::to_string_t("hidePhone")] = ModelBase::toJson(hidePhone_);
    }

    return val;
}
bool AddUserDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thirdAccount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thirdAccount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThirdAccount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("country"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("country"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountry(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPwd(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deptCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("function"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function"));
        if(!fieldValue.is_null())
        {
            UserFunctionDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sendNotify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sendNotify"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendNotify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sortLevel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sortLevel"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortLevel(refVal);
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
    return ok;
}


std::string AddUserDTO::getName() const
{
    return name_;
}

void AddUserDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddUserDTO::nameIsSet() const
{
    return nameIsSet_;
}

void AddUserDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string AddUserDTO::getEnglishName() const
{
    return englishName_;
}

void AddUserDTO::setEnglishName(const std::string& value)
{
    englishName_ = value;
    englishNameIsSet_ = true;
}

bool AddUserDTO::englishNameIsSet() const
{
    return englishNameIsSet_;
}

void AddUserDTO::unsetenglishName()
{
    englishNameIsSet_ = false;
}

std::string AddUserDTO::getAccount() const
{
    return account_;
}

void AddUserDTO::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool AddUserDTO::accountIsSet() const
{
    return accountIsSet_;
}

void AddUserDTO::unsetaccount()
{
    accountIsSet_ = false;
}

std::string AddUserDTO::getThirdAccount() const
{
    return thirdAccount_;
}

void AddUserDTO::setThirdAccount(const std::string& value)
{
    thirdAccount_ = value;
    thirdAccountIsSet_ = true;
}

bool AddUserDTO::thirdAccountIsSet() const
{
    return thirdAccountIsSet_;
}

void AddUserDTO::unsetthirdAccount()
{
    thirdAccountIsSet_ = false;
}

std::string AddUserDTO::getPhone() const
{
    return phone_;
}

void AddUserDTO::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool AddUserDTO::phoneIsSet() const
{
    return phoneIsSet_;
}

void AddUserDTO::unsetphone()
{
    phoneIsSet_ = false;
}

std::string AddUserDTO::getCountry() const
{
    return country_;
}

void AddUserDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool AddUserDTO::countryIsSet() const
{
    return countryIsSet_;
}

void AddUserDTO::unsetcountry()
{
    countryIsSet_ = false;
}

std::string AddUserDTO::getPwd() const
{
    return pwd_;
}

void AddUserDTO::setPwd(const std::string& value)
{
    pwd_ = value;
    pwdIsSet_ = true;
}

bool AddUserDTO::pwdIsSet() const
{
    return pwdIsSet_;
}

void AddUserDTO::unsetpwd()
{
    pwdIsSet_ = false;
}

std::string AddUserDTO::getEmail() const
{
    return email_;
}

void AddUserDTO::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool AddUserDTO::emailIsSet() const
{
    return emailIsSet_;
}

void AddUserDTO::unsetemail()
{
    emailIsSet_ = false;
}

std::string AddUserDTO::getDeptCode() const
{
    return deptCode_;
}

void AddUserDTO::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool AddUserDTO::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void AddUserDTO::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string AddUserDTO::getSignature() const
{
    return signature_;
}

void AddUserDTO::setSignature(const std::string& value)
{
    signature_ = value;
    signatureIsSet_ = true;
}

bool AddUserDTO::signatureIsSet() const
{
    return signatureIsSet_;
}

void AddUserDTO::unsetsignature()
{
    signatureIsSet_ = false;
}

std::string AddUserDTO::getTitle() const
{
    return title_;
}

void AddUserDTO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool AddUserDTO::titleIsSet() const
{
    return titleIsSet_;
}

void AddUserDTO::unsettitle()
{
    titleIsSet_ = false;
}

std::string AddUserDTO::getDesc() const
{
    return desc_;
}

void AddUserDTO::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool AddUserDTO::descIsSet() const
{
    return descIsSet_;
}

void AddUserDTO::unsetdesc()
{
    descIsSet_ = false;
}

int32_t AddUserDTO::getStatus() const
{
    return status_;
}

void AddUserDTO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddUserDTO::statusIsSet() const
{
    return statusIsSet_;
}

void AddUserDTO::unsetstatus()
{
    statusIsSet_ = false;
}

UserFunctionDTO AddUserDTO::getFunction() const
{
    return function_;
}

void AddUserDTO::setFunction(const UserFunctionDTO& value)
{
    function_ = value;
    functionIsSet_ = true;
}

bool AddUserDTO::functionIsSet() const
{
    return functionIsSet_;
}

void AddUserDTO::unsetfunction()
{
    functionIsSet_ = false;
}

std::string AddUserDTO::getSendNotify() const
{
    return sendNotify_;
}

void AddUserDTO::setSendNotify(const std::string& value)
{
    sendNotify_ = value;
    sendNotifyIsSet_ = true;
}

bool AddUserDTO::sendNotifyIsSet() const
{
    return sendNotifyIsSet_;
}

void AddUserDTO::unsetsendNotify()
{
    sendNotifyIsSet_ = false;
}

int32_t AddUserDTO::getSortLevel() const
{
    return sortLevel_;
}

void AddUserDTO::setSortLevel(int32_t value)
{
    sortLevel_ = value;
    sortLevelIsSet_ = true;
}

bool AddUserDTO::sortLevelIsSet() const
{
    return sortLevelIsSet_;
}

void AddUserDTO::unsetsortLevel()
{
    sortLevelIsSet_ = false;
}

bool AddUserDTO::isHidePhone() const
{
    return hidePhone_;
}

void AddUserDTO::setHidePhone(bool value)
{
    hidePhone_ = value;
    hidePhoneIsSet_ = true;
}

bool AddUserDTO::hidePhoneIsSet() const
{
    return hidePhoneIsSet_;
}

void AddUserDTO::unsethidePhone()
{
    hidePhoneIsSet_ = false;
}

}
}
}
}
}


