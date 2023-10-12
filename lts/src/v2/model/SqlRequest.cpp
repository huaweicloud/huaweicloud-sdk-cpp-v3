

#include "huaweicloud/lts/v2/model/SqlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




SqlRequest::SqlRequest()
{
    isTimeRangeRelative_ = false;
    isTimeRangeRelativeIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    sql_ = "";
    sqlIsSet_ = false;
    sqlRequestTitle_ = "";
    sqlRequestTitleIsSet_ = false;
    searchTimeRange_ = 0;
    searchTimeRangeIsSet_ = false;
    searchTimeRangeUnit_ = "";
    searchTimeRangeUnitIsSet_ = false;
}

SqlRequest::~SqlRequest() = default;

void SqlRequest::validate()
{
}

web::json::value SqlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isTimeRangeRelativeIsSet_) {
        val[utility::conversions::to_string_t("is_time_range_relative")] = ModelBase::toJson(isTimeRangeRelative_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(sqlIsSet_) {
        val[utility::conversions::to_string_t("sql")] = ModelBase::toJson(sql_);
    }
    if(sqlRequestTitleIsSet_) {
        val[utility::conversions::to_string_t("sql_request_title")] = ModelBase::toJson(sqlRequestTitle_);
    }
    if(searchTimeRangeIsSet_) {
        val[utility::conversions::to_string_t("search_time_range")] = ModelBase::toJson(searchTimeRange_);
    }
    if(searchTimeRangeUnitIsSet_) {
        val[utility::conversions::to_string_t("search_time_range_unit")] = ModelBase::toJson(searchTimeRangeUnit_);
    }

    return val;
}
bool SqlRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_time_range_relative"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_time_range_relative"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTimeRangeRelative(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSql(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_request_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_request_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlRequestTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_time_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_time_range"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchTimeRange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_time_range_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_time_range_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchTimeRangeUnit(refVal);
        }
    }
    return ok;
}


bool SqlRequest::isIsTimeRangeRelative() const
{
    return isTimeRangeRelative_;
}

void SqlRequest::setIsTimeRangeRelative(bool value)
{
    isTimeRangeRelative_ = value;
    isTimeRangeRelativeIsSet_ = true;
}

bool SqlRequest::isTimeRangeRelativeIsSet() const
{
    return isTimeRangeRelativeIsSet_;
}

void SqlRequest::unsetisTimeRangeRelative()
{
    isTimeRangeRelativeIsSet_ = false;
}

std::string SqlRequest::getLogStreamId() const
{
    return logStreamId_;
}

void SqlRequest::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool SqlRequest::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void SqlRequest::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string SqlRequest::getLogStreamName() const
{
    return logStreamName_;
}

void SqlRequest::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool SqlRequest::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void SqlRequest::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

std::string SqlRequest::getLogGroupId() const
{
    return logGroupId_;
}

void SqlRequest::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool SqlRequest::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void SqlRequest::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string SqlRequest::getLogGroupName() const
{
    return logGroupName_;
}

void SqlRequest::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool SqlRequest::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void SqlRequest::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string SqlRequest::getSql() const
{
    return sql_;
}

void SqlRequest::setSql(const std::string& value)
{
    sql_ = value;
    sqlIsSet_ = true;
}

bool SqlRequest::sqlIsSet() const
{
    return sqlIsSet_;
}

void SqlRequest::unsetsql()
{
    sqlIsSet_ = false;
}

std::string SqlRequest::getSqlRequestTitle() const
{
    return sqlRequestTitle_;
}

void SqlRequest::setSqlRequestTitle(const std::string& value)
{
    sqlRequestTitle_ = value;
    sqlRequestTitleIsSet_ = true;
}

bool SqlRequest::sqlRequestTitleIsSet() const
{
    return sqlRequestTitleIsSet_;
}

void SqlRequest::unsetsqlRequestTitle()
{
    sqlRequestTitleIsSet_ = false;
}

int32_t SqlRequest::getSearchTimeRange() const
{
    return searchTimeRange_;
}

void SqlRequest::setSearchTimeRange(int32_t value)
{
    searchTimeRange_ = value;
    searchTimeRangeIsSet_ = true;
}

bool SqlRequest::searchTimeRangeIsSet() const
{
    return searchTimeRangeIsSet_;
}

void SqlRequest::unsetsearchTimeRange()
{
    searchTimeRangeIsSet_ = false;
}

std::string SqlRequest::getSearchTimeRangeUnit() const
{
    return searchTimeRangeUnit_;
}

void SqlRequest::setSearchTimeRangeUnit(const std::string& value)
{
    searchTimeRangeUnit_ = value;
    searchTimeRangeUnitIsSet_ = true;
}

bool SqlRequest::searchTimeRangeUnitIsSet() const
{
    return searchTimeRangeUnitIsSet_;
}

void SqlRequest::unsetsearchTimeRangeUnit()
{
    searchTimeRangeUnitIsSet_ = false;
}

}
}
}
}
}


