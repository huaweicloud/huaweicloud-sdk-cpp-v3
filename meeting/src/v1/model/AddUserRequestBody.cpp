

#include "huaweicloud/meeting/v1/model/AddUserRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddUserRequestBody::AddUserRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    contact_ = "";
    contactIsSet_ = false;
    country_ = "";
    countryIsSet_ = false;
    deptCode_ = "";
    deptCodeIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    sortLevel_ = 0;
    sortLevelIsSet_ = false;
    desc_ = "";
    descIsSet_ = false;
}

AddUserRequestBody::~AddUserRequestBody() = default;

void AddUserRequestBody::validate()
{
}

web::json::value AddUserRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(contactIsSet_) {
        val[utility::conversions::to_string_t("contact")] = ModelBase::toJson(contact_);
    }
    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }
    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("deptCode")] = ModelBase::toJson(deptCode_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(sortLevelIsSet_) {
        val[utility::conversions::to_string_t("sortLevel")] = ModelBase::toJson(sortLevel_);
    }
    if(descIsSet_) {
        val[utility::conversions::to_string_t("desc")] = ModelBase::toJson(desc_);
    }

    return val;
}
bool AddUserRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("contact"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contact"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContact(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deptCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sortLevel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sortLevel"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortLevel(refVal);
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
    return ok;
}


std::string AddUserRequestBody::getName() const
{
    return name_;
}

void AddUserRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddUserRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void AddUserRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string AddUserRequestBody::getContact() const
{
    return contact_;
}

void AddUserRequestBody::setContact(const std::string& value)
{
    contact_ = value;
    contactIsSet_ = true;
}

bool AddUserRequestBody::contactIsSet() const
{
    return contactIsSet_;
}

void AddUserRequestBody::unsetcontact()
{
    contactIsSet_ = false;
}

std::string AddUserRequestBody::getCountry() const
{
    return country_;
}

void AddUserRequestBody::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool AddUserRequestBody::countryIsSet() const
{
    return countryIsSet_;
}

void AddUserRequestBody::unsetcountry()
{
    countryIsSet_ = false;
}

std::string AddUserRequestBody::getDeptCode() const
{
    return deptCode_;
}

void AddUserRequestBody::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool AddUserRequestBody::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void AddUserRequestBody::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

std::string AddUserRequestBody::getTitle() const
{
    return title_;
}

void AddUserRequestBody::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool AddUserRequestBody::titleIsSet() const
{
    return titleIsSet_;
}

void AddUserRequestBody::unsettitle()
{
    titleIsSet_ = false;
}

int32_t AddUserRequestBody::getSortLevel() const
{
    return sortLevel_;
}

void AddUserRequestBody::setSortLevel(int32_t value)
{
    sortLevel_ = value;
    sortLevelIsSet_ = true;
}

bool AddUserRequestBody::sortLevelIsSet() const
{
    return sortLevelIsSet_;
}

void AddUserRequestBody::unsetsortLevel()
{
    sortLevelIsSet_ = false;
}

std::string AddUserRequestBody::getDesc() const
{
    return desc_;
}

void AddUserRequestBody::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool AddUserRequestBody::descIsSet() const
{
    return descIsSet_;
}

void AddUserRequestBody::unsetdesc()
{
    descIsSet_ = false;
}

}
}
}
}
}


