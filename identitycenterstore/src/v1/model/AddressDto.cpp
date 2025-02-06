

#include "huaweicloud/identitycenterstore/v1/model/AddressDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




AddressDto::AddressDto()
{
    country_ = "";
    countryIsSet_ = false;
    formatted_ = "";
    formattedIsSet_ = false;
    locality_ = "";
    localityIsSet_ = false;
    postalCode_ = "";
    postalCodeIsSet_ = false;
    primary_ = false;
    primaryIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    streetAddress_ = "";
    streetAddressIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

AddressDto::~AddressDto() = default;

void AddressDto::validate()
{
}

web::json::value AddressDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countryIsSet_) {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(country_);
    }
    if(formattedIsSet_) {
        val[utility::conversions::to_string_t("formatted")] = ModelBase::toJson(formatted_);
    }
    if(localityIsSet_) {
        val[utility::conversions::to_string_t("locality")] = ModelBase::toJson(locality_);
    }
    if(postalCodeIsSet_) {
        val[utility::conversions::to_string_t("postal_code")] = ModelBase::toJson(postalCode_);
    }
    if(primaryIsSet_) {
        val[utility::conversions::to_string_t("primary")] = ModelBase::toJson(primary_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(streetAddressIsSet_) {
        val[utility::conversions::to_string_t("street_address")] = ModelBase::toJson(streetAddress_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool AddressDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("country"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("country"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountry(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("formatted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("formatted"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormatted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("locality"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locality"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocality(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("postal_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("postal_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPostalCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("primary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("street_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("street_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreetAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string AddressDto::getCountry() const
{
    return country_;
}

void AddressDto::setCountry(const std::string& value)
{
    country_ = value;
    countryIsSet_ = true;
}

bool AddressDto::countryIsSet() const
{
    return countryIsSet_;
}

void AddressDto::unsetcountry()
{
    countryIsSet_ = false;
}

std::string AddressDto::getFormatted() const
{
    return formatted_;
}

void AddressDto::setFormatted(const std::string& value)
{
    formatted_ = value;
    formattedIsSet_ = true;
}

bool AddressDto::formattedIsSet() const
{
    return formattedIsSet_;
}

void AddressDto::unsetformatted()
{
    formattedIsSet_ = false;
}

std::string AddressDto::getLocality() const
{
    return locality_;
}

void AddressDto::setLocality(const std::string& value)
{
    locality_ = value;
    localityIsSet_ = true;
}

bool AddressDto::localityIsSet() const
{
    return localityIsSet_;
}

void AddressDto::unsetlocality()
{
    localityIsSet_ = false;
}

std::string AddressDto::getPostalCode() const
{
    return postalCode_;
}

void AddressDto::setPostalCode(const std::string& value)
{
    postalCode_ = value;
    postalCodeIsSet_ = true;
}

bool AddressDto::postalCodeIsSet() const
{
    return postalCodeIsSet_;
}

void AddressDto::unsetpostalCode()
{
    postalCodeIsSet_ = false;
}

bool AddressDto::isPrimary() const
{
    return primary_;
}

void AddressDto::setPrimary(bool value)
{
    primary_ = value;
    primaryIsSet_ = true;
}

bool AddressDto::primaryIsSet() const
{
    return primaryIsSet_;
}

void AddressDto::unsetprimary()
{
    primaryIsSet_ = false;
}

std::string AddressDto::getRegion() const
{
    return region_;
}

void AddressDto::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool AddressDto::regionIsSet() const
{
    return regionIsSet_;
}

void AddressDto::unsetregion()
{
    regionIsSet_ = false;
}

std::string AddressDto::getStreetAddress() const
{
    return streetAddress_;
}

void AddressDto::setStreetAddress(const std::string& value)
{
    streetAddress_ = value;
    streetAddressIsSet_ = true;
}

bool AddressDto::streetAddressIsSet() const
{
    return streetAddressIsSet_;
}

void AddressDto::unsetstreetAddress()
{
    streetAddressIsSet_ = false;
}

std::string AddressDto::getType() const
{
    return type_;
}

void AddressDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AddressDto::typeIsSet() const
{
    return typeIsSet_;
}

void AddressDto::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


