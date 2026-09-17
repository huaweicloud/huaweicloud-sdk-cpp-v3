

#include "huaweicloud/projectman/v4/model/IssueNew_assigned_to.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueNew_assigned_to::IssueNew_assigned_to()
{
    firstName_ = "";
    firstNameIsSet_ = false;
    lastName_ = "";
    lastNameIsSet_ = false;
    identifier_ = "";
    identifierIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    assignedNickName_ = "";
    assignedNickNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
}

IssueNew_assigned_to::~IssueNew_assigned_to() = default;

void IssueNew_assigned_to::validate()
{
}

web::json::value IssueNew_assigned_to::toJson() const
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
    if(assignedNickNameIsSet_) {
        val[utility::conversions::to_string_t("assignedNickName")] = ModelBase::toJson(assignedNickName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool IssueNew_assigned_to::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("assignedNickName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignedNickName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedNickName(refVal);
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


std::string IssueNew_assigned_to::getFirstName() const
{
    return firstName_;
}

void IssueNew_assigned_to::setFirstName(const std::string& value)
{
    firstName_ = value;
    firstNameIsSet_ = true;
}

bool IssueNew_assigned_to::firstNameIsSet() const
{
    return firstNameIsSet_;
}

void IssueNew_assigned_to::unsetfirstName()
{
    firstNameIsSet_ = false;
}

std::string IssueNew_assigned_to::getLastName() const
{
    return lastName_;
}

void IssueNew_assigned_to::setLastName(const std::string& value)
{
    lastName_ = value;
    lastNameIsSet_ = true;
}

bool IssueNew_assigned_to::lastNameIsSet() const
{
    return lastNameIsSet_;
}

void IssueNew_assigned_to::unsetlastName()
{
    lastNameIsSet_ = false;
}

std::string IssueNew_assigned_to::getIdentifier() const
{
    return identifier_;
}

void IssueNew_assigned_to::setIdentifier(const std::string& value)
{
    identifier_ = value;
    identifierIsSet_ = true;
}

bool IssueNew_assigned_to::identifierIsSet() const
{
    return identifierIsSet_;
}

void IssueNew_assigned_to::unsetidentifier()
{
    identifierIsSet_ = false;
}

std::string IssueNew_assigned_to::getImageId() const
{
    return imageId_;
}

void IssueNew_assigned_to::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool IssueNew_assigned_to::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void IssueNew_assigned_to::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string IssueNew_assigned_to::getAssignedNickName() const
{
    return assignedNickName_;
}

void IssueNew_assigned_to::setAssignedNickName(const std::string& value)
{
    assignedNickName_ = value;
    assignedNickNameIsSet_ = true;
}

bool IssueNew_assigned_to::assignedNickNameIsSet() const
{
    return assignedNickNameIsSet_;
}

void IssueNew_assigned_to::unsetassignedNickName()
{
    assignedNickNameIsSet_ = false;
}

std::string IssueNew_assigned_to::getName() const
{
    return name_;
}

void IssueNew_assigned_to::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IssueNew_assigned_to::nameIsSet() const
{
    return nameIsSet_;
}

void IssueNew_assigned_to::unsetname()
{
    nameIsSet_ = false;
}

int32_t IssueNew_assigned_to::getId() const
{
    return id_;
}

void IssueNew_assigned_to::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueNew_assigned_to::idIsSet() const
{
    return idIsSet_;
}

void IssueNew_assigned_to::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


