

#include "huaweicloud/identitycenterstore/v1/model/NameDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




NameDto::NameDto()
{
    familyName_ = "";
    familyNameIsSet_ = false;
    formatted_ = "";
    formattedIsSet_ = false;
    givenName_ = "";
    givenNameIsSet_ = false;
    honorificPrefix_ = "";
    honorificPrefixIsSet_ = false;
    honorificSuffix_ = "";
    honorificSuffixIsSet_ = false;
    middleName_ = "";
    middleNameIsSet_ = false;
}

NameDto::~NameDto() = default;

void NameDto::validate()
{
}

web::json::value NameDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(familyNameIsSet_) {
        val[utility::conversions::to_string_t("family_name")] = ModelBase::toJson(familyName_);
    }
    if(formattedIsSet_) {
        val[utility::conversions::to_string_t("formatted")] = ModelBase::toJson(formatted_);
    }
    if(givenNameIsSet_) {
        val[utility::conversions::to_string_t("given_name")] = ModelBase::toJson(givenName_);
    }
    if(honorificPrefixIsSet_) {
        val[utility::conversions::to_string_t("honorific_prefix")] = ModelBase::toJson(honorificPrefix_);
    }
    if(honorificSuffixIsSet_) {
        val[utility::conversions::to_string_t("honorific_suffix")] = ModelBase::toJson(honorificSuffix_);
    }
    if(middleNameIsSet_) {
        val[utility::conversions::to_string_t("middle_name")] = ModelBase::toJson(middleName_);
    }

    return val;
}
bool NameDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("family_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("family_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFamilyName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("given_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("given_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGivenName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("honorific_prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("honorific_prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHonorificPrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("honorific_suffix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("honorific_suffix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHonorificSuffix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("middle_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("middle_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMiddleName(refVal);
        }
    }
    return ok;
}


std::string NameDto::getFamilyName() const
{
    return familyName_;
}

void NameDto::setFamilyName(const std::string& value)
{
    familyName_ = value;
    familyNameIsSet_ = true;
}

bool NameDto::familyNameIsSet() const
{
    return familyNameIsSet_;
}

void NameDto::unsetfamilyName()
{
    familyNameIsSet_ = false;
}

std::string NameDto::getFormatted() const
{
    return formatted_;
}

void NameDto::setFormatted(const std::string& value)
{
    formatted_ = value;
    formattedIsSet_ = true;
}

bool NameDto::formattedIsSet() const
{
    return formattedIsSet_;
}

void NameDto::unsetformatted()
{
    formattedIsSet_ = false;
}

std::string NameDto::getGivenName() const
{
    return givenName_;
}

void NameDto::setGivenName(const std::string& value)
{
    givenName_ = value;
    givenNameIsSet_ = true;
}

bool NameDto::givenNameIsSet() const
{
    return givenNameIsSet_;
}

void NameDto::unsetgivenName()
{
    givenNameIsSet_ = false;
}

std::string NameDto::getHonorificPrefix() const
{
    return honorificPrefix_;
}

void NameDto::setHonorificPrefix(const std::string& value)
{
    honorificPrefix_ = value;
    honorificPrefixIsSet_ = true;
}

bool NameDto::honorificPrefixIsSet() const
{
    return honorificPrefixIsSet_;
}

void NameDto::unsethonorificPrefix()
{
    honorificPrefixIsSet_ = false;
}

std::string NameDto::getHonorificSuffix() const
{
    return honorificSuffix_;
}

void NameDto::setHonorificSuffix(const std::string& value)
{
    honorificSuffix_ = value;
    honorificSuffixIsSet_ = true;
}

bool NameDto::honorificSuffixIsSet() const
{
    return honorificSuffixIsSet_;
}

void NameDto::unsethonorificSuffix()
{
    honorificSuffixIsSet_ = false;
}

std::string NameDto::getMiddleName() const
{
    return middleName_;
}

void NameDto::setMiddleName(const std::string& value)
{
    middleName_ = value;
    middleNameIsSet_ = true;
}

bool NameDto::middleNameIsSet() const
{
    return middleNameIsSet_;
}

void NameDto::unsetmiddleName()
{
    middleNameIsSet_ = false;
}

}
}
}
}
}


