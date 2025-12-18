

#include "huaweicloud/meeting/v1/model/ShowCorpBasicInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowCorpBasicInfoResponse::ShowCorpBasicInfoResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    adminName_ = "";
    adminNameIsSet_ = false;
    account_ = "";
    accountIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    enableSMS_ = false;
    enableSMSIsSet_ = false;
    enableCloudDisk_ = false;
    enableCloudDiskIsSet_ = false;
    enablePstn_ = false;
    enablePstnIsSet_ = false;
    autoUserCreate_ = false;
    autoUserCreateIsSet_ = false;
    corpType_ = 0;
    corpTypeIsSet_ = false;
}

ShowCorpBasicInfoResponse::~ShowCorpBasicInfoResponse() = default;

void ShowCorpBasicInfoResponse::validate()
{
}

web::json::value ShowCorpBasicInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(adminNameIsSet_) {
        val[utility::conversions::to_string_t("adminName")] = ModelBase::toJson(adminName_);
    }
    if(accountIsSet_) {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(account_);
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
    if(enableSMSIsSet_) {
        val[utility::conversions::to_string_t("enableSMS")] = ModelBase::toJson(enableSMS_);
    }
    if(enableCloudDiskIsSet_) {
        val[utility::conversions::to_string_t("enableCloudDisk")] = ModelBase::toJson(enableCloudDisk_);
    }
    if(enablePstnIsSet_) {
        val[utility::conversions::to_string_t("enablePstn")] = ModelBase::toJson(enablePstn_);
    }
    if(autoUserCreateIsSet_) {
        val[utility::conversions::to_string_t("autoUserCreate")] = ModelBase::toJson(autoUserCreate_);
    }
    if(corpTypeIsSet_) {
        val[utility::conversions::to_string_t("corpType")] = ModelBase::toJson(corpType_);
    }

    return val;
}
bool ShowCorpBasicInfoResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("adminName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adminName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enableSMS"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableSMS"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSMS(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableCloudDisk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableCloudDisk"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableCloudDisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enablePstn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enablePstn"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnablePstn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("autoUserCreate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("autoUserCreate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoUserCreate(refVal);
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
    return ok;
}


std::string ShowCorpBasicInfoResponse::getId() const
{
    return id_;
}

void ShowCorpBasicInfoResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowCorpBasicInfoResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowCorpBasicInfoResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowCorpBasicInfoResponse::getName() const
{
    return name_;
}

void ShowCorpBasicInfoResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowCorpBasicInfoResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowCorpBasicInfoResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowCorpBasicInfoResponse::getAddress() const
{
    return address_;
}

void ShowCorpBasicInfoResponse::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool ShowCorpBasicInfoResponse::addressIsSet() const
{
    return addressIsSet_;
}

void ShowCorpBasicInfoResponse::unsetaddress()
{
    addressIsSet_ = false;
}

std::string ShowCorpBasicInfoResponse::getAdminName() const
{
    return adminName_;
}

void ShowCorpBasicInfoResponse::setAdminName(const std::string& value)
{
    adminName_ = value;
    adminNameIsSet_ = true;
}

bool ShowCorpBasicInfoResponse::adminNameIsSet() const
{
    return adminNameIsSet_;
}

void ShowCorpBasicInfoResponse::unsetadminName()
{
    adminNameIsSet_ = false;
}

std::string ShowCorpBasicInfoResponse::getAccount() const
{
    return account_;
}

void ShowCorpBasicInfoResponse::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool ShowCorpBasicInfoResponse::accountIsSet() const
{
    return accountIsSet_;
}

void ShowCorpBasicInfoResponse::unsetaccount()
{
    accountIsSet_ = false;
}

std::string ShowCorpBasicInfoResponse::getPhone() const
{
    return phone_;
}

void ShowCorpBasicInfoResponse::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool ShowCorpBasicInfoResponse::phoneIsSet() const
{
    return phoneIsSet_;
}

void ShowCorpBasicInfoResponse::unsetphone()
{
    phoneIsSet_ = false;
}

std::string ShowCorpBasicInfoResponse::getCountry() const
{
    return country_;
}

void ShowCorpBasicInfoResponse::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool ShowCorpBasicInfoResponse::countryIsSet() const
{
    return countryIsSet_;
}

void ShowCorpBasicInfoResponse::unsetcountry()
{
    countryIsSet_ = false;
}

std::string ShowCorpBasicInfoResponse::getEmail() const
{
    return email_;
}

void ShowCorpBasicInfoResponse::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool ShowCorpBasicInfoResponse::emailIsSet() const
{
    return emailIsSet_;
}

void ShowCorpBasicInfoResponse::unsetemail()
{
    emailIsSet_ = false;
}

bool ShowCorpBasicInfoResponse::isEnableSMS() const
{
    return enableSMS_;
}

void ShowCorpBasicInfoResponse::setEnableSMS(bool value)
{
    enableSMS_ = value;
    enableSMSIsSet_ = true;
}

bool ShowCorpBasicInfoResponse::enableSMSIsSet() const
{
    return enableSMSIsSet_;
}

void ShowCorpBasicInfoResponse::unsetenableSMS()
{
    enableSMSIsSet_ = false;
}

bool ShowCorpBasicInfoResponse::isEnableCloudDisk() const
{
    return enableCloudDisk_;
}

void ShowCorpBasicInfoResponse::setEnableCloudDisk(bool value)
{
    enableCloudDisk_ = value;
    enableCloudDiskIsSet_ = true;
}

bool ShowCorpBasicInfoResponse::enableCloudDiskIsSet() const
{
    return enableCloudDiskIsSet_;
}

void ShowCorpBasicInfoResponse::unsetenableCloudDisk()
{
    enableCloudDiskIsSet_ = false;
}

bool ShowCorpBasicInfoResponse::isEnablePstn() const
{
    return enablePstn_;
}

void ShowCorpBasicInfoResponse::setEnablePstn(bool value)
{
    enablePstn_ = value;
    enablePstnIsSet_ = true;
}

bool ShowCorpBasicInfoResponse::enablePstnIsSet() const
{
    return enablePstnIsSet_;
}

void ShowCorpBasicInfoResponse::unsetenablePstn()
{
    enablePstnIsSet_ = false;
}

bool ShowCorpBasicInfoResponse::isAutoUserCreate() const
{
    return autoUserCreate_;
}

void ShowCorpBasicInfoResponse::setAutoUserCreate(bool value)
{
    autoUserCreate_ = value;
    autoUserCreateIsSet_ = true;
}

bool ShowCorpBasicInfoResponse::autoUserCreateIsSet() const
{
    return autoUserCreateIsSet_;
}

void ShowCorpBasicInfoResponse::unsetautoUserCreate()
{
    autoUserCreateIsSet_ = false;
}

int32_t ShowCorpBasicInfoResponse::getCorpType() const
{
    return corpType_;
}

void ShowCorpBasicInfoResponse::setCorpType(int32_t value)
{
    corpType_ = value;
    corpTypeIsSet_ = true;
}

bool ShowCorpBasicInfoResponse::corpTypeIsSet() const
{
    return corpTypeIsSet_;
}

void ShowCorpBasicInfoResponse::unsetcorpType()
{
    corpTypeIsSet_ = false;
}

}
}
}
}
}


