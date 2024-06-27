

#include "huaweicloud/cfw/v1/model/CaptureRuleAddressDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CaptureRuleAddressDto::CaptureRuleAddressDto()
{
    address_ = "";
    addressIsSet_ = false;
    addressType_ = 0;
    addressTypeIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
}

CaptureRuleAddressDto::~CaptureRuleAddressDto() = default;

void CaptureRuleAddressDto::validate()
{
}

web::json::value CaptureRuleAddressDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool CaptureRuleAddressDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string CaptureRuleAddressDto::getAddress() const
{
    return address_;
}

void CaptureRuleAddressDto::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool CaptureRuleAddressDto::addressIsSet() const
{
    return addressIsSet_;
}

void CaptureRuleAddressDto::unsetaddress()
{
    addressIsSet_ = false;
}

int32_t CaptureRuleAddressDto::getAddressType() const
{
    return addressType_;
}

void CaptureRuleAddressDto::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool CaptureRuleAddressDto::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void CaptureRuleAddressDto::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

int32_t CaptureRuleAddressDto::getType() const
{
    return type_;
}

void CaptureRuleAddressDto::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CaptureRuleAddressDto::typeIsSet() const
{
    return typeIsSet_;
}

void CaptureRuleAddressDto::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


