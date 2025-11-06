

#include "huaweicloud/codeartsrepo/v4/model/CreateGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateGroupResponse::CreateGroupResponse()
{
    description_ = "";
    descriptionIsSet_ = false;
    fullNameIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    visibility_ = "";
    visibilityIsSet_ = false;
}

CreateGroupResponse::~CreateGroupResponse() = default;

void CreateGroupResponse::validate()
{
}

web::json::value CreateGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(fullNameIsSet_) {
        val[utility::conversions::to_string_t("full_name")] = ModelBase::toJson(fullName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(visibilityIsSet_) {
        val[utility::conversions::to_string_t("visibility")] = ModelBase::toJson(visibility_);
    }

    return val;
}
bool CreateGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_name"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visibility"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibility(refVal);
        }
    }
    return ok;
}


std::string CreateGroupResponse::getDescription() const
{
    return description_;
}

void CreateGroupResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateGroupResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateGroupResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

Object CreateGroupResponse::getFullName() const
{
    return fullName_;
}

void CreateGroupResponse::setFullName(const Object& value)
{
    fullName_ = value;
    fullNameIsSet_ = true;
}

bool CreateGroupResponse::fullNameIsSet() const
{
    return fullNameIsSet_;
}

void CreateGroupResponse::unsetfullName()
{
    fullNameIsSet_ = false;
}

int32_t CreateGroupResponse::getId() const
{
    return id_;
}

void CreateGroupResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateGroupResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateGroupResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateGroupResponse::getName() const
{
    return name_;
}

void CreateGroupResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateGroupResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateGroupResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateGroupResponse::getVisibility() const
{
    return visibility_;
}

void CreateGroupResponse::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool CreateGroupResponse::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void CreateGroupResponse::unsetvisibility()
{
    visibilityIsSet_ = false;
}

}
}
}
}
}


