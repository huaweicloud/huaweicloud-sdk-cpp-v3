

#include "huaweicloud/dbss/v1/model/CountSqlStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountSqlStatisticsResponse::CountSqlStatisticsResponse()
{
    generateTime_ = "";
    generateTimeIsSet_ = false;
    sqlStatisticsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CountSqlStatisticsResponse::~CountSqlStatisticsResponse() = default;

void CountSqlStatisticsResponse::validate()
{
}

web::json::value CountSqlStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(generateTimeIsSet_) {
        val[utility::conversions::to_string_t("generate_time")] = ModelBase::toJson(generateTime_);
    }
    if(sqlStatisticsIsSet_) {
        val[utility::conversions::to_string_t("sql_statistics")] = ModelBase::toJson(sqlStatistics_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool CountSqlStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("generate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("generate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGenerateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<SQLStatisticsBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlStatistics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string CountSqlStatisticsResponse::getGenerateTime() const
{
    return generateTime_;
}

void CountSqlStatisticsResponse::setGenerateTime(const std::string& value)
{
    generateTime_ = value;
    generateTimeIsSet_ = true;
}

bool CountSqlStatisticsResponse::generateTimeIsSet() const
{
    return generateTimeIsSet_;
}

void CountSqlStatisticsResponse::unsetgenerateTime()
{
    generateTimeIsSet_ = false;
}

std::vector<SQLStatisticsBean>& CountSqlStatisticsResponse::getSqlStatistics()
{
    return sqlStatistics_;
}

void CountSqlStatisticsResponse::setSqlStatistics(const std::vector<SQLStatisticsBean>& value)
{
    sqlStatistics_ = value;
    sqlStatisticsIsSet_ = true;
}

bool CountSqlStatisticsResponse::sqlStatisticsIsSet() const
{
    return sqlStatisticsIsSet_;
}

void CountSqlStatisticsResponse::unsetsqlStatistics()
{
    sqlStatisticsIsSet_ = false;
}

std::string CountSqlStatisticsResponse::getStatus() const
{
    return status_;
}

void CountSqlStatisticsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CountSqlStatisticsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CountSqlStatisticsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


