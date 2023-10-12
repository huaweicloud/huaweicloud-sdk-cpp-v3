

#include "huaweicloud/sis/v1/model/Sentences.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




Sentences::Sentences()
{
    endTime_ = 0;
    endTimeIsSet_ = false;
    resultIsSet_ = false;
    startTime_ = 0;
    startTimeIsSet_ = false;
}

Sentences::~Sentences() = default;

void Sentences::validate()
{
}

web::json::value Sentences::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }

    return val;
}
bool Sentences::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            FlashScoreResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    return ok;
}


int32_t Sentences::getEndTime() const
{
    return endTime_;
}

void Sentences::setEndTime(int32_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool Sentences::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void Sentences::unsetendTime()
{
    endTimeIsSet_ = false;
}

FlashScoreResult Sentences::getResult() const
{
    return result_;
}

void Sentences::setResult(const FlashScoreResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool Sentences::resultIsSet() const
{
    return resultIsSet_;
}

void Sentences::unsetresult()
{
    resultIsSet_ = false;
}

int32_t Sentences::getStartTime() const
{
    return startTime_;
}

void Sentences::setStartTime(int32_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool Sentences::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void Sentences::unsetstartTime()
{
    startTimeIsSet_ = false;
}

}
}
}
}
}


