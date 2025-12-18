

#include "huaweicloud/meeting/v1/model/ShowUserDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowUserDetailResponse::ShowUserDetailResponse()
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

ShowUserDetailResponse::~ShowUserDetailResponse() = default;

void ShowUserDetailResponse::validate()
{
}

web::json::value ShowUserDetailResponse::toJson() const
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
bool ShowUserDetailResponse::fromJson(const web::json::value& val)
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


std::string ShowUserDetailResponse::getId() const
{
    return id_;
}

void ShowUserDetailResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowUserDetailResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowUserDetailResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowUserDetailResponse::getUserAccount() const
{
    return userAccount_;
}

void ShowUserDetailResponse::setUserAccount(const std::string& value)
{
    userAccount_ = value;
    userAccountIsSet_ = true;
}

bool ShowUserDetailResponse::userAccountIsSet() const
{
    return userAccountIsSet_;
}

void ShowUserDetailResponse::unsetuserAccount()
{
    userAccountIsSet_ = false;
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

std::string ShowUserDetailResponse::getEnglishName() const
{
    return englishName_;
}

void ShowUserDetailResponse::setEnglishName(const std::string& value)
{
    englishName_ = value;
    englishNameIsSet_ = true;
}

bool ShowUserDetailResponse::englishNameIsSet() const
{
    return englishNameIsSet_;
}

void ShowUserDetailResponse::unsetenglishName()
{
    englishNameIsSet_ = false;
}

std::string ShowUserDetailResponse::getPhone() const
{
    return phone_;
}

void ShowUserDetailResponse::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool ShowUserDetailResponse::phoneIsSet() const
{
    return phoneIsSet_;
}

void ShowUserDetailResponse::unsetphone()
{
    phoneIsSet_ = false;
}

std::string ShowUserDetailResponse::getCountry() const
{
    return country_;
}

void ShowUserDetailResponse::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool ShowUserDetailResponse::countryIsSet() const
{
    return countryIsSet_;
}

void ShowUserDetailResponse::unsetcountry()
{
    countryIsSet_ = false;
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

std::string ShowUserDetailResponse::getSipNum() const
{
    return sipNum_;
}

void ShowUserDetailResponse::setSipNum(const std::string& value)
{
    sipNum_ = value;
    sipNumIsSet_ = true;
}

bool ShowUserDetailResponse::sipNumIsSet() const
{
    return sipNumIsSet_;
}

void ShowUserDetailResponse::unsetsipNum()
{
    sipNumIsSet_ = false;
}

std::vector<UserVmrDTO>& ShowUserDetailResponse::getVmrList()
{
    return vmrList_;
}

void ShowUserDetailResponse::setVmrList(const std::vector<UserVmrDTO>& value)
{
    vmrList_ = value;
    vmrListIsSet_ = true;
}

bool ShowUserDetailResponse::vmrListIsSet() const
{
    return vmrListIsSet_;
}

void ShowUserDetailResponse::unsetvmrList()
{
    vmrListIsSet_ = false;
}

std::string ShowUserDetailResponse::getDeptCode() const
{
    return deptCode_;
}

void ShowUserDetailResponse::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool ShowUserDetailResponse::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void ShowUserDetailResponse::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string ShowUserDetailResponse::getDeptName() const
{
    return deptName_;
}

void ShowUserDetailResponse::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool ShowUserDetailResponse::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void ShowUserDetailResponse::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string ShowUserDetailResponse::getDeptNamePath() const
{
    return deptNamePath_;
}

void ShowUserDetailResponse::setDeptNamePath(const std::string& value)
{
    deptNamePath_ = value;
    deptNamePathIsSet_ = true;
}

bool ShowUserDetailResponse::deptNamePathIsSet() const
{
    return deptNamePathIsSet_;
}

void ShowUserDetailResponse::unsetdeptNamePath()
{
    deptNamePathIsSet_ = false;
}

int32_t ShowUserDetailResponse::getUserType() const
{
    return userType_;
}

void ShowUserDetailResponse::setUserType(int32_t value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool ShowUserDetailResponse::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void ShowUserDetailResponse::unsetuserType()
{
    userTypeIsSet_ = false;
}

int32_t ShowUserDetailResponse::getAdminType() const
{
    return adminType_;
}

void ShowUserDetailResponse::setAdminType(int32_t value)
{
    adminType_ = value;
    adminTypeIsSet_ = true;
}

bool ShowUserDetailResponse::adminTypeIsSet() const
{
    return adminTypeIsSet_;
}

void ShowUserDetailResponse::unsetadminType()
{
    adminTypeIsSet_ = false;
}

std::string ShowUserDetailResponse::getSignature() const
{
    return signature_;
}

void ShowUserDetailResponse::setSignature(const std::string& value)
{
    signature_ = value;
    signatureIsSet_ = true;
}

bool ShowUserDetailResponse::signatureIsSet() const
{
    return signatureIsSet_;
}

void ShowUserDetailResponse::unsetsignature()
{
    signatureIsSet_ = false;
}

std::string ShowUserDetailResponse::getTitle() const
{
    return title_;
}

void ShowUserDetailResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ShowUserDetailResponse::titleIsSet() const
{
    return titleIsSet_;
}

void ShowUserDetailResponse::unsettitle()
{
    titleIsSet_ = false;
}

std::string ShowUserDetailResponse::getDesc() const
{
    return desc_;
}

void ShowUserDetailResponse::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool ShowUserDetailResponse::descIsSet() const
{
    return descIsSet_;
}

void ShowUserDetailResponse::unsetdesc()
{
    descIsSet_ = false;
}

CorpBasicInfoDTO ShowUserDetailResponse::getCorp() const
{
    return corp_;
}

void ShowUserDetailResponse::setCorp(const CorpBasicInfoDTO& value)
{
    corp_ = value;
    corpIsSet_ = true;
}

bool ShowUserDetailResponse::corpIsSet() const
{
    return corpIsSet_;
}

void ShowUserDetailResponse::unsetcorp()
{
    corpIsSet_ = false;
}

UserFunctionDTO ShowUserDetailResponse::getFunction() const
{
    return function_;
}

void ShowUserDetailResponse::setFunction(const UserFunctionDTO& value)
{
    function_ = value;
    functionIsSet_ = true;
}

bool ShowUserDetailResponse::functionIsSet() const
{
    return functionIsSet_;
}

void ShowUserDetailResponse::unsetfunction()
{
    functionIsSet_ = false;
}

QueryDeviceInfoResultDTO ShowUserDetailResponse::getDevType() const
{
    return devType_;
}

void ShowUserDetailResponse::setDevType(const QueryDeviceInfoResultDTO& value)
{
    devType_ = value;
    devTypeIsSet_ = true;
}

bool ShowUserDetailResponse::devTypeIsSet() const
{
    return devTypeIsSet_;
}

void ShowUserDetailResponse::unsetdevType()
{
    devTypeIsSet_ = false;
}

int32_t ShowUserDetailResponse::getStatus() const
{
    return status_;
}

void ShowUserDetailResponse::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowUserDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowUserDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ShowUserDetailResponse::getSortLevel() const
{
    return sortLevel_;
}

void ShowUserDetailResponse::setSortLevel(int32_t value)
{
    sortLevel_ = value;
    sortLevelIsSet_ = true;
}

bool ShowUserDetailResponse::sortLevelIsSet() const
{
    return sortLevelIsSet_;
}

void ShowUserDetailResponse::unsetsortLevel()
{
    sortLevelIsSet_ = false;
}

bool ShowUserDetailResponse::isHidePhone() const
{
    return hidePhone_;
}

void ShowUserDetailResponse::setHidePhone(bool value)
{
    hidePhone_ = value;
    hidePhoneIsSet_ = true;
}

bool ShowUserDetailResponse::hidePhoneIsSet() const
{
    return hidePhoneIsSet_;
}

void ShowUserDetailResponse::unsethidePhone()
{
    hidePhoneIsSet_ = false;
}

std::string ShowUserDetailResponse::getVisionAccount() const
{
    return visionAccount_;
}

void ShowUserDetailResponse::setVisionAccount(const std::string& value)
{
    visionAccount_ = value;
    visionAccountIsSet_ = true;
}

bool ShowUserDetailResponse::visionAccountIsSet() const
{
    return visionAccountIsSet_;
}

void ShowUserDetailResponse::unsetvisionAccount()
{
    visionAccountIsSet_ = false;
}

std::string ShowUserDetailResponse::getThirdAccount() const
{
    return thirdAccount_;
}

void ShowUserDetailResponse::setThirdAccount(const std::string& value)
{
    thirdAccount_ = value;
    thirdAccountIsSet_ = true;
}

bool ShowUserDetailResponse::thirdAccountIsSet() const
{
    return thirdAccountIsSet_;
}

void ShowUserDetailResponse::unsetthirdAccount()
{
    thirdAccountIsSet_ = false;
}

int32_t ShowUserDetailResponse::getLicense() const
{
    return license_;
}

void ShowUserDetailResponse::setLicense(int32_t value)
{
    license_ = value;
    licenseIsSet_ = true;
}

bool ShowUserDetailResponse::licenseIsSet() const
{
    return licenseIsSet_;
}

void ShowUserDetailResponse::unsetlicense()
{
    licenseIsSet_ = false;
}

int64_t ShowUserDetailResponse::getActiveTime() const
{
    return activeTime_;
}

void ShowUserDetailResponse::setActiveTime(int64_t value)
{
    activeTime_ = value;
    activeTimeIsSet_ = true;
}

bool ShowUserDetailResponse::activeTimeIsSet() const
{
    return activeTimeIsSet_;
}

void ShowUserDetailResponse::unsetactiveTime()
{
    activeTimeIsSet_ = false;
}

}
}
}
}
}


