

#include "huaweicloud/sis/v1/model/Segment.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




Segment::Segment()
{
    startTime_ = 0;
    startTimeIsSet_ = false;
    endTime_ = 0;
    endTimeIsSet_ = false;
    resultIsSet_ = false;
}

Segment::~Segment() = default;

void Segment::validate()
{
}

web::json::value Segment::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool Segment::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
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
            TranscriberResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


int32_t Segment::getStartTime() const
{
    return startTime_;
}

void Segment::setStartTime(int32_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool Segment::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void Segment::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t Segment::getEndTime() const
{
    return endTime_;
}

void Segment::setEndTime(int32_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool Segment::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void Segment::unsetendTime()
{
    endTimeIsSet_ = false;
}

TranscriberResult Segment::getResult() const
{
    return result_;
}

void Segment::setResult(const TranscriberResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool Segment::resultIsSet() const
{
    return resultIsSet_;
}

void Segment::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


