

#include "huaweicloud/ocr/v1/model/PcrTestRecordResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




PcrTestRecordResult::PcrTestRecordResult()
{
    name_ = "";
    nameIsSet_ = false;
    samplingTime_ = "";
    samplingTimeIsSet_ = false;
    testTime_ = "";
    testTimeIsSet_ = false;
    testResult_ = "";
    testResultIsSet_ = false;
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
    wordsBlockCount_ = 0;
    wordsBlockCountIsSet_ = false;
    wordsBlockListIsSet_ = false;
}

PcrTestRecordResult::~PcrTestRecordResult() = default;

void PcrTestRecordResult::validate()
{
}

web::json::value PcrTestRecordResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(samplingTimeIsSet_) {
        val[utility::conversions::to_string_t("sampling_time")] = ModelBase::toJson(samplingTime_);
    }
    if(testTimeIsSet_) {
        val[utility::conversions::to_string_t("test_time")] = ModelBase::toJson(testTime_);
    }
    if(testResultIsSet_) {
        val[utility::conversions::to_string_t("test_result")] = ModelBase::toJson(testResult_);
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

bool PcrTestRecordResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sampling_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sampling_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSamplingTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            float refVal;
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
            std::vector<PcrTestRecordWordsBlockList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsBlockList(refVal);
        }
    }
    return ok;
}


std::string PcrTestRecordResult::getName() const
{
    return name_;
}

void PcrTestRecordResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PcrTestRecordResult::nameIsSet() const
{
    return nameIsSet_;
}

void PcrTestRecordResult::unsetname()
{
    nameIsSet_ = false;
}

std::string PcrTestRecordResult::getSamplingTime() const
{
    return samplingTime_;
}

void PcrTestRecordResult::setSamplingTime(const std::string& value)
{
    samplingTime_ = value;
    samplingTimeIsSet_ = true;
}

bool PcrTestRecordResult::samplingTimeIsSet() const
{
    return samplingTimeIsSet_;
}

void PcrTestRecordResult::unsetsamplingTime()
{
    samplingTimeIsSet_ = false;
}

std::string PcrTestRecordResult::getTestTime() const
{
    return testTime_;
}

void PcrTestRecordResult::setTestTime(const std::string& value)
{
    testTime_ = value;
    testTimeIsSet_ = true;
}

bool PcrTestRecordResult::testTimeIsSet() const
{
    return testTimeIsSet_;
}

void PcrTestRecordResult::unsettestTime()
{
    testTimeIsSet_ = false;
}

std::string PcrTestRecordResult::getTestResult() const
{
    return testResult_;
}

void PcrTestRecordResult::setTestResult(const std::string& value)
{
    testResult_ = value;
    testResultIsSet_ = true;
}

bool PcrTestRecordResult::testResultIsSet() const
{
    return testResultIsSet_;
}

void PcrTestRecordResult::unsettestResult()
{
    testResultIsSet_ = false;
}

float PcrTestRecordResult::getConfidence() const
{
    return confidence_;
}

void PcrTestRecordResult::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool PcrTestRecordResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void PcrTestRecordResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

int32_t PcrTestRecordResult::getWordsBlockCount() const
{
    return wordsBlockCount_;
}

void PcrTestRecordResult::setWordsBlockCount(int32_t value)
{
    wordsBlockCount_ = value;
    wordsBlockCountIsSet_ = true;
}

bool PcrTestRecordResult::wordsBlockCountIsSet() const
{
    return wordsBlockCountIsSet_;
}

void PcrTestRecordResult::unsetwordsBlockCount()
{
    wordsBlockCountIsSet_ = false;
}

std::vector<PcrTestRecordWordsBlockList>& PcrTestRecordResult::getWordsBlockList()
{
    return wordsBlockList_;
}

void PcrTestRecordResult::setWordsBlockList(const std::vector<PcrTestRecordWordsBlockList>& value)
{
    wordsBlockList_ = value;
    wordsBlockListIsSet_ = true;
}

bool PcrTestRecordResult::wordsBlockListIsSet() const
{
    return wordsBlockListIsSet_;
}

void PcrTestRecordResult::unsetwordsBlockList()
{
    wordsBlockListIsSet_ = false;
}

}
}
}
}
}


