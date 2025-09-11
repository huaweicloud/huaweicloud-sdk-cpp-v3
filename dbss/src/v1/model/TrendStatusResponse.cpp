

#include "huaweicloud/dbss/v1/model/TrendStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




TrendStatusResponse::TrendStatusResponse()
{
    dbId_ = "";
    dbIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    generateTime_ = "";
    generateTimeIsSet_ = false;
    statisticsType_ = "";
    statisticsTypeIsSet_ = false;
}

TrendStatusResponse::~TrendStatusResponse() = default;

void TrendStatusResponse::validate()
{
}

web::json::value TrendStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbIdIsSet_) {
        val[utility::conversions::to_string_t("db_id")] = ModelBase::toJson(dbId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(generateTimeIsSet_) {
        val[utility::conversions::to_string_t("generate_time")] = ModelBase::toJson(generateTime_);
    }
    if(statisticsTypeIsSet_) {
        val[utility::conversions::to_string_t("statistics_type")] = ModelBase::toJson(statisticsType_);
    }

    return val;
}
bool TrendStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("generate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("generate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGenerateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statistics_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistics_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatisticsType(refVal);
        }
    }
    return ok;
}


std::string TrendStatusResponse::getDbId() const
{
    return dbId_;
}

void TrendStatusResponse::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool TrendStatusResponse::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void TrendStatusResponse::unsetdbId()
{
    dbIdIsSet_ = false;
}

std::string TrendStatusResponse::getDbName() const
{
    return dbName_;
}

void TrendStatusResponse::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool TrendStatusResponse::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void TrendStatusResponse::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string TrendStatusResponse::getGenerateTime() const
{
    return generateTime_;
}

void TrendStatusResponse::setGenerateTime(const std::string& value)
{
    generateTime_ = value;
    generateTimeIsSet_ = true;
}

bool TrendStatusResponse::generateTimeIsSet() const
{
    return generateTimeIsSet_;
}

void TrendStatusResponse::unsetgenerateTime()
{
    generateTimeIsSet_ = false;
}

std::string TrendStatusResponse::getStatisticsType() const
{
    return statisticsType_;
}

void TrendStatusResponse::setStatisticsType(const std::string& value)
{
    statisticsType_ = value;
    statisticsTypeIsSet_ = true;
}

bool TrendStatusResponse::statisticsTypeIsSet() const
{
    return statisticsTypeIsSet_;
}

void TrendStatusResponse::unsetstatisticsType()
{
    statisticsTypeIsSet_ = false;
}

}
}
}
}
}


