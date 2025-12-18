

#include "huaweicloud/meeting/v1/model/UpdateUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateUserResponse::UpdateUserResponse()
{
    id_ = "";
    idIsSet_ = false;
    userAccount_ = "";
    userAccountIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    englishName_ = "";
    englishNameIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    sipNum_ = "";
    sipNumIsSet_ = false;
    vmrListIsSet_ = false;
    deptCode_ = "";
    deptCodeIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    deptNamePath_ = "";
    deptNamePathIsSet_ = false;
    userType_ = 0;
    userTypeIsSet_ = false;
    adminType_ = 0;
    adminTypeIsSet_ = false;
    signature_ = "";
    signatureIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    desc_ = "";
    descIsSet_ = false;
    corpIsSet_ = false;
    functionIsSet_ = false;
    devTypeIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    sortLevel_ = 0;
    sortLevelIsSet_ = false;
    hidePhone_ = false;
    hidePhoneIsSet_ = false;
    visionAccount_ = "";
    visionAccountIsSet_ = false;
    thirdAccount_ = "";
    thirdAccountIsSet_ = false;
    license_ = 0;
    licenseIsSet_ = false;
    activeTime_ = 0L;
    activeTimeIsSet_ = false;
}

UpdateUserResponse::~UpdateUserResponse() = default;

void UpdateUserResponse::validate()
{
}

web::json::value UpdateUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(userAccountIsSet_) {
        val[utility::conversions::to_string_t("userAccount")] = ModelBase::toJson(userAccount_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(englishNameIsSet_) {
        val[utility::conversions::to_string_t("englishName")] = ModelBase::toJson(englishName_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(sipNumIsSet_) {
        val[utility::conversions::to_string_t("sipNum")] = ModelBase::toJson(sipNum_);
    }
    if(vmrListIsSet_) {
        val[utility::conversions::to_string_t("vmrList")] = ModelBase::toJson(vmrList_);
    }
    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("deptCode")] = ModelBase::toJson(deptCode_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(deptNamePathIsSet_) {
        val[utility::conversions::to_string_t("deptNamePath")] = ModelBase::toJson(deptNamePath_);
    }
    if(userTypeIsSet_) {
        val[utility::conversions::to_string_t("userType")] = ModelBase::toJson(userType_);
    }
    if(adminTypeIsSet_) {
        val[utility::conversions::to_string_t("adminType")] = ModelBase::toJson(adminType_);
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
    if(corpIsSet_) {
        val[utility::conversions::to_string_t("corp")] = ModelBase::toJson(corp_);
    }
    if(functionIsSet_) {
        val[utility::conversions::to_string_t("function")] = ModelBase::toJson(function_);
    }
    if(devTypeIsSet_) {
        val[utility::conversions::to_string_t("devType")] = ModelBase::toJson(devType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(sortLevelIsSet_) {
        val[utility::conversions::to_string_t("sortLevel")] = ModelBase::toJson(sortLevel_);
    }
    if(hidePhoneIsSet_) {
        val[utility::conversions::to_string_t("hidePhone")] = ModelBase::toJson(hidePhone_);
    }
    if(visionAccountIsSet_) {
        val[utility::conversions::to_string_t("visionAccount")] = ModelBase::toJson(visionAccount_);
    }
    if(thirdAccountIsSet_) {
        val[utility::conversions::to_string_t("thirdAccount")] = ModelBase::toJson(thirdAccount_);
    }
    if(licenseIsSet_) {
        val[utility::conversions::to_string_t("license")] = ModelBase::toJson(license_);
    }
    if(activeTimeIsSet_) {
        val[utility::conversions::to_string_t("activeTime")] = ModelBase::toJson(activeTime_);
    }

    return val;
}
bool UpdateUserResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("userAccount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userAccount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserAccount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sipNum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sipNum"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSipNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrList"));
        if(!fieldValue.is_null())
        {
            std::vector<UserVmrDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrList(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deptName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptNamePath"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptNamePath"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptNamePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("adminType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adminType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("corp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("corp"));
        if(!fieldValue.is_null())
        {
            CorpBasicInfoDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCorp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("devType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("devType"));
        if(!fieldValue.is_null())
        {
            QueryDeviceInfoResultDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("visionAccount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visionAccount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisionAccount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("license"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("license"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLicense(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("activeTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("activeTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveTime(refVal);
        }
    }
    return ok;
}


std::string UpdateUserResponse::getId() const
{
    return id_;
}

void UpdateUserResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateUserResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateUserResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateUserResponse::getUserAccount() const
{
    return userAccount_;
}

void UpdateUserResponse::setUserAccount(const std::string& value)
{
    userAccount_ = value;
    userAccountIsSet_ = true;
}

bool UpdateUserResponse::userAccountIsSet() const
{
    return userAccountIsSet_;
}

void UpdateUserResponse::unsetuserAccount()
{
    userAccountIsSet_ = false;
}

std::string UpdateUserResponse::getName() const
{
    return name_;
}

void UpdateUserResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateUserResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateUserResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateUserResponse::getEnglishName() const
{
    return englishName_;
}

void UpdateUserResponse::setEnglishName(const std::string& value)
{
    englishName_ = value;
    englishNameIsSet_ = true;
}

bool UpdateUserResponse::englishNameIsSet() const
{
    return englishNameIsSet_;
}

void UpdateUserResponse::unsetenglishName()
{
    englishNameIsSet_ = false;
}

std::string UpdateUserResponse::getPhone() const
{
    return phone_;
}

void UpdateUserResponse::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool UpdateUserResponse::phoneIsSet() const
{
    return phoneIsSet_;
}

void UpdateUserResponse::unsetphone()
{
    phoneIsSet_ = false;
}

std::string UpdateUserResponse::getCountry() const
{
    return country_;
}

void UpdateUserResponse::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool UpdateUserResponse::countryIsSet() const
{
    return countryIsSet_;
}

void UpdateUserResponse::unsetcountry()
{
    countryIsSet_ = false;
}

std::string UpdateUserResponse::getEmail() const
{
    return email_;
}

void UpdateUserResponse::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool UpdateUserResponse::emailIsSet() const
{
    return emailIsSet_;
}

void UpdateUserResponse::unsetemail()
{
    emailIsSet_ = false;
}

std::string UpdateUserResponse::getSipNum() const
{
    return sipNum_;
}

void UpdateUserResponse::setSipNum(const std::string& value)
{
    sipNum_ = value;
    sipNumIsSet_ = true;
}

bool UpdateUserResponse::sipNumIsSet() const
{
    return sipNumIsSet_;
}

void UpdateUserResponse::unsetsipNum()
{
    sipNumIsSet_ = false;
}

std::vector<UserVmrDTO>& UpdateUserResponse::getVmrList()
{
    return vmrList_;
}

void UpdateUserResponse::setVmrList(const std::vector<UserVmrDTO>& value)
{
    vmrList_ = value;
    vmrListIsSet_ = true;
}

bool UpdateUserResponse::vmrListIsSet() const
{
    return vmrListIsSet_;
}

void UpdateUserResponse::unsetvmrList()
{
    vmrListIsSet_ = false;
}

std::string UpdateUserResponse::getDeptCode() const
{
    return deptCode_;
}

void UpdateUserResponse::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool UpdateUserResponse::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void UpdateUserResponse::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string UpdateUserResponse::getDeptName() const
{
    return deptName_;
}

void UpdateUserResponse::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool UpdateUserResponse::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void UpdateUserResponse::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string UpdateUserResponse::getDeptNamePath() const
{
    return deptNamePath_;
}

void UpdateUserResponse::setDeptNamePath(const std::string& value)
{
    deptNamePath_ = value;
    deptNamePathIsSet_ = true;
}

bool UpdateUserResponse::deptNamePathIsSet() const
{
    return deptNamePathIsSet_;
}

void UpdateUserResponse::unsetdeptNamePath()
{
    deptNamePathIsSet_ = false;
}

int32_t UpdateUserResponse::getUserType() const
{
    return userType_;
}

void UpdateUserResponse::setUserType(int32_t value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool UpdateUserResponse::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void UpdateUserResponse::unsetuserType()
{
    userTypeIsSet_ = false;
}

int32_t UpdateUserResponse::getAdminType() const
{
    return adminType_;
}

void UpdateUserResponse::setAdminType(int32_t value)
{
    adminType_ = value;
    adminTypeIsSet_ = true;
}

bool UpdateUserResponse::adminTypeIsSet() const
{
    return adminTypeIsSet_;
}

void UpdateUserResponse::unsetadminType()
{
    adminTypeIsSet_ = false;
}

std::string UpdateUserResponse::getSignature() const
{
    return signature_;
}

void UpdateUserResponse::setSignature(const std::string& value)
{
    signature_ = value;
    signatureIsSet_ = true;
}

bool UpdateUserResponse::signatureIsSet() const
{
    return signatureIsSet_;
}

void UpdateUserResponse::unsetsignature()
{
    signatureIsSet_ = false;
}

std::string UpdateUserResponse::getTitle() const
{
    return title_;
}

void UpdateUserResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool UpdateUserResponse::titleIsSet() const
{
    return titleIsSet_;
}

void UpdateUserResponse::unsettitle()
{
    titleIsSet_ = false;
}

std::string UpdateUserResponse::getDesc() const
{
    return desc_;
}

void UpdateUserResponse::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool UpdateUserResponse::descIsSet() const
{
    return descIsSet_;
}

void UpdateUserResponse::unsetdesc()
{
    descIsSet_ = false;
}

CorpBasicInfoDTO UpdateUserResponse::getCorp() const
{
    return corp_;
}

void UpdateUserResponse::setCorp(const CorpBasicInfoDTO& value)
{
    corp_ = value;
    corpIsSet_ = true;
}

bool UpdateUserResponse::corpIsSet() const
{
    return corpIsSet_;
}

void UpdateUserResponse::unsetcorp()
{
    corpIsSet_ = false;
}

UserFunctionDTO UpdateUserResponse::getFunction() const
{
    return function_;
}

void UpdateUserResponse::setFunction(const UserFunctionDTO& value)
{
    function_ = value;
    functionIsSet_ = true;
}

bool UpdateUserResponse::functionIsSet() const
{
    return functionIsSet_;
}

void UpdateUserResponse::unsetfunction()
{
    functionIsSet_ = false;
}

QueryDeviceInfoResultDTO UpdateUserResponse::getDevType() const
{
    return devType_;
}

void UpdateUserResponse::setDevType(const QueryDeviceInfoResultDTO& value)
{
    devType_ = value;
    devTypeIsSet_ = true;
}

bool UpdateUserResponse::devTypeIsSet() const
{
    return devTypeIsSet_;
}

void UpdateUserResponse::unsetdevType()
{
    devTypeIsSet_ = false;
}

int32_t UpdateUserResponse::getStatus() const
{
    return status_;
}

void UpdateUserResponse::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateUserResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateUserResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t UpdateUserResponse::getSortLevel() const
{
    return sortLevel_;
}

void UpdateUserResponse::setSortLevel(int32_t value)
{
    sortLevel_ = value;
    sortLevelIsSet_ = true;
}

bool UpdateUserResponse::sortLevelIsSet() const
{
    return sortLevelIsSet_;
}

void UpdateUserResponse::unsetsortLevel()
{
    sortLevelIsSet_ = false;
}

bool UpdateUserResponse::isHidePhone() const
{
    return hidePhone_;
}

void UpdateUserResponse::setHidePhone(bool value)
{
    hidePhone_ = value;
    hidePhoneIsSet_ = true;
}

bool UpdateUserResponse::hidePhoneIsSet() const
{
    return hidePhoneIsSet_;
}

void UpdateUserResponse::unsethidePhone()
{
    hidePhoneIsSet_ = false;
}

std::string UpdateUserResponse::getVisionAccount() const
{
    return visionAccount_;
}

void UpdateUserResponse::setVisionAccount(const std::string& value)
{
    visionAccount_ = value;
    visionAccountIsSet_ = true;
}

bool UpdateUserResponse::visionAccountIsSet() const
{
    return visionAccountIsSet_;
}

void UpdateUserResponse::unsetvisionAccount()
{
    visionAccountIsSet_ = false;
}

std::string UpdateUserResponse::getThirdAccount() const
{
    return thirdAccount_;
}

void UpdateUserResponse::setThirdAccount(const std::string& value)
{
    thirdAccount_ = value;
    thirdAccountIsSet_ = true;
}

bool UpdateUserResponse::thirdAccountIsSet() const
{
    return thirdAccountIsSet_;
}

void UpdateUserResponse::unsetthirdAccount()
{
    thirdAccountIsSet_ = false;
}

int32_t UpdateUserResponse::getLicense() const
{
    return license_;
}

void UpdateUserResponse::setLicense(int32_t value)
{
    license_ = value;
    licenseIsSet_ = true;
}

bool UpdateUserResponse::licenseIsSet() const
{
    return licenseIsSet_;
}

void UpdateUserResponse::unsetlicense()
{
    licenseIsSet_ = false;
}

int64_t UpdateUserResponse::getActiveTime() const
{
    return activeTime_;
}

void UpdateUserResponse::setActiveTime(int64_t value)
{
    activeTime_ = value;
    activeTimeIsSet_ = true;
}

bool UpdateUserResponse::activeTimeIsSet() const
{
    return activeTimeIsSet_;
}

void UpdateUserResponse::unsetactiveTime()
{
    activeTimeIsSet_ = false;
}

}
}
}
}
}


