

#include "huaweicloud/cfw/v1/model/AddAddressSetDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddAddressSetDto::AddAddressSetDto()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    addressType_ = 0;
    addressTypeIsSet_ = false;
}

AddAddressSetDto::~AddAddressSetDto() = default;

void AddAddressSetDto::validate()
{
}

web::json::value AddAddressSetDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
    }

    return val;
}
bool AddAddressSetDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressType(refVal);
        }
    }
    return ok;
}


std::string AddAddressSetDto::getObjectId() const
{
    return objectId_;
}

void AddAddressSetDto::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool AddAddressSetDto::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void AddAddressSetDto::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string AddAddressSetDto::getName() const
{
    return name_;
}

void AddAddressSetDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddAddressSetDto::nameIsSet() const
{
    return nameIsSet_;
}

void AddAddressSetDto::unsetname()
{
    nameIsSet_ = false;
}

std::string AddAddressSetDto::getDescription() const
{
    return description_;
}

void AddAddressSetDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddAddressSetDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddAddressSetDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t AddAddressSetDto::getAddressType() const
{
    return addressType_;
}

void AddAddressSetDto::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool AddAddressSetDto::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void AddAddressSetDto::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

}
}
}
}
}


