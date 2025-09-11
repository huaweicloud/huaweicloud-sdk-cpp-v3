

#include "huaweicloud/gaussdbforopengauss/v3/model/AlarmLevelStatisticsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




AlarmLevelStatisticsResult::AlarmLevelStatisticsResult()
{
    count_ = 0;
    countIsSet_ = false;
    levelName_ = "";
    levelNameIsSet_ = false;
}

AlarmLevelStatisticsResult::~AlarmLevelStatisticsResult() = default;

void AlarmLevelStatisticsResult::validate()
{
}

web::json::value AlarmLevelStatisticsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(levelNameIsSet_) {
        val[utility::conversions::to_string_t("level_name")] = ModelBase::toJson(levelName_);
    }

    return val;
}
bool AlarmLevelStatisticsResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevelName(refVal);
        }
    }
    return ok;
}


int32_t AlarmLevelStatisticsResult::getCount() const
{
    return count_;
}

void AlarmLevelStatisticsResult::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool AlarmLevelStatisticsResult::countIsSet() const
{
    return countIsSet_;
}

void AlarmLevelStatisticsResult::unsetcount()
{
    countIsSet_ = false;
}

std::string AlarmLevelStatisticsResult::getLevelName() const
{
    return levelName_;
}

void AlarmLevelStatisticsResult::setLevelName(const std::string& value)
{
    levelName_ = value;
    levelNameIsSet_ = true;
}

bool AlarmLevelStatisticsResult::levelNameIsSet() const
{
    return levelNameIsSet_;
}

void AlarmLevelStatisticsResult::unsetlevelName()
{
    levelNameIsSet_ = false;
}

}
}
}
}
}


