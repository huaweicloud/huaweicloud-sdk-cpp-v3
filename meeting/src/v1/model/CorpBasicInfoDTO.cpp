

#include "huaweicloud/meeting/v1/model/CorpBasicInfoDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CorpBasicInfoDTO::CorpBasicInfoDTO()
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

CorpBasicInfoDTO::~CorpBasicInfoDTO() = default;

void CorpBasicInfoDTO::validate()
{
}

web::json::value CorpBasicInfoDTO::toJson() const
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
bool CorpBasicInfoDTO::fromJson(const web::json::value& val)
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


std::string CorpBasicInfoDTO::getId() const
{
    return id_;
}

void CorpBasicInfoDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CorpBasicInfoDTO::idIsSet() const
{
    return idIsSet_;
}

void CorpBasicInfoDTO::unsetid()
{
    idIsSet_ = false;
}

std::string CorpBasicInfoDTO::getName() const
{
    return name_;
}

void CorpBasicInfoDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CorpBasicInfoDTO::nameIsSet() const
{
    return nameIsSet_;
}

void CorpBasicInfoDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string CorpBasicInfoDTO::getAddress() const
{
    return address_;
}

void CorpBasicInfoDTO::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool CorpBasicInfoDTO::addressIsSet() const
{
    return addressIsSet_;
}

void CorpBasicInfoDTO::unsetaddress()
{
    addressIsSet_ = false;
}

std::string CorpBasicInfoDTO::getAdminName() const
{
    return adminName_;
}

void CorpBasicInfoDTO::setAdminName(const std::string& value)
{
    adminName_ = value;
    adminNameIsSet_ = true;
}

bool CorpBasicInfoDTO::adminNameIsSet() const
{
    return adminNameIsSet_;
}

void CorpBasicInfoDTO::unsetadminName()
{
    adminNameIsSet_ = false;
}

std::string CorpBasicInfoDTO::getAccount() const
{
    return account_;
}

void CorpBasicInfoDTO::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool CorpBasicInfoDTO::accountIsSet() const
{
    return accountIsSet_;
}

void CorpBasicInfoDTO::unsetaccount()
{
    accountIsSet_ = false;
}

std::string CorpBasicInfoDTO::getPhone() const
{
    return phone_;
}

void CorpBasicInfoDTO::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool CorpBasicInfoDTO::phoneIsSet() const
{
    return phoneIsSet_;
}

void CorpBasicInfoDTO::unsetphone()
{
    phoneIsSet_ = false;
}

std::string CorpBasicInfoDTO::getCountry() const
{
    return country_;
}

void CorpBasicInfoDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool CorpBasicInfoDTO::countryIsSet() const
{
    return countryIsSet_;
}

void CorpBasicInfoDTO::unsetcountry()
{
    countryIsSet_ = false;
}

std::string CorpBasicInfoDTO::getEmail() const
{
    return email_;
}

void CorpBasicInfoDTO::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool CorpBasicInfoDTO::emailIsSet() const
{
    return emailIsSet_;
}

void CorpBasicInfoDTO::unsetemail()
{
    emailIsSet_ = false;
}

bool CorpBasicInfoDTO::isEnableSMS() const
{
    return enableSMS_;
}

void CorpBasicInfoDTO::setEnableSMS(bool value)
{
    enableSMS_ = value;
    enableSMSIsSet_ = true;
}

bool CorpBasicInfoDTO::enableSMSIsSet() const
{
    return enableSMSIsSet_;
}

void CorpBasicInfoDTO::unsetenableSMS()
{
    enableSMSIsSet_ = false;
}

bool CorpBasicInfoDTO::isEnableCloudDisk() const
{
    return enableCloudDisk_;
}

void CorpBasicInfoDTO::setEnableCloudDisk(bool value)
{
    enableCloudDisk_ = value;
    enableCloudDiskIsSet_ = true;
}

bool CorpBasicInfoDTO::enableCloudDiskIsSet() const
{
    return enableCloudDiskIsSet_;
}

void CorpBasicInfoDTO::unsetenableCloudDisk()
{
    enableCloudDiskIsSet_ = false;
}

bool CorpBasicInfoDTO::isEnablePstn() const
{
    return enablePstn_;
}

void CorpBasicInfoDTO::setEnablePstn(bool value)
{
    enablePstn_ = value;
    enablePstnIsSet_ = true;
}

bool CorpBasicInfoDTO::enablePstnIsSet() const
{
    return enablePstnIsSet_;
}

void CorpBasicInfoDTO::unsetenablePstn()
{
    enablePstnIsSet_ = false;
}

bool CorpBasicInfoDTO::isAutoUserCreate() const
{
    return autoUserCreate_;
}

void CorpBasicInfoDTO::setAutoUserCreate(bool value)
{
    autoUserCreate_ = value;
    autoUserCreateIsSet_ = true;
}

bool CorpBasicInfoDTO::autoUserCreateIsSet() const
{
    return autoUserCreateIsSet_;
}

void CorpBasicInfoDTO::unsetautoUserCreate()
{
    autoUserCreateIsSet_ = false;
}

int32_t CorpBasicInfoDTO::getCorpType() const
{
    return corpType_;
}

void CorpBasicInfoDTO::setCorpType(int32_t value)
{
    corpType_ = value;
    corpTypeIsSet_ = true;
}

bool CorpBasicInfoDTO::corpTypeIsSet() const
{
    return corpTypeIsSet_;
}

void CorpBasicInfoDTO::unsetcorpType()
{
    corpTypeIsSet_ = false;
}

}
}
}
}
}


