

#include "huaweicloud/lts/v2/model/CreateLogStreamResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateLogStreamResponse::CreateLogStreamResponse()
{
    logStreamId_ = "";
    logStreamIdIsSet_ = false;
}

CreateLogStreamResponse::~CreateLogStreamResponse() = default;

void CreateLogStreamResponse::validate()
{
}

web::json::value CreateLogStreamResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logStreamIdIsSet_) {
        val[utility::conversions::to_string_t("log_stream_id")] = ModelBase::toJson(logStreamId_);
    }

    return val;
}
bool CreateLogStreamResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateLogStreamResponse::getLogStreamId() const
{
    return logStreamId_;
}

void CreateLogStreamResponse::setLogStreamId(const std::string& value)
{
    logStreamId_ = value;
    logStreamIdIsSet_ = true;
}

bool CreateLogStreamResponse::logStreamIdIsSet() const
{
    return logStreamIdIsSet_;
}

void CreateLogStreamResponse::unsetlogStreamId()
{
    logStreamIdIsSet_ = false;
}

}
}
}
}
}


