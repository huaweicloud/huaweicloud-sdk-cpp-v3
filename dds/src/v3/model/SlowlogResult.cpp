

#include "huaweicloud/dds/v3/model/SlowlogResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SlowlogResult::SlowlogResult()
{
    nodeName_ = "";
    nodeNameIsSet_ = false;
    querySample_ = "";
    querySampleIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    lockTime_ = "";
    lockTimeIsSet_ = false;
    rowsSent_ = "";
    rowsSentIsSet_ = false;
    rowsExamined_ = "";
    rowsExaminedIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
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

    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }
    if(querySampleIsSet_) {
        val[utility::conversions::to_string_t("query_sample")] = ModelBase::toJson(querySample_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(lockTimeIsSet_) {
        val[utility::conversions::to_string_t("lock_time")] = ModelBase::toJson(lockTime_);
    }
    if(rowsSentIsSet_) {
        val[utility::conversions::to_string_t("rows_sent")] = ModelBase::toJson(rowsSent_);
    }
    if(rowsExaminedIsSet_) {
        val[utility::conversions::to_string_t("rows_examined")] = ModelBase::toJson(rowsExamined_);
    }
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }

    return val;
}

bool SlowlogResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rows_sent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rows_sent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRowsSent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rows_examined"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rows_examined"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRowsExamined(refVal);
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

std::string SlowlogResult::getNodeName() const
{
    return nodeName_;
}

void SlowlogResult::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool SlowlogResult::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void SlowlogResult::unsetnodeName()
{
    nodeNameIsSet_ = false;
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

std::string SlowlogResult::getLockTime() const
{
    return lockTime_;
}

void SlowlogResult::setLockTime(const std::string& value)
{
    lockTime_ = value;
    lockTimeIsSet_ = true;
}

bool SlowlogResult::lockTimeIsSet() const
{
    return lockTimeIsSet_;
}

void SlowlogResult::unsetlockTime()
{
    lockTimeIsSet_ = false;
}

std::string SlowlogResult::getRowsSent() const
{
    return rowsSent_;
}

void SlowlogResult::setRowsSent(const std::string& value)
{
    rowsSent_ = value;
    rowsSentIsSet_ = true;
}

bool SlowlogResult::rowsSentIsSet() const
{
    return rowsSentIsSet_;
}

void SlowlogResult::unsetrowsSent()
{
    rowsSentIsSet_ = false;
}

std::string SlowlogResult::getRowsExamined() const
{
    return rowsExamined_;
}

void SlowlogResult::setRowsExamined(const std::string& value)
{
    rowsExamined_ = value;
    rowsExaminedIsSet_ = true;
}

bool SlowlogResult::rowsExaminedIsSet() const
{
    return rowsExaminedIsSet_;
}

void SlowlogResult::unsetrowsExamined()
{
    rowsExaminedIsSet_ = false;
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


