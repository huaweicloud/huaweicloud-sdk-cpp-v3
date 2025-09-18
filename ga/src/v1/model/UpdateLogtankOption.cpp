

#include "huaweicloud/ga/v1/model/UpdateLogtankOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateLogtankOption::UpdateLogtankOption()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
}

UpdateLogtankOption::~UpdateLogtankOption() = default;

void UpdateLogtankOption::validate()
{
}

web::json::value UpdateLogtankOption::toJson() const
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
bool UpdateLogtankOption::fromJson(const web::json::value& val)
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


std::string UpdateLogtankOption::getLogGroupId() const
{
    return logGroupId_;
}

void UpdateLogtankOption::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool UpdateLogtankOption::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void UpdateLogtankOption::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string UpdateLogtankOption::getLogStreamId() const
{
    return logStreamId_;
}

void UpdateLogtankOption::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool UpdateLogtankOption::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void UpdateLogtankOption::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

}
}
}
}
}


