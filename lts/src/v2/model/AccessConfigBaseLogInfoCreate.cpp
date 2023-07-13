

#include "huaweicloud/lts/v2/model/AccessConfigBaseLogInfoCreate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigBaseLogInfoCreate::AccessConfigBaseLogInfoCreate()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
}

AccessConfigBaseLogInfoCreate::~AccessConfigBaseLogInfoCreate() = default;

void AccessConfigBaseLogInfoCreate::validate()
{
}

web::json::value AccessConfigBaseLogInfoCreate::toJson() const
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

bool AccessConfigBaseLogInfoCreate::fromJson(const web::json::value& val)
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

std::string AccessConfigBaseLogInfoCreate::getLogGroupId() const
{
    return logGroupId_;
}

void AccessConfigBaseLogInfoCreate::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool AccessConfigBaseLogInfoCreate::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void AccessConfigBaseLogInfoCreate::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string AccessConfigBaseLogInfoCreate::getLogStreamId() const
{
    return logStreamId_;
}

void AccessConfigBaseLogInfoCreate::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool AccessConfigBaseLogInfoCreate::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void AccessConfigBaseLogInfoCreate::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

}
}
}
}
}


