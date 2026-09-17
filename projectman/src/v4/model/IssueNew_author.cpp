

#include "huaweicloud/projectman/v4/model/IssueNew_author.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueNew_author::IssueNew_author()
{
    firstName_ = "";
    firstNameIsSet_ = false;
    lastName_ = "";
    lastNameIsSet_ = false;
    identifier_ = "";
    identifierIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    authorNickName_ = "";
    authorNickNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
}

IssueNew_author::~IssueNew_author() = default;

void IssueNew_author::validate()
{
}

web::json::value IssueNew_author::toJson() const
{
    web::json::value val = web::json::value::object();

    if(firstNameIsSet_) {
        val[utility::conversions::to_string_t("firstName")] = ModelBase::toJson(firstName_);
    }
    if(lastNameIsSet_) {
        val[utility::conversions::to_string_t("lastName")] = ModelBase::toJson(lastName_);
    }
    if(identifierIsSet_) {
        val[utility::conversions::to_string_t("identifier")] = ModelBase::toJson(identifier_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(authorNickNameIsSet_) {
        val[utility::conversions::to_string_t("authorNickName")] = ModelBase::toJson(authorNickName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool IssueNew_author::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("firstName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firstName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirstName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentifier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authorNickName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorNickName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorNickName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string IssueNew_author::getFirstName() const
{
    return firstName_;
}

void IssueNew_author::setFirstName(const std::string& value)
{
    firstName_ = value;
    firstNameIsSet_ = true;
}

bool IssueNew_author::firstNameIsSet() const
{
    return firstNameIsSet_;
}

void IssueNew_author::unsetfirstName()
{
    firstNameIsSet_ = false;
}

std::string IssueNew_author::getLastName() const
{
    return lastName_;
}

void IssueNew_author::setLastName(const std::string& value)
{
    lastName_ = value;
    lastNameIsSet_ = true;
}

bool IssueNew_author::lastNameIsSet() const
{
    return lastNameIsSet_;
}

void IssueNew_author::unsetlastName()
{
    lastNameIsSet_ = false;
}

std::string IssueNew_author::getIdentifier() const
{
    return identifier_;
}

void IssueNew_author::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool IssueNew_author::identifierIsSet() const
{
    return identifierIsSet_;
}

void IssueNew_author::unsetidentifier()
{
    identifierIsSet_ = false;
}

std::string IssueNew_author::getImageId() const
{
    return imageId_;
}

void IssueNew_author::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool IssueNew_author::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void IssueNew_author::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string IssueNew_author::getAuthorNickName() const
{
    return authorNickName_;
}

void IssueNew_author::setAuthorNickName(const std::string& value)
{
    authorNickName_ = value;
    authorNickNameIsSet_ = true;
}

bool IssueNew_author::authorNickNameIsSet() const
{
    return authorNickNameIsSet_;
}

void IssueNew_author::unsetauthorNickName()
{
    authorNickNameIsSet_ = false;
}

std::string IssueNew_author::getName() const
{
    return name_;
}

void IssueNew_author::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IssueNew_author::nameIsSet() const
{
    return nameIsSet_;
}

void IssueNew_author::unsetname()
{
    nameIsSet_ = false;
}

int32_t IssueNew_author::getId() const
{
    return id_;
}

void IssueNew_author::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueNew_author::idIsSet() const
{
    return idIsSet_;
}

void IssueNew_author::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


