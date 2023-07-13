

#include "huaweicloud/sis/v1/model/Phoneme.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




Phoneme::Phoneme()
{
    arpa_ = "";
    arpaIsSet_ = false;
    ipa_ = "";
    ipaIsSet_ = false;
    startTime_ = 0.0f;
    startTimeIsSet_ = false;
    endTime_ = 0.0f;
    endTimeIsSet_ = false;
    fluencyIsSet_ = false;
    pronunciationIsSet_ = false;
}

Phoneme::~Phoneme() = default;

void Phoneme::validate()
{
}

web::json::value Phoneme::toJson() const
{
    web::json::value val = web::json::value::object();

    if(arpaIsSet_) {
        val[utility::conversions::to_string_t("arpa")] = ModelBase::toJson(arpa_);
    }
    if(ipaIsSet_) {
        val[utility::conversions::to_string_t("ipa")] = ModelBase::toJson(ipa_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(fluencyIsSet_) {
        val[utility::conversions::to_string_t("fluency")] = ModelBase::toJson(fluency_);
    }
    if(pronunciationIsSet_) {
        val[utility::conversions::to_string_t("pronunciation")] = ModelBase::toJson(pronunciation_);
    }

    return val;
}

bool Phoneme::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("arpa"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arpa"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArpa(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipa"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipa"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpa(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fluency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fluency"));
        if(!fieldValue.is_null())
        {
            PhonemeFluency refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFluency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pronunciation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pronunciation"));
        if(!fieldValue.is_null())
        {
            PhonemePronunciation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPronunciation(refVal);
        }
    }
    return ok;
}

std::string Phoneme::getArpa() const
{
    return arpa_;
}

void Phoneme::setArpa(const std::string& value)
{
    arpa_ = value;
    arpaIsSet_ = true;
}

bool Phoneme::arpaIsSet() const
{
    return arpaIsSet_;
}

void Phoneme::unsetarpa()
{
    arpaIsSet_ = false;
}

std::string Phoneme::getIpa() const
{
    return ipa_;
}

void Phoneme::setIpa(const std::string& value)
{
    ipa_ = value;
    ipaIsSet_ = true;
}

bool Phoneme::ipaIsSet() const
{
    return ipaIsSet_;
}

void Phoneme::unsetipa()
{
    ipaIsSet_ = false;
}

float Phoneme::getStartTime() const
{
    return startTime_;
}

void Phoneme::setStartTime(float value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool Phoneme::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void Phoneme::unsetstartTime()
{
    startTimeIsSet_ = false;
}

float Phoneme::getEndTime() const
{
    return endTime_;
}

void Phoneme::setEndTime(float value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool Phoneme::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void Phoneme::unsetendTime()
{
    endTimeIsSet_ = false;
}

PhonemeFluency Phoneme::getFluency() const
{
    return fluency_;
}

void Phoneme::setFluency(const PhonemeFluency& value)
{
    fluency_ = value;
    fluencyIsSet_ = true;
}

bool Phoneme::fluencyIsSet() const
{
    return fluencyIsSet_;
}

void Phoneme::unsetfluency()
{
    fluencyIsSet_ = false;
}

PhonemePronunciation Phoneme::getPronunciation() const
{
    return pronunciation_;
}

void Phoneme::setPronunciation(const PhonemePronunciation& value)
{
    pronunciation_ = value;
    pronunciationIsSet_ = true;
}

bool Phoneme::pronunciationIsSet() const
{
    return pronunciationIsSet_;
}

void Phoneme::unsetpronunciation()
{
    pronunciationIsSet_ = false;
}

}
}
}
}
}


