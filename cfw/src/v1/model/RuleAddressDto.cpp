

#include "huaweicloud/cfw/v1/model/RuleAddressDto.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




RuleAddressDto::RuleAddressDto()
{
    type_ = 0;
    typeIsSet_ = false;
    addressType_ = 0;
    addressTypeIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    addressSetId_ = "";
    addressSetIdIsSet_ = false;
    addressSetName_ = "";
    addressSetNameIsSet_ = false;
    domainAddressName_ = "";
    domainAddressNameIsSet_ = false;
}

RuleAddressDto::~RuleAddressDto() = default;

void RuleAddressDto::validate()
{
}

web::json::value RuleAddressDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(addressSetIdIsSet_) {
        val[utility::conversions::to_string_t("address_set_id")] = ModelBase::toJson(addressSetId_);
    }
    if(addressSetNameIsSet_) {
        val[utility::conversions::to_string_t("address_set_name")] = ModelBase::toJson(addressSetName_);
    }
    if(domainAddressNameIsSet_) {
        val[utility::conversions::to_string_t("domain_address_name")] = ModelBase::toJson(domainAddressName_);
    }

    return val;
}

bool RuleAddressDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address_set_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_set_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressSetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_address_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_address_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainAddressName(refVal);
        }
    }
    return ok;
}

int32_t RuleAddressDto::getType() const
{
    return type_;
}

void RuleAddressDto::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RuleAddressDto::typeIsSet() const
{
    return typeIsSet_;
}

void RuleAddressDto::unsettype()
{
    typeIsSet_ = false;
}

int32_t RuleAddressDto::getAddressType() const
{
    return addressType_;
}

void RuleAddressDto::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool RuleAddressDto::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void RuleAddressDto::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string RuleAddressDto::getAddress() const
{
    return address_;
}

void RuleAddressDto::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool RuleAddressDto::addressIsSet() const
{
    return addressIsSet_;
}

void RuleAddressDto::unsetaddress()
{
    addressIsSet_ = false;
}

std::string RuleAddressDto::getAddressSetId() const
{
    return addressSetId_;
}

void RuleAddressDto::setAddressSetId(const std::string& value)
{
    addressSetId_ = value;
    addressSetIdIsSet_ = true;
}

bool RuleAddressDto::addressSetIdIsSet() const
{
    return addressSetIdIsSet_;
}

void RuleAddressDto::unsetaddressSetId()
{
    addressSetIdIsSet_ = false;
}

std::string RuleAddressDto::getAddressSetName() const
{
    return addressSetName_;
}

void RuleAddressDto::setAddressSetName(const std::string& value)
{
    addressSetName_ = value;
    addressSetNameIsSet_ = true;
}

bool RuleAddressDto::addressSetNameIsSet() const
{
    return addressSetNameIsSet_;
}

void RuleAddressDto::unsetaddressSetName()
{
    addressSetNameIsSet_ = false;
}

std::string RuleAddressDto::getDomainAddressName() const
{
    return domainAddressName_;
}

void RuleAddressDto::setDomainAddressName(const std::string& value)
{
    domainAddressName_ = value;
    domainAddressNameIsSet_ = true;
}

bool RuleAddressDto::domainAddressNameIsSet() const
{
    return domainAddressNameIsSet_;
}

void RuleAddressDto::unsetdomainAddressName()
{
    domainAddressNameIsSet_ = false;
}

}
}
}
}
}


