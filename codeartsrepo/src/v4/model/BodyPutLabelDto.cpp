

#include "huaweicloud/codeartsrepo/v4/model/BodyPutLabelDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BodyPutLabelDto::BodyPutLabelDto()
{
    name_ = "";
    nameIsSet_ = false;
    newName_ = "";
    newNameIsSet_ = false;
    color_ = "";
    colorIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    expiresAtIsSet_ = false;
}

BodyPutLabelDto::~BodyPutLabelDto() = default;

void BodyPutLabelDto::validate()
{
}

web::json::value BodyPutLabelDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(newNameIsSet_) {
        val[utility::conversions::to_string_t("new_name")] = ModelBase::toJson(newName_);
    }
    if(colorIsSet_) {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(color_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(expiresAtIsSet_) {
        val[utility::conversions::to_string_t("expires_at")] = ModelBase::toJson(expiresAt_);
    }

    return val;
}
bool BodyPutLabelDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("new_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("color"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("color"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expires_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expires_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiresAt(refVal);
        }
    }
    return ok;
}


std::string BodyPutLabelDto::getName() const
{
    return name_;
}

void BodyPutLabelDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BodyPutLabelDto::nameIsSet() const
{
    return nameIsSet_;
}

void BodyPutLabelDto::unsetname()
{
    nameIsSet_ = false;
}

std::string BodyPutLabelDto::getNewName() const
{
    return newName_;
}

void BodyPutLabelDto::setNewName(const std::string& value)
{
    newName_ = value;
    newNameIsSet_ = true;
}

bool BodyPutLabelDto::newNameIsSet() const
{
    return newNameIsSet_;
}

void BodyPutLabelDto::unsetnewName()
{
    newNameIsSet_ = false;
}

std::string BodyPutLabelDto::getColor() const
{
    return color_;
}

void BodyPutLabelDto::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool BodyPutLabelDto::colorIsSet() const
{
    return colorIsSet_;
}

void BodyPutLabelDto::unsetcolor()
{
    colorIsSet_ = false;
}

std::string BodyPutLabelDto::getDescription() const
{
    return description_;
}

void BodyPutLabelDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BodyPutLabelDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BodyPutLabelDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t BodyPutLabelDto::getPriority() const
{
    return priority_;
}

void BodyPutLabelDto::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool BodyPutLabelDto::priorityIsSet() const
{
    return priorityIsSet_;
}

void BodyPutLabelDto::unsetpriority()
{
    priorityIsSet_ = false;
}

utility::datetime BodyPutLabelDto::getExpiresAt() const
{
    return expiresAt_;
}

void BodyPutLabelDto::setExpiresAt(const utility::datetime& value)
{
    expiresAt_ = value;
    expiresAtIsSet_ = true;
}

bool BodyPutLabelDto::expiresAtIsSet() const
{
    return expiresAtIsSet_;
}

void BodyPutLabelDto::unsetexpiresAt()
{
    expiresAtIsSet_ = false;
}

}
}
}
}
}


