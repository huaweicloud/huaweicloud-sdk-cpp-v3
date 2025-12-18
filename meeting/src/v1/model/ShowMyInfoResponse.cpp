

#include "huaweicloud/meeting/v1/model/ShowMyInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowMyInfoResponse::ShowMyInfoResponse()
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

ShowMyInfoResponse::~ShowMyInfoResponse() = default;

void ShowMyInfoResponse::validate()
{
}

web::json::value ShowMyInfoResponse::toJson() const
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
bool ShowMyInfoResponse::fromJson(const web::json::value& val)
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


std::string ShowMyInfoResponse::getId() const
{
    return id_;
}

void ShowMyInfoResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowMyInfoResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowMyInfoResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowMyInfoResponse::getUserAccount() const
{
    return userAccount_;
}

void ShowMyInfoResponse::setUserAccount(const std::string& value)
{
    userAccount_ = value;
    userAccountIsSet_ = true;
}

bool ShowMyInfoResponse::userAccountIsSet() const
{
    return userAccountIsSet_;
}

void ShowMyInfoResponse::unsetuserAccount()
{
    userAccountIsSet_ = false;
}

std::string ShowMyInfoResponse::getName() const
{
    return name_;
}

void ShowMyInfoResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowMyInfoResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowMyInfoResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowMyInfoResponse::getEnglishName() const
{
    return englishName_;
}

void ShowMyInfoResponse::setEnglishName(const std::string& value)
{
    englishName_ = value;
    englishNameIsSet_ = true;
}

bool ShowMyInfoResponse::englishNameIsSet() const
{
    return englishNameIsSet_;
}

void ShowMyInfoResponse::unsetenglishName()
{
    englishNameIsSet_ = false;
}

std::string ShowMyInfoResponse::getPhone() const
{
    return phone_;
}

void ShowMyInfoResponse::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool ShowMyInfoResponse::phoneIsSet() const
{
    return phoneIsSet_;
}

void ShowMyInfoResponse::unsetphone()
{
    phoneIsSet_ = false;
}

std::string ShowMyInfoResponse::getCountry() const
{
    return country_;
}

void ShowMyInfoResponse::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool ShowMyInfoResponse::countryIsSet() const
{
    return countryIsSet_;
}

void ShowMyInfoResponse::unsetcountry()
{
    countryIsSet_ = false;
}

std::string ShowMyInfoResponse::getEmail() const
{
    return email_;
}

void ShowMyInfoResponse::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool ShowMyInfoResponse::emailIsSet() const
{
    return emailIsSet_;
}

void ShowMyInfoResponse::unsetemail()
{
    emailIsSet_ = false;
}

std::string ShowMyInfoResponse::getSipNum() const
{
    return sipNum_;
}

void ShowMyInfoResponse::setSipNum(const std::string& value)
{
    sipNum_ = value;
    sipNumIsSet_ = true;
}

bool ShowMyInfoResponse::sipNumIsSet() const
{
    return sipNumIsSet_;
}

void ShowMyInfoResponse::unsetsipNum()
{
    sipNumIsSet_ = false;
}

std::vector<UserVmrDTO>& ShowMyInfoResponse::getVmrList()
{
    return vmrList_;
}

void ShowMyInfoResponse::setVmrList(const std::vector<UserVmrDTO>& value)
{
    vmrList_ = value;
    vmrListIsSet_ = true;
}

bool ShowMyInfoResponse::vmrListIsSet() const
{
    return vmrListIsSet_;
}

void ShowMyInfoResponse::unsetvmrList()
{
    vmrListIsSet_ = false;
}

std::string ShowMyInfoResponse::getDeptCode() const
{
    return deptCode_;
}

void ShowMyInfoResponse::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool ShowMyInfoResponse::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void ShowMyInfoResponse::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string ShowMyInfoResponse::getDeptName() const
{
    return deptName_;
}

void ShowMyInfoResponse::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool ShowMyInfoResponse::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void ShowMyInfoResponse::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string ShowMyInfoResponse::getDeptNamePath() const
{
    return deptNamePath_;
}

void ShowMyInfoResponse::setDeptNamePath(const std::string& value)
{
    deptNamePath_ = value;
    deptNamePathIsSet_ = true;
}

bool ShowMyInfoResponse::deptNamePathIsSet() const
{
    return deptNamePathIsSet_;
}

void ShowMyInfoResponse::unsetdeptNamePath()
{
    deptNamePathIsSet_ = false;
}

int32_t ShowMyInfoResponse::getUserType() const
{
    return userType_;
}

void ShowMyInfoResponse::setUserType(int32_t value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool ShowMyInfoResponse::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void ShowMyInfoResponse::unsetuserType()
{
    userTypeIsSet_ = false;
}

int32_t ShowMyInfoResponse::getAdminType() const
{
    return adminType_;
}

void ShowMyInfoResponse::setAdminType(int32_t value)
{
    adminType_ = value;
    adminTypeIsSet_ = true;
}

bool ShowMyInfoResponse::adminTypeIsSet() const
{
    return adminTypeIsSet_;
}

void ShowMyInfoResponse::unsetadminType()
{
    adminTypeIsSet_ = false;
}

std::string ShowMyInfoResponse::getSignature() const
{
    return signature_;
}

void ShowMyInfoResponse::setSignature(const std::string& value)
{
    signature_ = value;
    signatureIsSet_ = true;
}

bool ShowMyInfoResponse::signatureIsSet() const
{
    return signatureIsSet_;
}

void ShowMyInfoResponse::unsetsignature()
{
    signatureIsSet_ = false;
}

std::string ShowMyInfoResponse::getTitle() const
{
    return title_;
}

void ShowMyInfoResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ShowMyInfoResponse::titleIsSet() const
{
    return titleIsSet_;
}

void ShowMyInfoResponse::unsettitle()
{
    titleIsSet_ = false;
}

std::string ShowMyInfoResponse::getDesc() const
{
    return desc_;
}

void ShowMyInfoResponse::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool ShowMyInfoResponse::descIsSet() const
{
    return descIsSet_;
}

void ShowMyInfoResponse::unsetdesc()
{
    descIsSet_ = false;
}

CorpBasicInfoDTO ShowMyInfoResponse::getCorp() const
{
    return corp_;
}

void ShowMyInfoResponse::setCorp(const CorpBasicInfoDTO& value)
{
    corp_ = value;
    corpIsSet_ = true;
}

bool ShowMyInfoResponse::corpIsSet() const
{
    return corpIsSet_;
}

void ShowMyInfoResponse::unsetcorp()
{
    corpIsSet_ = false;
}

UserFunctionDTO ShowMyInfoResponse::getFunction() const
{
    return function_;
}

void ShowMyInfoResponse::setFunction(const UserFunctionDTO& value)
{
    function_ = value;
    functionIsSet_ = true;
}

bool ShowMyInfoResponse::functionIsSet() const
{
    return functionIsSet_;
}

void ShowMyInfoResponse::unsetfunction()
{
    functionIsSet_ = false;
}

QueryDeviceInfoResultDTO ShowMyInfoResponse::getDevType() const
{
    return devType_;
}

void ShowMyInfoResponse::setDevType(const QueryDeviceInfoResultDTO& value)
{
    devType_ = value;
    devTypeIsSet_ = true;
}

bool ShowMyInfoResponse::devTypeIsSet() const
{
    return devTypeIsSet_;
}

void ShowMyInfoResponse::unsetdevType()
{
    devTypeIsSet_ = false;
}

int32_t ShowMyInfoResponse::getStatus() const
{
    return status_;
}

void ShowMyInfoResponse::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowMyInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowMyInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ShowMyInfoResponse::getSortLevel() const
{
    return sortLevel_;
}

void ShowMyInfoResponse::setSortLevel(int32_t value)
{
    sortLevel_ = value;
    sortLevelIsSet_ = true;
}

bool ShowMyInfoResponse::sortLevelIsSet() const
{
    return sortLevelIsSet_;
}

void ShowMyInfoResponse::unsetsortLevel()
{
    sortLevelIsSet_ = false;
}

bool ShowMyInfoResponse::isHidePhone() const
{
    return hidePhone_;
}

void ShowMyInfoResponse::setHidePhone(bool value)
{
    hidePhone_ = value;
    hidePhoneIsSet_ = true;
}

bool ShowMyInfoResponse::hidePhoneIsSet() const
{
    return hidePhoneIsSet_;
}

void ShowMyInfoResponse::unsethidePhone()
{
    hidePhoneIsSet_ = false;
}

std::string ShowMyInfoResponse::getVisionAccount() const
{
    return visionAccount_;
}

void ShowMyInfoResponse::setVisionAccount(const std::string& value)
{
    visionAccount_ = value;
    visionAccountIsSet_ = true;
}

bool ShowMyInfoResponse::visionAccountIsSet() const
{
    return visionAccountIsSet_;
}

void ShowMyInfoResponse::unsetvisionAccount()
{
    visionAccountIsSet_ = false;
}

std::string ShowMyInfoResponse::getThirdAccount() const
{
    return thirdAccount_;
}

void ShowMyInfoResponse::setThirdAccount(const std::string& value)
{
    thirdAccount_ = value;
    thirdAccountIsSet_ = true;
}

bool ShowMyInfoResponse::thirdAccountIsSet() const
{
    return thirdAccountIsSet_;
}

void ShowMyInfoResponse::unsetthirdAccount()
{
    thirdAccountIsSet_ = false;
}

int32_t ShowMyInfoResponse::getLicense() const
{
    return license_;
}

void ShowMyInfoResponse::setLicense(int32_t value)
{
    license_ = value;
    licenseIsSet_ = true;
}

bool ShowMyInfoResponse::licenseIsSet() const
{
    return licenseIsSet_;
}

void ShowMyInfoResponse::unsetlicense()
{
    licenseIsSet_ = false;
}

int64_t ShowMyInfoResponse::getActiveTime() const
{
    return activeTime_;
}

void ShowMyInfoResponse::setActiveTime(int64_t value)
{
    activeTime_ = value;
    activeTimeIsSet_ = true;
}

bool ShowMyInfoResponse::activeTimeIsSet() const
{
    return activeTimeIsSet_;
}

void ShowMyInfoResponse::unsetactiveTime()
{
    activeTimeIsSet_ = false;
}

}
}
}
}
}


