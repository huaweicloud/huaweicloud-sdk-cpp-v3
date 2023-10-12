

#include "huaweicloud/ocr/v1/model/IdCardResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




IdCardResult::IdCardResult()
{
    name_ = "";
    nameIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    birth_ = "";
    birthIsSet_ = false;
    ethnicity_ = "";
    ethnicityIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    issue_ = "";
    issueIsSet_ = false;
    validFrom_ = "";
    validFromIsSet_ = false;
    validTo_ = "";
    validToIsSet_ = false;
    verificationResultIsSet_ = false;
    textLocationIsSet_ = false;
    detectReproduceResult_ = false;
    detectReproduceResultIsSet_ = false;
    detectCopyResult_ = false;
    detectCopyResultIsSet_ = false;
}

IdCardResult::~IdCardResult() = default;

void IdCardResult::validate()
{
}

web::json::value IdCardResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
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
    if(verificationResultIsSet_) {
        val[utility::conversions::to_string_t("verification_result")] = ModelBase::toJson(verificationResult_);
    }
    if(textLocationIsSet_) {
        val[utility::conversions::to_string_t("text_location")] = ModelBase::toJson(textLocation_);
    }
    if(detectReproduceResultIsSet_) {
        val[utility::conversions::to_string_t("detect_reproduce_result")] = ModelBase::toJson(detectReproduceResult_);
    }
    if(detectCopyResultIsSet_) {
        val[utility::conversions::to_string_t("detect_copy_result")] = ModelBase::toJson(detectCopyResult_);
    }

    return val;
}
bool IdCardResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("verification_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification_result"));
        if(!fieldValue.is_null())
        {
            IdcardVerificationResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_location"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_reproduce_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_reproduce_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectReproduceResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_copy_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_copy_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectCopyResult(refVal);
        }
    }
    return ok;
}


std::string IdCardResult::getName() const
{
    return name_;
}

void IdCardResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IdCardResult::nameIsSet() const
{
    return nameIsSet_;
}

void IdCardResult::unsetname()
{
    nameIsSet_ = false;
}

std::string IdCardResult::getSex() const
{
    return sex_;
}

void IdCardResult::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool IdCardResult::sexIsSet() const
{
    return sexIsSet_;
}

void IdCardResult::unsetsex()
{
    sexIsSet_ = false;
}

std::string IdCardResult::getBirth() const
{
    return birth_;
}

void IdCardResult::setBirth(const std::string& value)
{
    birth_ = value;
    birthIsSet_ = true;
}

bool IdCardResult::birthIsSet() const
{
    return birthIsSet_;
}

void IdCardResult::unsetbirth()
{
    birthIsSet_ = false;
}

std::string IdCardResult::getEthnicity() const
{
    return ethnicity_;
}

void IdCardResult::setEthnicity(const std::string& value)
{
    ethnicity_ = value;
    ethnicityIsSet_ = true;
}

bool IdCardResult::ethnicityIsSet() const
{
    return ethnicityIsSet_;
}

void IdCardResult::unsetethnicity()
{
    ethnicityIsSet_ = false;
}

std::string IdCardResult::getAddress() const
{
    return address_;
}

void IdCardResult::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool IdCardResult::addressIsSet() const
{
    return addressIsSet_;
}

void IdCardResult::unsetaddress()
{
    addressIsSet_ = false;
}

std::string IdCardResult::getNumber() const
{
    return number_;
}

void IdCardResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool IdCardResult::numberIsSet() const
{
    return numberIsSet_;
}

void IdCardResult::unsetnumber()
{
    numberIsSet_ = false;
}

std::string IdCardResult::getIssue() const
{
    return issue_;
}

void IdCardResult::setIssue(const std::string& value)
{
    issue_ = value;
    issueIsSet_ = true;
}

bool IdCardResult::issueIsSet() const
{
    return issueIsSet_;
}

void IdCardResult::unsetissue()
{
    issueIsSet_ = false;
}

std::string IdCardResult::getValidFrom() const
{
    return validFrom_;
}

void IdCardResult::setValidFrom(const std::string& value)
{
    validFrom_ = value;
    validFromIsSet_ = true;
}

bool IdCardResult::validFromIsSet() const
{
    return validFromIsSet_;
}

void IdCardResult::unsetvalidFrom()
{
    validFromIsSet_ = false;
}

std::string IdCardResult::getValidTo() const
{
    return validTo_;
}

void IdCardResult::setValidTo(const std::string& value)
{
    validTo_ = value;
    validToIsSet_ = true;
}

bool IdCardResult::validToIsSet() const
{
    return validToIsSet_;
}

void IdCardResult::unsetvalidTo()
{
    validToIsSet_ = false;
}

IdcardVerificationResult IdCardResult::getVerificationResult() const
{
    return verificationResult_;
}

void IdCardResult::setVerificationResult(const IdcardVerificationResult& value)
{
    verificationResult_ = value;
    verificationResultIsSet_ = true;
}

bool IdCardResult::verificationResultIsSet() const
{
    return verificationResultIsSet_;
}

void IdCardResult::unsetverificationResult()
{
    verificationResultIsSet_ = false;
}

Object IdCardResult::getTextLocation() const
{
    return textLocation_;
}

void IdCardResult::setTextLocation(const Object& value)
{
    textLocation_ = value;
    textLocationIsSet_ = true;
}

bool IdCardResult::textLocationIsSet() const
{
    return textLocationIsSet_;
}

void IdCardResult::unsettextLocation()
{
    textLocationIsSet_ = false;
}

bool IdCardResult::isDetectReproduceResult() const
{
    return detectReproduceResult_;
}

void IdCardResult::setDetectReproduceResult(bool value)
{
    detectReproduceResult_ = value;
    detectReproduceResultIsSet_ = true;
}

bool IdCardResult::detectReproduceResultIsSet() const
{
    return detectReproduceResultIsSet_;
}

void IdCardResult::unsetdetectReproduceResult()
{
    detectReproduceResultIsSet_ = false;
}

bool IdCardResult::isDetectCopyResult() const
{
    return detectCopyResult_;
}

void IdCardResult::setDetectCopyResult(bool value)
{
    detectCopyResult_ = value;
    detectCopyResultIsSet_ = true;
}

bool IdCardResult::detectCopyResultIsSet() const
{
    return detectCopyResultIsSet_;
}

void IdCardResult::unsetdetectCopyResult()
{
    detectCopyResultIsSet_ = false;
}

}
}
}
}
}


