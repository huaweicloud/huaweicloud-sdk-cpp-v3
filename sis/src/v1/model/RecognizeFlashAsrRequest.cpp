

#include "huaweicloud/sis/v1/model/RecognizeFlashAsrRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




RecognizeFlashAsrRequest::RecognizeFlashAsrRequest()
{
    property_ = "";
    propertyIsSet_ = false;
    audioFormat_ = "";
    audioFormatIsSet_ = false;
    addPunc_ = "";
    addPuncIsSet_ = false;
    digitNorm_ = "";
    digitNormIsSet_ = false;
    needWordInfo_ = "";
    needWordInfoIsSet_ = false;
    vocabularyId_ = "";
    vocabularyIdIsSet_ = false;
    obsBucketName_ = "";
    obsBucketNameIsSet_ = false;
    obsObjectKey_ = "";
    obsObjectKeyIsSet_ = false;
    firstChannelOnly_ = "";
    firstChannelOnlyIsSet_ = false;
}

RecognizeFlashAsrRequest::~RecognizeFlashAsrRequest() = default;

void RecognizeFlashAsrRequest::validate()
{
}

web::json::value RecognizeFlashAsrRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(propertyIsSet_) {
        val[utility::conversions::to_string_t("property")] = ModelBase::toJson(property_);
    }
    if(audioFormatIsSet_) {
        val[utility::conversions::to_string_t("audio_format")] = ModelBase::toJson(audioFormat_);
    }
    if(addPuncIsSet_) {
        val[utility::conversions::to_string_t("add_punc")] = ModelBase::toJson(addPunc_);
    }
    if(digitNormIsSet_) {
        val[utility::conversions::to_string_t("digit_norm")] = ModelBase::toJson(digitNorm_);
    }
    if(needWordInfoIsSet_) {
        val[utility::conversions::to_string_t("need_word_info")] = ModelBase::toJson(needWordInfo_);
    }
    if(vocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_id")] = ModelBase::toJson(vocabularyId_);
    }
    if(obsBucketNameIsSet_) {
        val[utility::conversions::to_string_t("obs_bucket_name")] = ModelBase::toJson(obsBucketName_);
    }
    if(obsObjectKeyIsSet_) {
        val[utility::conversions::to_string_t("obs_object_key")] = ModelBase::toJson(obsObjectKey_);
    }
    if(firstChannelOnlyIsSet_) {
        val[utility::conversions::to_string_t("first_channel_only")] = ModelBase::toJson(firstChannelOnly_);
    }

    return val;
}

bool RecognizeFlashAsrRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("property"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("property"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperty(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("add_punc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_punc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddPunc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("digit_norm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("digit_norm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDigitNorm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_word_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_word_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedWordInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vocabulary_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vocabulary_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVocabularyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_object_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_object_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsObjectKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("first_channel_only"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("first_channel_only"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirstChannelOnly(refVal);
        }
    }
    return ok;
}


std::string RecognizeFlashAsrRequest::getProperty() const
{
    return property_;
}

void RecognizeFlashAsrRequest::setProperty(const std::string& value)
{
    property_ = value;
    propertyIsSet_ = true;
}

bool RecognizeFlashAsrRequest::propertyIsSet() const
{
    return propertyIsSet_;
}

void RecognizeFlashAsrRequest::unsetproperty()
{
    propertyIsSet_ = false;
}

std::string RecognizeFlashAsrRequest::getAudioFormat() const
{
    return audioFormat_;
}

void RecognizeFlashAsrRequest::setAudioFormat(const std::string& value)
{
    audioFormat_ = value;
    audioFormatIsSet_ = true;
}

bool RecognizeFlashAsrRequest::audioFormatIsSet() const
{
    return audioFormatIsSet_;
}

void RecognizeFlashAsrRequest::unsetaudioFormat()
{
    audioFormatIsSet_ = false;
}

std::string RecognizeFlashAsrRequest::getAddPunc() const
{
    return addPunc_;
}

void RecognizeFlashAsrRequest::setAddPunc(const std::string& value)
{
    addPunc_ = value;
    addPuncIsSet_ = true;
}

bool RecognizeFlashAsrRequest::addPuncIsSet() const
{
    return addPuncIsSet_;
}

void RecognizeFlashAsrRequest::unsetaddPunc()
{
    addPuncIsSet_ = false;
}

std::string RecognizeFlashAsrRequest::getDigitNorm() const
{
    return digitNorm_;
}

void RecognizeFlashAsrRequest::setDigitNorm(const std::string& value)
{
    digitNorm_ = value;
    digitNormIsSet_ = true;
}

bool RecognizeFlashAsrRequest::digitNormIsSet() const
{
    return digitNormIsSet_;
}

void RecognizeFlashAsrRequest::unsetdigitNorm()
{
    digitNormIsSet_ = false;
}

std::string RecognizeFlashAsrRequest::getNeedWordInfo() const
{
    return needWordInfo_;
}

void RecognizeFlashAsrRequest::setNeedWordInfo(const std::string& value)
{
    needWordInfo_ = value;
    needWordInfoIsSet_ = true;
}

bool RecognizeFlashAsrRequest::needWordInfoIsSet() const
{
    return needWordInfoIsSet_;
}

void RecognizeFlashAsrRequest::unsetneedWordInfo()
{
    needWordInfoIsSet_ = false;
}

std::string RecognizeFlashAsrRequest::getVocabularyId() const
{
    return vocabularyId_;
}

void RecognizeFlashAsrRequest::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool RecognizeFlashAsrRequest::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void RecognizeFlashAsrRequest::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

std::string RecognizeFlashAsrRequest::getObsBucketName() const
{
    return obsBucketName_;
}

void RecognizeFlashAsrRequest::setObsBucketName(const std::string& value)
{
    obsBucketName_ = value;
    obsBucketNameIsSet_ = true;
}

bool RecognizeFlashAsrRequest::obsBucketNameIsSet() const
{
    return obsBucketNameIsSet_;
}

void RecognizeFlashAsrRequest::unsetobsBucketName()
{
    obsBucketNameIsSet_ = false;
}

std::string RecognizeFlashAsrRequest::getObsObjectKey() const
{
    return obsObjectKey_;
}

void RecognizeFlashAsrRequest::setObsObjectKey(const std::string& value)
{
    obsObjectKey_ = value;
    obsObjectKeyIsSet_ = true;
}

bool RecognizeFlashAsrRequest::obsObjectKeyIsSet() const
{
    return obsObjectKeyIsSet_;
}

void RecognizeFlashAsrRequest::unsetobsObjectKey()
{
    obsObjectKeyIsSet_ = false;
}

std::string RecognizeFlashAsrRequest::getFirstChannelOnly() const
{
    return firstChannelOnly_;
}

void RecognizeFlashAsrRequest::setFirstChannelOnly(const std::string& value)
{
    firstChannelOnly_ = value;
    firstChannelOnlyIsSet_ = true;
}

bool RecognizeFlashAsrRequest::firstChannelOnlyIsSet() const
{
    return firstChannelOnlyIsSet_;
}

void RecognizeFlashAsrRequest::unsetfirstChannelOnly()
{
    firstChannelOnlyIsSet_ = false;
}

}
}
}
}
}


