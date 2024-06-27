

#include "huaweicloud/cfw/v1/model/AddressGroupVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddressGroupVO::AddressGroupVO()
{
    addressSetType_ = 0;
    addressSetTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    setId_ = "";
    setIdIsSet_ = false;
}

AddressGroupVO::~AddressGroupVO() = default;

void AddressGroupVO::validate()
{
}

web::json::value AddressGroupVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addressSetTypeIsSet_) {
        val[utility::conversions::to_string_t("address_set_type")] = ModelBase::toJson(addressSetType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }

    return val;
}
bool AddressGroupVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("address_set_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_set_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressSetType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
        }
    }
    return ok;
}


int32_t AddressGroupVO::getAddressSetType() const
{
    return addressSetType_;
}

void AddressGroupVO::setAddressSetType(int32_t value)
{
    addressSetType_ = value;
    addressSetTypeIsSet_ = true;
}

bool AddressGroupVO::addressSetTypeIsSet() const
{
    return addressSetTypeIsSet_;
}

void AddressGroupVO::unsetaddressSetType()
{
    addressSetTypeIsSet_ = false;
}

std::string AddressGroupVO::getName() const
{
    return name_;
}

void AddressGroupVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddressGroupVO::nameIsSet() const
{
    return nameIsSet_;
}

void AddressGroupVO::unsetname()
{
    nameIsSet_ = false;
}

std::string AddressGroupVO::getSetId() const
{
    return setId_;
}

void AddressGroupVO::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool AddressGroupVO::setIdIsSet() const
{
    return setIdIsSet_;
}

void AddressGroupVO::unsetsetId()
{
    setIdIsSet_ = false;
}

}
}
}
}
}


