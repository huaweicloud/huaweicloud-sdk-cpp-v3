

#include "huaweicloud/codeartsrepo/v4/model/DateTitleDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DateTitleDto::DateTitleDto()
{
    day_ = "";
    dayIsSet_ = false;
    commitsCount_ = 0;
    commitsCountIsSet_ = false;
}

DateTitleDto::~DateTitleDto() = default;

void DateTitleDto::validate()
{
}

web::json::value DateTitleDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dayIsSet_) {
        val[utility::conversions::to_string_t("day")] = ModelBase::toJson(day_);
    }
    if(commitsCountIsSet_) {
        val[utility::conversions::to_string_t("commits_count")] = ModelBase::toJson(commitsCount_);
    }

    return val;
}
bool DateTitleDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("day"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commits_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commits_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitsCount(refVal);
        }
    }
    return ok;
}


std::string DateTitleDto::getDay() const
{
    return day_;
}

void DateTitleDto::setDay(const std::string& value)
{
    day_ = value;
    dayIsSet_ = true;
}

bool DateTitleDto::dayIsSet() const
{
    return dayIsSet_;
}

void DateTitleDto::unsetday()
{
    dayIsSet_ = false;
}

int32_t DateTitleDto::getCommitsCount() const
{
    return commitsCount_;
}

void DateTitleDto::setCommitsCount(int32_t value)
{
    commitsCount_ = value;
    commitsCountIsSet_ = true;
}

bool DateTitleDto::commitsCountIsSet() const
{
    return commitsCountIsSet_;
}

void DateTitleDto::unsetcommitsCount()
{
    commitsCountIsSet_ = false;
}

}
}
}
}
}


