

#include "huaweicloud/smn/v2/model/CreateLogtankRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateLogtankRequestBody::CreateLogtankRequestBody()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
}

CreateLogtankRequestBody::~CreateLogtankRequestBody() = default;

void CreateLogtankRequestBody::validate()
{
}

web::json::value CreateLogtankRequestBody::toJson() const
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
bool CreateLogtankRequestBody::fromJson(const web::json::value& val)
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


std::string CreateLogtankRequestBody::getLogGroupId() const
{
    return logGroupId_;
}

void CreateLogtankRequestBody::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool CreateLogtankRequestBody::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void CreateLogtankRequestBody::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string CreateLogtankRequestBody::getLogStreamId() const
{
    return logStreamId_;
}

void CreateLogtankRequestBody::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool CreateLogtankRequestBody::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void CreateLogtankRequestBody::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

}
}
}
}
}


