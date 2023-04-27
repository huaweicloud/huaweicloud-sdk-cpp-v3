

#include "huaweicloud/lts/v2/model/LogStream.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




LogStream::LogStream()
{
    creationTime_ = 0L;
    creationTimeIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    filterCount_ = 0;
    filterCountIsSet_ = false;
    tagIsSet_ = false;
    isFavorite_ = false;
    isFavoriteIsSet_ = false;
}

LogStream::~LogStream() = default;

void LogStream::validate()
{
}

web::json::value LogStream::toJson() const
{
    web::json::value val = web::json::value::object();

    if(creationTimeIsSet_) {
        val[utility::conversions::to_string_t("creation_time")] = ModelBase::toJson(creationTime_);
    }
    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(filterCountIsSet_) {
        val[utility::conversions::to_string_t("filter_count")] = ModelBase::toJson(filterCount_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(isFavoriteIsSet_) {
        val[utility::conversions::to_string_t("is_favorite")] = ModelBase::toJson(isFavorite_);
    }

    return val;
}

bool LogStream::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("creation_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("log_stream_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_favorite"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_favorite"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFavorite(refVal);
        }
    }
    return ok;
}


int64_t LogStream::getCreationTime() const
{
    return creationTime_;
}

void LogStream::setCreationTime(int64_t value)
{
    creationTime_ = value;
    creationTimeIsSet_ = true;
}

bool LogStream::creationTimeIsSet() const
{
    return creationTimeIsSet_;
}

void LogStream::unsetcreationTime()
{
    creationTimeIsSet_ = false;
}

std::string LogStream::getLogStreamName() const
{
    return logStreamName_;
}

void LogStream::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool LogStream::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void LogStream::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

std::string LogStream::getLogStreamId() const
{
    return logStreamId_;
}

void LogStream::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool LogStream::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void LogStream::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

int32_t LogStream::getFilterCount() const
{
    return filterCount_;
}

void LogStream::setFilterCount(int32_t value)
{
    filterCount_ = value;
    filterCountIsSet_ = true;
}

bool LogStream::filterCountIsSet() const
{
    return filterCountIsSet_;
}

void LogStream::unsetfilterCount()
{
    filterCountIsSet_ = false;
}

std::map<std::string, std::string>& LogStream::getTag()
{
    return tag_;
}

void LogStream::setTag(const std::map<std::string, std::string>& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool LogStream::tagIsSet() const
{
    return tagIsSet_;
}

void LogStream::unsettag()
{
    tagIsSet_ = false;
}

bool LogStream::isIsFavorite() const
{
    return isFavorite_;
}

void LogStream::setIsFavorite(bool value)
{
    isFavorite_ = value;
    isFavoriteIsSet_ = true;
}

bool LogStream::isFavoriteIsSet() const
{
    return isFavoriteIsSet_;
}

void LogStream::unsetisFavorite()
{
    isFavoriteIsSet_ = false;
}

}
}
}
}
}


