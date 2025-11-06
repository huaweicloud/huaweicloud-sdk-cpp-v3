

#include "huaweicloud/lts/v2/model/LogStreams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




LogStreams::LogStreams()
{
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
}

LogStreams::~LogStreams() = default;

void LogStreams::validate()
{
}

web::json::value LogStreams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }
    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }

    return val;
}
bool LogStreams::fromJson(const web::json::value& val)
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
    return ok;
}


std::string LogStreams::getLogStreamId() const
{
    return logStreamId_;
}

void LogStreams::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool LogStreams::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void LogStreams::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

std::string LogStreams::getLogStreamName() const
{
    return logStreamName_;
}

void LogStreams::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool LogStreams::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void LogStreams::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

}
}
}
}
}


