

#include "huaweicloud/meeting/v1/model/UserInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UserInfo::UserInfo()
{
    userId_ = "";
    userIdIsSet_ = false;
    ucloginAccount_ = "";
    ucloginAccountIsSet_ = false;
    serviceAccount_ = "";
    serviceAccountIsSet_ = false;
    numberHA1_ = "";
    numberHA1IsSet_ = false;
    alias1_ = "";
    alias1IsSet_ = false;
    companyId_ = "";
    companyIdIsSet_ = false;
    spId_ = "";
    spIdIsSet_ = false;
    companyDomain_ = "";
    companyDomainIsSet_ = false;
    realm_ = "";
    realmIsSet_ = false;
    userType_ = 0;
    userTypeIsSet_ = false;
    adminType_ = 0;
    adminTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nameEn_ = "";
    nameEnIsSet_ = false;
    isBindPhone_ = false;
    isBindPhoneIsSet_ = false;
    freeUser_ = false;
    freeUserIsSet_ = false;
    thirdAccount_ = "";
    thirdAccountIsSet_ = false;
    visionAccount_ = "";
    visionAccountIsSet_ = false;
    headPictureUrl_ = "";
    headPictureUrlIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    paidAccount_ = "";
    paidAccountIsSet_ = false;
    paidPassword_ = "";
    paidPasswordIsSet_ = false;
    weLinkUser_ = false;
    weLinkUserIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    tr069Account_ = "";
    tr069AccountIsSet_ = false;
    corpType_ = 0;
    corpTypeIsSet_ = false;
    cloudUserId_ = "";
    cloudUserIdIsSet_ = false;
    grayUser_ = false;
    grayUserIsSet_ = false;
}

UserInfo::~UserInfo() = default;

void UserInfo::validate()
{
}

web::json::value UserInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(userId_);
    }
    if(ucloginAccountIsSet_) {
        val[utility::conversions::to_string_t("ucloginAccount")] = ModelBase::toJson(ucloginAccount_);
    }
    if(serviceAccountIsSet_) {
        val[utility::conversions::to_string_t("serviceAccount")] = ModelBase::toJson(serviceAccount_);
    }
    if(numberHA1IsSet_) {
        val[utility::conversions::to_string_t("numberHA1")] = ModelBase::toJson(numberHA1_);
    }
    if(alias1IsSet_) {
        val[utility::conversions::to_string_t("alias1")] = ModelBase::toJson(alias1_);
    }
    if(companyIdIsSet_) {
        val[utility::conversions::to_string_t("companyId")] = ModelBase::toJson(companyId_);
    }
    if(spIdIsSet_) {
        val[utility::conversions::to_string_t("spId")] = ModelBase::toJson(spId_);
    }
    if(companyDomainIsSet_) {
        val[utility::conversions::to_string_t("companyDomain")] = ModelBase::toJson(companyDomain_);
    }
    if(realmIsSet_) {
        val[utility::conversions::to_string_t("realm")] = ModelBase::toJson(realm_);
    }
    if(userTypeIsSet_) {
        val[utility::conversions::to_string_t("userType")] = ModelBase::toJson(userType_);
    }
    if(adminTypeIsSet_) {
        val[utility::conversions::to_string_t("adminType")] = ModelBase::toJson(adminType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nameEnIsSet_) {
        val[utility::conversions::to_string_t("nameEn")] = ModelBase::toJson(nameEn_);
    }
    if(isBindPhoneIsSet_) {
        val[utility::conversions::to_string_t("isBindPhone")] = ModelBase::toJson(isBindPhone_);
    }
    if(freeUserIsSet_) {
        val[utility::conversions::to_string_t("freeUser")] = ModelBase::toJson(freeUser_);
    }
    if(thirdAccountIsSet_) {
        val[utility::conversions::to_string_t("thirdAccount")] = ModelBase::toJson(thirdAccount_);
    }
    if(visionAccountIsSet_) {
        val[utility::conversions::to_string_t("visionAccount")] = ModelBase::toJson(visionAccount_);
    }
    if(headPictureUrlIsSet_) {
        val[utility::conversions::to_string_t("headPictureUrl")] = ModelBase::toJson(headPictureUrl_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(paidAccountIsSet_) {
        val[utility::conversions::to_string_t("paidAccount")] = ModelBase::toJson(paidAccount_);
    }
    if(paidPasswordIsSet_) {
        val[utility::conversions::to_string_t("paidPassword")] = ModelBase::toJson(paidPassword_);
    }
    if(weLinkUserIsSet_) {
        val[utility::conversions::to_string_t("weLinkUser")] = ModelBase::toJson(weLinkUser_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("appId")] = ModelBase::toJson(appId_);
    }
    if(tr069AccountIsSet_) {
        val[utility::conversions::to_string_t("tr069Account")] = ModelBase::toJson(tr069Account_);
    }
    if(corpTypeIsSet_) {
        val[utility::conversions::to_string_t("corpType")] = ModelBase::toJson(corpType_);
    }
    if(cloudUserIdIsSet_) {
        val[utility::conversions::to_string_t("cloudUserId")] = ModelBase::toJson(cloudUserId_);
    }
    if(grayUserIsSet_) {
        val[utility::conversions::to_string_t("grayUser")] = ModelBase::toJson(grayUser_);
    }

    return val;
}
bool UserInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("userId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ucloginAccount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ucloginAccount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUcloginAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serviceAccount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serviceAccount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("numberHA1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("numberHA1"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumberHA1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alias1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias1"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("companyId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("companyId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompanyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("companyDomain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("companyDomain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompanyDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("realm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("realm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRealm(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nameEn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nameEn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isBindPhone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isBindPhone"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBindPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("freeUser"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freeUser"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreeUser(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("headPictureUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("headPictureUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeadPictureUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("paidAccount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("paidAccount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPaidAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("paidPassword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("paidPassword"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPaidPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("weLinkUser"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weLinkUser"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeLinkUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("appId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("appId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tr069Account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tr069Account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTr069Account(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("corpType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("corpType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCorpType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloudUserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloudUserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("grayUser"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grayUser"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrayUser(refVal);
        }
    }
    return ok;
}


std::string UserInfo::getUserId() const
{
    return userId_;
}

void UserInfo::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool UserInfo::userIdIsSet() const
{
    return userIdIsSet_;
}

void UserInfo::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string UserInfo::getUcloginAccount() const
{
    return ucloginAccount_;
}

void UserInfo::setUcloginAccount(const std::string& value)
{
    ucloginAccount_ = value;
    ucloginAccountIsSet_ = true;
}

bool UserInfo::ucloginAccountIsSet() const
{
    return ucloginAccountIsSet_;
}

void UserInfo::unsetucloginAccount()
{
    ucloginAccountIsSet_ = false;
}

std::string UserInfo::getServiceAccount() const
{
    return serviceAccount_;
}

void UserInfo::setServiceAccount(const std::string& value)
{
    serviceAccount_ = value;
    serviceAccountIsSet_ = true;
}

bool UserInfo::serviceAccountIsSet() const
{
    return serviceAccountIsSet_;
}

void UserInfo::unsetserviceAccount()
{
    serviceAccountIsSet_ = false;
}

std::string UserInfo::getNumberHA1() const
{
    return numberHA1_;
}

void UserInfo::setNumberHA1(const std::string& value)
{
    numberHA1_ = value;
    numberHA1IsSet_ = true;
}

bool UserInfo::numberHA1IsSet() const
{
    return numberHA1IsSet_;
}

void UserInfo::unsetnumberHA1()
{
    numberHA1IsSet_ = false;
}

std::string UserInfo::getAlias1() const
{
    return alias1_;
}

void UserInfo::setAlias1(const std::string& value)
{
    alias1_ = value;
    alias1IsSet_ = true;
}

bool UserInfo::alias1IsSet() const
{
    return alias1IsSet_;
}

void UserInfo::unsetalias1()
{
    alias1IsSet_ = false;
}

std::string UserInfo::getCompanyId() const
{
    return companyId_;
}

void UserInfo::setCompanyId(const std::string& value)
{
    companyId_ = value;
    companyIdIsSet_ = true;
}

bool UserInfo::companyIdIsSet() const
{
    return companyIdIsSet_;
}

void UserInfo::unsetcompanyId()
{
    companyIdIsSet_ = false;
}

std::string UserInfo::getSpId() const
{
    return spId_;
}

void UserInfo::setSpId(const std::string& value)
{
    spId_ = value;
    spIdIsSet_ = true;
}

bool UserInfo::spIdIsSet() const
{
    return spIdIsSet_;
}

void UserInfo::unsetspId()
{
    spIdIsSet_ = false;
}

std::string UserInfo::getCompanyDomain() const
{
    return companyDomain_;
}

void UserInfo::setCompanyDomain(const std::string& value)
{
    companyDomain_ = value;
    companyDomainIsSet_ = true;
}

bool UserInfo::companyDomainIsSet() const
{
    return companyDomainIsSet_;
}

void UserInfo::unsetcompanyDomain()
{
    companyDomainIsSet_ = false;
}

std::string UserInfo::getRealm() const
{
    return realm_;
}

void UserInfo::setRealm(const std::string& value)
{
    realm_ = value;
    realmIsSet_ = true;
}

bool UserInfo::realmIsSet() const
{
    return realmIsSet_;
}

void UserInfo::unsetrealm()
{
    realmIsSet_ = false;
}

int32_t UserInfo::getUserType() const
{
    return userType_;
}

void UserInfo::setUserType(int32_t value)
{
    userType_ = value;
    userTypeIsSet_ = true;
}

bool UserInfo::userTypeIsSet() const
{
    return userTypeIsSet_;
}

void UserInfo::unsetuserType()
{
    userTypeIsSet_ = false;
}

int32_t UserInfo::getAdminType() const
{
    return adminType_;
}

void UserInfo::setAdminType(int32_t value)
{
    adminType_ = value;
    adminTypeIsSet_ = true;
}

bool UserInfo::adminTypeIsSet() const
{
    return adminTypeIsSet_;
}

void UserInfo::unsetadminType()
{
    adminTypeIsSet_ = false;
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

std::string UserInfo::getNameEn() const
{
    return nameEn_;
}

void UserInfo::setNameEn(const std::string& value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool UserInfo::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void UserInfo::unsetnameEn()
{
    nameEnIsSet_ = false;
}

bool UserInfo::isIsBindPhone() const
{
    return isBindPhone_;
}

void UserInfo::setIsBindPhone(bool value)
{
    isBindPhone_ = value;
    isBindPhoneIsSet_ = true;
}

bool UserInfo::isBindPhoneIsSet() const
{
    return isBindPhoneIsSet_;
}

void UserInfo::unsetisBindPhone()
{
    isBindPhoneIsSet_ = false;
}

bool UserInfo::isFreeUser() const
{
    return freeUser_;
}

void UserInfo::setFreeUser(bool value)
{
    freeUser_ = value;
    freeUserIsSet_ = true;
}

bool UserInfo::freeUserIsSet() const
{
    return freeUserIsSet_;
}

void UserInfo::unsetfreeUser()
{
    freeUserIsSet_ = false;
}

std::string UserInfo::getThirdAccount() const
{
    return thirdAccount_;
}

void UserInfo::setThirdAccount(const std::string& value)
{
    thirdAccount_ = value;
    thirdAccountIsSet_ = true;
}

bool UserInfo::thirdAccountIsSet() const
{
    return thirdAccountIsSet_;
}

void UserInfo::unsetthirdAccount()
{
    thirdAccountIsSet_ = false;
}

std::string UserInfo::getVisionAccount() const
{
    return visionAccount_;
}

void UserInfo::setVisionAccount(const std::string& value)
{
    visionAccount_ = value;
    visionAccountIsSet_ = true;
}

bool UserInfo::visionAccountIsSet() const
{
    return visionAccountIsSet_;
}

void UserInfo::unsetvisionAccount()
{
    visionAccountIsSet_ = false;
}

std::string UserInfo::getHeadPictureUrl() const
{
    return headPictureUrl_;
}

void UserInfo::setHeadPictureUrl(const std::string& value)
{
    headPictureUrl_ = value;
    headPictureUrlIsSet_ = true;
}

bool UserInfo::headPictureUrlIsSet() const
{
    return headPictureUrlIsSet_;
}

void UserInfo::unsetheadPictureUrl()
{
    headPictureUrlIsSet_ = false;
}

std::string UserInfo::getPassword() const
{
    return password_;
}

void UserInfo::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool UserInfo::passwordIsSet() const
{
    return passwordIsSet_;
}

void UserInfo::unsetpassword()
{
    passwordIsSet_ = false;
}

int32_t UserInfo::getStatus() const
{
    return status_;
}

void UserInfo::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UserInfo::statusIsSet() const
{
    return statusIsSet_;
}

void UserInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UserInfo::getPaidAccount() const
{
    return paidAccount_;
}

void UserInfo::setPaidAccount(const std::string& value)
{
    paidAccount_ = value;
    paidAccountIsSet_ = true;
}

bool UserInfo::paidAccountIsSet() const
{
    return paidAccountIsSet_;
}

void UserInfo::unsetpaidAccount()
{
    paidAccountIsSet_ = false;
}

std::string UserInfo::getPaidPassword() const
{
    return paidPassword_;
}

void UserInfo::setPaidPassword(const std::string& value)
{
    paidPassword_ = value;
    paidPasswordIsSet_ = true;
}

bool UserInfo::paidPasswordIsSet() const
{
    return paidPasswordIsSet_;
}

void UserInfo::unsetpaidPassword()
{
    paidPasswordIsSet_ = false;
}

bool UserInfo::isWeLinkUser() const
{
    return weLinkUser_;
}

void UserInfo::setWeLinkUser(bool value)
{
    weLinkUser_ = value;
    weLinkUserIsSet_ = true;
}

bool UserInfo::weLinkUserIsSet() const
{
    return weLinkUserIsSet_;
}

void UserInfo::unsetweLinkUser()
{
    weLinkUserIsSet_ = false;
}

std::string UserInfo::getAppId() const
{
    return appId_;
}

void UserInfo::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool UserInfo::appIdIsSet() const
{
    return appIdIsSet_;
}

void UserInfo::unsetappId()
{
    appIdIsSet_ = false;
}

std::string UserInfo::getTr069Account() const
{
    return tr069Account_;
}

void UserInfo::setTr069Account(const std::string& value)
{
    tr069Account_ = value;
    tr069AccountIsSet_ = true;
}

bool UserInfo::tr069AccountIsSet() const
{
    return tr069AccountIsSet_;
}

void UserInfo::unsettr069Account()
{
    tr069AccountIsSet_ = false;
}

int32_t UserInfo::getCorpType() const
{
    return corpType_;
}

void UserInfo::setCorpType(int32_t value)
{
    corpType_ = value;
    corpTypeIsSet_ = true;
}

bool UserInfo::corpTypeIsSet() const
{
    return corpTypeIsSet_;
}

void UserInfo::unsetcorpType()
{
    corpTypeIsSet_ = false;
}

std::string UserInfo::getCloudUserId() const
{
    return cloudUserId_;
}

void UserInfo::setCloudUserId(const std::string& value)
{
    cloudUserId_ = value;
    cloudUserIdIsSet_ = true;
}

bool UserInfo::cloudUserIdIsSet() const
{
    return cloudUserIdIsSet_;
}

void UserInfo::unsetcloudUserId()
{
    cloudUserIdIsSet_ = false;
}

bool UserInfo::isGrayUser() const
{
    return grayUser_;
}

void UserInfo::setGrayUser(bool value)
{
    grayUser_ = value;
    grayUserIsSet_ = true;
}

bool UserInfo::grayUserIsSet() const
{
    return grayUserIsSet_;
}

void UserInfo::unsetgrayUser()
{
    grayUserIsSet_ = false;
}

}
}
}
}
}


