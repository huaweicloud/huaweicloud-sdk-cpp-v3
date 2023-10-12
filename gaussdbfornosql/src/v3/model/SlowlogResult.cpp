

#include "huaweicloud/gaussdbfornosql/v3/model/SlowlogResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SlowlogResult::SlowlogResult()
{
    time_ = "";
    timeIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
    querySample_ = "";
    querySampleIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
}

SlowlogResult::~SlowlogResult() = default;

void SlowlogResult::validate()
{
}

web::json::value SlowlogResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(querySampleIsSet_) {
        val[utility::conversions::to_string_t("query_sample")] = ModelBase::toJson(querySample_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }

    return val;
}
bool SlowlogResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("query_sample"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_sample"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuerySample(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    return ok;
}


std::string SlowlogResult::getTime() const
{
    return time_;
}

void SlowlogResult::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool SlowlogResult::timeIsSet() const
{
    return timeIsSet_;
}

void SlowlogResult::unsettime()
{
    timeIsSet_ = false;
}

std::string SlowlogResult::getDatabase() const
{
    return database_;
}

void SlowlogResult::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool SlowlogResult::databaseIsSet() const
{
    return databaseIsSet_;
}

void SlowlogResult::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string SlowlogResult::getQuerySample() const
{
    return querySample_;
}

void SlowlogResult::setQuerySample(const std::string& value)
{
    querySample_ = value;
    querySampleIsSet_ = true;
}

bool SlowlogResult::querySampleIsSet() const
{
    return querySampleIsSet_;
}

void SlowlogResult::unsetquerySample()
{
    querySampleIsSet_ = false;
}

std::string SlowlogResult::getType() const
{
    return type_;
}

void SlowlogResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SlowlogResult::typeIsSet() const
{
    return typeIsSet_;
}

void SlowlogResult::unsettype()
{
    typeIsSet_ = false;
}

std::string SlowlogResult::getStartTime() const
{
    return startTime_;
}

void SlowlogResult::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SlowlogResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SlowlogResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

}
}
}
}
}


