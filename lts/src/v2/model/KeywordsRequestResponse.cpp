

#include "huaweicloud/lts/v2/model/KeywordsRequestResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




KeywordsRequestResponse::KeywordsRequestResponse()
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
}

KeywordsRequestResponse::~KeywordsRequestResponse() = default;

void KeywordsRequestResponse::validate()
{
}

web::json::value KeywordsRequestResponse::toJson() const
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

    return val;
}
bool KeywordsRequestResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string KeywordsRequestResponse::getLogStreamId() const
{
    return logStreamId_;
}

void KeywordsRequestResponse::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool KeywordsRequestResponse::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void KeywordsRequestResponse::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string KeywordsRequestResponse::getLogStreamName() const
{
    return logStreamName_;
}

void KeywordsRequestResponse::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool KeywordsRequestResponse::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void KeywordsRequestResponse::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

std::string KeywordsRequestResponse::getLogGroupId() const
{
    return logGroupId_;
}

void KeywordsRequestResponse::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool KeywordsRequestResponse::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void KeywordsRequestResponse::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string KeywordsRequestResponse::getLogGroupName() const
{
    return logGroupName_;
}

void KeywordsRequestResponse::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool KeywordsRequestResponse::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void KeywordsRequestResponse::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string KeywordsRequestResponse::getKeywords() const
{
    return keywords_;
}

void KeywordsRequestResponse::setKeywords(const std::string& value)
{
    keywords_ = value;
    keywordsIsSet_ = true;
}

bool KeywordsRequestResponse::keywordsIsSet() const
{
    return keywordsIsSet_;
}

void KeywordsRequestResponse::unsetkeywords()
{
    keywordsIsSet_ = false;
}

std::string KeywordsRequestResponse::getCondition() const
{
    return condition_;
}

void KeywordsRequestResponse::setCondition(const std::string& value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool KeywordsRequestResponse::conditionIsSet() const
{
    return conditionIsSet_;
}

void KeywordsRequestResponse::unsetcondition()
{
    conditionIsSet_ = false;
}

int32_t KeywordsRequestResponse::getNumber() const
{
    return number_;
}

void KeywordsRequestResponse::setNumber(int32_t value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool KeywordsRequestResponse::numberIsSet() const
{
    return numberIsSet_;
}

void KeywordsRequestResponse::unsetnumber()
{
    numberIsSet_ = false;
}

int32_t KeywordsRequestResponse::getSearchTimeRange() const
{
    return searchTimeRange_;
}

void KeywordsRequestResponse::setSearchTimeRange(int32_t value)
{
    searchTimeRange_ = value;
    searchTimeRangeIsSet_ = true;
}

bool KeywordsRequestResponse::searchTimeRangeIsSet() const
{
    return searchTimeRangeIsSet_;
}

void KeywordsRequestResponse::unsetsearchTimeRange()
{
    searchTimeRangeIsSet_ = false;
}

std::string KeywordsRequestResponse::getSearchTimeRangeUnit() const
{
    return searchTimeRangeUnit_;
}

void KeywordsRequestResponse::setSearchTimeRangeUnit(const std::string& value)
{
    searchTimeRangeUnit_ = value;
    searchTimeRangeUnitIsSet_ = true;
}

bool KeywordsRequestResponse::searchTimeRangeUnitIsSet() const
{
    return searchTimeRangeUnitIsSet_;
}

void KeywordsRequestResponse::unsetsearchTimeRangeUnit()
{
    searchTimeRangeUnitIsSet_ = false;
}

CustomDate KeywordsRequestResponse::getCustomDate() const
{
    return customDate_;
}

void KeywordsRequestResponse::setCustomDate(const CustomDate& value)
{
    customDate_ = value;
    customDateIsSet_ = true;
}

bool KeywordsRequestResponse::customDateIsSet() const
{
    return customDateIsSet_;
}

void KeywordsRequestResponse::unsetcustomDate()
{
    customDateIsSet_ = false;
}

bool KeywordsRequestResponse::isIsTimeRangeRelative() const
{
    return isTimeRangeRelative_;
}

void KeywordsRequestResponse::setIsTimeRangeRelative(bool value)
{
    isTimeRangeRelative_ = value;
    isTimeRangeRelativeIsSet_ = true;
}

bool KeywordsRequestResponse::isTimeRangeRelativeIsSet() const
{
    return isTimeRangeRelativeIsSet_;
}

void KeywordsRequestResponse::unsetisTimeRangeRelative()
{
    isTimeRangeRelativeIsSet_ = false;
}

}
}
}
}
}


