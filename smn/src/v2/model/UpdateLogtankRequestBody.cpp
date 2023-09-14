

#include "huaweicloud/smn/v2/model/UpdateLogtankRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateLogtankRequestBody::UpdateLogtankRequestBody()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
}

UpdateLogtankRequestBody::~UpdateLogtankRequestBody() = default;

void UpdateLogtankRequestBody::validate()
{
}

web::json::value UpdateLogtankRequestBody::toJson() const
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

bool UpdateLogtankRequestBody::fromJson(const web::json::value& val)
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

std::string UpdateLogtankRequestBody::getLogGroupId() const
{
    return logGroupId_;
}

void UpdateLogtankRequestBody::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool UpdateLogtankRequestBody::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void UpdateLogtankRequestBody::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string UpdateLogtankRequestBody::getLogStreamId() const
{
    return logStreamId_;
}

void UpdateLogtankRequestBody::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool UpdateLogtankRequestBody::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void UpdateLogtankRequestBody::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

}
}
}
}
}


