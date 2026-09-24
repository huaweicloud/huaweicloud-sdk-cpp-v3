

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSqlRecommendRulesResponseResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSqlRecommendRulesResponseResult::ListSqlRecommendRulesResponseResult()
{
    recommendType_ = "";
    recommendTypeIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
    sqlModel_ = "";
    sqlModelIsSet_ = false;
    sqlKeyword_ = "";
    sqlKeywordIsSet_ = false;
    sqlType_ = "";
    sqlTypeIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
    avgExecTime_ = 0.0;
    avgExecTimeIsSet_ = false;
    maxExecTime_ = 0.0;
    maxExecTimeIsSet_ = false;
    execCount_ = 0;
    execCountIsSet_ = false;
}

ListSqlRecommendRulesResponseResult::~ListSqlRecommendRulesResponseResult() = default;

void ListSqlRecommendRulesResponseResult::validate()
{
}

web::json::value ListSqlRecommendRulesResponseResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recommendTypeIsSet_) {
        val[utility::conversions::to_string_t("recommend_type")] = ModelBase::toJson(recommendType_);
    }
    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }
    if(sqlModelIsSet_) {
        val[utility::conversions::to_string_t("sql_model")] = ModelBase::toJson(sqlModel_);
    }
    if(sqlKeywordIsSet_) {
        val[utility::conversions::to_string_t("sql_keyword")] = ModelBase::toJson(sqlKeyword_);
    }
    if(sqlTypeIsSet_) {
        val[utility::conversions::to_string_t("sql_type")] = ModelBase::toJson(sqlType_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(avgExecTimeIsSet_) {
        val[utility::conversions::to_string_t("avg_exec_time")] = ModelBase::toJson(avgExecTime_);
    }
    if(maxExecTimeIsSet_) {
        val[utility::conversions::to_string_t("max_exec_time")] = ModelBase::toJson(maxExecTime_);
    }
    if(execCountIsSet_) {
        val[utility::conversions::to_string_t("exec_count")] = ModelBase::toJson(execCount_);
    }

    return val;
}
bool ListSqlRecommendRulesResponseResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("recommend_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recommend_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecommendType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_keyword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_keyword"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlKeyword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_exec_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_exec_time"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgExecTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_exec_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_exec_time"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxExecTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exec_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exec_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecCount(refVal);
        }
    }
    return ok;
}


std::string ListSqlRecommendRulesResponseResult::getRecommendType() const
{
    return recommendType_;
}

void ListSqlRecommendRulesResponseResult::setRecommendType(const std::string& value)
{
    recommendType_ = value;
    recommendTypeIsSet_ = true;
}

bool ListSqlRecommendRulesResponseResult::recommendTypeIsSet() const
{
    return recommendTypeIsSet_;
}

void ListSqlRecommendRulesResponseResult::unsetrecommendType()
{
    recommendTypeIsSet_ = false;
}

std::string ListSqlRecommendRulesResponseResult::getSqlId() const
{
    return sqlId_;
}

void ListSqlRecommendRulesResponseResult::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool ListSqlRecommendRulesResponseResult::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void ListSqlRecommendRulesResponseResult::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::string ListSqlRecommendRulesResponseResult::getSqlModel() const
{
    return sqlModel_;
}

void ListSqlRecommendRulesResponseResult::setSqlModel(const std::string& value)
{
    sqlModel_ = value;
    sqlModelIsSet_ = true;
}

bool ListSqlRecommendRulesResponseResult::sqlModelIsSet() const
{
    return sqlModelIsSet_;
}

void ListSqlRecommendRulesResponseResult::unsetsqlModel()
{
    sqlModelIsSet_ = false;
}

std::string ListSqlRecommendRulesResponseResult::getSqlKeyword() const
{
    return sqlKeyword_;
}

void ListSqlRecommendRulesResponseResult::setSqlKeyword(const std::string& value)
{
    sqlKeyword_ = value;
    sqlKeywordIsSet_ = true;
}

bool ListSqlRecommendRulesResponseResult::sqlKeywordIsSet() const
{
    return sqlKeywordIsSet_;
}

void ListSqlRecommendRulesResponseResult::unsetsqlKeyword()
{
    sqlKeywordIsSet_ = false;
}

std::string ListSqlRecommendRulesResponseResult::getSqlType() const
{
    return sqlType_;
}

void ListSqlRecommendRulesResponseResult::setSqlType(const std::string& value)
{
    sqlType_ = value;
    sqlTypeIsSet_ = true;
}

bool ListSqlRecommendRulesResponseResult::sqlTypeIsSet() const
{
    return sqlTypeIsSet_;
}

void ListSqlRecommendRulesResponseResult::unsetsqlType()
{
    sqlTypeIsSet_ = false;
}

std::string ListSqlRecommendRulesResponseResult::getDatabase() const
{
    return database_;
}

void ListSqlRecommendRulesResponseResult::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool ListSqlRecommendRulesResponseResult::databaseIsSet() const
{
    return databaseIsSet_;
}

void ListSqlRecommendRulesResponseResult::unsetdatabase()
{
    databaseIsSet_ = false;
}

double ListSqlRecommendRulesResponseResult::getAvgExecTime() const
{
    return avgExecTime_;
}

void ListSqlRecommendRulesResponseResult::setAvgExecTime(double value)
{
    avgExecTime_ = value;
    avgExecTimeIsSet_ = true;
}

bool ListSqlRecommendRulesResponseResult::avgExecTimeIsSet() const
{
    return avgExecTimeIsSet_;
}

void ListSqlRecommendRulesResponseResult::unsetavgExecTime()
{
    avgExecTimeIsSet_ = false;
}

double ListSqlRecommendRulesResponseResult::getMaxExecTime() const
{
    return maxExecTime_;
}

void ListSqlRecommendRulesResponseResult::setMaxExecTime(double value)
{
    maxExecTime_ = value;
    maxExecTimeIsSet_ = true;
}

bool ListSqlRecommendRulesResponseResult::maxExecTimeIsSet() const
{
    return maxExecTimeIsSet_;
}

void ListSqlRecommendRulesResponseResult::unsetmaxExecTime()
{
    maxExecTimeIsSet_ = false;
}

int32_t ListSqlRecommendRulesResponseResult::getExecCount() const
{
    return execCount_;
}

void ListSqlRecommendRulesResponseResult::setExecCount(int32_t value)
{
    execCount_ = value;
    execCountIsSet_ = true;
}

bool ListSqlRecommendRulesResponseResult::execCountIsSet() const
{
    return execCountIsSet_;
}

void ListSqlRecommendRulesResponseResult::unsetexecCount()
{
    execCountIsSet_ = false;
}

}
}
}
}
}


