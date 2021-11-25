

#include "huaweicloud/sis/v1/model/WordInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




WordInfo::WordInfo()
{
    startTime_ = 0;
    startTimeIsSet_ = false;
    endTime_ = 0;
    endTimeIsSet_ = false;
    word_ = "";
    wordIsSet_ = false;
}

WordInfo::~WordInfo() = default;

void WordInfo::validate()
{
}

web::json::value WordInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(wordIsSet_) {
        val[utility::conversions::to_string_t("word")] = ModelBase::toJson(word_);
    }

    return val;
}

bool WordInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("word"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("word"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWord(refVal);
        }
    }
    return ok;
}


int32_t WordInfo::getStartTime() const
{
    return startTime_;
}

void WordInfo::setStartTime(int32_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool WordInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void WordInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t WordInfo::getEndTime() const
{
    return endTime_;
}

void WordInfo::setEndTime(int32_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool WordInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void WordInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string WordInfo::getWord() const
{
    return word_;
}

void WordInfo::setWord(const std::string& value)
{
    word_ = value;
    wordIsSet_ = true;
}

bool WordInfo::wordIsSet() const
{
    return wordIsSet_;
}

void WordInfo::unsetword()
{
    wordIsSet_ = false;
}

}
}
}
}
}


