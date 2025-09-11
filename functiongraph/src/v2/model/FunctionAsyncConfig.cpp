

#include "huaweicloud/functiongraph/v2/model/FunctionAsyncConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




FunctionAsyncConfig::FunctionAsyncConfig()
{
    maxAsyncEventAgeInSeconds_ = 0;
    maxAsyncEventAgeInSecondsIsSet_ = false;
    maxAsyncRetryAttempts_ = 0;
    maxAsyncRetryAttemptsIsSet_ = false;
    destinationConfigIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    lastModified_ = "";
    lastModifiedIsSet_ = false;
}

FunctionAsyncConfig::~FunctionAsyncConfig() = default;

void FunctionAsyncConfig::validate()
{
}

web::json::value FunctionAsyncConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maxAsyncEventAgeInSecondsIsSet_) {
        val[utility::conversions::to_string_t("max_async_event_age_in_seconds")] = ModelBase::toJson(maxAsyncEventAgeInSeconds_);
    }
    if(maxAsyncRetryAttemptsIsSet_) {
        val[utility::conversions::to_string_t("max_async_retry_attempts")] = ModelBase::toJson(maxAsyncRetryAttempts_);
    }
    if(destinationConfigIsSet_) {
        val[utility::conversions::to_string_t("destination_config")] = ModelBase::toJson(destinationConfig_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }

    return val;
}
bool FunctionAsyncConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("max_async_event_age_in_seconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_async_event_age_in_seconds"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxAsyncEventAgeInSeconds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_async_retry_attempts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_async_retry_attempts"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxAsyncRetryAttempts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_config"));
        if(!fieldValue.is_null())
        {
            FuncAsyncDestinationConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
        }
    }
    return ok;
}


int32_t FunctionAsyncConfig::getMaxAsyncEventAgeInSeconds() const
{
    return maxAsyncEventAgeInSeconds_;
}

void FunctionAsyncConfig::setMaxAsyncEventAgeInSeconds(int32_t value)
{
    maxAsyncEventAgeInSeconds_ = value;
    maxAsyncEventAgeInSecondsIsSet_ = true;
}

bool FunctionAsyncConfig::maxAsyncEventAgeInSecondsIsSet() const
{
    return maxAsyncEventAgeInSecondsIsSet_;
}

void FunctionAsyncConfig::unsetmaxAsyncEventAgeInSeconds()
{
    maxAsyncEventAgeInSecondsIsSet_ = false;
}

int32_t FunctionAsyncConfig::getMaxAsyncRetryAttempts() const
{
    return maxAsyncRetryAttempts_;
}

void FunctionAsyncConfig::setMaxAsyncRetryAttempts(int32_t value)
{
    maxAsyncRetryAttempts_ = value;
    maxAsyncRetryAttemptsIsSet_ = true;
}

bool FunctionAsyncConfig::maxAsyncRetryAttemptsIsSet() const
{
    return maxAsyncRetryAttemptsIsSet_;
}

void FunctionAsyncConfig::unsetmaxAsyncRetryAttempts()
{
    maxAsyncRetryAttemptsIsSet_ = false;
}

FuncAsyncDestinationConfig FunctionAsyncConfig::getDestinationConfig() const
{
    return destinationConfig_;
}

void FunctionAsyncConfig::setDestinationConfig(const FuncAsyncDestinationConfig& value)
{
    destinationConfig_ = value;
    destinationConfigIsSet_ = true;
}

bool FunctionAsyncConfig::destinationConfigIsSet() const
{
    return destinationConfigIsSet_;
}

void FunctionAsyncConfig::unsetdestinationConfig()
{
    destinationConfigIsSet_ = false;
}

std::string FunctionAsyncConfig::getCreatedTime() const
{
    return createdTime_;
}

void FunctionAsyncConfig::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool FunctionAsyncConfig::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void FunctionAsyncConfig::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string FunctionAsyncConfig::getLastModified() const
{
    return lastModified_;
}

void FunctionAsyncConfig::setLastModified(const std::string& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool FunctionAsyncConfig::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void FunctionAsyncConfig::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

}
}
}
}
}


