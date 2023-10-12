

#include "huaweicloud/lts/v2/model/ListLogStreamsResponseBody1_log_streams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListLogStreamsResponseBody1_log_streams::ListLogStreamsResponseBody1_log_streams()
{
    creationTime_ = 0L;
    creationTimeIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
    tagIsSet_ = false;
    filterCount_ = 0;
    filterCountIsSet_ = false;
}

ListLogStreamsResponseBody1_log_streams::~ListLogStreamsResponseBody1_log_streams() = default;

void ListLogStreamsResponseBody1_log_streams::validate()
{
}

web::json::value ListLogStreamsResponseBody1_log_streams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(creationTimeIsSet_) {
        val[utility::conversions::to_string_t("creation_time")] = ModelBase::toJson(creationTime_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(filterCountIsSet_) {
        val[utility::conversions::to_string_t("filter_count")] = ModelBase::toJson(filterCount_);
    }

    return val;
}
bool ListLogStreamsResponseBody1_log_streams::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
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
    return ok;
}


int64_t ListLogStreamsResponseBody1_log_streams::getCreationTime() const
{
    return creationTime_;
}

void ListLogStreamsResponseBody1_log_streams::setCreationTime(int64_t value)
{
    creationTime_ = value;
    creationTimeIsSet_ = true;
}

bool ListLogStreamsResponseBody1_log_streams::creationTimeIsSet() const
{
    return creationTimeIsSet_;
}

void ListLogStreamsResponseBody1_log_streams::unsetcreationTime()
{
    creationTimeIsSet_ = false;
}

std::string ListLogStreamsResponseBody1_log_streams::getLogStreamId() const
{
    return logStreamId_;
}

void ListLogStreamsResponseBody1_log_streams::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool ListLogStreamsResponseBody1_log_streams::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void ListLogStreamsResponseBody1_log_streams::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string ListLogStreamsResponseBody1_log_streams::getLogStreamName() const
{
    return logStreamName_;
}

void ListLogStreamsResponseBody1_log_streams::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool ListLogStreamsResponseBody1_log_streams::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void ListLogStreamsResponseBody1_log_streams::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

std::map<std::string, std::string>& ListLogStreamsResponseBody1_log_streams::getTag()
{
    return tag_;
}

void ListLogStreamsResponseBody1_log_streams::setTag(const std::map<std::string, std::string>& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ListLogStreamsResponseBody1_log_streams::tagIsSet() const
{
    return tagIsSet_;
}

void ListLogStreamsResponseBody1_log_streams::unsettag()
{
    tagIsSet_ = false;
}

int32_t ListLogStreamsResponseBody1_log_streams::getFilterCount() const
{
    return filterCount_;
}

void ListLogStreamsResponseBody1_log_streams::setFilterCount(int32_t value)
{
    filterCount_ = value;
    filterCountIsSet_ = true;
}

bool ListLogStreamsResponseBody1_log_streams::filterCountIsSet() const
{
    return filterCountIsSet_;
}

void ListLogStreamsResponseBody1_log_streams::unsetfilterCount()
{
    filterCountIsSet_ = false;
}

}
}
}
}
}


