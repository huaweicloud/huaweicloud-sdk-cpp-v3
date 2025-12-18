

#include "huaweicloud/meeting/v1/model/AddUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddUserResponse::AddUserResponse()
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

AddUserResponse::~AddUserResponse() = default;

void AddUserResponse::validate()
{
}

web::json::value AddUserResponse::toJson() const
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
bool AddUserResponse::fromJson(const web::json::value& val)
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


std::string AddUserResponse::getId() const
{
    return id_;
}

void AddUserResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AddUserResponse::idIsSet() const
{
    return idIsSet_;
}

void AddUserResponse::unsetid()
{
    idIsSet_ = false;
}

std::string AddUserResponse::getUserAccount() const
{
    return userAccount_;
}

void AddUserResponse::setUserAccount(const std::string& value)
{
    userAccount_ = value;
    userAccountIsSet_ = true;
}

bool AddUserResponse::userAccountIsSet() const
{
    return userAccountIsSet_;
}

void AddUserResponse::unsetuserAccount()
{
    userAccountIsSet_ = false;
}

std::string AddUserResponse::getName() const
{
    return name_;
}

void AddUserResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddUserResponse::nameIsSet() const
{
    return nameIsSet_;
}

void AddUserResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string AddUserResponse::getEnglishName() const
{
    return englishName_;
}

void AddUserResponse::setEnglishName(const std::string& value)
{
    englishName_ = value;
    englishNameIsSet_ = true;
}

bool AddUserResponse::englishNameIsSet() const
{
    return englishNameIsSet_;
}

void AddUserResponse::unsetenglishName()
{
    englishNameIsSet_ = false;
}

std::string AddUserResponse::getPhone() const
{
    return phone_;
}

void AddUserResponse::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool AddUserResponse::phoneIsSet() const
{
    return phoneIsSet_;
}

void AddUserResponse::unsetphone()
{
    phoneIsSet_ = false;
}

std::string AddUserResponse::getCountry() const
{
    return country_;
}

void AddUserResponse::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool AddUserResponse::countryIsSet() const
{
    return countryIsSet_;
}

void AddUserResponse::unsetcountry()
{
    countryIsSet_ = false;
}

std::string AddUserResponse::getEmail() const
{
    return email_;
}

void AddUserResponse::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool AddUserResponse::emailIsSet() const
{
    return emailIsSet_;
}

void AddUserResponse::unsetemail()
{
    emailIsSet_ = false;
}

std::string AddUserResponse::getSipNum() const
{
    return sipNum_;
}

void AddUserResponse::setSipNum(const std::string& value)
{
    sipNum_ = value;
    sipNumIsSet_ = true;
}

bool AddUserResponse::sipNumIsSet() const
{
    return sipNumIsSet_;
}

void AddUserResponse::unsetsipNum()
{
    sipNumIsSet_ = false;
}

std::vector<UserVmrDTO>& AddUserResponse::getVmrList()
{
    return vmrList_;
}

void AddUserResponse::setVmrList(const std::vector<UserVmrDTO>& value)
{
    vmrList_ = value;
    vmrListIsSet_ = true;
}

bool AddUserResponse::vmrListIsSet() const
{
    return vmrListIsSet_;
}

void AddUserResponse::unsetvmrList()
{
    vmrListIsSet_ = false;
}

std::string AddUserResponse::getDeptCode() const
{
    return deptCode_;
}

void AddUserResponse::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool AddUserResponse::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void AddUserResponse::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string AddUserResponse::getDeptName() const
{
    return deptName_;
}

void AddUserResponse::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool AddUserResponse::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void AddUserResponse::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string AddUserResponse::getDeptNamePath() const
{
    return deptNamePath_;
}

void AddUserResponse::setDeptNamePath(const std::string& value)
{
    deptNamePath_ = value;
    deptNamePathIsSet_ = true;
}

bool AddUserResponse::deptNamePathIsSet() const
{
    return deptNamePathIsSet_;
}

void AddUserResponse::unsetdeptNamePath()
{
    deptNamePathIsSet_ = false;
}

int32_t AddUserResponse::getUserType() const
{
    return userType_;
}

void AddUserResponse::setUserType(int32_t value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool AddUserResponse::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void AddUserResponse::unsetuserType()
{
    userTypeIsSet_ = false;
}

int32_t AddUserResponse::getAdminType() const
{
    return adminType_;
}

void AddUserResponse::setAdminType(int32_t value)
{
    adminType_ = value;
    adminTypeIsSet_ = true;
}

bool AddUserResponse::adminTypeIsSet() const
{
    return adminTypeIsSet_;
}

void AddUserResponse::unsetadminType()
{
    adminTypeIsSet_ = false;
}

std::string AddUserResponse::getSignature() const
{
    return signature_;
}

void AddUserResponse::setSignature(const std::string& value)
{
    signature_ = value;
    signatureIsSet_ = true;
}

bool AddUserResponse::signatureIsSet() const
{
    return signatureIsSet_;
}

void AddUserResponse::unsetsignature()
{
    signatureIsSet_ = false;
}

std::string AddUserResponse::getTitle() const
{
    return title_;
}

void AddUserResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool AddUserResponse::titleIsSet() const
{
    return titleIsSet_;
}

void AddUserResponse::unsettitle()
{
    titleIsSet_ = false;
}

std::string AddUserResponse::getDesc() const
{
    return desc_;
}

void AddUserResponse::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool AddUserResponse::descIsSet() const
{
    return descIsSet_;
}

void AddUserResponse::unsetdesc()
{
    descIsSet_ = false;
}

CorpBasicInfoDTO AddUserResponse::getCorp() const
{
    return corp_;
}

void AddUserResponse::setCorp(const CorpBasicInfoDTO& value)
{
    corp_ = value;
    corpIsSet_ = true;
}

bool AddUserResponse::corpIsSet() const
{
    return corpIsSet_;
}

void AddUserResponse::unsetcorp()
{
    corpIsSet_ = false;
}

UserFunctionDTO AddUserResponse::getFunction() const
{
    return function_;
}

void AddUserResponse::setFunction(const UserFunctionDTO& value)
{
    function_ = value;
    functionIsSet_ = true;
}

bool AddUserResponse::functionIsSet() const
{
    return functionIsSet_;
}

void AddUserResponse::unsetfunction()
{
    functionIsSet_ = false;
}

QueryDeviceInfoResultDTO AddUserResponse::getDevType() const
{
    return devType_;
}

void AddUserResponse::setDevType(const QueryDeviceInfoResultDTO& value)
{
    devType_ = value;
    devTypeIsSet_ = true;
}

bool AddUserResponse::devTypeIsSet() const
{
    return devTypeIsSet_;
}

void AddUserResponse::unsetdevType()
{
    devTypeIsSet_ = false;
}

int32_t AddUserResponse::getStatus() const
{
    return status_;
}

void AddUserResponse::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddUserResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddUserResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t AddUserResponse::getSortLevel() const
{
    return sortLevel_;
}

void AddUserResponse::setSortLevel(int32_t value)
{
    sortLevel_ = value;
    sortLevelIsSet_ = true;
}

bool AddUserResponse::sortLevelIsSet() const
{
    return sortLevelIsSet_;
}

void AddUserResponse::unsetsortLevel()
{
    sortLevelIsSet_ = false;
}

bool AddUserResponse::isHidePhone() const
{
    return hidePhone_;
}

void AddUserResponse::setHidePhone(bool value)
{
    hidePhone_ = value;
    hidePhoneIsSet_ = true;
}

bool AddUserResponse::hidePhoneIsSet() const
{
    return hidePhoneIsSet_;
}

void AddUserResponse::unsethidePhone()
{
    hidePhoneIsSet_ = false;
}

std::string AddUserResponse::getVisionAccount() const
{
    return visionAccount_;
}

void AddUserResponse::setVisionAccount(const std::string& value)
{
    visionAccount_ = value;
    visionAccountIsSet_ = true;
}

bool AddUserResponse::visionAccountIsSet() const
{
    return visionAccountIsSet_;
}

void AddUserResponse::unsetvisionAccount()
{
    visionAccountIsSet_ = false;
}

std::string AddUserResponse::getThirdAccount() const
{
    return thirdAccount_;
}

void AddUserResponse::setThirdAccount(const std::string& value)
{
    thirdAccount_ = value;
    thirdAccountIsSet_ = true;
}

bool AddUserResponse::thirdAccountIsSet() const
{
    return thirdAccountIsSet_;
}

void AddUserResponse::unsetthirdAccount()
{
    thirdAccountIsSet_ = false;
}

int32_t AddUserResponse::getLicense() const
{
    return license_;
}

void AddUserResponse::setLicense(int32_t value)
{
    license_ = value;
    licenseIsSet_ = true;
}

bool AddUserResponse::licenseIsSet() const
{
    return licenseIsSet_;
}

void AddUserResponse::unsetlicense()
{
    licenseIsSet_ = false;
}

int64_t AddUserResponse::getActiveTime() const
{
    return activeTime_;
}

void AddUserResponse::setActiveTime(int64_t value)
{
    activeTime_ = value;
    activeTimeIsSet_ = true;
}

bool AddUserResponse::activeTimeIsSet() const
{
    return activeTimeIsSet_;
}

void AddUserResponse::unsetactiveTime()
{
    activeTimeIsSet_ = false;
}

}
}
}
}
}


