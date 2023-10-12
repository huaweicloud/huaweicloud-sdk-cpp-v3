

#include "huaweicloud/lts/v2/model/MemberGroupandStream_log_streams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




MemberGroupandStream_log_streams::MemberGroupandStream_log_streams()
{
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
}

MemberGroupandStream_log_streams::~MemberGroupandStream_log_streams() = default;

void MemberGroupandStream_log_streams::validate()
{
}

web::json::value MemberGroupandStream_log_streams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }

    return val;
}
bool MemberGroupandStream_log_streams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string MemberGroupandStream_log_streams::getLogStreamName() const
{
    return logStreamName_;
}

void MemberGroupandStream_log_streams::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool MemberGroupandStream_log_streams::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void MemberGroupandStream_log_streams::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

std::string MemberGroupandStream_log_streams::getLogStreamId() const
{
    return logStreamId_;
}

void MemberGroupandStream_log_streams::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool MemberGroupandStream_log_streams::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void MemberGroupandStream_log_streams::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

}
}
}
}
}


