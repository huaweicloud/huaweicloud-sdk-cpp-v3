

#include "huaweicloud/functiongraph/v2/model/ListFunctionAsyncInvokeConfigResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionAsyncInvokeConfigResult::ListFunctionAsyncInvokeConfigResult()
{
    funcUrn_ = "";
    funcUrnIsSet_ = false;
    maxAsyncEventAgeInSeconds_ = 0;
    maxAsyncEventAgeInSecondsIsSet_ = false;
    maxAsyncRetryAttempts_ = 0;
    maxAsyncRetryAttemptsIsSet_ = false;
    destinationConfigIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    lastModified_ = "";
    lastModifiedIsSet_ = false;
    enableAsyncStatusLog_ = false;
    enableAsyncStatusLogIsSet_ = false;
}

ListFunctionAsyncInvokeConfigResult::~ListFunctionAsyncInvokeConfigResult() = default;

void ListFunctionAsyncInvokeConfigResult::validate()
{
}

web::json::value ListFunctionAsyncInvokeConfigResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(funcUrnIsSet_) {
        val[utility::conversions::to_string_t("func_urn")] = ModelBase::toJson(funcUrn_);
    }
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
    if(enableAsyncStatusLogIsSet_) {
        val[utility::conversions::to_string_t("enable_async_status_log")] = ModelBase::toJson(enableAsyncStatusLog_);
    }

    return val;
}
bool ListFunctionAsyncInvokeConfigResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("func_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncUrn(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("enable_async_status_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_async_status_log"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableAsyncStatusLog(refVal);
        }
    }
    return ok;
}


std::string ListFunctionAsyncInvokeConfigResult::getFuncUrn() const
{
    return funcUrn_;
}

void ListFunctionAsyncInvokeConfigResult::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool ListFunctionAsyncInvokeConfigResult::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void ListFunctionAsyncInvokeConfigResult::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

int32_t ListFunctionAsyncInvokeConfigResult::getMaxAsyncEventAgeInSeconds() const
{
    return maxAsyncEventAgeInSeconds_;
}

void ListFunctionAsyncInvokeConfigResult::setMaxAsyncEventAgeInSeconds(int32_t value)
{
    maxAsyncEventAgeInSeconds_ = value;
    maxAsyncEventAgeInSecondsIsSet_ = true;
}

bool ListFunctionAsyncInvokeConfigResult::maxAsyncEventAgeInSecondsIsSet() const
{
    return maxAsyncEventAgeInSecondsIsSet_;
}

void ListFunctionAsyncInvokeConfigResult::unsetmaxAsyncEventAgeInSeconds()
{
    maxAsyncEventAgeInSecondsIsSet_ = false;
}

int32_t ListFunctionAsyncInvokeConfigResult::getMaxAsyncRetryAttempts() const
{
    return maxAsyncRetryAttempts_;
}

void ListFunctionAsyncInvokeConfigResult::setMaxAsyncRetryAttempts(int32_t value)
{
    maxAsyncRetryAttempts_ = value;
    maxAsyncRetryAttemptsIsSet_ = true;
}

bool ListFunctionAsyncInvokeConfigResult::maxAsyncRetryAttemptsIsSet() const
{
    return maxAsyncRetryAttemptsIsSet_;
}

void ListFunctionAsyncInvokeConfigResult::unsetmaxAsyncRetryAttempts()
{
    maxAsyncRetryAttemptsIsSet_ = false;
}

FuncAsyncDestinationConfig ListFunctionAsyncInvokeConfigResult::getDestinationConfig() const
{
    return destinationConfig_;
}

void ListFunctionAsyncInvokeConfigResult::setDestinationConfig(const FuncAsyncDestinationConfig& value)
{
    destinationConfig_ = value;
    destinationConfigIsSet_ = true;
}

bool ListFunctionAsyncInvokeConfigResult::destinationConfigIsSet() const
{
    return destinationConfigIsSet_;
}

void ListFunctionAsyncInvokeConfigResult::unsetdestinationConfig()
{
    destinationConfigIsSet_ = false;
}

std::string ListFunctionAsyncInvokeConfigResult::getCreatedTime() const
{
    return createdTime_;
}

void ListFunctionAsyncInvokeConfigResult::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool ListFunctionAsyncInvokeConfigResult::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void ListFunctionAsyncInvokeConfigResult::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string ListFunctionAsyncInvokeConfigResult::getLastModified() const
{
    return lastModified_;
}

void ListFunctionAsyncInvokeConfigResult::setLastModified(const std::string& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool ListFunctionAsyncInvokeConfigResult::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void ListFunctionAsyncInvokeConfigResult::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

bool ListFunctionAsyncInvokeConfigResult::isEnableAsyncStatusLog() const
{
    return enableAsyncStatusLog_;
}

void ListFunctionAsyncInvokeConfigResult::setEnableAsyncStatusLog(bool value)
{
    enableAsyncStatusLog_ = value;
    enableAsyncStatusLogIsSet_ = true;
}

bool ListFunctionAsyncInvokeConfigResult::enableAsyncStatusLogIsSet() const
{
    return enableAsyncStatusLogIsSet_;
}

void ListFunctionAsyncInvokeConfigResult::unsetenableAsyncStatusLog()
{
    enableAsyncStatusLogIsSet_ = false;
}

}
}
}
}
}


