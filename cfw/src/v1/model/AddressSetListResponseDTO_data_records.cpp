

#include "huaweicloud/cfw/v1/model/AddressSetListResponseDTO_data_records.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddressSetListResponseDTO_data_records::AddressSetListResponseDTO_data_records()
{
    setId_ = "";
    setIdIsSet_ = false;
    refCount_ = 0;
    refCountIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    addressType_ = 0;
    addressTypeIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    addressSetType_ = 0;
    addressSetTypeIsSet_ = false;
}

AddressSetListResponseDTO_data_records::~AddressSetListResponseDTO_data_records() = default;

void AddressSetListResponseDTO_data_records::validate()
{
}

web::json::value AddressSetListResponseDTO_data_records::toJson() const
{
    web::json::value val = web::json::value::object();

    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }
    if(refCountIsSet_) {
        val[utility::conversions::to_string_t("ref_count")] = ModelBase::toJson(refCount_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(addressSetTypeIsSet_) {
        val[utility::conversions::to_string_t("address_set_type")] = ModelBase::toJson(addressSetType_);
    }

    return val;
}
bool AddressSetListResponseDTO_data_records::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address_set_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_set_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressSetType(refVal);
        }
    }
    return ok;
}


std::string AddressSetListResponseDTO_data_records::getSetId() const
{
    return setId_;
}

void AddressSetListResponseDTO_data_records::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool AddressSetListResponseDTO_data_records::setIdIsSet() const
{
    return setIdIsSet_;
}

void AddressSetListResponseDTO_data_records::unsetsetId()
{
    setIdIsSet_ = false;
}

int32_t AddressSetListResponseDTO_data_records::getRefCount() const
{
    return refCount_;
}

void AddressSetListResponseDTO_data_records::setRefCount(int32_t value)
{
    refCount_ = value;
    refCountIsSet_ = true;
}

bool AddressSetListResponseDTO_data_records::refCountIsSet() const
{
    return refCountIsSet_;
}

void AddressSetListResponseDTO_data_records::unsetrefCount()
{
    refCountIsSet_ = false;
}

std::string AddressSetListResponseDTO_data_records::getDescription() const
{
    return description_;
}

void AddressSetListResponseDTO_data_records::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddressSetListResponseDTO_data_records::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddressSetListResponseDTO_data_records::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string AddressSetListResponseDTO_data_records::getName() const
{
    return name_;
}

void AddressSetListResponseDTO_data_records::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddressSetListResponseDTO_data_records::nameIsSet() const
{
    return nameIsSet_;
}

void AddressSetListResponseDTO_data_records::unsetname()
{
    nameIsSet_ = false;
}

int32_t AddressSetListResponseDTO_data_records::getAddressType() const
{
    return addressType_;
}

void AddressSetListResponseDTO_data_records::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool AddressSetListResponseDTO_data_records::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void AddressSetListResponseDTO_data_records::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string AddressSetListResponseDTO_data_records::getObjectId() const
{
    return objectId_;
}

void AddressSetListResponseDTO_data_records::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool AddressSetListResponseDTO_data_records::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void AddressSetListResponseDTO_data_records::unsetobjectId()
{
    objectIdIsSet_ = false;
}

int32_t AddressSetListResponseDTO_data_records::getAddressSetType() const
{
    return addressSetType_;
}

void AddressSetListResponseDTO_data_records::setAddressSetType(int32_t value)
{
    addressSetType_ = value;
    addressSetTypeIsSet_ = true;
}

bool AddressSetListResponseDTO_data_records::addressSetTypeIsSet() const
{
    return addressSetTypeIsSet_;
}

void AddressSetListResponseDTO_data_records::unsetaddressSetType()
{
    addressSetTypeIsSet_ = false;
}

}
}
}
}
}


