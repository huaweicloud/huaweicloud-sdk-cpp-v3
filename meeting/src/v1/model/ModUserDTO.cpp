

#include "huaweicloud/meeting/v1/model/ModUserDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ModUserDTO::ModUserDTO()
{
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
}

ModUserDTO::~ModUserDTO() = default;

void ModUserDTO::validate()
{
}

web::json::value ModUserDTO::toJson() const
{
    web::json::value val = web::json::value::object();

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

    return val;
}
bool ModUserDTO::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ModUserDTO::getName() const
{
    return name_;
}

void ModUserDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ModUserDTO::nameIsSet() const
{
    return nameIsSet_;
}

void ModUserDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string ModUserDTO::getEnglishName() const
{
    return englishName_;
}

void ModUserDTO::setEnglishName(const std::string& value)
{
    englishName_ = value;
    englishNameIsSet_ = true;
}

bool ModUserDTO::englishNameIsSet() const
{
    return englishNameIsSet_;
}

void ModUserDTO::unsetenglishName()
{
    englishNameIsSet_ = false;
}

std::string ModUserDTO::getPhone() const
{
    return phone_;
}

void ModUserDTO::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool ModUserDTO::phoneIsSet() const
{
    return phoneIsSet_;
}

void ModUserDTO::unsetphone()
{
    phoneIsSet_ = false;
}

std::string ModUserDTO::getCountry() const
{
    return country_;
}

void ModUserDTO::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool ModUserDTO::countryIsSet() const
{
    return countryIsSet_;
}

void ModUserDTO::unsetcountry()
{
    countryIsSet_ = false;
}

std::string ModUserDTO::getEmail() const
{
    return email_;
}

void ModUserDTO::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool ModUserDTO::emailIsSet() const
{
    return emailIsSet_;
}

void ModUserDTO::unsetemail()
{
    emailIsSet_ = false;
}

std::string ModUserDTO::getVmrId() const
{
    return vmrId_;
}

void ModUserDTO::setVmrId(const std::string& value)
{
    vmrId_ = value;
    vmrIdIsSet_ = true;
}

bool ModUserDTO::vmrIdIsSet() const
{
    return vmrIdIsSet_;
}

void ModUserDTO::unsetvmrId()
{
    vmrIdIsSet_ = false;
}

std::string ModUserDTO::getDeptCode() const
{
    return deptCode_;
}

void ModUserDTO::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool ModUserDTO::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void ModUserDTO::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string ModUserDTO::getSignature() const
{
    return signature_;
}

void ModUserDTO::setSignature(const std::string& value)
{
    signature_ = value;
    signatureIsSet_ = true;
}

bool ModUserDTO::signatureIsSet() const
{
    return signatureIsSet_;
}

void ModUserDTO::unsetsignature()
{
    signatureIsSet_ = false;
}

std::string ModUserDTO::getTitle() const
{
    return title_;
}

void ModUserDTO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ModUserDTO::titleIsSet() const
{
    return titleIsSet_;
}

void ModUserDTO::unsettitle()
{
    titleIsSet_ = false;
}

std::string ModUserDTO::getDesc() const
{
    return desc_;
}

void ModUserDTO::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool ModUserDTO::descIsSet() const
{
    return descIsSet_;
}

void ModUserDTO::unsetdesc()
{
    descIsSet_ = false;
}

int32_t ModUserDTO::getStatus() const
{
    return status_;
}

void ModUserDTO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ModUserDTO::statusIsSet() const
{
    return statusIsSet_;
}

void ModUserDTO::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ModUserDTO::getSortLevel() const
{
    return sortLevel_;
}

void ModUserDTO::setSortLevel(int32_t value)
{
    sortLevel_ = value;
    sortLevelIsSet_ = true;
}

bool ModUserDTO::sortLevelIsSet() const
{
    return sortLevelIsSet_;
}

void ModUserDTO::unsetsortLevel()
{
    sortLevelIsSet_ = false;
}

bool ModUserDTO::isHidePhone() const
{
    return hidePhone_;
}

void ModUserDTO::setHidePhone(bool value)
{
    hidePhone_ = value;
    hidePhoneIsSet_ = true;
}

bool ModUserDTO::hidePhoneIsSet() const
{
    return hidePhoneIsSet_;
}

void ModUserDTO::unsethidePhone()
{
    hidePhoneIsSet_ = false;
}

}
}
}
}
}


