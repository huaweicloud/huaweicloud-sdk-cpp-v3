

#include "huaweicloud/rgc/v1/model/LoggingConfiguration.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




LoggingConfiguration::LoggingConfiguration()
{
    loggingBucketName_ = "";
    loggingBucketNameIsSet_ = false;
    accessLoggingBucketIsSet_ = false;
    loggingBucketIsSet_ = false;
}

LoggingConfiguration::~LoggingConfiguration() = default;

void LoggingConfiguration::validate()
{
}

web::json::value LoggingConfiguration::toJson() const
{
    web::json::value val = web::json::value::object();

    if(loggingBucketNameIsSet_) {
        val[utility::conversions::to_string_t("logging_bucket_name")] = ModelBase::toJson(loggingBucketName_);
    }
    if(accessLoggingBucketIsSet_) {
        val[utility::conversions::to_string_t("access_logging_bucket")] = ModelBase::toJson(accessLoggingBucket_);
    }
    if(loggingBucketIsSet_) {
        val[utility::conversions::to_string_t("logging_bucket")] = ModelBase::toJson(loggingBucket_);
    }

    return val;
}
bool LoggingConfiguration::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("logging_bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logging_bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLoggingBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_logging_bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_logging_bucket"));
        if(!fieldValue.is_null())
        {
            AccessLoggingBucketBaseline refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessLoggingBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logging_bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logging_bucket"));
        if(!fieldValue.is_null())
        {
            LoggingBucketBaseline refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLoggingBucket(refVal);
        }
    }
    return ok;
}


std::string LoggingConfiguration::getLoggingBucketName() const
{
    return loggingBucketName_;
}

void LoggingConfiguration::setLoggingBucketName(const std::string& value)
{
    loggingBucketName_ = value;
    loggingBucketNameIsSet_ = true;
}

bool LoggingConfiguration::loggingBucketNameIsSet() const
{
    return loggingBucketNameIsSet_;
}

void LoggingConfiguration::unsetloggingBucketName()
{
    loggingBucketNameIsSet_ = false;
}

AccessLoggingBucketBaseline LoggingConfiguration::getAccessLoggingBucket() const
{
    return accessLoggingBucket_;
}

void LoggingConfiguration::setAccessLoggingBucket(const AccessLoggingBucketBaseline& value)
{
    accessLoggingBucket_ = value;
    accessLoggingBucketIsSet_ = true;
}

bool LoggingConfiguration::accessLoggingBucketIsSet() const
{
    return accessLoggingBucketIsSet_;
}

void LoggingConfiguration::unsetaccessLoggingBucket()
{
    accessLoggingBucketIsSet_ = false;
}

LoggingBucketBaseline LoggingConfiguration::getLoggingBucket() const
{
    return loggingBucket_;
}

void LoggingConfiguration::setLoggingBucket(const LoggingBucketBaseline& value)
{
    loggingBucket_ = value;
    loggingBucketIsSet_ = true;
}

bool LoggingConfiguration::loggingBucketIsSet() const
{
    return loggingBucketIsSet_;
}

void LoggingConfiguration::unsetloggingBucket()
{
    loggingBucketIsSet_ = false;
}

}
}
}
}
}


