

#include "huaweicloud/ocr/v1/model/BusinessCardResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




BusinessCardResult::BusinessCardResult()
{
    nameIsSet_ = false;
    titleIsSet_ = false;
    companyIsSet_ = false;
    departmentIsSet_ = false;
    phoneIsSet_ = false;
    addressIsSet_ = false;
    emailIsSet_ = false;
    faxIsSet_ = false;
    postcodeIsSet_ = false;
    websiteIsSet_ = false;
    extraInfoListIsSet_ = false;
    adjustedImage_ = "";
    adjustedImageIsSet_ = false;
}

BusinessCardResult::~BusinessCardResult() = default;

void BusinessCardResult::validate()
{
}

web::json::value BusinessCardResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(companyIsSet_) {
        val[utility::conversions::to_string_t("company")] = ModelBase::toJson(company_);
    }
    if(departmentIsSet_) {
        val[utility::conversions::to_string_t("department")] = ModelBase::toJson(department_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(faxIsSet_) {
        val[utility::conversions::to_string_t("fax")] = ModelBase::toJson(fax_);
    }
    if(postcodeIsSet_) {
        val[utility::conversions::to_string_t("postcode")] = ModelBase::toJson(postcode_);
    }
    if(websiteIsSet_) {
        val[utility::conversions::to_string_t("website")] = ModelBase::toJson(website_);
    }
    if(extraInfoListIsSet_) {
        val[utility::conversions::to_string_t("extra_info_list")] = ModelBase::toJson(extraInfoList_);
    }
    if(adjustedImageIsSet_) {
        val[utility::conversions::to_string_t("adjusted_image")] = ModelBase::toJson(adjustedImage_);
    }

    return val;
}
bool BusinessCardResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("company"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("company"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompany(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("department"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("department"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDepartment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fax"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fax"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("postcode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("postcode"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPostcode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("website"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("website"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebsite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_info_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_info_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ExtraInfoList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraInfoList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("adjusted_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("adjusted_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdjustedImage(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BusinessCardResult::getName()
{
    return name_;
}

void BusinessCardResult::setName(const std::vector<std::string>& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BusinessCardResult::nameIsSet() const
{
    return nameIsSet_;
}

void BusinessCardResult::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& BusinessCardResult::getTitle()
{
    return title_;
}

void BusinessCardResult::setTitle(const std::vector<std::string>& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool BusinessCardResult::titleIsSet() const
{
    return titleIsSet_;
}

void BusinessCardResult::unsettitle()
{
    titleIsSet_ = false;
}

std::vector<std::string>& BusinessCardResult::getCompany()
{
    return company_;
}

void BusinessCardResult::setCompany(const std::vector<std::string>& value)
{
    company_ = value;
    companyIsSet_ = true;
}

bool BusinessCardResult::companyIsSet() const
{
    return companyIsSet_;
}

void BusinessCardResult::unsetcompany()
{
    companyIsSet_ = false;
}

std::vector<std::string>& BusinessCardResult::getDepartment()
{
    return department_;
}

void BusinessCardResult::setDepartment(const std::vector<std::string>& value)
{
    department_ = value;
    departmentIsSet_ = true;
}

bool BusinessCardResult::departmentIsSet() const
{
    return departmentIsSet_;
}

void BusinessCardResult::unsetdepartment()
{
    departmentIsSet_ = false;
}

std::vector<std::string>& BusinessCardResult::getPhone()
{
    return phone_;
}

void BusinessCardResult::setPhone(const std::vector<std::string>& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool BusinessCardResult::phoneIsSet() const
{
    return phoneIsSet_;
}

void BusinessCardResult::unsetphone()
{
    phoneIsSet_ = false;
}

std::vector<std::string>& BusinessCardResult::getAddress()
{
    return address_;
}

void BusinessCardResult::setAddress(const std::vector<std::string>& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool BusinessCardResult::addressIsSet() const
{
    return addressIsSet_;
}

void BusinessCardResult::unsetaddress()
{
    addressIsSet_ = false;
}

std::vector<std::string>& BusinessCardResult::getEmail()
{
    return email_;
}

void BusinessCardResult::setEmail(const std::vector<std::string>& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool BusinessCardResult::emailIsSet() const
{
    return emailIsSet_;
}

void BusinessCardResult::unsetemail()
{
    emailIsSet_ = false;
}

std::vector<std::string>& BusinessCardResult::getFax()
{
    return fax_;
}

void BusinessCardResult::setFax(const std::vector<std::string>& value)
{
    fax_ = value;
    faxIsSet_ = true;
}

bool BusinessCardResult::faxIsSet() const
{
    return faxIsSet_;
}

void BusinessCardResult::unsetfax()
{
    faxIsSet_ = false;
}

std::vector<std::string>& BusinessCardResult::getPostcode()
{
    return postcode_;
}

void BusinessCardResult::setPostcode(const std::vector<std::string>& value)
{
    postcode_ = value;
    postcodeIsSet_ = true;
}

bool BusinessCardResult::postcodeIsSet() const
{
    return postcodeIsSet_;
}

void BusinessCardResult::unsetpostcode()
{
    postcodeIsSet_ = false;
}

std::vector<std::string>& BusinessCardResult::getWebsite()
{
    return website_;
}

void BusinessCardResult::setWebsite(const std::vector<std::string>& value)
{
    website_ = value;
    websiteIsSet_ = true;
}

bool BusinessCardResult::websiteIsSet() const
{
    return websiteIsSet_;
}

void BusinessCardResult::unsetwebsite()
{
    websiteIsSet_ = false;
}

std::vector<ExtraInfoList>& BusinessCardResult::getExtraInfoList()
{
    return extraInfoList_;
}

void BusinessCardResult::setExtraInfoList(const std::vector<ExtraInfoList>& value)
{
    extraInfoList_ = value;
    extraInfoListIsSet_ = true;
}

bool BusinessCardResult::extraInfoListIsSet() const
{
    return extraInfoListIsSet_;
}

void BusinessCardResult::unsetextraInfoList()
{
    extraInfoListIsSet_ = false;
}

std::string BusinessCardResult::getAdjustedImage() const
{
    return adjustedImage_;
}

void BusinessCardResult::setAdjustedImage(const std::string& value)
{
    adjustedImage_ = value;
    adjustedImageIsSet_ = true;
}

bool BusinessCardResult::adjustedImageIsSet() const
{
    return adjustedImageIsSet_;
}

void BusinessCardResult::unsetadjustedImage()
{
    adjustedImageIsSet_ = false;
}

}
}
}
}
}


