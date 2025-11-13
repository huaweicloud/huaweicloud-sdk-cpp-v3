

#include "huaweicloud/lts/v2/model/SqlRequestResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




SqlRequestResponse::SqlRequestResponse()
{
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
    customDateIsSet_ = false;
    isTimeRangeRelative_ = false;
    isTimeRangeRelativeIsSet_ = false;
}

SqlRequestResponse::~SqlRequestResponse() = default;

void SqlRequestResponse::validate()
{
}

web::json::value SqlRequestResponse::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(customDateIsSet_) {
        val[utility::conversions::to_string_t("custom_date")] = ModelBase::toJson(customDate_);
    }
    if(isTimeRangeRelativeIsSet_) {
        val[utility::conversions::to_string_t("is_time_range_relative")] = ModelBase::toJson(isTimeRangeRelative_);
    }

    return val;
}
bool SqlRequestResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("custom_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_date"));
        if(!fieldValue.is_null())
        {
            CustomDate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_time_range_relative"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_time_range_relative"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTimeRangeRelative(refVal);
        }
    }
    return ok;
}


std::string SqlRequestResponse::getLogStreamId() const
{
    return logStreamId_;
}

void SqlRequestResponse::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool SqlRequestResponse::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void SqlRequestResponse::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string SqlRequestResponse::getLogStreamName() const
{
    return logStreamName_;
}

void SqlRequestResponse::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool SqlRequestResponse::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void SqlRequestResponse::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

std::string SqlRequestResponse::getLogGroupId() const
{
    return logGroupId_;
}

void SqlRequestResponse::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool SqlRequestResponse::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void SqlRequestResponse::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string SqlRequestResponse::getLogGroupName() const
{
    return logGroupName_;
}

void SqlRequestResponse::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool SqlRequestResponse::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void SqlRequestResponse::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string SqlRequestResponse::getSql() const
{
    return sql_;
}

void SqlRequestResponse::setSql(const std::string& value)
{
    sql_ = value;
    sqlIsSet_ = true;
}

bool SqlRequestResponse::sqlIsSet() const
{
    return sqlIsSet_;
}

void SqlRequestResponse::unsetsql()
{
    sqlIsSet_ = false;
}

std::string SqlRequestResponse::getSqlRequestTitle() const
{
    return sqlRequestTitle_;
}

void SqlRequestResponse::setSqlRequestTitle(const std::string& value)
{
    sqlRequestTitle_ = value;
    sqlRequestTitleIsSet_ = true;
}

bool SqlRequestResponse::sqlRequestTitleIsSet() const
{
    return sqlRequestTitleIsSet_;
}

void SqlRequestResponse::unsetsqlRequestTitle()
{
    sqlRequestTitleIsSet_ = false;
}

int32_t SqlRequestResponse::getSearchTimeRange() const
{
    return searchTimeRange_;
}

void SqlRequestResponse::setSearchTimeRange(int32_t value)
{
    searchTimeRange_ = value;
    searchTimeRangeIsSet_ = true;
}

bool SqlRequestResponse::searchTimeRangeIsSet() const
{
    return searchTimeRangeIsSet_;
}

void SqlRequestResponse::unsetsearchTimeRange()
{
    searchTimeRangeIsSet_ = false;
}

std::string SqlRequestResponse::getSearchTimeRangeUnit() const
{
    return searchTimeRangeUnit_;
}

void SqlRequestResponse::setSearchTimeRangeUnit(const std::string& value)
{
    searchTimeRangeUnit_ = value;
    searchTimeRangeUnitIsSet_ = true;
}

bool SqlRequestResponse::searchTimeRangeUnitIsSet() const
{
    return searchTimeRangeUnitIsSet_;
}

void SqlRequestResponse::unsetsearchTimeRangeUnit()
{
    searchTimeRangeUnitIsSet_ = false;
}

CustomDate SqlRequestResponse::getCustomDate() const
{
    return customDate_;
}

void SqlRequestResponse::setCustomDate(const CustomDate& value)
{
    customDate_ = value;
    customDateIsSet_ = true;
}

bool SqlRequestResponse::customDateIsSet() const
{
    return customDateIsSet_;
}

void SqlRequestResponse::unsetcustomDate()
{
    customDateIsSet_ = false;
}

bool SqlRequestResponse::isIsTimeRangeRelative() const
{
    return isTimeRangeRelative_;
}

void SqlRequestResponse::setIsTimeRangeRelative(bool value)
{
    isTimeRangeRelative_ = value;
    isTimeRangeRelativeIsSet_ = true;
}

bool SqlRequestResponse::isTimeRangeRelativeIsSet() const
{
    return isTimeRangeRelativeIsSet_;
}

void SqlRequestResponse::unsetisTimeRangeRelative()
{
    isTimeRangeRelativeIsSet_ = false;
}

}
}
}
}
}


