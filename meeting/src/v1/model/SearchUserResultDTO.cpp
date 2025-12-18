

#include "huaweicloud/meeting/v1/model/SearchUserResultDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchUserResultDTO::SearchUserResultDTO()
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
    vmrId_ = "";
    vmrIdIsSet_ = false;
    deptCode_ = "";
    deptCodeIsSet_ = false;
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
    status_ = 0;
    statusIsSet_ = false;
    sortLevel_ = 0;
    sortLevelIsSet_ = false;
    hidePhone_ = false;
    hidePhoneIsSet_ = false;
    thirdAccount_ = "";
    thirdAccountIsSet_ = false;
    visionAccount_ = "";
    visionAccountIsSet_ = false;
    license_ = 0;
    licenseIsSet_ = false;
    activeTime_ = 0L;
    activeTimeIsSet_ = false;
    activeCodeExpireTime_ = 0L;
    activeCodeExpireTimeIsSet_ = false;
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
    activeCode_ = "";
    activeCodeIsSet_ = false;
}

SearchUserResultDTO::~SearchUserResultDTO() = default;

void SearchUserResultDTO::validate()
{
}

web::json::value SearchUserResultDTO::toJson() const
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
    if(vmrIdIsSet_) {
        val[utility::conversions::to_string_t("vmrId")] = ModelBase::toJson(vmrId_);
    }
    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("deptCode")] = ModelBase::toJson(deptCode_);
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(sortLevelIsSet_) {
        val[utility::conversions::to_string_t("sortLevel")] = ModelBase::toJson(sortLevel_);
    }
    if(hidePhoneIsSet_) {
        val[utility::conversions::to_string_t("hidePhone")] = ModelBase::toJson(hidePhone_);
    }
    if(thirdAccountIsSet_) {
        val[utility::conversions::to_string_t("thirdAccount")] = ModelBase::toJson(thirdAccount_);
    }
    if(visionAccountIsSet_) {
        val[utility::conversions::to_string_t("visionAccount")] = ModelBase::toJson(visionAccount_);
    }
    if(licenseIsSet_) {
        val[utility::conversions::to_string_t("license")] = ModelBase::toJson(license_);
    }
    if(activeTimeIsSet_) {
        val[utility::conversions::to_string_t("activeTime")] = ModelBase::toJson(activeTime_);
    }
    if(activeCodeExpireTimeIsSet_) {
        val[utility::conversions::to_string_t("activeCodeExpireTime")] = ModelBase::toJson(activeCodeExpireTime_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expireTime")] = ModelBase::toJson(expireTime_);
    }
    if(activeCodeIsSet_) {
        val[utility::conversions::to_string_t("activeCode")] = ModelBase::toJson(activeCode_);
    }

    return val;
}
bool SearchUserResultDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("vmrId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("thirdAccount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thirdAccount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThirdAccount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("activeCodeExpireTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("activeCodeExpireTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveCodeExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expireTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expireTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("activeCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("activeCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveCode(refVal);
        }
    }
    return ok;
}


std::string SearchUserResultDTO::getId() const
{
    return id_;
}

void SearchUserResultDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SearchUserResultDTO::idIsSet() const
{
    return idIsSet_;
}

void SearchUserResultDTO::unsetid()
{
    idIsSet_ = false;
}

std::string SearchUserResultDTO::getUserAccount() const
{
    return userAccount_;
}

void SearchUserResultDTO::setUserAccount(const std::string& value)
{
    userAccount_ = value;
    userAccountIsSet_ = true;
}

bool SearchUserResultDTO::userAccountIsSet() const
{
    return userAccountIsSet_;
}

void SearchUserResultDTO::unsetuserAccount()
{
    userAccountIsSet_ = false;
}

std::string SearchUserResultDTO::getName() const
{
    return name_;
}

void SearchUserResultDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SearchUserResultDTO::nameIsSet() const
{
    return nameIsSet_;
}

void SearchUserResultDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string SearchUserResultDTO::getEnglishName() const
{
    return englishName_;
}

void SearchUserResultDTO::setEnglishName(const std::string& value)
{
    englishName_ = value;
    englishNameIsSet_ = true;
}

bool SearchUserResultDTO::englishNameIsSet() const
{
    return englishNameIsSet_;
}

void SearchUserResultDTO::unsetenglishName()
{
    englishNameIsSet_ = false;
}

std::string SearchUserResultDTO::getPhone() const
{
    return phone_;
}

void SearchUserResultDTO::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool SearchUserResultDTO::phoneIsSet() const
{
    return phoneIsSet_;
}

void SearchUserResultDTO::unsetphone()
{
    phoneIsSet_ = false;
}

std::string SearchUserResultDTO::getCountry() const
{
    return country_;
}

void SearchUserResultDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool SearchUserResultDTO::countryIsSet() const
{
    return countryIsSet_;
}

void SearchUserResultDTO::unsetcountry()
{
    countryIsSet_ = false;
}

std::string SearchUserResultDTO::getEmail() const
{
    return email_;
}

void SearchUserResultDTO::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool SearchUserResultDTO::emailIsSet() const
{
    return emailIsSet_;
}

void SearchUserResultDTO::unsetemail()
{
    emailIsSet_ = false;
}

std::string SearchUserResultDTO::getVmrId() const
{
    return vmrId_;
}

void SearchUserResultDTO::setVmrId(const std::string& value)
{
    vmrId_ = value;
    vmrIdIsSet_ = true;
}

bool SearchUserResultDTO::vmrIdIsSet() const
{
    return vmrIdIsSet_;
}

void SearchUserResultDTO::unsetvmrId()
{
    vmrIdIsSet_ = false;
}

std::string SearchUserResultDTO::getDeptCode() const
{
    return deptCode_;
}

void SearchUserResultDTO::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool SearchUserResultDTO::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void SearchUserResultDTO::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string SearchUserResultDTO::getDeptNamePath() const
{
    return deptNamePath_;
}

void SearchUserResultDTO::setDeptNamePath(const std::string& value)
{
    deptNamePath_ = value;
    deptNamePathIsSet_ = true;
}

bool SearchUserResultDTO::deptNamePathIsSet() const
{
    return deptNamePathIsSet_;
}

void SearchUserResultDTO::unsetdeptNamePath()
{
    deptNamePathIsSet_ = false;
}

int32_t SearchUserResultDTO::getUserType() const
{
    return userType_;
}

void SearchUserResultDTO::setUserType(int32_t value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool SearchUserResultDTO::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void SearchUserResultDTO::unsetuserType()
{
    userTypeIsSet_ = false;
}

int32_t SearchUserResultDTO::getAdminType() const
{
    return adminType_;
}

void SearchUserResultDTO::setAdminType(int32_t value)
{
    adminType_ = value;
    adminTypeIsSet_ = true;
}

bool SearchUserResultDTO::adminTypeIsSet() const
{
    return adminTypeIsSet_;
}

void SearchUserResultDTO::unsetadminType()
{
    adminTypeIsSet_ = false;
}

std::string SearchUserResultDTO::getSignature() const
{
    return signature_;
}

void SearchUserResultDTO::setSignature(const std::string& value)
{
    signature_ = value;
    signatureIsSet_ = true;
}

bool SearchUserResultDTO::signatureIsSet() const
{
    return signatureIsSet_;
}

void SearchUserResultDTO::unsetsignature()
{
    signatureIsSet_ = false;
}

std::string SearchUserResultDTO::getTitle() const
{
    return title_;
}

void SearchUserResultDTO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool SearchUserResultDTO::titleIsSet() const
{
    return titleIsSet_;
}

void SearchUserResultDTO::unsettitle()
{
    titleIsSet_ = false;
}

std::string SearchUserResultDTO::getDesc() const
{
    return desc_;
}

void SearchUserResultDTO::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool SearchUserResultDTO::descIsSet() const
{
    return descIsSet_;
}

void SearchUserResultDTO::unsetdesc()
{
    descIsSet_ = false;
}

int32_t SearchUserResultDTO::getStatus() const
{
    return status_;
}

void SearchUserResultDTO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SearchUserResultDTO::statusIsSet() const
{
    return statusIsSet_;
}

void SearchUserResultDTO::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t SearchUserResultDTO::getSortLevel() const
{
    return sortLevel_;
}

void SearchUserResultDTO::setSortLevel(int32_t value)
{
    sortLevel_ = value;
    sortLevelIsSet_ = true;
}

bool SearchUserResultDTO::sortLevelIsSet() const
{
    return sortLevelIsSet_;
}

void SearchUserResultDTO::unsetsortLevel()
{
    sortLevelIsSet_ = false;
}

bool SearchUserResultDTO::isHidePhone() const
{
    return hidePhone_;
}

void SearchUserResultDTO::setHidePhone(bool value)
{
    hidePhone_ = value;
    hidePhoneIsSet_ = true;
}

bool SearchUserResultDTO::hidePhoneIsSet() const
{
    return hidePhoneIsSet_;
}

void SearchUserResultDTO::unsethidePhone()
{
    hidePhoneIsSet_ = false;
}

std::string SearchUserResultDTO::getThirdAccount() const
{
    return thirdAccount_;
}

void SearchUserResultDTO::setThirdAccount(const std::string& value)
{
    thirdAccount_ = value;
    thirdAccountIsSet_ = true;
}

bool SearchUserResultDTO::thirdAccountIsSet() const
{
    return thirdAccountIsSet_;
}

void SearchUserResultDTO::unsetthirdAccount()
{
    thirdAccountIsSet_ = false;
}

std::string SearchUserResultDTO::getVisionAccount() const
{
    return visionAccount_;
}

void SearchUserResultDTO::setVisionAccount(const std::string& value)
{
    visionAccount_ = value;
    visionAccountIsSet_ = true;
}

bool SearchUserResultDTO::visionAccountIsSet() const
{
    return visionAccountIsSet_;
}

void SearchUserResultDTO::unsetvisionAccount()
{
    visionAccountIsSet_ = false;
}

int32_t SearchUserResultDTO::getLicense() const
{
    return license_;
}

void SearchUserResultDTO::setLicense(int32_t value)
{
    license_ = value;
    licenseIsSet_ = true;
}

bool SearchUserResultDTO::licenseIsSet() const
{
    return licenseIsSet_;
}

void SearchUserResultDTO::unsetlicense()
{
    licenseIsSet_ = false;
}

int64_t SearchUserResultDTO::getActiveTime() const
{
    return activeTime_;
}

void SearchUserResultDTO::setActiveTime(int64_t value)
{
    activeTime_ = value;
    activeTimeIsSet_ = true;
}

bool SearchUserResultDTO::activeTimeIsSet() const
{
    return activeTimeIsSet_;
}

void SearchUserResultDTO::unsetactiveTime()
{
    activeTimeIsSet_ = false;
}

int64_t SearchUserResultDTO::getActiveCodeExpireTime() const
{
    return activeCodeExpireTime_;
}

void SearchUserResultDTO::setActiveCodeExpireTime(int64_t value)
{
    activeCodeExpireTime_ = value;
    activeCodeExpireTimeIsSet_ = true;
}

bool SearchUserResultDTO::activeCodeExpireTimeIsSet() const
{
    return activeCodeExpireTimeIsSet_;
}

void SearchUserResultDTO::unsetactiveCodeExpireTime()
{
    activeCodeExpireTimeIsSet_ = false;
}

int64_t SearchUserResultDTO::getExpireTime() const
{
    return expireTime_;
}

void SearchUserResultDTO::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool SearchUserResultDTO::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void SearchUserResultDTO::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string SearchUserResultDTO::getActiveCode() const
{
    return activeCode_;
}

void SearchUserResultDTO::setActiveCode(const std::string& value)
{
    activeCode_ = value;
    activeCodeIsSet_ = true;
}

bool SearchUserResultDTO::activeCodeIsSet() const
{
    return activeCodeIsSet_;
}

void SearchUserResultDTO::unsetactiveCode()
{
    activeCodeIsSet_ = false;
}

}
}
}
}
}


