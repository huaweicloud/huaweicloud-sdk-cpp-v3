

#include "huaweicloud/ocr/v1/model/HealthCodeResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




HealthCodeResult::HealthCodeResult()
{
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    idcardNumber_ = "";
    idcardNumberIsSet_ = false;
    phoneNumber_ = "";
    phoneNumberIsSet_ = false;
    province_ = "";
    provinceIsSet_ = false;
    city_ = "";
    cityIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    color_ = "";
    colorIsSet_ = false;
    vaccinationStatus_ = "";
    vaccinationStatusIsSet_ = false;
    pcrTestResult_ = "";
    pcrTestResultIsSet_ = false;
    pcrTestOrganization_ = "";
    pcrTestOrganizationIsSet_ = false;
    pcrTestTime_ = "";
    pcrTestTimeIsSet_ = false;
    pcrSamplingTime_ = "";
    pcrSamplingTimeIsSet_ = false;
    reachedCityIsSet_ = false;
    confidenceIsSet_ = false;
    wordsBlockCount_ = 0;
    wordsBlockCountIsSet_ = false;
    wordsBlockListIsSet_ = false;
}

HealthCodeResult::~HealthCodeResult() = default;

void HealthCodeResult::validate()
{
}

web::json::value HealthCodeResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idcardNumberIsSet_) {
        val[utility::conversions::to_string_t("idcard_number")] = ModelBase::toJson(idcardNumber_);
    }
    if(phoneNumberIsSet_) {
        val[utility::conversions::to_string_t("phone_number")] = ModelBase::toJson(phoneNumber_);
    }
    if(provinceIsSet_) {
        val[utility::conversions::to_string_t("province")] = ModelBase::toJson(province_);
    }
    if(cityIsSet_) {
        val[utility::conversions::to_string_t("city")] = ModelBase::toJson(city_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(colorIsSet_) {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(color_);
    }
    if(vaccinationStatusIsSet_) {
        val[utility::conversions::to_string_t("vaccination_status")] = ModelBase::toJson(vaccinationStatus_);
    }
    if(pcrTestResultIsSet_) {
        val[utility::conversions::to_string_t("pcr_test_result")] = ModelBase::toJson(pcrTestResult_);
    }
    if(pcrTestOrganizationIsSet_) {
        val[utility::conversions::to_string_t("pcr_test_organization")] = ModelBase::toJson(pcrTestOrganization_);
    }
    if(pcrTestTimeIsSet_) {
        val[utility::conversions::to_string_t("pcr_test_time")] = ModelBase::toJson(pcrTestTime_);
    }
    if(pcrSamplingTimeIsSet_) {
        val[utility::conversions::to_string_t("pcr_sampling_time")] = ModelBase::toJson(pcrSamplingTime_);
    }
    if(reachedCityIsSet_) {
        val[utility::conversions::to_string_t("reached_city")] = ModelBase::toJson(reachedCity_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(wordsBlockCountIsSet_) {
        val[utility::conversions::to_string_t("words_block_count")] = ModelBase::toJson(wordsBlockCount_);
    }
    if(wordsBlockListIsSet_) {
        val[utility::conversions::to_string_t("words_block_list")] = ModelBase::toJson(wordsBlockList_);
    }

    return val;
}

bool HealthCodeResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("idcard_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idcard_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdcardNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhoneNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("province"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("province"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("city"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("city"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vaccination_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vaccination_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaccinationStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pcr_test_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pcr_test_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPcrTestResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pcr_test_organization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pcr_test_organization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPcrTestOrganization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pcr_test_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pcr_test_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPcrTestTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pcr_sampling_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pcr_sampling_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPcrSamplingTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reached_city"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reached_city"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReachedCity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("words_block_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words_block_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsBlockCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("words_block_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words_block_list"));
        if(!fieldValue.is_null())
        {
            std::vector<HealthCodeWordsBlockList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsBlockList(refVal);
        }
    }
    return ok;
}


std::string HealthCodeResult::getType() const
{
    return type_;
}

void HealthCodeResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool HealthCodeResult::typeIsSet() const
{
    return typeIsSet_;
}

void HealthCodeResult::unsettype()
{
    typeIsSet_ = false;
}

std::string HealthCodeResult::getName() const
{
    return name_;
}

void HealthCodeResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HealthCodeResult::nameIsSet() const
{
    return nameIsSet_;
}

void HealthCodeResult::unsetname()
{
    nameIsSet_ = false;
}

std::string HealthCodeResult::getIdcardNumber() const
{
    return idcardNumber_;
}

void HealthCodeResult::setIdcardNumber(const std::string& value)
{
    idcardNumber_ = value;
    idcardNumberIsSet_ = true;
}

bool HealthCodeResult::idcardNumberIsSet() const
{
    return idcardNumberIsSet_;
}

void HealthCodeResult::unsetidcardNumber()
{
    idcardNumberIsSet_ = false;
}

std::string HealthCodeResult::getPhoneNumber() const
{
    return phoneNumber_;
}

void HealthCodeResult::setPhoneNumber(const std::string& value)
{
    phoneNumber_ = value;
    phoneNumberIsSet_ = true;
}

bool HealthCodeResult::phoneNumberIsSet() const
{
    return phoneNumberIsSet_;
}

void HealthCodeResult::unsetphoneNumber()
{
    phoneNumberIsSet_ = false;
}

std::string HealthCodeResult::getProvince() const
{
    return province_;
}

void HealthCodeResult::setProvince(const std::string& value)
{
    province_ = value;
    provinceIsSet_ = true;
}

bool HealthCodeResult::provinceIsSet() const
{
    return provinceIsSet_;
}

void HealthCodeResult::unsetprovince()
{
    provinceIsSet_ = false;
}

std::string HealthCodeResult::getCity() const
{
    return city_;
}

void HealthCodeResult::setCity(const std::string& value)
{
    city_ = value;
    cityIsSet_ = true;
}

bool HealthCodeResult::cityIsSet() const
{
    return cityIsSet_;
}

void HealthCodeResult::unsetcity()
{
    cityIsSet_ = false;
}

std::string HealthCodeResult::getTime() const
{
    return time_;
}

void HealthCodeResult::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool HealthCodeResult::timeIsSet() const
{
    return timeIsSet_;
}

void HealthCodeResult::unsettime()
{
    timeIsSet_ = false;
}

std::string HealthCodeResult::getColor() const
{
    return color_;
}

void HealthCodeResult::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool HealthCodeResult::colorIsSet() const
{
    return colorIsSet_;
}

void HealthCodeResult::unsetcolor()
{
    colorIsSet_ = false;
}

std::string HealthCodeResult::getVaccinationStatus() const
{
    return vaccinationStatus_;
}

void HealthCodeResult::setVaccinationStatus(const std::string& value)
{
    vaccinationStatus_ = value;
    vaccinationStatusIsSet_ = true;
}

bool HealthCodeResult::vaccinationStatusIsSet() const
{
    return vaccinationStatusIsSet_;
}

void HealthCodeResult::unsetvaccinationStatus()
{
    vaccinationStatusIsSet_ = false;
}

std::string HealthCodeResult::getPcrTestResult() const
{
    return pcrTestResult_;
}

void HealthCodeResult::setPcrTestResult(const std::string& value)
{
    pcrTestResult_ = value;
    pcrTestResultIsSet_ = true;
}

bool HealthCodeResult::pcrTestResultIsSet() const
{
    return pcrTestResultIsSet_;
}

void HealthCodeResult::unsetpcrTestResult()
{
    pcrTestResultIsSet_ = false;
}

std::string HealthCodeResult::getPcrTestOrganization() const
{
    return pcrTestOrganization_;
}

void HealthCodeResult::setPcrTestOrganization(const std::string& value)
{
    pcrTestOrganization_ = value;
    pcrTestOrganizationIsSet_ = true;
}

bool HealthCodeResult::pcrTestOrganizationIsSet() const
{
    return pcrTestOrganizationIsSet_;
}

void HealthCodeResult::unsetpcrTestOrganization()
{
    pcrTestOrganizationIsSet_ = false;
}

std::string HealthCodeResult::getPcrTestTime() const
{
    return pcrTestTime_;
}

void HealthCodeResult::setPcrTestTime(const std::string& value)
{
    pcrTestTime_ = value;
    pcrTestTimeIsSet_ = true;
}

bool HealthCodeResult::pcrTestTimeIsSet() const
{
    return pcrTestTimeIsSet_;
}

void HealthCodeResult::unsetpcrTestTime()
{
    pcrTestTimeIsSet_ = false;
}

std::string HealthCodeResult::getPcrSamplingTime() const
{
    return pcrSamplingTime_;
}

void HealthCodeResult::setPcrSamplingTime(const std::string& value)
{
    pcrSamplingTime_ = value;
    pcrSamplingTimeIsSet_ = true;
}

bool HealthCodeResult::pcrSamplingTimeIsSet() const
{
    return pcrSamplingTimeIsSet_;
}

void HealthCodeResult::unsetpcrSamplingTime()
{
    pcrSamplingTimeIsSet_ = false;
}

std::vector<std::string>& HealthCodeResult::getReachedCity()
{
    return reachedCity_;
}

void HealthCodeResult::setReachedCity(const std::vector<std::string>& value)
{
    reachedCity_ = value;
    reachedCityIsSet_ = true;
}

bool HealthCodeResult::reachedCityIsSet() const
{
    return reachedCityIsSet_;
}

void HealthCodeResult::unsetreachedCity()
{
    reachedCityIsSet_ = false;
}

Object HealthCodeResult::getConfidence() const
{
    return confidence_;
}

void HealthCodeResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool HealthCodeResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void HealthCodeResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

int32_t HealthCodeResult::getWordsBlockCount() const
{
    return wordsBlockCount_;
}

void HealthCodeResult::setWordsBlockCount(int32_t value)
{
    wordsBlockCount_ = value;
    wordsBlockCountIsSet_ = true;
}

bool HealthCodeResult::wordsBlockCountIsSet() const
{
    return wordsBlockCountIsSet_;
}

void HealthCodeResult::unsetwordsBlockCount()
{
    wordsBlockCountIsSet_ = false;
}

std::vector<HealthCodeWordsBlockList>& HealthCodeResult::getWordsBlockList()
{
    return wordsBlockList_;
}

void HealthCodeResult::setWordsBlockList(const std::vector<HealthCodeWordsBlockList>& value)
{
    wordsBlockList_ = value;
    wordsBlockListIsSet_ = true;
}

bool HealthCodeResult::wordsBlockListIsSet() const
{
    return wordsBlockListIsSet_;
}

void HealthCodeResult::unsetwordsBlockList()
{
    wordsBlockListIsSet_ = false;
}

}
}
}
}
}


