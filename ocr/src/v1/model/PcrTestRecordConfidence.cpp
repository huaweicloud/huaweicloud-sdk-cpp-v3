

#include "huaweicloud/ocr/v1/model/PcrTestRecordConfidence.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




PcrTestRecordConfidence::PcrTestRecordConfidence()
{
    name_ = 0.0f;
    nameIsSet_ = false;
    samplingTime_ = 0.0f;
    samplingTimeIsSet_ = false;
    testTime_ = 0.0f;
    testTimeIsSet_ = false;
    testResult_ = 0.0f;
    testResultIsSet_ = false;
}

PcrTestRecordConfidence::~PcrTestRecordConfidence() = default;

void PcrTestRecordConfidence::validate()
{
}

web::json::value PcrTestRecordConfidence::toJson() const
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

    return val;
}
bool PcrTestRecordConfidence::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sampling_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sampling_time"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSamplingTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_time"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_result"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestResult(refVal);
        }
    }
    return ok;
}


float PcrTestRecordConfidence::getName() const
{
    return name_;
}

void PcrTestRecordConfidence::setName(float value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PcrTestRecordConfidence::nameIsSet() const
{
    return nameIsSet_;
}

void PcrTestRecordConfidence::unsetname()
{
    nameIsSet_ = false;
}

float PcrTestRecordConfidence::getSamplingTime() const
{
    return samplingTime_;
}

void PcrTestRecordConfidence::setSamplingTime(float value)
{
    samplingTime_ = value;
    samplingTimeIsSet_ = true;
}

bool PcrTestRecordConfidence::samplingTimeIsSet() const
{
    return samplingTimeIsSet_;
}

void PcrTestRecordConfidence::unsetsamplingTime()
{
    samplingTimeIsSet_ = false;
}

float PcrTestRecordConfidence::getTestTime() const
{
    return testTime_;
}

void PcrTestRecordConfidence::setTestTime(float value)
{
    testTime_ = value;
    testTimeIsSet_ = true;
}

bool PcrTestRecordConfidence::testTimeIsSet() const
{
    return testTimeIsSet_;
}

void PcrTestRecordConfidence::unsettestTime()
{
    testTimeIsSet_ = false;
}

float PcrTestRecordConfidence::getTestResult() const
{
    return testResult_;
}

void PcrTestRecordConfidence::setTestResult(float value)
{
    testResult_ = value;
    testResultIsSet_ = true;
}

bool PcrTestRecordConfidence::testResultIsSet() const
{
    return testResultIsSet_;
}

void PcrTestRecordConfidence::unsettestResult()
{
    testResultIsSet_ = false;
}

}
}
}
}
}


