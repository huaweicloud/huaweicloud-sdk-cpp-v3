

#include "huaweicloud/lts/v2/model/AccessConfigBaseLogInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigBaseLogInfo::AccessConfigBaseLogInfo()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
}

AccessConfigBaseLogInfo::~AccessConfigBaseLogInfo() = default;

void AccessConfigBaseLogInfo::validate()
{
}

web::json::value AccessConfigBaseLogInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }

    return val;
}

bool AccessConfigBaseLogInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
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


std::string AccessConfigBaseLogInfo::getLogGroupId() const
{
    return logGroupId_;
}

void AccessConfigBaseLogInfo::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool AccessConfigBaseLogInfo::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void AccessConfigBaseLogInfo::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string AccessConfigBaseLogInfo::getLogStreamId() const
{
    return logStreamId_;
}

void AccessConfigBaseLogInfo::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool AccessConfigBaseLogInfo::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void AccessConfigBaseLogInfo::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

}
}
}
}
}


