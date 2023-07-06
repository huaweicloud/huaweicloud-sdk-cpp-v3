

#include "huaweicloud/lts/v2/model/KeywordsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




KeywordsRequest::KeywordsRequest()
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
}

KeywordsRequest::~KeywordsRequest() = default;

void KeywordsRequest::validate()
{
}

web::json::value KeywordsRequest::toJson() const
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

    return val;
}

bool KeywordsRequest::fromJson(const web::json::value& val)
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
    return ok;
}

std::string KeywordsRequest::getLogStreamId() const
{
    return logStreamId_;
}

void KeywordsRequest::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool KeywordsRequest::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void KeywordsRequest::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string KeywordsRequest::getLogStreamName() const
{
    return logStreamName_;
}

void KeywordsRequest::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool KeywordsRequest::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void KeywordsRequest::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

std::string KeywordsRequest::getLogGroupId() const
{
    return logGroupId_;
}

void KeywordsRequest::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool KeywordsRequest::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void KeywordsRequest::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string KeywordsRequest::getLogGroupName() const
{
    return logGroupName_;
}

void KeywordsRequest::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool KeywordsRequest::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void KeywordsRequest::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string KeywordsRequest::getKeywords() const
{
    return keywords_;
}

void KeywordsRequest::setKeywords(const std::string& value)
{
    keywords_ = value;
    keywordsIsSet_ = true;
}

bool KeywordsRequest::keywordsIsSet() const
{
    return keywordsIsSet_;
}

void KeywordsRequest::unsetkeywords()
{
    keywordsIsSet_ = false;
}

std::string KeywordsRequest::getCondition() const
{
    return condition_;
}

void KeywordsRequest::setCondition(const std::string& value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool KeywordsRequest::conditionIsSet() const
{
    return conditionIsSet_;
}

void KeywordsRequest::unsetcondition()
{
    conditionIsSet_ = false;
}

int32_t KeywordsRequest::getNumber() const
{
    return number_;
}

void KeywordsRequest::setNumber(int32_t value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool KeywordsRequest::numberIsSet() const
{
    return numberIsSet_;
}

void KeywordsRequest::unsetnumber()
{
    numberIsSet_ = false;
}

int32_t KeywordsRequest::getSearchTimeRange() const
{
    return searchTimeRange_;
}

void KeywordsRequest::setSearchTimeRange(int32_t value)
{
    searchTimeRange_ = value;
    searchTimeRangeIsSet_ = true;
}

bool KeywordsRequest::searchTimeRangeIsSet() const
{
    return searchTimeRangeIsSet_;
}

void KeywordsRequest::unsetsearchTimeRange()
{
    searchTimeRangeIsSet_ = false;
}

std::string KeywordsRequest::getSearchTimeRangeUnit() const
{
    return searchTimeRangeUnit_;
}

void KeywordsRequest::setSearchTimeRangeUnit(const std::string& value)
{
    searchTimeRangeUnit_ = value;
    searchTimeRangeUnitIsSet_ = true;
}

bool KeywordsRequest::searchTimeRangeUnitIsSet() const
{
    return searchTimeRangeUnitIsSet_;
}

void KeywordsRequest::unsetsearchTimeRangeUnit()
{
    searchTimeRangeUnitIsSet_ = false;
}

}
}
}
}
}


