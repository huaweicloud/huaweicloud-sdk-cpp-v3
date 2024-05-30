

#include "huaweicloud/organizations/v1/model/CreateAccountReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




CreateAccountReqBody::CreateAccountReqBody()
{
    name_ = "";
    nameIsSet_ = false;
    email_ = "";
    emailIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    agencyName_ = "";
    agencyNameIsSet_ = false;
    tagsIsSet_ = false;
}

CreateAccountReqBody::~CreateAccountReqBody() = default;

void CreateAccountReqBody::validate()
{
}

web::json::value CreateAccountReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CreateAccountReqBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmail(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string CreateAccountReqBody::getName() const
{
    return name_;
}

void CreateAccountReqBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateAccountReqBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateAccountReqBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateAccountReqBody::getEmail() const
{
    return email_;
}

void CreateAccountReqBody::setEmail(const std::string& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool CreateAccountReqBody::emailIsSet() const
{
    return emailIsSet_;
}

void CreateAccountReqBody::unsetemail()
{
    emailIsSet_ = false;
}

std::string CreateAccountReqBody::getPhone() const
{
    return phone_;
}

void CreateAccountReqBody::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool CreateAccountReqBody::phoneIsSet() const
{
    return phoneIsSet_;
}

void CreateAccountReqBody::unsetphone()
{
    phoneIsSet_ = false;
}

std::string CreateAccountReqBody::getAgencyName() const
{
    return agencyName_;
}

void CreateAccountReqBody::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool CreateAccountReqBody::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void CreateAccountReqBody::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

std::vector<TagDto>& CreateAccountReqBody::getTags()
{
    return tags_;
}

void CreateAccountReqBody::setTags(const std::vector<TagDto>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateAccountReqBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateAccountReqBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


