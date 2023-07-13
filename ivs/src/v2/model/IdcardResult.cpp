

#include "huaweicloud/ivs/v2/model/IdcardResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




IdcardResult::IdcardResult()
{
    name_ = "";
    nameIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    birth_ = "";
    birthIsSet_ = false;
    ethnicity_ = "";
    ethnicityIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    issue_ = "";
    issueIsSet_ = false;
    validFrom_ = "";
    validFromIsSet_ = false;
    validTo_ = "";
    validToIsSet_ = false;
}

IdcardResult::~IdcardResult() = default;

void IdcardResult::validate()
{
}

web::json::value IdcardResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(birthIsSet_) {
        val[utility::conversions::to_string_t("birth")] = ModelBase::toJson(birth_);
    }
    if(ethnicityIsSet_) {
        val[utility::conversions::to_string_t("ethnicity")] = ModelBase::toJson(ethnicity_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(issueIsSet_) {
        val[utility::conversions::to_string_t("issue")] = ModelBase::toJson(issue_);
    }
    if(validFromIsSet_) {
        val[utility::conversions::to_string_t("valid_from")] = ModelBase::toJson(validFrom_);
    }
    if(validToIsSet_) {
        val[utility::conversions::to_string_t("valid_to")] = ModelBase::toJson(validTo_);
    }

    return val;
}

bool IdcardResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("birth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ethnicity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ethnicity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEthnicity(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid_from"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_from"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidFrom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid_to"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_to"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidTo(refVal);
        }
    }
    return ok;
}

std::string IdcardResult::getName() const
{
    return name_;
}

void IdcardResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IdcardResult::nameIsSet() const
{
    return nameIsSet_;
}

void IdcardResult::unsetname()
{
    nameIsSet_ = false;
}

std::string IdcardResult::getNumber() const
{
    return number_;
}

void IdcardResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool IdcardResult::numberIsSet() const
{
    return numberIsSet_;
}

void IdcardResult::unsetnumber()
{
    numberIsSet_ = false;
}

std::string IdcardResult::getSex() const
{
    return sex_;
}

void IdcardResult::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool IdcardResult::sexIsSet() const
{
    return sexIsSet_;
}

void IdcardResult::unsetsex()
{
    sexIsSet_ = false;
}

std::string IdcardResult::getBirth() const
{
    return birth_;
}

void IdcardResult::setBirth(const std::string& value)
{
    birth_ = value;
    birthIsSet_ = true;
}

bool IdcardResult::birthIsSet() const
{
    return birthIsSet_;
}

void IdcardResult::unsetbirth()
{
    birthIsSet_ = false;
}

std::string IdcardResult::getEthnicity() const
{
    return ethnicity_;
}

void IdcardResult::setEthnicity(const std::string& value)
{
    ethnicity_ = value;
    ethnicityIsSet_ = true;
}

bool IdcardResult::ethnicityIsSet() const
{
    return ethnicityIsSet_;
}

void IdcardResult::unsetethnicity()
{
    ethnicityIsSet_ = false;
}

std::string IdcardResult::getAddress() const
{
    return address_;
}

void IdcardResult::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool IdcardResult::addressIsSet() const
{
    return addressIsSet_;
}

void IdcardResult::unsetaddress()
{
    addressIsSet_ = false;
}

std::string IdcardResult::getIssue() const
{
    return issue_;
}

void IdcardResult::setIssue(const std::string& value)
{
    issue_ = value;
    issueIsSet_ = true;
}

bool IdcardResult::issueIsSet() const
{
    return issueIsSet_;
}

void IdcardResult::unsetissue()
{
    issueIsSet_ = false;
}

std::string IdcardResult::getValidFrom() const
{
    return validFrom_;
}

void IdcardResult::setValidFrom(const std::string& value)
{
    validFrom_ = value;
    validFromIsSet_ = true;
}

bool IdcardResult::validFromIsSet() const
{
    return validFromIsSet_;
}

void IdcardResult::unsetvalidFrom()
{
    validFromIsSet_ = false;
}

std::string IdcardResult::getValidTo() const
{
    return validTo_;
}

void IdcardResult::setValidTo(const std::string& value)
{
    validTo_ = value;
    validToIsSet_ = true;
}

bool IdcardResult::validToIsSet() const
{
    return validToIsSet_;
}

void IdcardResult::unsetvalidTo()
{
    validToIsSet_ = false;
}

}
}
}
}
}


