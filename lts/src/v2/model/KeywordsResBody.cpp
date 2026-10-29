

#include "huaweicloud/lts/v2/model/KeywordsResBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




KeywordsResBody::KeywordsResBody()
{
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    keywords_ = "";
    keywordsIsSet_ = false;
    condition_ = "";
    conditionIsSet_ = false;
    number_ = 0;
    numberIsSet_ = false;
    searchTimeRange_ = 0;
    searchTimeRangeIsSet_ = false;
    searchTimeRangeUnit_ = "";
    searchTimeRangeUnitIsSet_ = false;
    customDateIsSet_ = false;
    isTimeRangeRelative_ = false;
    isTimeRangeRelativeIsSet_ = false;
    conditionsIsSet_ = false;
    logGroupNameAlias_ = "";
    logGroupNameAliasIsSet_ = false;
    logStreamNameAlias_ = "";
    logStreamNameAliasIsSet_ = false;
    epsId_ = "";
    epsIdIsSet_ = false;
    timeRangeIsSet_ = false;
}

KeywordsResBody::~KeywordsResBody() = default;

void KeywordsResBody::validate()
{
}

web::json::value KeywordsResBody::toJson() const
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
    if(keywordsIsSet_) {
        val[utility::conversions::to_string_t("keywords")] = ModelBase::toJson(keywords_);
    }
    if(conditionIsSet_) {
        val[utility::conversions::to_string_t("condition")] = ModelBase::toJson(condition_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
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
    if(conditionsIsSet_) {
        val[utility::conversions::to_string_t("conditions")] = ModelBase::toJson(conditions_);
    }
    if(logGroupNameAliasIsSet_) {
        val[utility::conversions::to_string_t("log_group_name_alias")] = ModelBase::toJson(logGroupNameAlias_);
    }
    if(logStreamNameAliasIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name_alias")] = ModelBase::toJson(logStreamNameAlias_);
    }
    if(epsIdIsSet_) {
        val[utility::conversions::to_string_t("eps_id")] = ModelBase::toJson(epsId_);
    }
    if(timeRangeIsSet_) {
        val[utility::conversions::to_string_t("time_range")] = ModelBase::toJson(timeRange_);
    }

    return val;
}
bool KeywordsResBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("keywords"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keywords"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conditions"));
        if(!fieldValue.is_null())
        {
            std::vector<KeywordsAlarmConditions> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_name_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupNameAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_name_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamNameAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eps_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eps_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_range"));
        if(!fieldValue.is_null())
        {
            TimeRange refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeRange(refVal);
        }
    }
    return ok;
}


std::string KeywordsResBody::getLogStreamId() const
{
    return logStreamId_;
}

void KeywordsResBody::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool KeywordsResBody::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void KeywordsResBody::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string KeywordsResBody::getLogStreamName() const
{
    return logStreamName_;
}

void KeywordsResBody::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool KeywordsResBody::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void KeywordsResBody::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

std::string KeywordsResBody::getLogGroupId() const
{
    return logGroupId_;
}

void KeywordsResBody::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool KeywordsResBody::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void KeywordsResBody::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string KeywordsResBody::getLogGroupName() const
{
    return logGroupName_;
}

void KeywordsResBody::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool KeywordsResBody::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void KeywordsResBody::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string KeywordsResBody::getKeywords() const
{
    return keywords_;
}

void KeywordsResBody::setKeywords(const std::string& value)
{
    keywords_ = value;
    keywordsIsSet_ = true;
}

bool KeywordsResBody::keywordsIsSet() const
{
    return keywordsIsSet_;
}

void KeywordsResBody::unsetkeywords()
{
    keywordsIsSet_ = false;
}

std::string KeywordsResBody::getCondition() const
{
    return condition_;
}

void KeywordsResBody::setCondition(const std::string& value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool KeywordsResBody::conditionIsSet() const
{
    return conditionIsSet_;
}

void KeywordsResBody::unsetcondition()
{
    conditionIsSet_ = false;
}

int32_t KeywordsResBody::getNumber() const
{
    return number_;
}

void KeywordsResBody::setNumber(int32_t value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool KeywordsResBody::numberIsSet() const
{
    return numberIsSet_;
}

void KeywordsResBody::unsetnumber()
{
    numberIsSet_ = false;
}

int32_t KeywordsResBody::getSearchTimeRange() const
{
    return searchTimeRange_;
}

void KeywordsResBody::setSearchTimeRange(int32_t value)
{
    searchTimeRange_ = value;
    searchTimeRangeIsSet_ = true;
}

bool KeywordsResBody::searchTimeRangeIsSet() const
{
    return searchTimeRangeIsSet_;
}

void KeywordsResBody::unsetsearchTimeRange()
{
    searchTimeRangeIsSet_ = false;
}

std::string KeywordsResBody::getSearchTimeRangeUnit() const
{
    return searchTimeRangeUnit_;
}

void KeywordsResBody::setSearchTimeRangeUnit(const std::string& value)
{
    searchTimeRangeUnit_ = value;
    searchTimeRangeUnitIsSet_ = true;
}

bool KeywordsResBody::searchTimeRangeUnitIsSet() const
{
    return searchTimeRangeUnitIsSet_;
}

void KeywordsResBody::unsetsearchTimeRangeUnit()
{
    searchTimeRangeUnitIsSet_ = false;
}

CustomDate KeywordsResBody::getCustomDate() const
{
    return customDate_;
}

void KeywordsResBody::setCustomDate(const CustomDate& value)
{
    customDate_ = value;
    customDateIsSet_ = true;
}

bool KeywordsResBody::customDateIsSet() const
{
    return customDateIsSet_;
}

void KeywordsResBody::unsetcustomDate()
{
    customDateIsSet_ = false;
}

bool KeywordsResBody::isIsTimeRangeRelative() const
{
    return isTimeRangeRelative_;
}

void KeywordsResBody::setIsTimeRangeRelative(bool value)
{
    isTimeRangeRelative_ = value;
    isTimeRangeRelativeIsSet_ = true;
}

bool KeywordsResBody::isTimeRangeRelativeIsSet() const
{
    return isTimeRangeRelativeIsSet_;
}

void KeywordsResBody::unsetisTimeRangeRelative()
{
    isTimeRangeRelativeIsSet_ = false;
}

std::vector<KeywordsAlarmConditions>& KeywordsResBody::getConditions()
{
    return conditions_;
}

void KeywordsResBody::setConditions(const std::vector<KeywordsAlarmConditions>& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool KeywordsResBody::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void KeywordsResBody::unsetconditions()
{
    conditionsIsSet_ = false;
}

std::string KeywordsResBody::getLogGroupNameAlias() const
{
    return logGroupNameAlias_;
}

void KeywordsResBody::setLogGroupNameAlias(const std::string& value)
{
    logGroupNameAlias_ = value;
    logGroupNameAliasIsSet_ = true;
}

bool KeywordsResBody::logGroupNameAliasIsSet() const
{
    return logGroupNameAliasIsSet_;
}

void KeywordsResBody::unsetlogGroupNameAlias()
{
    logGroupNameAliasIsSet_ = false;
}

std::string KeywordsResBody::getLogStreamNameAlias() const
{
    return logStreamNameAlias_;
}

void KeywordsResBody::setLogStreamNameAlias(const std::string& value)
{
    logStreamNameAlias_ = value;
    logStreamNameAliasIsSet_ = true;
}

bool KeywordsResBody::logStreamNameAliasIsSet() const
{
    return logStreamNameAliasIsSet_;
}

void KeywordsResBody::unsetlogStreamNameAlias()
{
    logStreamNameAliasIsSet_ = false;
}

std::string KeywordsResBody::getEpsId() const
{
    return epsId_;
}

void KeywordsResBody::setEpsId(const std::string& value)
{
    epsId_ = value;
    epsIdIsSet_ = true;
}

bool KeywordsResBody::epsIdIsSet() const
{
    return epsIdIsSet_;
}

void KeywordsResBody::unsetepsId()
{
    epsIdIsSet_ = false;
}

TimeRange KeywordsResBody::getTimeRange() const
{
    return timeRange_;
}

void KeywordsResBody::setTimeRange(const TimeRange& value)
{
    timeRange_ = value;
    timeRangeIsSet_ = true;
}

bool KeywordsResBody::timeRangeIsSet() const
{
    return timeRangeIsSet_;
}

void KeywordsResBody::unsettimeRange()
{
    timeRangeIsSet_ = false;
}

}
}
}
}
}


