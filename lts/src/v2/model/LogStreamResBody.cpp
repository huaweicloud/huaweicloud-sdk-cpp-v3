

#include "huaweicloud/lts/v2/model/LogStreamResBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




LogStreamResBody::LogStreamResBody()
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
    isFavorite_ = false;
    isFavoriteIsSet_ = false;
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
}

LogStreamResBody::~LogStreamResBody() = default;

void LogStreamResBody::validate()
{
}

web::json::value LogStreamResBody::toJson() const
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
    if(isFavoriteIsSet_) {
        val[utility::conversions::to_string_t("is_favorite")] = ModelBase::toJson(isFavorite_);
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

    return val;
}
bool LogStreamResBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_favorite"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_favorite"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFavorite(refVal);
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
    return ok;
}


int64_t LogStreamResBody::getCreationTime() const
{
    return creationTime_;
}

void LogStreamResBody::setCreationTime(int64_t value)
{
    creationTime_ = value;
    creationTimeIsSet_ = true;
}

bool LogStreamResBody::creationTimeIsSet() const
{
    return creationTimeIsSet_;
}

void LogStreamResBody::unsetcreationTime()
{
    creationTimeIsSet_ = false;
}

std::string LogStreamResBody::getLogStreamId() const
{
    return logStreamId_;
}

void LogStreamResBody::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool LogStreamResBody::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void LogStreamResBody::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string LogStreamResBody::getLogStreamName() const
{
    return logStreamName_;
}

void LogStreamResBody::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool LogStreamResBody::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void LogStreamResBody::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

std::string LogStreamResBody::getLogStreamNameAlias() const
{
    return logStreamNameAlias_;
}

void LogStreamResBody::setLogStreamNameAlias(const std::string& value)
{
    logStreamNameAlias_ = value;
    logStreamNameAliasIsSet_ = true;
}

bool LogStreamResBody::logStreamNameAliasIsSet() const
{
    return logStreamNameAliasIsSet_;
}

void LogStreamResBody::unsetlogStreamNameAlias()
{
    logStreamNameAliasIsSet_ = false;
}

std::map<std::string, std::string>& LogStreamResBody::getTag()
{
    return tag_;
}

void LogStreamResBody::setTag(const std::map<std::string, std::string>& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool LogStreamResBody::tagIsSet() const
{
    return tagIsSet_;
}

void LogStreamResBody::unsettag()
{
    tagIsSet_ = false;
}

int32_t LogStreamResBody::getFilterCount() const
{
    return filterCount_;
}

void LogStreamResBody::setFilterCount(int32_t value)
{
    filterCount_ = value;
    filterCountIsSet_ = true;
}

bool LogStreamResBody::filterCountIsSet() const
{
    return filterCountIsSet_;
}

void LogStreamResBody::unsetfilterCount()
{
    filterCountIsSet_ = false;
}

bool LogStreamResBody::isIsFavorite() const
{
    return isFavorite_;
}

void LogStreamResBody::setIsFavorite(bool value)
{
    isFavorite_ = value;
    isFavoriteIsSet_ = true;
}

bool LogStreamResBody::isFavoriteIsSet() const
{
    return isFavoriteIsSet_;
}

void LogStreamResBody::unsetisFavorite()
{
    isFavoriteIsSet_ = false;
}

bool LogStreamResBody::isWhetherLogStorage() const
{
    return whetherLogStorage_;
}

void LogStreamResBody::setWhetherLogStorage(bool value)
{
    whetherLogStorage_ = value;
    whetherLogStorageIsSet_ = true;
}

bool LogStreamResBody::whetherLogStorageIsSet() const
{
    return whetherLogStorageIsSet_;
}

void LogStreamResBody::unsetwhetherLogStorage()
{
    whetherLogStorageIsSet_ = false;
}

bool LogStreamResBody::isHotColdSeparation() const
{
    return hotColdSeparation_;
}

void LogStreamResBody::setHotColdSeparation(bool value)
{
    hotColdSeparation_ = value;
    hotColdSeparationIsSet_ = true;
}

bool LogStreamResBody::hotColdSeparationIsSet() const
{
    return hotColdSeparationIsSet_;
}

void LogStreamResBody::unsethotColdSeparation()
{
    hotColdSeparationIsSet_ = false;
}

bool LogStreamResBody::isAuthWebTracking() const
{
    return authWebTracking_;
}

void LogStreamResBody::setAuthWebTracking(bool value)
{
    authWebTracking_ = value;
    authWebTrackingIsSet_ = true;
}

bool LogStreamResBody::authWebTrackingIsSet() const
{
    return authWebTrackingIsSet_;
}

void LogStreamResBody::unsetauthWebTracking()
{
    authWebTrackingIsSet_ = false;
}

int32_t LogStreamResBody::getTtlInDays() const
{
    return ttlInDays_;
}

void LogStreamResBody::setTtlInDays(int32_t value)
{
    ttlInDays_ = value;
    ttlInDaysIsSet_ = true;
}

bool LogStreamResBody::ttlInDaysIsSet() const
{
    return ttlInDaysIsSet_;
}

void LogStreamResBody::unsetttlInDays()
{
    ttlInDaysIsSet_ = false;
}

int32_t LogStreamResBody::getHotStorageDays() const
{
    return hotStorageDays_;
}

void LogStreamResBody::setHotStorageDays(int32_t value)
{
    hotStorageDays_ = value;
    hotStorageDaysIsSet_ = true;
}

bool LogStreamResBody::hotStorageDaysIsSet() const
{
    return hotStorageDaysIsSet_;
}

void LogStreamResBody::unsethotStorageDays()
{
    hotStorageDaysIsSet_ = false;
}

}
}
}
}
}


