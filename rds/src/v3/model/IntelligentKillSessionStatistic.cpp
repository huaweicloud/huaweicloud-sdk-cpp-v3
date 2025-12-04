

#include "huaweicloud/rds/v3/model/IntelligentKillSessionStatistic.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




IntelligentKillSessionStatistic::IntelligentKillSessionStatistic()
{
    keyword_ = "";
    keywordIsSet_ = false;
    rawSql_ = "";
    rawSqlIsSet_ = false;
    idsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    totalTime_ = 0.0;
    totalTimeIsSet_ = false;
    avgTime_ = 0.0;
    avgTimeIsSet_ = false;
    maxTime_ = 0.0;
    maxTimeIsSet_ = false;
    strategy_ = "";
    strategyIsSet_ = false;
    adviceConcurrency_ = 0;
    adviceConcurrencyIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

IntelligentKillSessionStatistic::~IntelligentKillSessionStatistic() = default;

void IntelligentKillSessionStatistic::validate()
{
}

web::json::value IntelligentKillSessionStatistic::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keywordIsSet_) {
        val[utility::conversions::to_string_t("keyword")] = ModelBase::toJson(keyword_);
    }
    if(rawSqlIsSet_) {
        val[utility::conversions::to_string_t("raw_sql")] = ModelBase::toJson(rawSql_);
    }
    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(totalTimeIsSet_) {
        val[utility::conversions::to_string_t("total_time")] = ModelBase::toJson(totalTime_);
    }
    if(avgTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_time")] = ModelBase::toJson(avgTime_);
    }
    if(maxTimeIsSet_) {
        val[utility::conversions::to_string_t("max_time")] = ModelBase::toJson(maxTime_);
    }
    if(strategyIsSet_) {
        val[utility::conversions::to_string_t("strategy")] = ModelBase::toJson(strategy_);
    }
    if(adviceConcurrencyIsSet_) {
        val[utility::conversions::to_string_t("advice_concurrency")] = ModelBase::toJson(adviceConcurrency_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool IntelligentKillSessionStatistic::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keyword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyword"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("raw_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("raw_sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRawSql(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int64_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_time"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_time"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_time"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("strategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStrategy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("advice_concurrency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("advice_concurrency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdviceConcurrency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string IntelligentKillSessionStatistic::getKeyword() const
{
    return keyword_;
}

void IntelligentKillSessionStatistic::setKeyword(const std::string& value)
{
    keyword_ = value;
    keywordIsSet_ = true;
}

bool IntelligentKillSessionStatistic::keywordIsSet() const
{
    return keywordIsSet_;
}

void IntelligentKillSessionStatistic::unsetkeyword()
{
    keywordIsSet_ = false;
}

std::string IntelligentKillSessionStatistic::getRawSql() const
{
    return rawSql_;
}

void IntelligentKillSessionStatistic::setRawSql(const std::string& value)
{
    rawSql_ = value;
    rawSqlIsSet_ = true;
}

bool IntelligentKillSessionStatistic::rawSqlIsSet() const
{
    return rawSqlIsSet_;
}

void IntelligentKillSessionStatistic::unsetrawSql()
{
    rawSqlIsSet_ = false;
}

std::vector<int64_t>& IntelligentKillSessionStatistic::getIds()
{
    return ids_;
}

void IntelligentKillSessionStatistic::setIds(std::vector<int64_t> value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool IntelligentKillSessionStatistic::idsIsSet() const
{
    return idsIsSet_;
}

void IntelligentKillSessionStatistic::unsetids()
{
    idsIsSet_ = false;
}

int32_t IntelligentKillSessionStatistic::getCount() const
{
    return count_;
}

void IntelligentKillSessionStatistic::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool IntelligentKillSessionStatistic::countIsSet() const
{
    return countIsSet_;
}

void IntelligentKillSessionStatistic::unsetcount()
{
    countIsSet_ = false;
}

double IntelligentKillSessionStatistic::getTotalTime() const
{
    return totalTime_;
}

void IntelligentKillSessionStatistic::setTotalTime(double value)
{
    totalTime_ = value;
    totalTimeIsSet_ = true;
}

bool IntelligentKillSessionStatistic::totalTimeIsSet() const
{
    return totalTimeIsSet_;
}

void IntelligentKillSessionStatistic::unsettotalTime()
{
    totalTimeIsSet_ = false;
}

double IntelligentKillSessionStatistic::getAvgTime() const
{
    return avgTime_;
}

void IntelligentKillSessionStatistic::setAvgTime(double value)
{
    avgTime_ = value;
    avgTimeIsSet_ = true;
}

bool IntelligentKillSessionStatistic::avgTimeIsSet() const
{
    return avgTimeIsSet_;
}

void IntelligentKillSessionStatistic::unsetavgTime()
{
    avgTimeIsSet_ = false;
}

double IntelligentKillSessionStatistic::getMaxTime() const
{
    return maxTime_;
}

void IntelligentKillSessionStatistic::setMaxTime(double value)
{
    maxTime_ = value;
    maxTimeIsSet_ = true;
}

bool IntelligentKillSessionStatistic::maxTimeIsSet() const
{
    return maxTimeIsSet_;
}

void IntelligentKillSessionStatistic::unsetmaxTime()
{
    maxTimeIsSet_ = false;
}

std::string IntelligentKillSessionStatistic::getStrategy() const
{
    return strategy_;
}

void IntelligentKillSessionStatistic::setStrategy(const std::string& value)
{
    strategy_ = value;
    strategyIsSet_ = true;
}

bool IntelligentKillSessionStatistic::strategyIsSet() const
{
    return strategyIsSet_;
}

void IntelligentKillSessionStatistic::unsetstrategy()
{
    strategyIsSet_ = false;
}

int32_t IntelligentKillSessionStatistic::getAdviceConcurrency() const
{
    return adviceConcurrency_;
}

void IntelligentKillSessionStatistic::setAdviceConcurrency(int32_t value)
{
    adviceConcurrency_ = value;
    adviceConcurrencyIsSet_ = true;
}

bool IntelligentKillSessionStatistic::adviceConcurrencyIsSet() const
{
    return adviceConcurrencyIsSet_;
}

void IntelligentKillSessionStatistic::unsetadviceConcurrency()
{
    adviceConcurrencyIsSet_ = false;
}

std::string IntelligentKillSessionStatistic::getType() const
{
    return type_;
}

void IntelligentKillSessionStatistic::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool IntelligentKillSessionStatistic::typeIsSet() const
{
    return typeIsSet_;
}

void IntelligentKillSessionStatistic::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


