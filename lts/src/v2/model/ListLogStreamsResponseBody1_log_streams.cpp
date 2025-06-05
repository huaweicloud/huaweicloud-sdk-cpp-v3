

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
    logStreamNameAlias_ = "";
    logStreamNameAliasIsSet_ = false;
    tagIsSet_ = false;
    filterCount_ = 0;
    filterCountIsSet_ = false;
    whetherLogStorage_ = false;
    whetherLogStorageIsSet_ = false;
    hotColdSeparation_ = false;
    hotColdSeparationIsSet_ = false;
    authWebTracking_ = false;
    authWebTrackingIsSet_ = false;
    ttlInDays_ = 0;
    ttlInDaysIsSet_ = false;
    hotStorageDays_ = 0;
    hotStorageDaysIsSet_ = false;
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
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
    if(logStreamNameAliasIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name_alias")] = ModelBase::toJson(logStreamNameAlias_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(filterCountIsSet_) {
        val[utility::conversions::to_string_t("filter_count")] = ModelBase::toJson(filterCount_);
    }
    if(whetherLogStorageIsSet_) {
        val[utility::conversions::to_string_t("whether_log_storage")] = ModelBase::toJson(whetherLogStorage_);
    }
    if(hotColdSeparationIsSet_) {
        val[utility::conversions::to_string_t("hot_cold_separation")] = ModelBase::toJson(hotColdSeparation_);
    }
    if(authWebTrackingIsSet_) {
        val[utility::conversions::to_string_t("auth_web_tracking")] = ModelBase::toJson(authWebTracking_);
    }
    if(ttlInDaysIsSet_) {
        val[utility::conversions::to_string_t("ttl_in_days")] = ModelBase::toJson(ttlInDays_);
    }
    if(hotStorageDaysIsSet_) {
        val[utility::conversions::to_string_t("hot_storage_days")] = ModelBase::toJson(hotStorageDays_);
    }
    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
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
    if(val.has_field(utility::conversions::to_string_t("log_stream_name_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamNameAlias(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("whether_log_storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("whether_log_storage"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWhetherLogStorage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hot_cold_separation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hot_cold_separation"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotColdSeparation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_web_tracking"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_web_tracking"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthWebTracking(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ttl_in_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl_in_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtlInDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hot_storage_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hot_storage_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotStorageDays(refVal);
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

std::string ListLogStreamsResponseBody1_log_streams::getLogStreamNameAlias() const
{
    return logStreamNameAlias_;
}

void ListLogStreamsResponseBody1_log_streams::setLogStreamNameAlias(const std::string& value)
{
    logStreamNameAlias_ = value;
    logStreamNameAliasIsSet_ = true;
}

bool ListLogStreamsResponseBody1_log_streams::logStreamNameAliasIsSet() const
{
    return logStreamNameAliasIsSet_;
}

void ListLogStreamsResponseBody1_log_streams::unsetlogStreamNameAlias()
{
    logStreamNameAliasIsSet_ = false;
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

bool ListLogStreamsResponseBody1_log_streams::isWhetherLogStorage() const
{
    return whetherLogStorage_;
}

void ListLogStreamsResponseBody1_log_streams::setWhetherLogStorage(bool value)
{
    whetherLogStorage_ = value;
    whetherLogStorageIsSet_ = true;
}

bool ListLogStreamsResponseBody1_log_streams::whetherLogStorageIsSet() const
{
    return whetherLogStorageIsSet_;
}

void ListLogStreamsResponseBody1_log_streams::unsetwhetherLogStorage()
{
    whetherLogStorageIsSet_ = false;
}

bool ListLogStreamsResponseBody1_log_streams::isHotColdSeparation() const
{
    return hotColdSeparation_;
}

void ListLogStreamsResponseBody1_log_streams::setHotColdSeparation(bool value)
{
    hotColdSeparation_ = value;
    hotColdSeparationIsSet_ = true;
}

bool ListLogStreamsResponseBody1_log_streams::hotColdSeparationIsSet() const
{
    return hotColdSeparationIsSet_;
}

void ListLogStreamsResponseBody1_log_streams::unsethotColdSeparation()
{
    hotColdSeparationIsSet_ = false;
}

bool ListLogStreamsResponseBody1_log_streams::isAuthWebTracking() const
{
    return authWebTracking_;
}

void ListLogStreamsResponseBody1_log_streams::setAuthWebTracking(bool value)
{
    authWebTracking_ = value;
    authWebTrackingIsSet_ = true;
}

bool ListLogStreamsResponseBody1_log_streams::authWebTrackingIsSet() const
{
    return authWebTrackingIsSet_;
}

void ListLogStreamsResponseBody1_log_streams::unsetauthWebTracking()
{
    authWebTrackingIsSet_ = false;
}

int32_t ListLogStreamsResponseBody1_log_streams::getTtlInDays() const
{
    return ttlInDays_;
}

void ListLogStreamsResponseBody1_log_streams::setTtlInDays(int32_t value)
{
    ttlInDays_ = value;
    ttlInDaysIsSet_ = true;
}

bool ListLogStreamsResponseBody1_log_streams::ttlInDaysIsSet() const
{
    return ttlInDaysIsSet_;
}

void ListLogStreamsResponseBody1_log_streams::unsetttlInDays()
{
    ttlInDaysIsSet_ = false;
}

int32_t ListLogStreamsResponseBody1_log_streams::getHotStorageDays() const
{
    return hotStorageDays_;
}

void ListLogStreamsResponseBody1_log_streams::setHotStorageDays(int32_t value)
{
    hotStorageDays_ = value;
    hotStorageDaysIsSet_ = true;
}

bool ListLogStreamsResponseBody1_log_streams::hotStorageDaysIsSet() const
{
    return hotStorageDaysIsSet_;
}

void ListLogStreamsResponseBody1_log_streams::unsethotStorageDays()
{
    hotStorageDaysIsSet_ = false;
}

std::string ListLogStreamsResponseBody1_log_streams::getLogGroupId() const
{
    return logGroupId_;
}

void ListLogStreamsResponseBody1_log_streams::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool ListLogStreamsResponseBody1_log_streams::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void ListLogStreamsResponseBody1_log_streams::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

}
}
}
}
}


